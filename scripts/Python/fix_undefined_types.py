#!/usr/bin/env python3
# Convert undefined parameter/return types to appropriate types
#
# This script decompiles each function to check what the decompiler has inferred.
# If the decompiler has inferred a meaningful type (like float, pointer, etc.),
# that type is committed. If the decompiler also shows undefined, a fallback
# integer type is used based on size.
#
# Usage:
#   python3 fix_undefined_types.py <project_dir> <project_name> <program_name>
#
# Examples:
#   python3 fix_undefined_types.py ./projects NocturneEdit nocedit.exe
#   python3 fix_undefined_types.py ./projects NocturneEdit nocedit.exe --dry-run

import os
import sys
import re
import argparse
from collections import defaultdict

# Add the ghidra_annotations package to path
script_dir = os.path.dirname(os.path.realpath(__file__))
sys.path.insert(0, os.path.join(script_dir, 'ghidra_annotations'))


def is_crt_function(func):
    """Check if a function is a CRT (C runtime) function."""
    name = func.getName().lower()
    return name.startswith('crt_') or '_crt_' in name or name.startswith('crt.')


def is_undefined_type(type_name):
    """Check if a type name represents an undefined type."""
    if not type_name:
        return True
    name = type_name.lower()
    # Match undefined, undefined1, undefined2, undefined4, undefined8, etc.
    return name == 'undefined' or name.startswith('undefined')


def get_fallback_type_name(type_name):
    """Get the fallback type name for an undefined type when decompiler has no inference.

    Maps undefined types to appropriately-sized integer types:
    - undefined -> int (default assumption)
    - undefined1 -> uchar (1 byte)
    - undefined2 -> ushort (2 bytes)
    - undefined4 -> uint (4 bytes)
    - undefined8 -> ulonglong (8 bytes)
    """
    if not type_name:
        return 'int'  # Default to int

    name = type_name.lower()
    if name == 'undefined':
        return 'int'
    elif name == 'undefined1':
        return 'uchar'
    elif name == 'undefined2':
        return 'ushort'
    elif name == 'undefined4':
        return 'uint'
    elif name == 'undefined8':
        return 'ulonglong'
    else:
        # For any other undefined type (e.g., undefined3, undefined5), use int
        return 'int'


def normalize_type_for_lookup(type_str):
    """Normalize a type string from decompiled output for DataType lookup.

    Handles common patterns like:
    - "struct Foo *" -> need to find "Foo" and create pointer
    - "int *" -> need to find "int" and create pointer
    - "float" -> direct lookup
    """
    if not type_str:
        return None, False

    type_str = type_str.strip()

    # Check if it's a pointer
    is_pointer = type_str.endswith('*')
    if is_pointer:
        type_str = type_str[:-1].strip()

    # Remove 'struct' or 'union' prefix
    if type_str.startswith('struct '):
        type_str = type_str[7:].strip()
    elif type_str.startswith('union '):
        type_str = type_str[6:].strip()

    return type_str, is_pointer


def parse_decompiled_signature(decompiled_code):
    """Parse the function signature from decompiled C code.

    Returns:
        Tuple of (return_type, list of param_types) or (None, None) if parsing fails
    """
    if not decompiled_code:
        return None, None

    # Find the first line that looks like a function signature
    # Pattern: return_type function_name(params...)
    # The signature ends with the opening brace
    lines = decompiled_code.split('\n')
    signature_lines = []

    in_signature = False
    for line in lines:
        stripped = line.strip()
        # Skip empty lines and comments at the start
        if not stripped or stripped.startswith('//') or stripped.startswith('/*'):
            continue

        # Start collecting signature
        if not in_signature:
            in_signature = True

        signature_lines.append(stripped)

        # Signature ends when we see the opening brace
        if '{' in stripped:
            break

    if not signature_lines:
        return None, None

    # Join and clean up the signature
    signature = ' '.join(signature_lines)
    # Remove the opening brace and everything after
    if '{' in signature:
        signature = signature[:signature.index('{')]
    signature = signature.strip()

    # Parse: return_type func_name(param1, param2, ...)
    # Handle complex return types like "struct Foo *"
    match = re.match(r'^(.+?)\s+(\w+)\s*\((.*)\)\s*$', signature)
    if not match:
        return None, None

    return_type = match.group(1).strip()
    params_str = match.group(3).strip()

    # Parse parameters
    param_types = []
    if params_str and params_str != 'void':
        # Split by comma, but be careful of nested templates/parens
        params = []
        depth = 0
        current = []
        for char in params_str:
            if char in '(<':
                depth += 1
            elif char in ')>':
                depth -= 1
            elif char == ',' and depth == 0:
                params.append(''.join(current).strip())
                current = []
                continue
            current.append(char)
        if current:
            params.append(''.join(current).strip())

        for param in params:
            # Extract just the type (everything before the last word which is the name)
            # Handle: "int foo", "int *foo", "struct Bar *baz"
            param = param.strip()
            if not param:
                continue
            # Find the parameter name (last identifier)
            # Remove array brackets if present: "int arr[]" -> "int arr"
            param = re.sub(r'\[\d*\]$', '', param)
            parts = param.rsplit(None, 1)
            if len(parts) >= 1:
                param_type = parts[0] if len(parts) > 1 else param
                # If the "type" ends with *, the name might be attached
                if param_type.endswith('*'):
                    param_types.append(param_type)
                elif len(parts) > 1:
                    param_types.append(param_type)
                else:
                    param_types.append(param)

    return return_type, param_types


def get_decompiler_interface(currentProgram):
    """Create and initialize a decompiler interface."""
    from ghidra.app.decompiler import DecompInterface
    iface = DecompInterface()
    iface.openProgram(currentProgram)
    return iface


def get_decompiled_types(iface, func, timeout=30, debug=False):
    """Get the decompiler's inferred types for a function.

    Returns:
        Tuple of (return_type, list of param_types) or (None, None) if decompilation fails
    """
    from ghidra.util.task import ConsoleTaskMonitor

    result = iface.decompileFunction(func, timeout, ConsoleTaskMonitor())
    if not result.decompileCompleted():
        return None, None

    # Try to get types directly from HighFunction (more reliable)
    high_func = result.getHighFunction()
    if high_func:
        proto = high_func.getFunctionPrototype()
        if proto:
            # Get return type
            ret_type = proto.getReturnType()
            ret_type_name = ret_type.getDisplayName() if ret_type else None

            # Get parameter types
            param_types = []
            num_params = proto.getNumParams()
            for i in range(num_params):
                param = proto.getParam(i)
                if param:
                    param_dt = param.getDataType()
                    param_types.append(param_dt.getDisplayName() if param_dt else None)

            if debug:
                print("    [HighFunction API] return=%s, params=%s" % (ret_type_name, param_types))

            return ret_type_name, param_types

    # Fall back to parsing decompiled C code
    decompiled = result.getDecompiledFunction()
    if not decompiled:
        return None, None

    code = decompiled.getC()
    if not code:
        return None, None

    ret, params = parse_decompiled_signature(code)
    if debug:
        print("    [Parsed from C code] return=%s, params=%s" % (ret, params))
    return ret, params


def get_decompiled_signature_raw(iface, func, timeout=30):
    """Get the raw first lines of decompiled code for debugging."""
    from ghidra.util.task import ConsoleTaskMonitor

    result = iface.decompileFunction(func, timeout, ConsoleTaskMonitor())
    if not result.decompileCompleted():
        return None

    decompiled = result.getDecompiledFunction()
    if not decompiled:
        return None

    code = decompiled.getC()
    if not code:
        return None

    # Return first few lines
    lines = code.split('\n')[:5]
    return '\n'.join(lines)


def fix_undefined_types(program, dry_run=False, include_crt=False, list_all=False, debug=False):
    """Convert undefined parameter/return types to integer types.

    Only fixes types that the decompiler ALSO thinks are undefined.
    If the decompiler has inferred a meaningful type, that inference is preserved.

    Args:
        program: Ghidra program object
        dry_run: If True, don't actually make changes
        include_crt: If True, also fix CRT functions (default: False)
        list_all: If True, print each change as it's found
        debug: If True, print debug info for type resolution failures

    Returns:
        Dict with statistics
    """
    from ghidra.program.model.symbol import SourceType

    fm = program.getFunctionManager()
    dtm = program.getDataTypeManager()

    # Cache resolved types
    type_cache = {}
    all_types_by_name = None

    # Also build a case-insensitive index
    all_types_by_name_lower = None

    def build_type_index():
        """Build an index of all types by name for faster lookup."""
        nonlocal all_types_by_name, all_types_by_name_lower
        if all_types_by_name is None:
            all_types_by_name = {}
            all_types_by_name_lower = {}
            for dt in dtm.getAllDataTypes():
                name = dt.getName()
                # Store by simple name (may overwrite, but that's ok for most cases)
                if name not in all_types_by_name:
                    all_types_by_name[name] = dt
                # Also store lowercase for case-insensitive lookup
                name_lower = name.lower()
                if name_lower not in all_types_by_name_lower:
                    all_types_by_name_lower[name_lower] = dt
                # Also store by full path for exact matches
                path = dt.getPathName()
                if path and path not in all_types_by_name:
                    all_types_by_name[path] = dt

    def get_data_type(type_name):
        """Resolve a type name to a DataType object."""
        if type_name in type_cache:
            return type_cache[type_name]

        build_type_index()

        # Try exact match first
        dt = all_types_by_name.get(type_name)

        # Try case-insensitive match
        if not dt:
            dt = all_types_by_name_lower.get(type_name.lower())

        # If not found and it looks like a pointer type indicator got left in, strip it
        if not dt and type_name.endswith(' *'):
            stripped = type_name[:-2].strip()
            dt = all_types_by_name.get(stripped) or all_types_by_name_lower.get(stripped.lower())

        # Try without leading slash (category path)
        if not dt and type_name.startswith('/'):
            stripped = type_name[1:]
            dt = all_types_by_name.get(stripped) or all_types_by_name_lower.get(stripped.lower())

        type_cache[type_name] = dt
        return dt

    def resolve_decompiler_type(type_str, debug=False):
        """Resolve a type string from decompiler output to a DataType.

        Returns (DataType, type_str_for_display) or (None, None) if resolution fails.
        """
        if not type_str or is_undefined_type(type_str):
            return None, None

        base_name, is_pointer = normalize_type_for_lookup(type_str)
        if not base_name:
            if debug:
                print("    DEBUG: normalize_type_for_lookup returned None for '%s'" % type_str)
            return None, None

        # Try to find the base type
        base_type = get_data_type(base_name)
        if not base_type:
            if debug:
                print("    DEBUG: Could not find base type '%s' (from '%s')" % (base_name, type_str))
            return None, None

        if is_pointer:
            # Create a pointer type
            from ghidra.program.model.data import PointerDataType
            ptr_type = PointerDataType(base_type)
            return ptr_type, type_str
        else:
            return base_type, type_str

    stats = {
        'total_functions': 0,
        'functions_modified': 0,
        'return_types_fixed': 0,
        'return_types_from_decompiler': 0,
        'params_fixed': 0,
        'params_from_decompiler': 0,
        'skipped_crt': 0,
        'decompile_failures': 0,
        'errors': 0,
        'already_defined': defaultdict(int),
        'modified_functions': [],
    }

    # Collect all functions first
    print("Collecting functions...")
    all_functions = list(fm.getFunctions(True))
    total = len(all_functions)
    print("Scanning %d functions..." % total)

    # Initialize decompiler
    print("Initializing decompiler...")
    iface = get_decompiler_interface(program)

    if list_all:
        print("\n" + "=" * 60)
        print("CHANGES TO BE MADE")
        print("=" * 60)

    # First pass: identify functions that need fixing
    functions_to_fix = []

    for i, func in enumerate(all_functions):
        if i % 500 == 0 and i > 0:
            print("  Scanning: %d/%d" % (i, total))

        stats['total_functions'] += 1

        # Skip CRT functions unless explicitly included
        if not include_crt and is_crt_function(func):
            stats['skipped_crt'] += 1
            continue

        func_name = func.getName()
        func_addr = str(func.getEntryPoint())

        # Check committed return type
        return_type = func.getReturnType()
        return_type_name = return_type.getName() if return_type else None
        committed_return_undefined = is_undefined_type(return_type_name)

        # Check committed parameters
        committed_params_undefined = []
        for idx, param in enumerate(func.getParameters()):
            param_type = param.getDataType()
            param_type_name = param_type.getName() if param_type else None
            if is_undefined_type(param_type_name):
                committed_params_undefined.append({
                    'index': idx,
                    'name': param.getName(),
                    'old_type': param_type_name or 'None',
                })

        # If nothing is undefined in committed signature, skip
        if not committed_return_undefined and not committed_params_undefined:
            stats['already_defined']['fully_defined'] += 1
            continue

        # Now check what the decompiler thinks
        decomp_return, decomp_params = get_decompiled_types(iface, func, debug=debug)

        if decomp_return is None:
            stats['decompile_failures'] += 1
            continue

        # Determine return type fix
        return_fix_info = None
        if committed_return_undefined:
            if is_undefined_type(decomp_return):
                # Decompiler also thinks it's undefined, use fallback
                if debug:
                    raw_sig = get_decompiled_signature_raw(iface, func)
                    print("  DEBUG %s: decompiler also shows undefined" % func_name)
                    print("    Raw signature:\n%s" % raw_sig)
                return_fix_info = {
                    'new_type': get_fallback_type_name(return_type_name),
                    'from_decompiler': False,
                }
            else:
                # Decompiler has inferred a type, try to use it
                if debug:
                    print("  DEBUG %s: decompiler return = '%s'" % (func_name, decomp_return))
                resolved_type, type_str = resolve_decompiler_type(decomp_return, debug=debug)
                if resolved_type:
                    return_fix_info = {
                        'new_type': type_str,
                        'resolved_type': resolved_type,
                        'from_decompiler': True,
                    }
                else:
                    # Couldn't resolve decompiler's type, use fallback
                    if debug:
                        raw_sig = get_decompiled_signature_raw(iface, func)
                        print("    DEBUG: Falling back to '%s'" % get_fallback_type_name(return_type_name))
                        print("    Raw signature:\n%s" % raw_sig)
                    return_fix_info = {
                        'new_type': get_fallback_type_name(return_type_name),
                        'from_decompiler': False,
                    }

        # Determine parameter fixes
        params_to_fix = []
        for param_info in committed_params_undefined:
            idx = param_info['index']
            decomp_param_type = None
            if decomp_params and idx < len(decomp_params):
                decomp_param_type = decomp_params[idx]

            if decomp_param_type and not is_undefined_type(decomp_param_type):
                # Decompiler has inferred a type, try to use it
                if debug:
                    print("  DEBUG %s param %s: decompiler type = '%s'" % (func_name, param_info['name'], decomp_param_type))
                resolved_type, type_str = resolve_decompiler_type(decomp_param_type, debug=debug)
                if resolved_type:
                    params_to_fix.append({
                        'index': idx,
                        'name': param_info['name'],
                        'old_type': param_info['old_type'],
                        'new_type': type_str,
                        'resolved_type': resolved_type,
                        'from_decompiler': True,
                    })
                else:
                    # Couldn't resolve, use fallback
                    params_to_fix.append({
                        'index': idx,
                        'name': param_info['name'],
                        'old_type': param_info['old_type'],
                        'new_type': get_fallback_type_name(param_info['old_type']),
                        'from_decompiler': False,
                    })
            else:
                # Decompiler also thinks undefined, use fallback
                params_to_fix.append({
                    'index': idx,
                    'name': param_info['name'],
                    'old_type': param_info['old_type'],
                    'new_type': get_fallback_type_name(param_info['old_type']),
                    'from_decompiler': False,
                })

        if return_fix_info or params_to_fix:
            fix_info = {
                'func': func,
                'name': func_name,
                'address': func_addr,
                'return_fix': return_fix_info,
                'old_return_type': return_type_name or 'None',
                'params_to_fix': params_to_fix,
                'decomp_return': decomp_return,
                'decomp_params': decomp_params,
            }
            functions_to_fix.append(fix_info)

            # Print immediately if listing
            if list_all:
                print("\n%s (%s)" % (func_name, func_addr))
                if return_fix_info:
                    suffix = " [decompiler]" if return_fix_info.get('from_decompiler') else ""
                    print("  Return: %s -> %s%s" % (return_type_name or 'None', return_fix_info['new_type'], suffix))
                for p in params_to_fix:
                    suffix = " [decompiler]" if p.get('from_decompiler') else ""
                    print("  Param %s: %s -> %s%s" % (p['name'], p['old_type'], p['new_type'], suffix))

    iface.dispose()
    print("Functions needing fixes (confirmed by decompiler): %d" % len(functions_to_fix))

    if dry_run:
        # In dry run, just record what would be changed
        for f_info in functions_to_fix:
            stats['functions_modified'] += 1
            return_fix = f_info.get('return_fix')
            if return_fix:
                stats['return_types_fixed'] += 1
                if return_fix.get('from_decompiler'):
                    stats['return_types_from_decompiler'] += 1
            for p in f_info['params_to_fix']:
                stats['params_fixed'] += 1
                if p.get('from_decompiler'):
                    stats['params_from_decompiler'] += 1
            stats['modified_functions'].append({
                'name': f_info['name'],
                'address': f_info['address'],
                'return_change': '%s -> %s%s' % (
                    f_info['old_return_type'],
                    return_fix['new_type'],
                    ' [decompiler]' if return_fix.get('from_decompiler') else ''
                ) if return_fix else None,
                'param_changes': ['%s: %s -> %s%s' % (
                    p['name'], p['old_type'], p['new_type'],
                    ' [decompiler]' if p.get('from_decompiler') else ''
                ) for p in f_info['params_to_fix']],
            })
    else:
        # Actually fix the functions
        print("Starting fixes...")
        transaction_id = program.startTransaction("Fix undefined types")
        try:
            for i, f_info in enumerate(functions_to_fix):
                if i % 500 == 0 and i > 0:
                    print("  Progress: %d/%d" % (i, len(functions_to_fix)))

                func = f_info['func']
                try:
                    changes_made = False
                    return_fix = f_info.get('return_fix')

                    # Fix return type
                    if return_fix:
                        # Use pre-resolved type if available, otherwise look it up
                        new_type = return_fix.get('resolved_type') or get_data_type(return_fix['new_type'])
                        if new_type:
                            func.setReturnType(new_type, SourceType.USER_DEFINED)
                            stats['return_types_fixed'] += 1
                            if return_fix.get('from_decompiler'):
                                stats['return_types_from_decompiler'] += 1
                            changes_made = True
                        else:
                            print("  Warning: Could not find type '%s'" % return_fix['new_type'])

                    # Fix parameters
                    for p_info in f_info['params_to_fix']:
                        # Use pre-resolved type if available, otherwise look it up
                        new_type = p_info.get('resolved_type') or get_data_type(p_info['new_type'])
                        if new_type:
                            param = func.getParameter(p_info['index'])
                            if param:
                                param.setDataType(new_type, SourceType.USER_DEFINED)
                                stats['params_fixed'] += 1
                                if p_info.get('from_decompiler'):
                                    stats['params_from_decompiler'] += 1
                                changes_made = True
                        else:
                            print("  Warning: Could not find type '%s'" % p_info['new_type'])

                    if changes_made:
                        stats['functions_modified'] += 1
                        stats['modified_functions'].append({
                            'name': f_info['name'],
                            'address': f_info['address'],
                            'return_change': '%s -> %s%s' % (
                                f_info['old_return_type'],
                                return_fix['new_type'],
                                ' [decompiler]' if return_fix.get('from_decompiler') else ''
                            ) if return_fix else None,
                            'param_changes': ['%s: %s -> %s%s' % (
                                p['name'], p['old_type'], p['new_type'],
                                ' [decompiler]' if p.get('from_decompiler') else ''
                            ) for p in f_info['params_to_fix']],
                        })

                except Exception as e:
                    print("  Error fixing %s: %s" % (f_info['name'], str(e)))
                    stats['errors'] += 1
        finally:
            program.endTransaction(transaction_id, True)
            print("Transaction committed")

    return stats


def main():
    """Entry point for PyGhidra headless execution."""
    parser = argparse.ArgumentParser(
        description="Convert undefined parameter/return types to integer types",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  # Fix all undefined types (excludes CRT functions)
  %(prog)s ./projects NocturneEdit nocedit.exe

  # Dry run - show what would be changed without making changes
  %(prog)s ./projects NocturneEdit nocedit.exe --dry-run

  # List all changes that would be made
  %(prog)s ./projects NocturneEdit nocedit.exe --list

  # Include CRT functions in fixes
  %(prog)s ./projects NocturneEdit nocedit.exe --include-crt

Type mappings:
  undefined  -> int (default)
  undefined1 -> uchar (1 byte)
  undefined2 -> ushort (2 bytes)
  undefined4 -> uint (4 bytes)
  undefined8 -> ulonglong (8 bytes)

Behavior:
  This script decompiles each function to check the decompiler's inference.
  - If the decompiler has inferred a meaningful type (float, pointer, etc.),
    that type is used and committed to the function signature.
  - If the decompiler also shows undefined, the fallback mapping is used.
  - Types from decompiler inference are marked with [decompiler] in output.
"""
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--dry-run", "-n", action="store_true",
                        help="Show what would be changed without making changes")
    parser.add_argument("--list", "-l", action="store_true",
                        help="List all changes (implies --dry-run)")
    parser.add_argument("--include-crt", action="store_true",
                        help="Include CRT (C runtime) functions (excluded by default)")
    parser.add_argument("--debug", "-d", action="store_true",
                        help="Show debug information for type resolution failures")
    args = parser.parse_args()

    # --list implies --dry-run
    if args.list:
        args.dry_run = True

    # Import pyghidra
    try:
        import pyghidra
    except ImportError:
        print("ERROR: pyghidra is not installed.")
        print("Install the PyGhidra package from your Ghidra installation.")
        sys.exit(1)

    # Start PyGhidra
    print("Starting PyGhidra...")
    pyghidra.start()

    # Convert to absolute path
    project_path = os.path.abspath(args.project_path)

    # Open the project and program
    print("Opening project: %s/%s" % (project_path, args.project_name))
    print("Opening program: %s" % args.program_name)
    if args.dry_run:
        print("DRY RUN MODE - no changes will be made")
    print("=" * 60)

    exit_code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as currentProgram:
            stats = fix_undefined_types(
                currentProgram,
                dry_run=args.dry_run,
                include_crt=args.include_crt,
                list_all=args.list,
                debug=args.debug
            )

            # Print results
            print("\n" + "=" * 60)
            print("RESULTS")
            print("=" * 60)
            print("Total functions: %d" % stats['total_functions'])
            print("Functions modified: %d" % stats['functions_modified'])
            print("Return types fixed: %d (%d from decompiler inference)" % (
                stats['return_types_fixed'], stats['return_types_from_decompiler']))
            print("Parameters fixed: %d (%d from decompiler inference)" % (
                stats['params_fixed'], stats['params_from_decompiler']))
            if stats['skipped_crt'] > 0:
                print("CRT functions skipped: %d" % stats['skipped_crt'])
            if stats['decompile_failures'] > 0:
                print("Decompilation failures: %d" % stats['decompile_failures'])
            if stats['errors'] > 0:
                print("Errors: %d" % stats['errors'])

            if args.dry_run:
                print("\n(Dry run - no changes were made)")
            else:
                # Save the program
                currentProgram.save("Fixed undefined types", None)
                print("\nChanges have been saved to the program.")

            # Show some examples of modified functions (unless --list was used)
            if stats['modified_functions'] and not args.list:
                print("\nExamples of modified functions:")
                for f in stats['modified_functions'][:15]:
                    print("  %s (%s)" % (f['name'], f['address']))
                    if f.get('return_change'):
                        print("    Return: %s" % f['return_change'])
                    for pc in f.get('param_changes', []):
                        print("    Param: %s" % pc)
                if len(stats['modified_functions']) > 15:
                    print("  ... and %d more" % (len(stats['modified_functions']) - 15))

        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1

    # Force exit - JVM shutdown can hang
    os._exit(exit_code)


if __name__ == "__main__":
    main()

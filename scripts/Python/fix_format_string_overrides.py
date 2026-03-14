#!/usr/bin/env python3
"""
fix_format_string_overrides.py

Applies call-site signature overrides for variadic format string functions
(sprintf, fprintf, printf, displayErrorAndQuit, CConsole_printf, etc.)
by parsing the format string at each call site and generating concrete
parameter lists.

This helps Ghidra's decompiler produce cleaner output by knowing the exact
types of the variadic arguments.

Usage:
    # Dry run - list call sites and what overrides would be applied
    python3 -u fix_format_string_overrides.py <project_dir> <project_name> <program_name>

    # Apply - write overrides to the database
    python3 -u fix_format_string_overrides.py <project_dir> <project_name> <program_name> --apply

    # Filter to specific caller function
    python3 -u fix_format_string_overrides.py <project_dir> <project_name> <program_name> --func=playMovie

    # Limit number of call sites processed
    python3 -u fix_format_string_overrides.py <project_dir> <project_name> <program_name> --limit=20

Examples:
    python3 -u fix_format_string_overrides.py ./projects NocturneEdit nocedit.exe
    python3 -u fix_format_string_overrides.py ./projects NocturneEdit nocedit.exe --apply
"""

import os
import sys
import re
import argparse


# ============================================================================
# Format string function definitions
# Key: function address (hex string)
# Value: (display_name, format_param_index)
#   format_param_index is the 0-based index of the format string parameter
# ============================================================================

FORMAT_FUNCTIONS = {
    # CRT stdio
    "005fdbd0": ("_sprintf", 1),       # int _sprintf(char *buffer, char *format, ...)
    "005fe6d0": ("_fprintf", 1),       # int _fprintf(_FILE *file, char *format, ...)
    "006021c0": ("_fprintf2", 1),      # void _fprintf(_FILE *stream, char *format, ...)
    "005ff0d0": ("printf", 0),         # int printf(char *format, ...)
    # NOTE: fscanf (005fe7c0) and sscanf (0060013c) use scanf-style specifiers
    # which map to pointer types - handled separately if needed.

    # Core / engine
    "00506f10": ("displayErrorAndQuit", 0),   # void displayErrorAndQuit(char *format, ...)
    "00441890": ("CConsole_printf", 1),       # void CConsole_printf(CConsole *this, char *format, ...)
    "004aa2a0": ("formatEventError", 0),      # int formatEventError(char *format, ...)
    "0050f180": ("traceFile", 0),             # void traceFile(char *format, ...)
    "0050f150": ("traceMemory", 0),           # void traceMemory(char *format, ...)
    "005c7910": ("logToFile", 0),             # void logToFile(char *format, ...)
    "005adba0": ("logSoundError", 0),         # void logSoundError(char *format, ...)

    # CBitFont
    "004cdd20": ("CBitFont_printF", 5),       # void CBitFont_printF(this, x, y, color_mode, color_value, char *format, ...)
    "004ce050": ("CBitFont_printCenterF", 4), # void CBitFont_printCenterF(this, y, color_mode, color_value, char *format, ...)

    # CDrawSurface printf variants
    "004895f0": ("CDrawSurface_drawTextCenteredPrintf", 3),                    # (this, x, y, format, ...)
    "00489790": ("CDrawSurface_drawTextCenteredBothPrintf", 3),                # (this, x, y, format, ...)
    "004896c0": ("CDrawSurface_drawTextRightAlignedVCenteredPrintf", 3),       # (this, x, y, format, ...)
    "00489450": ("CDrawSurface_drawTextRightAlignedPrintf", 3),                # (this, x, y, format, ...)
    "00489520": ("CDrawSurface_drawTextRightAlignedVariantPrintf", 3),         # (this, x, y, format, ...)
    "00489860": ("CDrawSurface_drawTextCenteredInBoundsPrintf", 4),            # (this, x, y, width, format, ...)
    "00489940": ("CDrawSurface_drawTextCenteredInAreaPrintf", 4),              # (this, x, y, height, format, ...)
    "00489a30": ("CDrawSurface_drawTextCenteredInAreaWithWidthPrintf", 5),     # (this, x, width, y, height, format, ...)
    "00489af0": ("CDrawSurface_drawTextCenteredFullWidthPrintf", 2),           # (this, y, format, ...)
    "00489bb0": ("CDrawSurface_drawTextCenteredFullHeightPrintf", 2),          # (this, x, format, ...)
    "00489c40": ("CDrawSurface_drawTextCenteredFullSurfacePrintf", 1),         # (this, format, ...)

    # CEditorTools
    "0049e6a0": ("CEditorTools_showMessage", 1),                # (this, format, ...)
    "0049e6f0": ("CEditorTools_showWarning", 1),                # (this, format, ...)
    "0049e740": ("CEditorTools_showError", 1),                  # (this, format, ...)
    "0049e790": ("CEditorTools_displayCenteredStatusMessage", 1),  # (this, format, ...)
    "0049f180": ("CEditorTools_showConfirmationDialog", 1),     # (this, format, ...)
}


# ============================================================================
# Format string parser
# ============================================================================

# Matches printf format specifiers like %d, %s, %x, %08x, %ld, %f, %g, etc.
FORMAT_SPEC_RE = re.compile(
    r'%'
    r'[-+ #0]*'        # flags
    r'(?:\*|\d+)?'     # width (or * for dynamic width)
    r'(?:\.(?:\*|\d+))?'  # precision
    r'([hlL]?[hlL]?)'  # length modifier
    r'([diouxXeEfgGcspn%])'  # conversion
)


def parse_format_string(fmt):
    """Parse a printf format string and return a list of (type_name, param_name) tuples
    for each variadic argument expected.

    Returns None if we can't parse it (e.g. unknown specifier).
    """
    params = []
    arg_idx = 0

    for match in FORMAT_SPEC_RE.finditer(fmt):
        length_mod = match.group(1)
        conversion = match.group(2)

        if conversion == '%':
            # Literal %%, no argument consumed
            continue

        if conversion == '*':
            # Dynamic width/precision - consumes an int arg
            params.append(("int", "width_%d" % arg_idx))
            arg_idx += 1
            continue

        if conversion in ('d', 'i'):
            if length_mod in ('l', 'll'):
                type_name = "long"
            else:
                type_name = "int"
        elif conversion in ('o', 'u', 'x', 'X'):
            if length_mod in ('l', 'll'):
                type_name = "ulong"
            else:
                type_name = "uint"
        elif conversion in ('e', 'E', 'f', 'g', 'G'):
            # On 32-bit x86 cdecl, float is promoted to double for varargs
            type_name = "double"
        elif conversion == 'c':
            # char is promoted to int for varargs
            type_name = "int"
        elif conversion == 's':
            type_name = "char *"
        elif conversion == 'p':
            type_name = "void *"
        elif conversion == 'n':
            type_name = "int *"
        else:
            return None  # Unknown specifier

        params.append((type_name, "arg_%d" % arg_idx))
        arg_idx += 1

    return params


# ============================================================================
# String resolution from Ghidra memory
# ============================================================================

def read_string_at(program, addr):
    """Read a null-terminated string from the program at the given address."""
    memory = program.getMemory()
    result = []
    try:
        for i in range(4096):  # safety limit
            b = memory.getByte(addr.add(i))
            if b == 0:
                break
            result.append(chr(b & 0xff))
    except Exception:
        return None
    if not result:
        return None
    return ''.join(result)


def resolve_format_string_at_callsite(program, ifc, caller_func, call_addr, format_param_idx):
    """Try to resolve the format string argument at a call site.

    Looks at the PUSH instructions before the CALL to find the format string
    pointer, then reads the string from memory.

    Returns the format string or None if it can't be resolved.
    """
    listing = program.getListing()
    addr_factory = program.getAddressFactory()

    # Walk backwards from the call to find the PUSH instructions
    # For __cdecl, args are pushed right-to-left, so the last push before
    # CALL is the first argument.
    # We need to find the (format_param_idx)th argument from the last push.

    # Count how many args we need to skip (pushed after the format string)
    # Since args are pushed right-to-left, the format string at index N
    # means there are N pushes after it (closer to the CALL).

    instr = listing.getInstructionAt(call_addr)
    if instr is None:
        return None

    # Walk backwards collecting PUSH instructions
    pushes = []
    current = instr.getPrevious()
    # Collect enough pushes, but stop at labels/branches/calls
    max_scan = 20
    while current is not None and max_scan > 0:
        mnemonic = current.getMnemonicString()

        if mnemonic.startswith("CALL"):
            break
        if mnemonic.startswith("RET"):
            break

        if mnemonic == "PUSH":
            pushes.append(current)

        # Also handle cases where args are MOV'd to [ESP+...] instead of PUSH
        # but for now just handle PUSH

        current = current.getPrevious()
        max_scan -= 1

    # pushes[0] is the last push before CALL (= first cdecl arg)
    # pushes[format_param_idx] is the format string push
    if format_param_idx >= len(pushes):
        return None

    format_push = pushes[format_param_idx]

    # Get the operand - should be an immediate address pointing to the string
    num_operands = format_push.getNumOperands()
    if num_operands < 1:
        return None

    # Try to get the scalar operand (immediate value = address of string)
    refs = format_push.getOperandReferences(0)
    if refs:
        # Use the reference target
        target_addr = refs[0].getToAddress()
        return read_string_at(program, target_addr)

    # Try scalar value
    scalar = format_push.getScalar(0)
    if scalar is not None:
        val = scalar.getUnsignedValue()
        target_addr = addr_factory.getDefaultAddressSpace().getAddress(val)
        return read_string_at(program, target_addr)

    return None


# ============================================================================
# Main logic
# ============================================================================

def find_format_call_sites(program):
    """Find all call sites to format string functions.

    Returns a list of (caller_func, call_addr, target_addr_str, format_func_info) tuples.
    """
    from ghidra.program.model.symbol import RefType

    ref_mgr = program.getReferenceManager()
    fm = program.getFunctionManager()
    addr_factory = program.getAddressFactory()
    results = []

    for addr_str, (display_name, fmt_idx) in FORMAT_FUNCTIONS.items():
        target_addr = addr_factory.getDefaultAddressSpace().getAddress(int(addr_str, 16))
        target_func = fm.getFunctionAt(target_addr)
        if target_func is None:
            print("  WARNING: Format function %s not found at %s" % (display_name, addr_str))
            continue

        # Get all references TO this function
        refs = ref_mgr.getReferencesTo(target_addr)
        for ref in refs:
            if not ref.getReferenceType().isCall():
                continue

            call_addr = ref.getFromAddress()
            caller_func = fm.getFunctionContaining(call_addr)
            if caller_func is None:
                continue

            results.append((caller_func, call_addr, addr_str, (display_name, fmt_idx)))

    return results


def process_call_sites(program, call_sites, apply=False, func_filter=None, limit=None):
    """Process format string call sites and optionally apply overrides."""
    from ghidra.program.model.pcode import HighFunctionDBUtil
    from ghidra.program.model.data import (
        FunctionDefinitionDataType, ParameterDefinitionImpl
    )

    fm = program.getFunctionManager()
    dtm = program.getDataTypeManager()
    addr_factory = program.getAddressFactory()

    # Type resolution cache
    type_cache = {}

    def get_type(type_name):
        if type_name in type_cache:
            return type_cache[type_name]

        # Search for the type
        dt = None

        # Handle pointer types
        if type_name.endswith(' *'):
            base_name = type_name[:-2].strip()
            base_dt = get_type(base_name)
            if base_dt:
                from ghidra.program.model.data import PointerDataType
                dt = PointerDataType(base_dt)
        else:
            # Search in data type manager
            results = []
            dtm.findDataTypes(type_name, results)
            if results:
                # Prefer built-in types
                for r in results:
                    path = r.getPathName()
                    if '/BuiltInTypes/' in path or path.startswith('/' + type_name):
                        dt = r
                        break
                if dt is None:
                    dt = results[0]

        type_cache[type_name] = dt
        return dt

    # Get the target function objects for building overrides
    target_funcs = {}
    for addr_str, (display_name, fmt_idx) in FORMAT_FUNCTIONS.items():
        target_addr = addr_factory.getDefaultAddressSpace().getAddress(int(addr_str, 16))
        func = fm.getFunctionAt(target_addr)
        if func:
            target_funcs[addr_str] = func

    resolved = 0
    unresolved = 0
    applied = 0
    skipped_existing = 0
    errors = 0

    count = 0

    for caller_func, call_addr, target_addr_str, (display_name, fmt_idx) in call_sites:
        caller_name = caller_func.getName()

        if func_filter and func_filter.lower() not in caller_name.lower():
            continue

        if limit is not None and count >= limit:
            break
        count += 1

        # Try to resolve the format string
        fmt_str = resolve_format_string_at_callsite(
            program, None, caller_func, call_addr, fmt_idx)

        if fmt_str is None:
            unresolved += 1
            print("  SKIP %s @ %s -> %s: could not resolve format string" % (
                caller_name, call_addr, display_name))
            continue

        # Parse the format string
        varargs = parse_format_string(fmt_str)
        if varargs is None:
            unresolved += 1
            print("  SKIP %s @ %s -> %s: could not parse format: %r" % (
                caller_name, call_addr, display_name, fmt_str))
            continue

        # Get the target function's fixed params
        target_func = target_funcs.get(target_addr_str)
        if target_func is None:
            errors += 1
            continue

        fixed_params = target_func.getParameters()

        # Build the concrete parameter list
        param_strs = []
        for p in fixed_params:
            param_strs.append("%s %s" % (p.getDataType().getDisplayName(), p.getName()))
        for type_name, name in varargs:
            param_strs.append("%s %s" % (type_name, name))

        ret_type = target_func.getReturnType()
        sig = "%s %s(%s)" % (ret_type.getDisplayName(), display_name, ", ".join(param_strs))

        resolved += 1
        fmt_display = fmt_str.replace('\n', '\\n')
        if len(fmt_display) > 60:
            fmt_display = fmt_display[:57] + "..."
        print("  %s @ %s -> %s" % (caller_name, call_addr, display_name))
        print("    format: %r" % fmt_display)
        print("    override: %s" % sig)

        if apply:
            # Check if there's already an override at this call site
            has_existing = False
            for local_var in caller_func.getLocalVariables():
                dt = local_var.getDataType()
                class_name = dt.__class__.__name__.rsplit('.', 1)[-1]
                if class_name in ('FunctionDefinitionDataType', 'FunctionDefinitionDB',
                                  'FunctionDefinition', 'FunctionDefDataType'):
                    first_use = local_var.getFirstUseOffset()
                    override_addr = caller_func.getEntryPoint().add(first_use)
                    if override_addr.equals(call_addr):
                        has_existing = True
                        break

            if has_existing:
                skipped_existing += 1
                print("    -> SKIPPED (existing override)")
                continue

            # Build the FunctionDefinitionDataType
            try:
                func_def = FunctionDefinitionDataType("fmt_override_%s" % str(call_addr))
                func_def.setReturnType(ret_type)

                param_defs = []
                # Add fixed params
                for p in fixed_params:
                    param_defs.append(
                        ParameterDefinitionImpl(p.getName(), p.getDataType(), None))
                # Add variadic params
                for type_name, name in varargs:
                    param_type = get_type(type_name)
                    if param_type is None:
                        print("    -> ERROR: could not resolve type %r" % type_name)
                        break
                    param_defs.append(ParameterDefinitionImpl(name, param_type, None))
                else:
                    func_def.setArguments(param_defs)

                    # Apply the override
                    HighFunctionDBUtil.writeOverride(caller_func, call_addr, func_def)
                    applied += 1
                    print("    -> APPLIED")
            except Exception as e:
                errors += 1
                print("    -> ERROR: %s" % str(e))

    print("\n" + "=" * 70)
    print("RESULTS")
    print("=" * 70)
    print("  Call sites found:      %d" % len(call_sites))
    print("  Format resolved:       %d" % resolved)
    print("  Could not resolve:     %d" % unresolved)
    if apply:
        print("  Overrides applied:     %d" % applied)
        print("  Skipped (existing):    %d" % skipped_existing)
        print("  Errors:                %d" % errors)
    else:
        print("\n(Dry run - no changes made. Use --apply to write overrides.)")


def main():
    parser = argparse.ArgumentParser(
        description="Apply format string call-site overrides",
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--apply", action="store_true",
                        help="Apply overrides (default is dry-run)")
    parser.add_argument("--func", type=str, default=None,
                        help="Only process callers whose name contains this substring")
    parser.add_argument("--limit", type=int, default=None,
                        help="Max call sites to process")

    args = parser.parse_args()

    try:
        import pyghidra
    except ImportError:
        print("ERROR: pyghidra is not installed.")
        sys.exit(1)

    print("Starting PyGhidra...")
    pyghidra.start()

    project_path = os.path.abspath(args.project_path)
    print("Opening project: %s/%s" % (project_path, args.project_name))
    print("Opening program: %s" % args.program_name)

    if args.apply:
        print("APPLY MODE - overrides will be saved to database")
    else:
        print("DRY RUN MODE - scanning only, no changes")
    print("=" * 70)

    exit_code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as prog:

            print("Finding format string call sites...")
            call_sites = find_format_call_sites(prog)
            print("Found %d call sites to format functions\n" % len(call_sites))

            if args.apply:
                tx_id = prog.startTransaction("Apply format string overrides")
                try:
                    process_call_sites(
                        prog, call_sites,
                        apply=True,
                        func_filter=args.func,
                        limit=args.limit,
                    )
                    prog.endTransaction(tx_id, True)
                except Exception:
                    prog.endTransaction(tx_id, False)
                    raise
            else:
                process_call_sites(
                    prog, call_sites,
                    apply=False,
                    func_filter=args.func,
                    limit=args.limit,
                )

            if args.apply:
                prog.save("Applied format string call-site overrides", None)
                print("\nChanges saved to program database.")

        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1

    os._exit(exit_code)


if __name__ == "__main__":
    main()

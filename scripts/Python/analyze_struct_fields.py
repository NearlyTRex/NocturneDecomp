#!/usr/bin/env python3
"""
Analyze struct field usage patterns to detect type mismatches.

This script analyzes how struct fields are actually accessed in the binary to detect:
- Fields typed as int but used as char[] (string operations)
- Fields typed as large char[] but with int accesses in the middle (multiple fields)
- Size mismatches between declared type and actual access patterns

Usage:
  python analyze_struct_fields.py <project_dir> <project_name> <program_name> --struct CDemonActor
  python analyze_struct_fields.py <project_dir> <project_name> <program_name> --struct CDemonActor --offset 0x11c
  python analyze_struct_fields.py <project_dir> <project_name> <program_name> --all-structs

Examples:
  # Analyze CDemonActor struct
  python analyze_struct_fields.py ./projects NocturneEdit nocedit.exe --struct CDemonActor

  # Analyze specific offset in struct
  python analyze_struct_fields.py ./projects NocturneEdit nocedit.exe --struct CDemonActor --offset 0x11c

  # Analyze all structs (may take a while)
  python analyze_struct_fields.py ./projects NocturneEdit nocedit.exe --all-structs --limit 50
"""

import os
import sys
import json
import argparse
from collections import defaultdict

# String function patterns that indicate char* usage
STRING_FUNCTIONS = {
    'strcpy', 'strncpy', 'strcat', 'strncat', 'strcmp', 'strncmp',
    'strlen', 'sprintf', 'snprintf', 'printf', 'fprintf', 'sscanf',
    'stricmp', 'strnicmp', '_stricmp', '_strnicmp',
    'lstrcpy', 'lstrcat', 'lstrcmp', 'lstrlen',
    'serializestring', 'serializelocalizedstring',  # Nocturne-specific
}

# Functions that definitely don't indicate string usage
# (exclude these even if they contain string function substrings)
NON_STRING_FUNCTIONS = {
    'serializefloat', 'serializeinteger', 'serializeactor',
    'serializevector', 'serializematrix', 'serializeclothlist',
    'memcpy', 'memset', 'memmove', 'memcmp',  # These copy bytes, not strings
}

# Known composite types where sub-offset accesses are expected
# These will not trigger "MULTIPLE SUB-OFFSETS" warnings
KNOWN_COMPOSITE_TYPES = {
    # Math/geometry types
    'CVector3f', 'CVector3i', 'CVector2f', 'CVector2i',
    'CVector4f', 'CVector4i', 'CMatrix3x3f', 'CMatrix4x4f',
    'COrientation', 'CLocation', 'CQuaternion',
    # Transform/state types
    'CDemonActorTransformState',
    # Add more as discovered
}

# Mnemonics that suggest string/byte operations
BYTE_MNEMONICS = {'MOVSB', 'STOSB', 'LODSB', 'SCASB', 'CMPSB'}
WORD_MNEMONICS = {'MOVSW', 'STOSW', 'LODSW', 'SCASW', 'CMPSW'}
DWORD_MNEMONICS = {'MOVSD', 'STOSD', 'LODSD', 'SCASD', 'CMPSD'}


def get_struct_definition(program, struct_name):
    """Get struct definition from data type manager."""
    dtm = program.getDataTypeManager()

    # Try to find the struct
    for dt in dtm.getAllDataTypes():
        if dt.getName() == struct_name:
            # Check if it's a structure
            from ghidra.program.model.data import Structure
            if isinstance(dt, Structure):
                return dt
    return None


def get_struct_field_info(struct_dt):
    """Extract field information from a struct."""
    fields = []
    for comp in struct_dt.getComponents():
        field_info = {
            'offset': comp.getOffset(),
            'name': comp.getFieldName() or ('field_0x%x' % comp.getOffset()),
            'type': comp.getDataType().getName(),
            'size': comp.getLength(),
            'end_offset': comp.getOffset() + comp.getLength(),
        }
        fields.append(field_info)
    return fields


def find_struct_references(program, struct_name):
    """Find all places where struct fields are accessed using decompiler."""
    from ghidra.app.decompiler import DecompInterface, DecompileOptions
    from ghidra.program.model.pcode import PcodeOp, Varnode
    from ghidra.program.model.data import Structure, Pointer

    references = defaultdict(list)  # offset -> list of access info

    # Set up decompiler
    decompiler = DecompInterface()
    decompiler.openProgram(program)

    # Configure decompiler options
    opts = DecompileOptions()
    decompiler.setOptions(opts)

    fm = program.getFunctionManager()
    listing = program.getListing()
    dtm = program.getDataTypeManager()

    # Get struct type
    struct_dt = get_struct_definition(program, struct_name)
    if not struct_dt:
        return references

    struct_size = struct_dt.getLength()
    total_funcs = sum(1 for _ in fm.getFunctions(True))
    processed = 0

    # For each function, decompile and look for struct accesses
    for func in fm.getFunctions(True):
        processed += 1
        if processed % 500 == 0:
            print("  Progress: %d/%d functions..." % (processed, total_funcs))

        try:
            # Decompile function
            result = decompiler.decompileFunction(func, 30, None)
            if not result or not result.decompileCompleted():
                continue

            high_func = result.getHighFunction()
            if not high_func:
                continue

            # Look at the decompiled C code for struct references
            decomp_code = result.getDecompiledFunction()
            if decomp_code:
                c_code = decomp_code.getC()
                if c_code and struct_name in c_code:
                    # This function uses our struct
                    analyze_function_pcode(program, func, high_func, struct_name,
                                         struct_dt, struct_size, references, listing)

        except Exception as e:
            # Skip problematic functions
            pass

    decompiler.dispose()
    return references


def analyze_function_pcode(program, func, high_func, struct_name, struct_dt, struct_size, references, listing):
    """Analyze pcode ops for struct field accesses."""
    from ghidra.program.model.pcode import PcodeOp

    # Get all pcode ops
    try:
        pcode_ops = high_func.getPcodeOps()
    except:
        return

    for op in pcode_ops:
        try:
            opcode = op.getOpcode()

            # Look for LOAD and STORE operations
            if opcode in [PcodeOp.LOAD, PcodeOp.STORE]:
                # Get the address being accessed
                if opcode == PcodeOp.LOAD:
                    addr_varnode = op.getInput(1)
                else:  # STORE
                    addr_varnode = op.getInput(1)

                # Try to find offset from pcode
                offset = extract_offset_from_varnode(addr_varnode, struct_name, struct_size)
                if offset is not None and 0 <= offset < struct_size:
                    # Get instruction address
                    seq_addr = op.getSeqnum().getTarget()

                    # Get the instruction
                    inst = listing.getInstructionAt(seq_addr)
                    if not inst:
                        inst_str = "pcode op"
                        mnem = "PCODE"
                    else:
                        inst_str = str(inst)
                        mnem = inst.getMnemonicString().upper()

                    # Determine access size
                    output = op.getOutput()
                    if output:
                        access_size = output.getSize()
                    else:
                        access_size = 4

                    # Check string context
                    is_string_context = False
                    if inst:
                        is_string_context = check_string_context(program, inst, func)

                    references[offset].append({
                        'address': str(seq_addr),
                        'function': func.getName(),
                        'instruction': inst_str,
                        'mnemonic': mnem,
                        'access_size': access_size,
                        'is_string_context': is_string_context,
                        'operand_index': 0,
                    })

            # Also check PTRSUB and PTRADD for offset calculations
            elif opcode in [PcodeOp.PTRSUB, PcodeOp.PTRADD, PcodeOp.INT_ADD]:
                # These often calculate struct field addresses
                for inp in op.getInputs():
                    if inp.isConstant():
                        offset = inp.getOffset()
                        if 0 < offset < struct_size:
                            seq_addr = op.getSeqnum().getTarget()
                            inst = listing.getInstructionAt(seq_addr)

                            # This is an offset calculation, not a direct access
                            # Record it as potential field reference
                            references[offset].append({
                                'address': str(seq_addr),
                                'function': func.getName(),
                                'instruction': str(inst) if inst else "offset calc",
                                'mnemonic': 'OFFSET_CALC',
                                'access_size': 0,  # Unknown - just address calculation
                                'is_string_context': False,
                                'operand_index': 0,
                            })

        except Exception as e:
            pass


def extract_offset_from_varnode(varnode, struct_name, struct_size):
    """Try to extract struct offset from a varnode."""
    if varnode is None:
        return None

    # If it's a constant, return it directly
    if varnode.isConstant():
        offset = varnode.getOffset()
        if 0 <= offset < struct_size:
            return offset

    # If it's defined by an operation, look at that
    def_op = varnode.getDef()
    if def_op:
        from ghidra.program.model.pcode import PcodeOp
        opcode = def_op.getOpcode()

        if opcode in [PcodeOp.INT_ADD, PcodeOp.PTRSUB, PcodeOp.PTRADD]:
            # Look for constant input (the offset)
            for inp in def_op.getInputs():
                if inp.isConstant():
                    offset = inp.getOffset()
                    if 0 <= offset < struct_size:
                        return offset

    return None


def find_struct_references_simple(program, struct_name):
    """Simpler approach: scan assembly for offset patterns within struct size range."""
    import re

    struct_dt = get_struct_definition(program, struct_name)
    if not struct_dt:
        return defaultdict(list)

    struct_size = struct_dt.getLength()
    references = defaultdict(list)

    fm = program.getFunctionManager()
    listing = program.getListing()

    total_funcs = sum(1 for _ in fm.getFunctions(True))
    processed = 0

    for func in fm.getFunctions(True):
        processed += 1
        if processed % 1000 == 0:
            print("  Progress: %d/%d functions..." % (processed, total_funcs))

        body = func.getBody()
        inst_iter = listing.getInstructions(body, True)

        for inst in inst_iter:
            for i in range(inst.getNumOperands()):
                op_str = str(inst.getDefaultOperandRepresentation(i))

                # Check for register + offset patterns
                if '+' in op_str and '[' in op_str:
                    try:
                        match = re.search(r'\+\s*(0x[0-9a-fA-F]+|\d+)', op_str)
                        if match:
                            offset_str = match.group(1)
                            if offset_str.lower().startswith('0x'):
                                offset = int(offset_str, 16)
                            else:
                                offset = int(offset_str)

                            # Only track offsets within struct size
                            if 0 < offset < struct_size:
                                mnem = inst.getMnemonicString().upper()
                                access_size = get_access_size(inst, i, mnem)
                                is_string_context = check_string_context(program, inst, func)

                                references[offset].append({
                                    'address': str(inst.getAddress()),
                                    'function': func.getName(),
                                    'instruction': str(inst),
                                    'mnemonic': mnem,
                                    'access_size': access_size,
                                    'is_string_context': is_string_context,
                                    'operand_index': i,
                                })
                    except (ValueError, AttributeError):
                        pass

    return references


def get_access_size(inst, operand_index, mnemonic):
    """Determine the access size from instruction."""
    # Check byte/word/dword string operations
    if mnemonic in BYTE_MNEMONICS:
        return 1
    if mnemonic in WORD_MNEMONICS:
        return 2
    if mnemonic in DWORD_MNEMONICS:
        return 4

    # Check for explicit size indicators in operand
    op_str = str(inst.getDefaultOperandRepresentation(operand_index)).upper()
    if 'BYTE' in op_str:
        return 1
    if 'WORD' in op_str and 'DWORD' not in op_str:
        return 2
    if 'DWORD' in op_str:
        return 4
    if 'QWORD' in op_str:
        return 8

    # Check register size if destination/source is a register
    for i in range(inst.getNumOperands()):
        reg_str = str(inst.getDefaultOperandRepresentation(i)).upper()
        # 8-bit registers
        if reg_str in ['AL', 'AH', 'BL', 'BH', 'CL', 'CH', 'DL', 'DH']:
            return 1
        # 16-bit registers
        if reg_str in ['AX', 'BX', 'CX', 'DX', 'SI', 'DI', 'BP', 'SP']:
            return 2
        # 32-bit registers
        if reg_str in ['EAX', 'EBX', 'ECX', 'EDX', 'ESI', 'EDI', 'EBP', 'ESP']:
            return 4

    # Default to 4 for x86
    return 4


def check_string_context(program, inst, func):
    """Check if instruction is actually loading/computing an address for a string function.

    We look forward to find a CALL to a string function, and check if the pattern
    suggests this access is setting up an argument (LEA, PUSH, or MOV to register
    followed by PUSH).
    """
    listing = program.getListing()
    addr = inst.getAddress()
    mnem = inst.getMnemonicString().upper()

    # Direct string operations are always string context
    if mnem in BYTE_MNEMONICS:
        return True

    # LEA instructions are typically loading addresses (often for strings)
    is_lea = mnem == 'LEA'

    # Check if this looks like setting up a string argument
    # Pattern: LEA reg, [struct+offset] followed by PUSH reg or used before CALL
    # Or: PUSH [struct+offset] directly before CALL
    is_push = mnem == 'PUSH'

    # Look forward for a nearby CALL to a string function
    # Only consider instructions that would be setting up arguments (within 6 instructions of CALL)
    check_range = 6

    next_addr = addr
    instructions_to_call = 0

    for _ in range(check_range):
        next_inst = listing.getInstructionAfter(next_addr)
        if not next_inst:
            break
        if not func.getBody().contains(next_inst.getAddress()):
            break

        instructions_to_call += 1
        next_mnem = next_inst.getMnemonicString().upper()

        if next_mnem == 'CALL':
            # Check if calling a string function
            target = get_call_target_name(program, next_inst)
            if target:
                target_lower = target.lower()
                # First check if it's a known non-string function
                if any(nsf in target_lower for nsf in NON_STRING_FUNCTIONS):
                    return False
                # Then check if it's a string function
                if any(sf in target_lower for sf in STRING_FUNCTIONS):
                    # For LEA/PUSH instructions close to string calls, likely string arg
                    if is_lea or is_push:
                        return True
                    # For other instructions, only flag if very close (within 3 instructions)
                    # and we're moving data that could be an address
                    if instructions_to_call <= 3 and mnem in ['MOV', 'ADD']:
                        return True
            break  # Stop after finding first CALL

        next_addr = next_inst.getAddress()

    return False


def get_call_target_name(program, call_inst):
    """Get the name of the function being called."""
    # Get the call target
    refs = call_inst.getReferencesFrom()
    for ref in refs:
        if ref.getReferenceType().isCall():
            target_addr = ref.getToAddress()
            func = program.getFunctionManager().getFunctionAt(target_addr)
            if func:
                return func.getName()
            # Try to get symbol name
            symbol = program.getSymbolTable().getPrimarySymbol(target_addr)
            if symbol:
                return symbol.getName()
    return None


def analyze_struct_fields(program, struct_name, specific_offset=None, use_decompiler=True, issues_only=False):
    """Main analysis function for a struct."""
    print("\n" + "=" * 80)
    print("STRUCT FIELD ANALYSIS: %s" % struct_name)
    print("=" * 80)

    # Get struct definition
    struct_dt = get_struct_definition(program, struct_name)
    if not struct_dt:
        print("ERROR: Struct '%s' not found" % struct_name)
        return None

    # Get field info
    fields = get_struct_field_info(struct_dt)
    struct_size = struct_dt.getLength()

    print("\nStruct size: 0x%x (%d bytes)" % (struct_size, struct_size))
    print("\nDeclared fields:")
    for f in fields:
        print("  0x%03x: %-20s %-15s (%d bytes)" % (
            f['offset'], f['name'], f['type'], f['size']))

    # Find all references
    if use_decompiler:
        print("\nScanning for field accesses (using decompiler - may take a while)...")
        references = find_struct_references(program, struct_name)
    else:
        print("\nScanning for field accesses (simple pattern matching)...")
        references = find_struct_references_simple(program, struct_name)

    # Analyze each field
    results = []

    for field in fields:
        offset = field['offset']

        # Skip if we're only looking at a specific offset
        if specific_offset is not None and offset != specific_offset:
            continue

        # Find accesses at or within this field
        field_accesses = []
        for access_offset, accesses in references.items():
            if field['offset'] <= access_offset < field['end_offset']:
                for access in accesses:
                    access['relative_offset'] = access_offset - field['offset']
                    field_accesses.append(access)

        if not field_accesses:
            continue

        # Analyze access patterns
        access_sizes = defaultdict(int)
        string_context_count = 0
        sub_offsets = defaultdict(int)

        for access in field_accesses:
            access_sizes[access['access_size']] += 1
            if access['is_string_context']:
                string_context_count += 1
            sub_offsets[access['relative_offset']] += 1

        # Detect potential issues
        issues = []

        # Check if typed as int but used as string
        # Require at least 2 string contexts or >25% of accesses to reduce false positives
        total = len(field_accesses)
        string_ratio = string_context_count / total if total > 0 else 0
        if field['type'] == 'int' and (string_context_count >= 2 or string_ratio > 0.25):
            issues.append("LIKELY STRING: typed as int but used in %d/%d string contexts (%.0f%%)" %
                         (string_context_count, total, string_ratio * 100))

        # Check if accesses suggest different size
        # Filter out 0-size (address calculations) for dominant size calculation
        # Skip this warning for known composite types (accessing individual members is expected)
        real_access_sizes = {k: v for k, v in access_sizes.items() if k > 0}
        dominant_size = max(real_access_sizes.keys(), key=lambda k: real_access_sizes[k]) if real_access_sizes else None
        if dominant_size and dominant_size != field['size'] and field['type'] not in KNOWN_COMPOSITE_TYPES:
            if dominant_size < field['size']:
                issues.append("SIZE MISMATCH: mostly %d-byte accesses but field is %d bytes (possible multiple fields)" % (dominant_size, field['size']))
            else:
                issues.append("SIZE MISMATCH: %d-byte accesses but field is only %d bytes" % (dominant_size, field['size']))

        # Check for mixed small and large accesses (suggests struct or union)
        if field['type'] == 'int' and 1 in access_sizes and access_sizes.get(1, 0) > 1:
            byte_count = access_sizes.get(1, 0)
            issues.append("BYTE ACCESS: %d 1-byte accesses on int field (may be char or char[])" % byte_count)

        # Check for sub-field accesses within arrays/large fields
        # Skip this warning for known composite types (math structs, etc.)
        if field['size'] > 4 and len(sub_offsets) > 1:
            if field['type'] not in KNOWN_COMPOSITE_TYPES:
                non_zero_subs = [o for o in sub_offsets.keys() if o != 0]
                if non_zero_subs:
                    issues.append("MULTIPLE SUB-OFFSETS: accesses at relative offsets %s (may be separate fields)" %
                                sorted(sub_offsets.keys()))

        result = {
            'field': field,
            'total_accesses': len(field_accesses),
            'access_sizes': dict(access_sizes),
            'string_context_count': string_context_count,
            'sub_offsets': dict(sub_offsets),
            'issues': issues,
            'sample_accesses': field_accesses[:5],  # First 5 as samples
        }
        results.append(result)

    # Print results
    print("\n" + "-" * 80)
    print("FIELD ACCESS ANALYSIS")
    print("-" * 80)

    for result in results:
        # Skip fields without issues if --issues-only
        if issues_only and not result['issues']:
            continue
        field = result['field']
        print("\n0x%03x: %s (%s, %d bytes)" % (
            field['offset'], field['name'], field['type'], field['size']))
        print("  Total accesses: %d" % result['total_accesses'])
        print("  Access sizes: %s" % result['access_sizes'])
        print("  String contexts: %d" % result['string_context_count'])

        if result['sub_offsets']:
            print("  Sub-offsets accessed: %s" % dict(result['sub_offsets']))

        if result['issues']:
            print("  ** ISSUES DETECTED **")
            for issue in result['issues']:
                print("    - %s" % issue)

        if result['sample_accesses']:
            print("  Sample accesses:")
            for acc in result['sample_accesses'][:3]:
                print("    %s: %s" % (acc['function'], acc['instruction']))

    return results


def analyze_all_structs(program, limit=None, use_decompiler=False, issues_only=False):
    """Analyze all structs in the program."""
    from ghidra.program.model.data import Structure

    dtm = program.getDataTypeManager()

    # Collect all structs
    structs = []
    for dt in dtm.getAllDataTypes():
        if isinstance(dt, Structure):
            structs.append(dt.getName())

    print("Found %d structs" % len(structs))

    if limit:
        structs = structs[:limit]
        print("Limiting to first %d structs" % limit)

    all_results = {}
    for i, struct_name in enumerate(structs):
        print("\n[%d/%d] Analyzing %s..." % (i+1, len(structs), struct_name))
        results = analyze_struct_fields(program, struct_name, use_decompiler=use_decompiler, issues_only=issues_only)
        if results:
            # Only keep structs with detected issues
            issues_found = any(r['issues'] for r in results)
            if issues_found:
                all_results[struct_name] = results

    # Summary
    print("\n" + "=" * 80)
    print("SUMMARY: Structs with potential field type issues")
    print("=" * 80)

    for struct_name, results in all_results.items():
        print("\n%s:" % struct_name)
        for r in results:
            if r['issues']:
                print("  0x%03x %s:" % (r['field']['offset'], r['field']['name']))
                for issue in r['issues']:
                    print("    - %s" % issue)

    return all_results


def main():
    parser = argparse.ArgumentParser(
        description="Analyze struct field usage patterns to detect type mismatches",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=__doc__
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--struct", "-s", help="Specific struct name to analyze")
    parser.add_argument("--offset", "-o", help="Specific offset within struct (hex, e.g., 0x11c)")
    parser.add_argument("--all-structs", "-a", action="store_true", help="Analyze all structs")
    parser.add_argument("--limit", "-l", type=int, help="Limit number of structs (with --all-structs)")
    parser.add_argument("--simple", action="store_true", help="Use simple pattern matching instead of decompiler (faster)")
    parser.add_argument("--issues-only", "-i", action="store_true", help="Only show fields with detected issues")
    parser.add_argument("--output", help="Output JSON file path")
    args = parser.parse_args()

    if not args.struct and not args.all_structs:
        print("ERROR: Must specify --struct or --all-structs")
        sys.exit(1)

    # Parse offset if provided
    specific_offset = None
    if args.offset:
        if args.offset.startswith('0x') or args.offset.startswith('0X'):
            specific_offset = int(args.offset, 16)
        else:
            specific_offset = int(args.offset)

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

    exit_code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as currentProgram:
            use_decompiler = not args.simple
            if args.all_structs:
                results = analyze_all_structs(currentProgram, limit=args.limit,
                                             use_decompiler=use_decompiler, issues_only=args.issues_only)
            else:
                results = analyze_struct_fields(currentProgram, args.struct, specific_offset,
                                               use_decompiler=use_decompiler, issues_only=args.issues_only)

            # Save results if output specified
            if args.output and results:
                # Convert results to JSON-serializable format
                def make_serializable(obj):
                    if isinstance(obj, dict):
                        return {k: make_serializable(v) for k, v in obj.items()}
                    elif isinstance(obj, list):
                        return [make_serializable(v) for v in obj]
                    elif isinstance(obj, set):
                        return list(obj)
                    else:
                        return obj

                with open(args.output, 'w') as f:
                    json.dump(make_serializable(results), f, indent=2)
                print("\nResults saved to: %s" % args.output)

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

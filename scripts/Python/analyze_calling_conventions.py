#!/usr/bin/env python3
# Detect calling convention heuristics with reduced false positives
# Focus: cdecl / stdcall / thiscall / watcom / fpureg / fpustack / stack_esi variants
#
# Usage (PyGhidra headless):
#   python analyze_calling_conventions2.py <project_dir> <project_name> <program_name> [--address 0xADDRESS]
#
# Examples:
#   # Analyze all functions and show mismatches
#   python analyze_calling_conventions2.py ./projects NocturneEdit nocedit.exe --mismatches-only
#
#   # Analyze a specific function
#   python analyze_calling_conventions2.py ./projects NocturneEdit nocedit.exe --address 0x00488230
#
#@author NearlyTRex
#@category Annotations

import os
import sys
import json
import argparse
from collections import defaultdict

# ------------------------------------------------------------
# Helpers
# ------------------------------------------------------------

FPU_MNEMONICS = {
    'FLD', 'FST', 'FSTP', 'FADD', 'FSUB', 'FMUL', 'FDIV',
    'FILD', 'FIST', 'FISTP', 'FADDP', 'FSUBP', 'FMULP', 'FDIVP',
    'FCOM', 'FCOMP', 'FCHS', 'FSQRT', 'FSCALE', 'FRNDINT'
}

EAX_WRITE_MNEMS = {'MOV', 'XOR', 'ADD', 'SUB', 'AND', 'OR', 'POP', 'LEA'}

# ------------------------------------------------------------
# Core analysis
# ------------------------------------------------------------

def analyze_function(program, func):
    """Analyze a function's instruction patterns to detect calling convention hints."""
    listing = program.getListing()

    patterns = {
        'uses_ebp_frame': False,
        'uses_ecx_this': False,
        'callee_cleans_stack': False,
        'ret_imm': None,

        'stack_param_offsets': set(),

        # Register input tracking
        'early_reg_reads': set(),
        'early_reg_writes': set(),
        'regs_saved_to_local': set(),
        'regs_saved_to_reg': set(),      # ESI/EDI saved to another register (e.g., MOV EBX, ESI)
        'prologue_pushed_regs': set(),

        # FPU tracking
        'uses_fpu': False,
        'fpu_stores_to_memory': False,
        'fpu_two_operand': False,
        'fpu_single_operand': False,
        'last_fpu_idx': None,
        'last_eax_write_idx': None,

        'instruction_count': 0,
        'return_reg': 'EAX',
        'prologue_end': 0,
        'stack_alloc_size': 0,
    }

    important_regs = ['EAX', 'EBX', 'ECX', 'EDX', 'ESI', 'EDI']
    reg_state = {}  # Track first read/write per register

    # Collect all instructions
    all_instructions = []
    inst_iter = listing.getInstructions(func.getBody(), True)
    for inst in inst_iter:
        all_instructions.append(inst)

    # First pass: detect prologue
    in_prologue = True
    prologue_end_idx = 0

    for idx, inst in enumerate(all_instructions):
        mnem = inst.getMnemonicString().upper()

        if in_prologue:
            if mnem == 'PUSH':
                op = str(inst.getDefaultOperandRepresentation(0)).upper()
                for reg in important_regs + ['EBP']:
                    if op == reg:
                        patterns['prologue_pushed_regs'].add(reg)
            elif mnem in ['MOV', 'SUB', 'AND'] and idx < 10:
                op0 = str(inst.getDefaultOperandRepresentation(0)).upper()
                if 'EBP' in op0 or 'ESP' in op0:
                    if mnem == 'MOV' and 'EBP' in op0:
                        op1 = str(inst.getDefaultOperandRepresentation(1)).upper()
                        if 'ESP' in op1:
                            patterns['uses_ebp_frame'] = True
                    if mnem == 'SUB' and 'ESP' in op0:
                        op1 = str(inst.getDefaultOperandRepresentation(1)).upper()
                        try:
                            if op1.startswith('0X'):
                                patterns['stack_alloc_size'] = int(op1, 16)
                            else:
                                patterns['stack_alloc_size'] = int(op1)
                        except:
                            pass
                else:
                    in_prologue = False
                    prologue_end_idx = idx
            else:
                in_prologue = False
                prologue_end_idx = idx

    patterns['prologue_end'] = prologue_end_idx

    # Second pass: analyze instructions
    for idx, inst in enumerate(all_instructions):
        patterns['instruction_count'] += 1

        mnem = inst.getMnemonicString().upper()
        num_operands = inst.getNumOperands()

        # --------------------------------------------------
        # Register input detection (after prologue, first ~30 instructions)
        # --------------------------------------------------

        if idx >= prologue_end_idx and idx <= prologue_end_idx + 30:
            # Check for register being saved to local variable (strong input signal)
            if mnem == 'MOV' and num_operands == 2:
                dest = str(inst.getDefaultOperandRepresentation(0)).upper()
                src = str(inst.getDefaultOperandRepresentation(1)).upper()

                # Check if saving a register to stack local
                if ('[ESP' in dest or '[EBP' in dest) and '-' not in dest:
                    for reg in important_regs:
                        if src == reg and reg not in patterns['prologue_pushed_regs']:
                            patterns['regs_saved_to_local'].add(reg)
                            if reg not in reg_state:
                                reg_state[reg] = 'read'
                                patterns['early_reg_reads'].add(reg)

                # Check if saving ESI/EDI to another register (e.g., MOV EBX, ESI or MOV ECX, ESI)
                # This is a common pattern - preserving the input register value
                # Works for both callee-saved (EBX) and caller-saved (ECX) destination registers
                # BUT: exclude if ESI/EDI was pushed in prologue (then it's just local var shuffling)
                if dest in important_regs and src in ['ESI', 'EDI'] and dest != src:
                    if src not in patterns['prologue_pushed_regs']:
                        patterns['regs_saved_to_reg'].add(src)
                        if src not in reg_state:
                            reg_state[src] = 'read'
                            patterns['early_reg_reads'].add(src)

            # Check for register reads/writes
            for i in range(num_operands):
                op_str = str(inst.getDefaultOperandRepresentation(i)).upper()

                for reg in important_regs:
                    # Register used as base/index in memory access = read
                    if '[' in op_str and reg in op_str:
                        if reg not in reg_state and reg not in patterns['prologue_pushed_regs']:
                            reg_state[reg] = 'read'
                            patterns['early_reg_reads'].add(reg)
                        continue

                    if op_str == reg:
                        is_write = False
                        is_read = False

                        if mnem in ['MOV', 'LEA', 'XOR', 'SUB', 'ADD', 'AND', 'OR', 'SHL', 'SHR', 'IMUL', 'MUL']:
                            if i == 0:
                                is_write = True
                                # XOR reg, reg / SUB reg, reg = zeroing, not reading
                                if mnem in ['XOR', 'SUB'] and num_operands == 2:
                                    op1 = str(inst.getDefaultOperandRepresentation(1)).upper()
                                    if op1 == reg:
                                        is_read = False
                            else:
                                is_read = True
                        elif mnem in ['PUSH', 'TEST', 'CMP']:
                            is_read = True
                        elif mnem == 'POP':
                            is_write = True
                        elif mnem in ['INC', 'DEC', 'NEG', 'NOT']:
                            is_read = True
                            is_write = True

                        if reg not in reg_state and reg not in patterns['prologue_pushed_regs']:
                            if is_read and not is_write:
                                reg_state[reg] = 'read'
                                patterns['early_reg_reads'].add(reg)
                            elif is_write and not is_read:
                                reg_state[reg] = 'written'
                                patterns['early_reg_writes'].add(reg)

        # --------------------------------------------------
        # RET with immediate (stdcall)
        # --------------------------------------------------

        if mnem.startswith('RET') and num_operands == 1:
            try:
                op_str = inst.getDefaultOperandRepresentation(0)
                if op_str.startswith('0x') or op_str.startswith('0X'):
                    patterns['ret_imm'] = int(op_str, 16)
                else:
                    patterns['ret_imm'] = int(op_str)
                patterns['callee_cleans_stack'] = True
            except:
                pass

        # --------------------------------------------------
        # Stack argument detection
        # --------------------------------------------------

        for i in range(num_operands):
            text = str(inst.getDefaultOperandRepresentation(i)).upper()
            if '+' in text and ('[ESP' in text or '[EBP' in text):
                try:
                    parts = text.replace('[', '').replace(']', '').split('+')
                    if len(parts) >= 2:
                        off_str = parts[-1].strip()
                        if off_str.startswith('0X'):
                            offset = int(off_str, 16)
                        else:
                            offset = int(off_str)

                        if patterns['uses_ebp_frame']:
                            # EBP-framed: [EBP + 0x8+] are params
                            if 'EBP' in text and 'ESP' not in text and offset >= 0x8:
                                patterns['stack_param_offsets'].add(offset)
                        else:
                            # ESP-framed: params past local allocation
                            pushed_count = len(patterns['prologue_pushed_regs'])
                            min_param_offset = patterns['stack_alloc_size'] + (pushed_count * 4) + 4
                            if 'ESP' in text and offset >= min_param_offset:
                                patterns['stack_param_offsets'].add(offset)
                except:
                    pass

        # --------------------------------------------------
        # THISCALL heuristic
        # --------------------------------------------------

        if mnem == 'MOV' and num_operands >= 2:
            dst = str(inst.getDefaultOperandRepresentation(0)).upper()
            src = str(inst.getDefaultOperandRepresentation(1)).upper()
            if dst == 'ECX' and src.startswith('['):
                patterns['uses_ecx_this'] = True

        # --------------------------------------------------
        # FPU tracking
        # --------------------------------------------------

        if mnem.startswith('F'):
            patterns['uses_fpu'] = True
            patterns['last_fpu_idx'] = idx

            # Single-operand FPU (ST0 -> ST0)
            if mnem in ['FRNDINT', 'FSQRT', 'FABS', 'FCHS', 'FSIN', 'FCOS', 'FPTAN']:
                patterns['fpu_single_operand'] = True

            # Two-operand FPU (ST0, ST1 -> ST0)
            if mnem in ['FPATAN', 'FPREM', 'FPREM1', 'FYL2X', 'FYL2XP1', 'FSCALE']:
                patterns['fpu_two_operand'] = True

            if mnem in {'FST', 'FSTP', 'FIST', 'FISTP'}:
                if num_operands >= 1:
                    op0 = str(inst.getDefaultOperandRepresentation(0)).upper()
                    if not op0.startswith('ST'):
                        patterns['fpu_stores_to_memory'] = True

        # --------------------------------------------------
        # EAX write tracking
        # --------------------------------------------------

        if mnem in EAX_WRITE_MNEMS and num_operands >= 1:
            dest = str(inst.getDefaultOperandRepresentation(0)).upper()
            if dest == 'EAX':
                patterns['last_eax_write_idx'] = idx

    # ------------------------------------------------------
    # FPU return decision (VERY conservative)
    # ------------------------------------------------------

    patterns['return_reg'] = 'EAX'

    if patterns['uses_fpu']:
        if patterns['last_fpu_idx'] is not None:
            eax_after_fpu = (
                patterns['last_eax_write_idx'] is not None and
                patterns['last_eax_write_idx'] > patterns['last_fpu_idx']
            )

            if (
                not eax_after_fpu and
                not patterns['fpu_stores_to_memory'] and
                patterns['instruction_count'] <= 80 and
                len(patterns['stack_param_offsets']) <= 1
            ):
                patterns['return_reg'] = 'ST0'

    return patterns

# ------------------------------------------------------------
# Convention scoring
# ------------------------------------------------------------

def suggest_convention(patterns, declared_param_count=None):
    """Suggest the most likely calling convention based on detected patterns.

    Args:
        patterns: Dict of detected patterns from analyze_function
        declared_param_count: Optional parameter count from Ghidra function signature
    """
    scores = defaultdict(int)

    early_reads = patterns['early_reg_reads']
    saved_to_local = patterns.get('regs_saved_to_local', set())
    saved_to_reg = patterns.get('regs_saved_to_reg', set())  # e.g., MOV EBX, ESI
    prologue_pushed = patterns.get('prologue_pushed_regs', set())
    stack_offsets = patterns['stack_param_offsets']

    # Registers saved to local vars OR to callee-saved registers are strong input signals
    # Registers just pushed in prologue are callee-saved, not inputs
    saved_inputs = saved_to_local | saved_to_reg
    likely_inputs = saved_inputs | (early_reads - prologue_pushed)

    stack_param_count = len(stack_offsets)

    # --------------------------------------------------
    # Check for __stack_esi / __stack2_esi / __stack3_esi / __stack_esi_edi patterns
    # --------------------------------------------------

    # ONLY use strong signal: ESI saved to local variable OR to callee-saved register
    # The weaker "early read" signal causes too many false positives because:
    # - ESI might be read incidentally (e.g., string ops, loop counters)
    # - A 1-param function shouldn't have ESI as an additional register param
    #
    # For stack_esi conventions, we require:
    # 1. ESI explicitly saved (strong evidence it's an input)
    # 2. At least 1 stack parameter (otherwise it would be pure register convention)
    if 'ESI' in saved_inputs and stack_param_count >= 1:
        if 'EDI' in saved_inputs:
            # ESI + EDI + stack params
            if stack_param_count >= 2:
                scores['__stack2_esi_edi'] += 40
            else:
                scores['__stack_esi_edi'] += 40
        else:
            # ESI + stack params (no EDI)
            if stack_param_count >= 3:
                scores['__stack3_esi'] += 40
            elif stack_param_count >= 2:
                scores['__stack2_esi'] += 40
            else:
                scores['__stack_esi'] += 40

    # --------------------------------------------------
    # Check for __watcallRegister pattern
    # --------------------------------------------------

    watcall_regs = {'EAX', 'EDX', 'EBX', 'ECX'}
    watcall_inputs = likely_inputs & watcall_regs
    if len(watcall_inputs) >= 2:
        scores['__watcallRegister'] += 20

    # --------------------------------------------------
    # Check for FPU conventions - only if function returns via ST0
    # --------------------------------------------------

    if patterns['return_reg'] == 'ST0':
        if patterns['fpu_two_operand']:
            scores['__fpustack'] += 35
        elif patterns['fpu_single_operand']:
            scores['__fpureg'] += 35
        else:
            scores['__fpureg'] += 30

    # --------------------------------------------------
    # Stack cleanup detection
    # --------------------------------------------------

    if patterns['callee_cleans_stack']:
        scores['__stdcall'] += 30
    else:
        scores['__cdecl'] += 20

    # EBP frame -> common C
    if patterns['uses_ebp_frame']:
        scores['__cdecl'] += 5
        scores['__stdcall'] += 5

    # ECX as this
    if patterns['uses_ecx_this']:
        scores['__thiscall'] += 35

    # Many stack params -> C-like
    if stack_param_count >= 2:
        scores['__cdecl'] += 10

    # Few / zero stack params -> Watcom-ish (but only if no ESI/EDI inputs)
    if stack_param_count <= 1 and 'ESI' not in likely_inputs and 'EDI' not in likely_inputs:
        scores['__watcallRegister'] += 10

    # Pure stack conventions (no register inputs)
    if not early_reads and stack_offsets:
        scores['__cdecl'] += 15
        scores['__watcallStack'] += 15

    # Choose winner
    if scores:
        best = max(scores, key=lambda k: scores[k])
        return best, dict(scores)

    return '__cdecl', {'__cdecl': 20}


def analyze_single_function(program, address):
    """Analyze a single function at the given address."""
    addr_factory = program.getAddressFactory()
    addr = addr_factory.getAddress(hex(address))

    fm = program.getFunctionManager()
    func = fm.getFunctionAt(addr)

    if not func:
        func = fm.getFunctionContaining(addr)

    if not func:
        print("ERROR: No function found at address 0x%x" % address)
        return None

    print("\n" + "=" * 80)
    print("FUNCTION ANALYSIS: %s" % func.getName())
    print("Address: %s" % func.getEntryPoint())
    print("=" * 80)

    current = func.getCallingConventionName()
    declared_params = func.getParameterCount()
    print("\nCurrent calling convention: %s" % current)
    print("Declared parameter count: %d" % declared_params)

    patterns = analyze_function(program, func)
    conv, scores = suggest_convention(patterns, declared_param_count=declared_params)

    print("\n--- Register Usage Analysis ---")
    print("Prologue-pushed (callee-saved): %s" % (patterns.get('prologue_pushed_regs') or 'none'))
    print("Saved to local var (INPUT):     %s" % (patterns.get('regs_saved_to_local') or 'none'))
    print("Saved to callee-reg (INPUT):    %s" % (patterns.get('regs_saved_to_reg') or 'none'))
    print("Read before write (after prol): %s" % (patterns['early_reg_reads'] or 'none'))
    print("Written first:                  %s" % (patterns['early_reg_writes'] or 'none'))

    print("\n--- Stack Parameter Access ---")
    print("Frame type: %s" % ('EBP-framed' if patterns['uses_ebp_frame'] else 'ESP-framed'))
    if patterns['stack_param_offsets']:
        print("Stack param offsets: %s" % sorted(patterns['stack_param_offsets']))
    else:
        print("No stack parameter access detected")

    print("\n--- FPU Usage ---")
    print("Uses FPU: %s" % patterns['uses_fpu'])
    if patterns['uses_fpu']:
        print("Single-operand FPU: %s" % patterns['fpu_single_operand'])
        print("Two-operand FPU: %s" % patterns['fpu_two_operand'])
        print("Stores to memory: %s" % patterns['fpu_stores_to_memory'])

    print("\nSuggested convention: %s" % conv)
    print("Return register: %s" % patterns['return_reg'])
    print("\nScores:")
    for k in sorted(scores.keys()):
        print("  %-20s : %d" % (k, scores[k]))

    if conv != current:
        print("\n*** MISMATCH: Current is '%s', suggested is '%s' ***" % (current, conv))

    return {
        'name': func.getName(),
        'address': str(func.getEntryPoint()),
        'current_convention': current,
        'suggested_convention': conv,
        'patterns': patterns,
        'scores': scores,
    }


def analyze_all_functions(program, mismatches_only=False, skip_unknown=False):
    """Analyze all functions and generate a report."""
    print("=" * 100)
    print("CALLING CONVENTION ANALYSIS REPORT (Conservative FPU + ESI/EDI Detection)")
    if mismatches_only:
        print("(Showing mismatches only)")
    if skip_unknown:
        print("(Skipping 'unknown' convention functions)")
    print("=" * 100)

    fm = program.getFunctionManager()
    results = []

    total = sum(1 for _ in fm.getFunctions(True))
    print("\nAnalyzing %d functions..." % total)

    mismatches = []
    convention_counts = defaultdict(int)
    suggestion_counts = defaultdict(int)

    for i, func in enumerate(fm.getFunctions(True)):
        if i % 500 == 0:
            print("  Progress: %d/%d" % (i, total))

        patterns = analyze_function(program, func)
        current = func.getCallingConventionName()
        declared_params = func.getParameterCount()
        suggested, scores = suggest_convention(patterns, declared_param_count=declared_params)

        convention_counts[current] += 1
        suggestion_counts[suggested] += 1

        result = {
            'name': func.getName(),
            'address': str(func.getEntryPoint()),
            'current_convention': current,
            'suggested_convention': suggested,
            'declared_param_count': declared_params,
            'detected_stack_params': len(patterns['stack_param_offsets']),
            'scores': scores,
            'regs_saved_to_local': list(patterns.get('regs_saved_to_local', set())),
            'regs_saved_to_reg': list(patterns.get('regs_saved_to_reg', set())),
            'early_reg_reads': list(patterns['early_reg_reads']),
            'uses_fpu': patterns['uses_fpu'],
            'fpu_stores_to_memory': patterns['fpu_stores_to_memory'],
            'return_reg': patterns['return_reg'],
        }
        results.append(result)

        # Track mismatches
        max_score = max(scores.values()) if scores else 0
        is_mismatch = suggested != current and max_score >= 25
        if skip_unknown and current == 'unknown':
            is_mismatch = False
        if is_mismatch:
            saved_inputs = list(patterns.get('regs_saved_to_local', set()) | patterns.get('regs_saved_to_reg', set()))
            mismatches.append({
                'name': func.getName(),
                'address': str(func.getEntryPoint()),
                'current': current,
                'suggested': suggested,
                'confidence': max_score,
                'declared_param_count': declared_params,
                'detected_stack_params': len(patterns['stack_param_offsets']),
                'scores': scores,
                'regs_saved_to_local': list(patterns.get('regs_saved_to_local', set())),
                'regs_saved_to_reg': list(patterns.get('regs_saved_to_reg', set())),
                'saved_inputs': saved_inputs,
            })

    # Print summary
    if not mismatches_only:
        print("\n" + "=" * 100)
        print("CURRENT CALLING CONVENTION DISTRIBUTION")
        print("=" * 100)
        for conv, count in sorted(convention_counts.items(), key=lambda x: -x[1]):
            print("  %-25s %5d functions" % (conv, count))

        print("\n" + "=" * 100)
        print("SUGGESTED CONVENTION DISTRIBUTION")
        print("=" * 100)
        for conv, count in sorted(suggestion_counts.items(), key=lambda x: -x[1]):
            print("  %-25s %5d functions" % (conv, count))

    print("\n" + "=" * 100)
    print("HIGH-CONFIDENCE MISMATCHES (score >= 25)")
    print("=" * 100)

    # Group by suggested convention
    by_suggestion = defaultdict(list)
    for m in mismatches:
        by_suggestion[m['suggested']].append(m)

    for suggested, funcs in sorted(by_suggestion.items(), key=lambda x: -len(x[1])):
        print("\n--- Likely %s (%d functions) ---" % (suggested, len(funcs)))
        for f in sorted(funcs, key=lambda x: -x['confidence'])[:20]:
            extra = ""
            if f.get('saved_inputs'):
                extra = " [inputs: %s]" % ', '.join(f['saved_inputs'])
            elif f.get('regs_saved_to_local') or f.get('regs_saved_to_reg'):
                inputs = list(set(f.get('regs_saved_to_local', []) + f.get('regs_saved_to_reg', [])))
                extra = " [inputs: %s]" % ', '.join(inputs)
            print("  %s (%s) - current: %s, score: %d%s" % (
                f['name'], f['address'], f['current'], f['confidence'], extra))
        if len(funcs) > 20:
            print("  ... and %d more" % (len(funcs) - 20))

    # Save report
    try:
        program_path = program.getExecutablePath()
        project_location = str(program.getDomainFile().getProjectLocator().getProjectDir())
        repo_root = os.path.dirname(os.path.dirname(project_location))
        reports_dir = os.path.join(repo_root, 'annotations', 'nocedit.exe', 'reports')
        if not os.path.exists(reports_dir):
            os.makedirs(reports_dir)

        json_path = os.path.join(reports_dir, 'calling_convention_analysis.json')
        report_data = {
            'summary': {
                'total_functions': len(results),
                'convention_counts': dict(convention_counts),
                'suggestion_counts': dict(suggestion_counts),
                'high_confidence_mismatches': len(mismatches),
            },
            'mismatches': mismatches,
        }
        if not mismatches_only:
            report_data['all_functions'] = results
        with open(json_path, 'w') as f:
            json.dump(report_data, f, indent=2)
        print("\nJSON report saved to: %s" % json_path)
    except Exception as e:
        print("\nFailed to save JSON report: %s" % str(e))

    print("\n" + "=" * 100)
    print("ANALYSIS COMPLETE")
    print("=" * 100)

    return results


def main():
    """Entry point for PyGhidra headless execution."""
    parser = argparse.ArgumentParser(
        description="Analyze functions to detect likely calling conventions (conservative FPU + ESI/EDI detection)",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  # Analyze all functions
  %(prog)s ./projects NocturneEdit nocedit.exe

  # Analyze a specific function
  %(prog)s ./projects NocturneEdit nocedit.exe --address 0x00488230

  # Show only mismatches
  %(prog)s ./projects NocturneEdit nocedit.exe --mismatches-only

  # Show mismatches, skipping unknown functions
  %(prog)s ./projects NocturneEdit nocedit.exe --mismatches-only --skip-unknown
"""
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--address", "-a", help="Specific function address to analyze (hex, e.g., 0x00488230)")
    parser.add_argument("--mismatches-only", "-m", action="store_true", help="Only show functions where suggested convention differs from current")
    parser.add_argument("--skip-unknown", "-u", action="store_true", help="Skip functions with 'unknown' current convention in mismatch reporting")
    args = parser.parse_args()

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
            if args.address:
                addr_str = args.address
                if addr_str.startswith('0x') or addr_str.startswith('0X'):
                    address = int(addr_str, 16)
                else:
                    address = int(addr_str)
                analyze_single_function(currentProgram, address)
            else:
                analyze_all_functions(currentProgram, mismatches_only=args.mismatches_only, skip_unknown=args.skip_unknown)
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

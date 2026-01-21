#!/usr/bin/env python3
# Calling Convention Analysis Tool
# Analyzes functions to detect likely calling conventions based on register/stack usage patterns.
#
# Usage (PyGhidra headless):
#   python analyze_calling_conventions.py <project_dir> <project_name> <program_name> [--address 0xADDRESS]
#
# Examples:
#   # Analyze all functions and generate report
#   python analyze_calling_conventions.py ./projects NocturneEdit nocedit.exe
#
#   # Analyze a specific function
#   python analyze_calling_conventions.py ./projects NocturneEdit nocedit.exe --address 0x00488230
#
#@author NearlyTRex
#@category Annotations

import os
import sys
import json
import argparse
from collections import defaultdict

# Calling conventions and their characteristics
CONVENTIONS = {
    '__watcallRegister': {
        'description': 'Watcom register convention: EAX, EDX, EBX, ECX then stack',
        'input_regs': ['EAX', 'EDX', 'EBX', 'ECX'],
        'output_reg': 'EAX',
        'stack_params': True,  # After registers exhausted
        'preserved': ['ESP', 'EBX', 'ESI', 'EDI', 'EBP'],
    },
    '__watcallStack': {
        'description': 'Watcom stack convention: all params on stack',
        'input_regs': [],
        'output_reg': 'EAX',
        'stack_params': True,
        'preserved': ['ESP', 'EBX', 'ESI', 'EDI', 'EBP'],
    },
    '__cdecl': {
        'description': 'C declaration: stack params, caller cleans',
        'input_regs': [],
        'output_reg': 'EAX',
        'stack_params': True,
        'preserved': ['ESP', 'EBX', 'ESI', 'EDI', 'EBP'],
    },
    '__stack_esi': {
        'description': 'Hybrid: 1 stack param + ESI input, returns EAX',
        'input_regs': ['ESI'],
        'output_reg': 'EAX',
        'stack_params': True,
        'preserved': ['ESP', 'EBX', 'EDI', 'EBP'],
    },
    '__stack2_esi': {
        'description': 'Hybrid: 2 stack params + ESI input, returns EAX',
        'input_regs': ['ESI'],
        'output_reg': 'EAX',
        'stack_params': True,
        'preserved': ['ESP', 'EBX', 'EDI', 'EBP'],
    },
    '__stack3_esi': {
        'description': 'Hybrid: 3 stack params + ESI input, returns EAX',
        'input_regs': ['ESI'],
        'output_reg': 'EAX',
        'stack_params': True,
        'preserved': ['ESP', 'EBX', 'EDI', 'EBP'],
    },
    '__stack_esi_edi': {
        'description': 'Hybrid: 1 stack param + ESI + EDI inputs, returns EAX',
        'input_regs': ['ESI', 'EDI'],
        'output_reg': 'EAX',
        'stack_params': True,
        'preserved': ['ESP', 'EBX', 'EBP'],
    },
    '__stack2_esi_edi': {
        'description': 'Hybrid: 2 stack params + ESI + EDI inputs, returns EAX',
        'input_regs': ['ESI', 'EDI'],
        'output_reg': 'EAX',
        'stack_params': True,
        'preserved': ['ESP', 'EBX', 'EBP'],
    },
    '__fpureg': {
        'description': 'FPU register: ST0 input, ST0 output',
        'input_regs': ['ST0'],
        'output_reg': 'ST0',
        'stack_params': False,
        'preserved': ['ESP', 'EBX', 'ESI', 'EDI', 'EBP'],
    },
    '__fpustack': {
        'description': 'FPU stack: ST0+ST1 input, ST0 output',
        'input_regs': ['ST0', 'ST1'],
        'output_reg': 'ST0',
        'stack_params': False,
        'preserved': ['ESP', 'EBX', 'ESI', 'EDI', 'EBP'],
    },
}


def analyze_function_patterns(program, func):
    """Analyze a function's instruction patterns to detect calling convention hints.

    Returns a dict with detected patterns.
    """
    listing = program.getListing()
    body = func.getBody()

    patterns = {
        # Register reads before writes (potential input params)
        'early_reg_reads': set(),
        # Registers written early (not inputs)
        'early_reg_writes': set(),
        # Registers saved to local vars (strong indicator of input param)
        'regs_saved_to_local': set(),
        # Registers pushed in prologue (callee-saved, not inputs)
        'prologue_pushed_regs': set(),
        # Stack parameter access patterns
        'stack_param_offsets': set(),
        # Return value patterns
        'return_reg': None,
        'returns_eax': False,
        'returns_edx_eax': False,
        'returns_st0': False,
        # FPU usage
        'uses_fpu': False,
        'fpu_single_operand': False,  # FRNDINT, FSQRT, etc.
        'fpu_two_operand': False,     # FPATAN, FYL2X, etc.
        'fpu_returns_via_st0': False, # True if function returns float via ST0
        'fpu_stores_to_memory': False, # True if FPU results stored to memory before RET
        # Instruction details
        'instruction_count': 0,
        'first_instructions': [],
        'last_instructions': [],
        'ret_instruction': None,
        # Prologue detection
        'prologue_end': 0,
        # Frame type
        'uses_ebp_frame': False,  # True if function uses MOV EBP, ESP
        'stack_alloc_size': 0,    # Size of SUB ESP, X in prologue
    }

    # Track register state: None = unknown, 'read' = read first, 'written' = written first
    reg_state = {}
    important_regs = ['EAX', 'EBX', 'ECX', 'EDX', 'ESI', 'EDI']
    # Note: EBP excluded - it's almost always frame pointer, not a param

    instructions = []
    inst_iter = listing.getInstructions(body, True)

    # First pass: detect prologue (sequence of PUSH at start)
    in_prologue = True
    prologue_end_idx = 0

    for inst in inst_iter:
        mnemonic = inst.getMnemonicString().upper()
        instructions.append(inst)
        patterns['instruction_count'] += 1
        idx = patterns['instruction_count'] - 1

        # Detect prologue end
        if in_prologue:
            if mnemonic == 'PUSH':
                op = str(inst.getDefaultOperandRepresentation(0)).upper()
                # Track registers pushed in prologue (callee-saved)
                for reg in important_regs + ['EBP']:
                    if op == reg:
                        patterns['prologue_pushed_regs'].add(reg)
            elif mnemonic in ['MOV', 'SUB', 'AND'] and idx < 10:
                # Frame setup instructions are still prologue
                # MOV EBP, ESP / SUB ESP, X / AND ESP, X
                op0 = str(inst.getDefaultOperandRepresentation(0)).upper()
                if 'EBP' in op0 or 'ESP' in op0:
                    # Detect EBP frame setup: MOV EBP, ESP
                    if mnemonic == 'MOV' and 'EBP' in op0:
                        op1 = str(inst.getDefaultOperandRepresentation(1)).upper()
                        if 'ESP' in op1:
                            patterns['uses_ebp_frame'] = True
                    # Detect stack allocation: SUB ESP, X
                    if mnemonic == 'SUB' and 'ESP' in op0:
                        op1 = str(inst.getDefaultOperandRepresentation(1)).upper()
                        try:
                            if op1.startswith('0X'):
                                patterns['stack_alloc_size'] = int(op1, 16)
                            else:
                                patterns['stack_alloc_size'] = int(op1)
                        except:
                            pass
                    pass  # Still in prologue
                else:
                    in_prologue = False
                    prologue_end_idx = idx
            else:
                in_prologue = False
                prologue_end_idx = idx

    patterns['prologue_end'] = prologue_end_idx

    # Second pass: analyze register usage AFTER prologue
    for idx, inst in enumerate(instructions):
        mnemonic = inst.getMnemonicString().upper()
        num_operands = inst.getNumOperands()

        # Skip prologue for input detection
        if idx < prologue_end_idx:
            continue

        # Analyze register usage in first ~30 instructions after prologue
        if idx <= prologue_end_idx + 30:
            # Check for register being saved to local variable (strong input signal)
            # Pattern: MOV [ESP+X], REG or MOV [EBP-X], REG
            if mnemonic == 'MOV' and num_operands == 2:
                dest = str(inst.getDefaultOperandRepresentation(0)).upper()
                src = str(inst.getDefaultOperandRepresentation(1)).upper()

                # Check if saving a register to stack local
                if ('[ESP' in dest or '[EBP' in dest) and '-' not in dest:
                    for reg in important_regs:
                        if src == reg and reg not in patterns['prologue_pushed_regs']:
                            # Register saved to local = likely input param
                            patterns['regs_saved_to_local'].add(reg)
                            if reg not in reg_state:
                                reg_state[reg] = 'read'
                                patterns['early_reg_reads'].add(reg)

            # Check for register reads/writes
            for i in range(num_operands):
                op_str = str(inst.getDefaultOperandRepresentation(i)).upper()

                # Check if operand is a register (direct, not in memory ref)
                for reg in important_regs:
                    # Skip if register is inside a memory reference like [ESI+4]
                    if '[' in op_str and reg in op_str:
                        # Register used as base/index in memory access = read
                        if reg not in reg_state and reg not in patterns['prologue_pushed_regs']:
                            reg_state[reg] = 'read'
                            patterns['early_reg_reads'].add(reg)
                        continue

                    if op_str == reg:
                        # Determine if read or write based on instruction and operand position
                        is_write = False
                        is_read = False

                        # Common write patterns (destination is operand 0)
                        if mnemonic in ['MOV', 'LEA', 'XOR', 'SUB', 'ADD', 'AND', 'OR', 'SHL', 'SHR', 'IMUL', 'MUL']:
                            if i == 0:
                                is_write = True
                                # XOR reg, reg and SUB reg, reg - zeroing pattern
                                if mnemonic in ['XOR', 'SUB'] and num_operands == 2:
                                    op1 = str(inst.getDefaultOperandRepresentation(1)).upper()
                                    if op1 == reg:
                                        # XOR EAX, EAX is zeroing, not reading input
                                        is_read = False
                                        is_write = True
                            else:
                                is_read = True
                        elif mnemonic in ['PUSH', 'TEST', 'CMP']:
                            is_read = True
                        elif mnemonic == 'POP':
                            is_write = True
                        elif mnemonic in ['INC', 'DEC', 'NEG', 'NOT']:
                            is_read = True
                            is_write = True
                        elif mnemonic == 'CALL':
                            # Registers before CALL might be params to that call, not this function
                            pass

                        # Track first read/write (skip prologue-pushed regs)
                        if reg not in reg_state and reg not in patterns['prologue_pushed_regs']:
                            if is_read and not is_write:
                                reg_state[reg] = 'read'
                                patterns['early_reg_reads'].add(reg)
                            elif is_write and not is_read:
                                reg_state[reg] = 'written'
                                patterns['early_reg_writes'].add(reg)

        # Detect stack parameter access
        # For EBP-framed functions: params are at [EBP + 0x8+] (after saved EBP and return addr)
        # For ESP-framed functions: params are past the local allocation area
        for i in range(num_operands):
            op_str = str(inst.getDefaultOperandRepresentation(i)).upper()
            if '+' in op_str and ('[ESP' in op_str or '[EBP' in op_str):
                try:
                    # Parse patterns like [ESP + 0x4] or [EBP + 0x8]
                    parts = op_str.replace('[', '').replace(']', '').split('+')
                    if len(parts) >= 2:
                        offset_str = parts[-1].strip()
                        if offset_str.startswith('0X'):
                            offset = int(offset_str, 16)
                        else:
                            offset = int(offset_str)

                        if patterns['uses_ebp_frame']:
                            # EBP-framed: only [EBP + 0x8+] are params
                            # [EBP + 0] = saved EBP, [EBP + 4] = return addr
                            if 'EBP' in op_str and 'ESP' not in op_str and offset >= 0x8:
                                patterns['stack_param_offsets'].add(offset)
                        else:
                            # ESP-framed: params are past the local allocation
                            # Minimum param offset = stack_alloc + pushed_regs*4 + return_addr(4)
                            pushed_count = len(patterns.get('prologue_pushed_regs', set()))
                            min_param_offset = patterns['stack_alloc_size'] + (pushed_count * 4) + 4
                            if 'ESP' in op_str and offset >= min_param_offset:
                                patterns['stack_param_offsets'].add(offset)
                except:
                    pass

        # FPU instruction detection
        if mnemonic.startswith('F'):
            patterns['uses_fpu'] = True
            # Single-operand FPU (ST0 -> ST0)
            if mnemonic in ['FRNDINT', 'FSQRT', 'FABS', 'FCHS', 'FSIN', 'FCOS', 'FPTAN']:
                patterns['fpu_single_operand'] = True
            # Two-operand FPU (ST0, ST1 -> ST0)
            if mnemonic in ['FPATAN', 'FPREM', 'FPREM1', 'FYL2X', 'FYL2XP1', 'FSCALE']:
                patterns['fpu_two_operand'] = True
            # Track if FPU stores to memory (FSTP/FISTP with memory operand)
            if mnemonic in ['FSTP', 'FISTP', 'FIST', 'FST']:
                op0 = str(inst.getDefaultOperandRepresentation(0)).upper()
                # If storing to memory (not ST register), mark it
                if not op0.startswith('ST'):
                    patterns['fpu_stores_to_memory'] = True

        # Detect return instruction
        if mnemonic == 'RET' or mnemonic == 'RETN':
            patterns['ret_instruction'] = inst

    # Store first and last instructions for analysis
    if instructions:
        patterns['first_instructions'] = [str(i) for i in instructions[:10]]
        patterns['last_instructions'] = [str(i) for i in instructions[-10:]]

    # Analyze FPU return pattern: check last FPU instruction before RET
    # If last FPU instruction is FSTP to memory, function stores result, doesn't return via ST0
    # If last FPU instruction leaves value on stack (FLD, FADD, etc.), returns via ST0
    if patterns['uses_fpu']:
        last_fpu_before_ret = None
        in_epilogue = False
        for inst in reversed(instructions):
            mnemonic = inst.getMnemonicString().upper()
            # Skip epilogue (RET, POP, MOV ESP, etc.)
            if mnemonic in ['RET', 'RETN']:
                in_epilogue = True
                continue
            if in_epilogue and mnemonic in ['POP', 'LEAVE']:
                continue
            if in_epilogue and mnemonic == 'MOV':
                op0 = str(inst.getDefaultOperandRepresentation(0)).upper()
                if 'ESP' in op0:
                    continue
            # Found non-epilogue instruction
            if mnemonic.startswith('F'):
                last_fpu_before_ret = inst
                break
            # If we hit a non-FPU instruction that's not epilogue, stop looking
            in_epilogue = False

        if last_fpu_before_ret:
            last_fpu_mnemonic = last_fpu_before_ret.getMnemonicString().upper()
            last_fpu_op0 = str(last_fpu_before_ret.getDefaultOperandRepresentation(0)).upper()
            # FSTP/FISTP to memory = storing result, not returning via ST0
            if last_fpu_mnemonic in ['FSTP', 'FISTP', 'FIST', 'FST'] and not last_fpu_op0.startswith('ST'):
                patterns['fpu_returns_via_st0'] = False
            # FLD, calculations, etc. leave value on stack = returning via ST0
            elif last_fpu_mnemonic in ['FLD', 'FILD', 'FLD1', 'FLDZ', 'FLDPI', 'FLDL2E', 'FLDL2T', 'FLDLG2', 'FLDLN2',
                                        'FADD', 'FADDP', 'FSUB', 'FSUBP', 'FSUBR', 'FSUBRP',
                                        'FMUL', 'FMULP', 'FDIV', 'FDIVP', 'FDIVR', 'FDIVRP',
                                        'FSQRT', 'FABS', 'FCHS', 'FRNDINT', 'FSIN', 'FCOS']:
                patterns['fpu_returns_via_st0'] = True

    # Analyze return value pattern from last few instructions before RET
    if len(instructions) >= 3:
        # Look at instructions before RET
        for inst in reversed(instructions[-10:]):
            mnemonic = inst.getMnemonicString().upper()
            if mnemonic in ['RET', 'RETN']:
                continue

            # Check for ESI return pattern
            if mnemonic == 'MOV':
                dest = str(inst.getDefaultOperandRepresentation(0)).upper()
                if 'ESI' in dest:
                    # Something moved into ESI near return - might be setting return
                    pass

            # Check what's in EAX/ESI before return
            if mnemonic == 'POP':
                op = str(inst.getDefaultOperandRepresentation(0)).upper()
                if 'ESI' in op:
                    # ESI restored from stack - likely preserved, check if it's also return
                    pass

    # Determine likely return register
    # Hybrid ESI conventions (stack_esi, stack2_esi, stack_esi_edi) all return via EAX
    # FPU conventions return via ST0 only if function actually returns via FPU
    # Everything else returns via EAX
    if patterns['fpu_returns_via_st0']:
        patterns['returns_st0'] = True
        patterns['return_reg'] = 'ST0'
    else:
        patterns['returns_eax'] = True
        patterns['return_reg'] = 'EAX'

    return patterns


def suggest_convention(patterns, current_convention):
    """Suggest the most likely calling convention based on detected patterns."""
    suggestions = []
    confidence_scores = defaultdict(int)

    early_reads = patterns['early_reg_reads']
    saved_to_local = patterns.get('regs_saved_to_local', set())
    prologue_pushed = patterns.get('prologue_pushed_regs', set())
    stack_offsets = patterns['stack_param_offsets']

    # Registers saved to local vars are strong input signals
    # Registers just pushed in prologue are callee-saved, not inputs
    likely_inputs = saved_to_local | (early_reads - prologue_pushed)

    # Count stack params based on detected offsets
    # Stack params are typically at consecutive 4-byte aligned offsets
    stack_param_count = len(stack_offsets)

    # Check for __stack_esi / __stack2_esi / __stack3_esi / __stack_esi_edi patterns
    # Strong signal: ESI saved to local variable
    if 'ESI' in saved_to_local:
        if 'EDI' in saved_to_local:
            # ESI + EDI + stack params
            if stack_param_count >= 2:
                confidence_scores['__stack2_esi_edi'] += 40
                suggestions.append(('__stack2_esi_edi', 'ESI+EDI inputs + 2 stack params, returns EAX'))
            else:
                confidence_scores['__stack_esi_edi'] += 40
                suggestions.append(('__stack_esi_edi', 'ESI and EDI saved to local vars, returns EAX'))
        else:
            # ESI + stack params (no EDI)
            if stack_param_count >= 3:
                confidence_scores['__stack3_esi'] += 40
                suggestions.append(('__stack3_esi', 'ESI input + 3 stack params, returns EAX'))
            elif stack_param_count >= 2:
                confidence_scores['__stack2_esi'] += 40
                suggestions.append(('__stack2_esi', 'ESI input + 2 stack params, returns EAX'))
            else:
                confidence_scores['__stack_esi'] += 40
                suggestions.append(('__stack_esi', 'ESI input + 1 stack param, returns EAX'))
    # Weaker signal: ESI read early but not pushed in prologue
    elif 'ESI' in likely_inputs and stack_offsets:
        if 'EDI' in likely_inputs:
            if stack_param_count >= 2:
                confidence_scores['__stack2_esi_edi'] += 25
                suggestions.append(('__stack2_esi_edi', 'ESI+EDI inputs + %d stack params, returns EAX' % stack_param_count))
            else:
                confidence_scores['__stack_esi_edi'] += 25
                suggestions.append(('__stack_esi_edi', 'ESI and EDI used as inputs + stack params, returns EAX'))
        else:
            if stack_param_count >= 3:
                confidence_scores['__stack3_esi'] += 25
                suggestions.append(('__stack3_esi', 'ESI input + %d stack params, returns EAX' % stack_param_count))
            elif stack_param_count >= 2:
                confidence_scores['__stack2_esi'] += 25
                suggestions.append(('__stack2_esi', 'ESI input + 2 stack params, returns EAX'))
            else:
                confidence_scores['__stack_esi'] += 25
                suggestions.append(('__stack_esi', 'ESI input + stack params, returns EAX'))

    # Check for __watcallRegister pattern
    watcall_regs = {'EAX', 'EDX', 'EBX', 'ECX'}
    watcall_inputs = likely_inputs & watcall_regs
    if len(watcall_inputs) >= 2:
        confidence_scores['__watcallRegister'] += 20
        suggestions.append(('__watcallRegister', 'Multiple watcall regs as inputs: %s' % watcall_inputs))

    # Check for FPU conventions - only suggest if function actually returns via ST0
    # Many functions use FPU internally but return void or via EAX
    if patterns['fpu_returns_via_st0']:
        if patterns['fpu_two_operand']:
            confidence_scores['__fpustack'] += 35
            suggestions.append(('__fpustack', 'Returns float via ST0, uses two-operand FPU'))
        elif patterns['fpu_single_operand']:
            confidence_scores['__fpureg'] += 35
            suggestions.append(('__fpureg', 'Returns float via ST0, uses single-operand FPU'))
        else:
            confidence_scores['__fpureg'] += 30
            suggestions.append(('__fpureg', 'Returns float via ST0'))

    # Check for pure stack conventions
    if not early_reads and stack_offsets:
        confidence_scores['__cdecl'] += 15
        confidence_scores['__watcallStack'] += 15
        suggestions.append(('__cdecl/__watcallStack', 'No register inputs, only stack params'))

    # Determine best suggestion
    if confidence_scores:
        best = max(confidence_scores.items(), key=lambda x: x[1])
        return {
            'suggested': best[0],
            'confidence': best[1],
            'all_scores': dict(confidence_scores),
            'reasons': suggestions,
        }

    return {
        'suggested': None,
        'confidence': 0,
        'all_scores': {},
        'reasons': [('unknown', 'No clear pattern detected')],
    }


def analyze_single_function(program, address):
    """Analyze a single function at the given address."""
    from ghidra.program.model.address import AddressFactory

    addr_factory = program.getAddressFactory()
    addr = addr_factory.getAddress(hex(address))

    fm = program.getFunctionManager()
    func = fm.getFunctionAt(addr)

    if not func:
        # Try to get function containing this address
        func = fm.getFunctionContaining(addr)

    if not func:
        print("ERROR: No function found at address 0x%x" % address)
        return None

    print("\n" + "=" * 80)
    print("FUNCTION ANALYSIS: %s" % func.getName())
    print("Address: %s" % func.getEntryPoint())
    print("=" * 80)

    # Current convention
    current = func.getCallingConventionName()
    print("\nCurrent calling convention: %s" % current)

    # Analyze patterns
    patterns = analyze_function_patterns(program, func)

    print("\n--- Register Usage Analysis ---")
    print("Prologue-pushed (callee-saved): %s" % (patterns.get('prologue_pushed_regs') or 'none'))
    print("Saved to local var (INPUT):     %s" % (patterns.get('regs_saved_to_local') or 'none'))
    print("Read before write (after prol): %s" % (patterns['early_reg_reads'] or 'none'))
    print("Written first:                  %s" % (patterns['early_reg_writes'] or 'none'))

    print("\n--- Stack Parameter Access ---")
    print("Frame type: %s" % ('EBP-framed' if patterns['uses_ebp_frame'] else 'ESP-framed'))
    if not patterns['uses_ebp_frame']:
        pushed_count = len(patterns.get('prologue_pushed_regs', set()))
        min_param = patterns['stack_alloc_size'] + (pushed_count * 4) + 4
        print("Stack allocation: 0x%x (SUB ESP)" % patterns['stack_alloc_size'])
        print("Min param offset: 0x%x (alloc + %d pushes + ret)" % (min_param, pushed_count))
    if patterns['stack_param_offsets']:
        print("Stack param offsets: %s" % sorted(patterns['stack_param_offsets']))
    else:
        print("No stack parameter access detected")

    print("\n--- FPU Usage ---")
    print("Uses FPU: %s" % patterns['uses_fpu'])
    if patterns['uses_fpu']:
        print("Single-operand FPU (ST0->ST0): %s" % patterns['fpu_single_operand'])
        print("Two-operand FPU (ST0,ST1->ST0): %s" % patterns['fpu_two_operand'])
        print("Stores FPU results to memory: %s" % patterns['fpu_stores_to_memory'])
        print("Returns via ST0: %s" % patterns['fpu_returns_via_st0'])

    print("\n--- Return Value ---")
    print("Likely return register: %s" % patterns['return_reg'])

    print("\n--- First 10 Instructions ---")
    for inst in patterns['first_instructions'][:10]:
        print("  %s" % inst)

    print("\n--- Last 10 Instructions ---")
    for inst in patterns['last_instructions'][-10:]:
        print("  %s" % inst)

    # Suggest convention
    suggestion = suggest_convention(patterns, current)

    print("\n--- Convention Suggestion ---")
    if suggestion['suggested']:
        print("Suggested: %s (confidence: %d)" % (suggestion['suggested'], suggestion['confidence']))
        print("Reasons:")
        for conv, reason in suggestion['reasons']:
            print("  - %s: %s" % (conv, reason))

        if suggestion['suggested'] != current:
            print("\n*** MISMATCH: Current is '%s', suggested is '%s' ***" % (current, suggestion['suggested']))
    else:
        print("No strong suggestion - patterns unclear")

    return {
        'name': func.getName(),
        'address': str(func.getEntryPoint()),
        'current_convention': current,
        'patterns': {
            'prologue_pushed_regs': list(patterns.get('prologue_pushed_regs', set())),
            'regs_saved_to_local': list(patterns.get('regs_saved_to_local', set())),
            'early_reg_reads': list(patterns['early_reg_reads']),
            'early_reg_writes': list(patterns['early_reg_writes']),
            'uses_ebp_frame': patterns['uses_ebp_frame'],
            'stack_alloc_size': patterns['stack_alloc_size'],
            'stack_param_offsets': list(patterns['stack_param_offsets']),
            'uses_fpu': patterns['uses_fpu'],
            'fpu_single_operand': patterns['fpu_single_operand'],
            'fpu_two_operand': patterns['fpu_two_operand'],
            'fpu_returns_via_st0': patterns['fpu_returns_via_st0'],
            'fpu_stores_to_memory': patterns['fpu_stores_to_memory'],
            'return_reg': patterns['return_reg'],
            'instruction_count': patterns['instruction_count'],
        },
        'suggestion': suggestion,
    }


def analyze_all_functions(program, mismatches_only=False):
    """Analyze all functions and generate a report."""
    print("=" * 100)
    print("CALLING CONVENTION ANALYSIS REPORT")
    if mismatches_only:
        print("(Showing mismatches only)")
    print("=" * 100)

    fm = program.getFunctionManager()
    results = []

    # Count functions
    total = sum(1 for _ in fm.getFunctions(True))
    print("\nAnalyzing %d functions..." % total)

    # Analyze each function
    mismatches = []
    convention_counts = defaultdict(int)
    suggestion_counts = defaultdict(int)

    for i, func in enumerate(fm.getFunctions(True)):
        if i % 500 == 0:
            print("  Progress: %d/%d" % (i, total))

        patterns = analyze_function_patterns(program, func)
        current = func.getCallingConventionName()
        suggestion = suggest_convention(patterns, current)

        convention_counts[current] += 1
        if suggestion['suggested']:
            suggestion_counts[suggestion['suggested']] += 1

        result = {
            'name': func.getName(),
            'address': str(func.getEntryPoint()),
            'current_convention': current,
            'suggested_convention': suggestion['suggested'],
            'confidence': suggestion['confidence'],
            'regs_saved_to_local': list(patterns.get('regs_saved_to_local', set())),
            'prologue_pushed_regs': list(patterns.get('prologue_pushed_regs', set())),
            'early_reg_reads': list(patterns['early_reg_reads']),
            'uses_ebp_frame': patterns['uses_ebp_frame'],
            'stack_alloc_size': patterns['stack_alloc_size'],
            'stack_param_offsets': list(patterns['stack_param_offsets']),
            'uses_fpu': patterns['uses_fpu'],
            'fpu_returns_via_st0': patterns['fpu_returns_via_st0'],
        }
        results.append(result)

        # Track mismatches with high confidence
        if suggestion['suggested'] and suggestion['suggested'] != current and suggestion['confidence'] >= 25:
            mismatches.append({
                'name': func.getName(),
                'address': str(func.getEntryPoint()),
                'current': current,
                'suggested': suggestion['suggested'],
                'confidence': suggestion['confidence'],
                'reasons': suggestion['reasons'],
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
    print("HIGH-CONFIDENCE MISMATCHES (confidence >= 25)")
    print("=" * 100)

    # Group by suggested convention
    by_suggestion = defaultdict(list)
    for m in mismatches:
        by_suggestion[m['suggested']].append(m)

    for suggested, funcs in sorted(by_suggestion.items(), key=lambda x: -len(x[1])):
        print("\n--- Likely %s (%d functions) ---" % (suggested, len(funcs)))
        for f in sorted(funcs, key=lambda x: -x['confidence'])[:20]:
            print("  %s (%s) - current: %s, confidence: %d" % (
                f['name'], f['address'], f['current'], f['confidence']))
            for conv, reason in f['reasons']:
                if conv == suggested or suggested in conv:
                    print("    -> %s" % reason)
        if len(funcs) > 20:
            print("  ... and %d more" % (len(funcs) - 20))

    # Save report
    program_path = program.getExecutablePath()
    project_location = str(program.getDomainFile().getProjectLocator().getProjectDir())
    repo_root = os.path.dirname(os.path.dirname(project_location))
    reports_dir = os.path.join(repo_root, 'annotations', 'nocedit.exe', 'reports')
    if not os.path.exists(reports_dir):
        os.makedirs(reports_dir)

    json_path = os.path.join(reports_dir, 'calling_convention_analysis.json')
    try:
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
        description="Analyze functions to detect likely calling conventions",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  # Analyze all functions
  %(prog)s ./projects NocturneEdit nocedit.exe

  # Analyze a specific function
  %(prog)s ./projects NocturneEdit nocedit.exe --address 0x00488230
"""
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--address", "-a", help="Specific function address to analyze (hex, e.g., 0x00488230)")
    parser.add_argument("--mismatches-only", "-m", action="store_true", help="Only show functions where suggested convention differs from current")
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
                # Parse address
                addr_str = args.address
                if addr_str.startswith('0x') or addr_str.startswith('0X'):
                    address = int(addr_str, 16)
                else:
                    address = int(addr_str)
                analyze_single_function(currentProgram, address)
            else:
                analyze_all_functions(currentProgram, mismatches_only=args.mismatches_only)
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

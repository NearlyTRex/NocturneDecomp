# CRT Function Analysis Tool
# Identifies potential issues with CRT function definitions (return types, calling conventions, params)
#
# Run with: analyzeHeadless <project_dir> <project_name> -process <program> -postScript analyze_crt_functions.py

import os
import json
import re
from collections import defaultdict

from ghidra.program.model.symbol import SourceType
from ghidra.program.model.listing import Function
from ghidra.app.decompiler import DecompInterface, DecompileOptions

# CRT address range for this binary
# Actual CRT code starts at 0x5fd990 (crt_stdio.c_fread) and ends around 0x611000
CRT_START = 0x005fd990
CRT_END = 0x00611000

# Known good signatures for common CRT functions
# Based on actual assembly analysis of the Nocturne binary
#
# Storage notation:
#   - Register params: EAX, EDX, EBX, ECX (Watcom register convention order)
#   - Stack params: Stack[0x4], Stack[0x8], Stack[0xc], etc. (after return address)
#     For doubles on stack: Stack[0x4]:8 means 8-byte double at offset 0x4
#   - FPU params: ST0, ST1 (FPU stack)
#   - Return: EAX (32-bit), EDX:EAX (64-bit), ST0 (FPU)
#
KNOWN_CRT_SIGNATURES = {
    # Math functions - Pure FPU register based (ST0 in, ST0 out)
    # These use FRNDINT/FSQRT/etc directly on ST0
    'round': {
        'return': 'double',
        'return_storage': 'ST0',
        'params': [('double', 'ST0')],
        'convention': '__fpureg',
        'notes': 'Pure FPU: FRNDINT on ST0, returns ST0'
    },

    # Math functions - Software FP (stack params, EDX:EAX return)
    # These take double on stack (starting at 0x4 after return addr), return double in EDX:EAX
    'floor': {
        'return': 'double',
        'return_storage': 'EDX:EAX',
        'params': [('double', 'Stack[0x4]:8')],
        'convention': '__softfp_double',
        'notes': 'Stack param at 0x4 (8 bytes), returns EDX:EAX'
    },
    'ceil': {
        'return': 'double',
        'return_storage': 'EDX:EAX',
        'params': [('double', 'Stack[0x4]:8')],
        'convention': '__softfp_double',
        'notes': 'Stack param at 0x4 (8 bytes), returns EDX:EAX'
    },
    'modf': {
        'return': 'double',
        'return_storage': 'EDX:EAX',
        'params': [('double', 'Stack[0x4]:8'), ('double *', 'Stack[0xc]:4')],
        'convention': '__softfp_double',
        'notes': 'double at Stack[0x4]:8, ptr at Stack[0xc]:4, returns EDX:EAX'
    },
    'exp': {
        'return': 'double',
        'return_storage': 'EDX:EAX',
        'params': [('double', 'Stack[0x4]:8')],
        'convention': '__softfp_double',
        'notes': 'Stack param at 0x4 (8 bytes), returns EDX:EAX'
    },
    'pow': {
        'return': 'double',
        'return_storage': 'EDX:EAX',
        'params': [('double', 'Stack[0x4]:8'), ('double', 'Stack[0xc]:8')],
        'convention': '__softfp_double',
        'notes': 'base at Stack[0x4]:8, exp at Stack[0xc]:8, returns EDX:EAX'
    },
    'atan2': {
        'return': 'double',
        'return_storage': 'EDX:EAX',
        'params': [('double', 'Stack[0x4]:8'), ('double', 'Stack[0xc]:8')],
        'convention': '__softfp_double',
        'notes': 'y at Stack[0x4]:8, x at Stack[0xc]:8, returns EDX:EAX'
    },

    # These may use __fpureg - need verification
    'sqrt': {
        'return': 'double',
        'return_storage': 'ST0',
        'params': [('double', 'ST0')],
        'convention': '__fpureg',
        'notes': 'Verify: likely FSQRT on ST0'
    },
    'sin': {
        'return': 'double',
        'return_storage': 'ST0',
        'params': [('double', 'ST0')],
        'convention': '__fpureg',
        'notes': 'Verify: likely FSIN on ST0'
    },
    'cos': {
        'return': 'double',
        'return_storage': 'ST0',
        'params': [('double', 'ST0')],
        'convention': '__fpureg',
        'notes': 'Verify: likely FCOS on ST0'
    },
    'tan': {
        'return': 'double',
        'return_storage': 'ST0',
        'params': [('double', 'ST0')],
        'convention': '__fpureg',
        'notes': 'Verify: likely FPTAN on ST0'
    },
    'atan': {
        'return': 'double',
        'return_storage': 'ST0',
        'params': [('double', 'ST0')],
        'convention': '__fpureg',
        'notes': 'Verify: likely FPU based'
    },
    'log': {
        'return': 'double',
        'return_storage': 'ST0',
        'params': [('double', 'ST0')],
        'convention': '__fpureg',
        'notes': 'Verify: likely FYL2X based'
    },
    'log10': {
        'return': 'double',
        'return_storage': 'ST0',
        'params': [('double', 'ST0')],
        'convention': '__fpureg',
        'notes': 'Verify: likely FYL2X based'
    },
    'fabs': {
        'return': 'double',
        'return_storage': 'ST0',
        'params': [('double', 'ST0')],
        'convention': '__fpureg',
        'notes': 'Verify: likely FABS on ST0'
    },
    'fmod': {
        'return': 'double',
        'return_storage': 'ST0',
        'params': [('double', 'ST0'), ('double', 'ST1')],
        'convention': '__fpureg',
        'notes': 'Verify: likely FPREM on ST0/ST1'
    },

    # String functions - typically __watcallRegister or __cdecl
    'strlen': {
        'return': 'size_t',
        'return_storage': 'EAX',
        'params': [('char *', 'EAX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=str'
    },
    'strcpy': {
        'return': 'char *',
        'return_storage': 'EAX',
        'params': [('char *', 'EAX'), ('char *', 'EDX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=dst, EDX=src'
    },
    'strncpy': {
        'return': 'char *',
        'return_storage': 'EAX',
        'params': [('char *', 'EAX'), ('char *', 'EDX'), ('size_t', 'EBX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=dst, EDX=src, EBX=n'
    },
    'strcmp': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('char *', 'EAX'), ('char *', 'EDX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=s1, EDX=s2'
    },
    'strncmp': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('char *', 'EAX'), ('char *', 'EDX'), ('size_t', 'EBX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=s1, EDX=s2, EBX=n'
    },
    'strcat': {
        'return': 'char *',
        'return_storage': 'EAX',
        'params': [('char *', 'EAX'), ('char *', 'EDX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=dst, EDX=src'
    },
    'strchr': {
        'return': 'char *',
        'return_storage': 'EAX',
        'params': [('char *', 'EAX'), ('int', 'EDX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=str, EDX=c'
    },
    'strrchr': {
        'return': 'char *',
        'return_storage': 'EAX',
        'params': [('char *', 'EAX'), ('int', 'EDX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=str, EDX=c'
    },
    'strstr': {
        'return': 'char *',
        'return_storage': 'EAX',
        'params': [('char *', 'EAX'), ('char *', 'EDX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=haystack, EDX=needle'
    },
    'sprintf': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4'), ('...', 'Stack[0xc]:*')],
        'convention': '__cdecl',
        'notes': 'Varargs on stack starting at 0x4'
    },
    'sscanf': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4'), ('...', 'Stack[0xc]:*')],
        'convention': '__cdecl',
        'notes': 'Varargs on stack starting at 0x4'
    },

    # Memory functions
    'memcpy': {
        'return': 'void *',
        'return_storage': 'EAX',
        'params': [('void *', 'EAX'), ('void *', 'EDX'), ('size_t', 'EBX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=dst, EDX=src, EBX=n'
    },
    'memmove': {
        'return': 'void *',
        'return_storage': 'EAX',
        'params': [('void *', 'EAX'), ('void *', 'EDX'), ('size_t', 'EBX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=dst, EDX=src, EBX=n'
    },
    'memset': {
        'return': 'void *',
        'return_storage': 'EAX',
        'params': [('void *', 'EAX'), ('int', 'EDX'), ('size_t', 'EBX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=dst, EDX=c, EBX=n'
    },
    'memcmp': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('void *', 'EAX'), ('void *', 'EDX'), ('size_t', 'EBX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=s1, EDX=s2, EBX=n'
    },

    # Allocation
    'malloc': {
        'return': 'void *',
        'return_storage': 'EAX',
        'params': [('size_t', 'EAX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=size'
    },
    'calloc': {
        'return': 'void *',
        'return_storage': 'EAX',
        'params': [('size_t', 'EAX'), ('size_t', 'EDX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=nmemb, EDX=size'
    },
    'realloc': {
        'return': 'void *',
        'return_storage': 'EAX',
        'params': [('void *', 'EAX'), ('size_t', 'EDX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=ptr, EDX=size'
    },
    'free': {
        'return': 'void',
        'return_storage': 'none',
        'params': [('void *', 'EAX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=ptr'
    },

    # File I/O
    'fopen': {
        'return': 'FILE *',
        'return_storage': 'EAX',
        'params': [('char *', 'EAX'), ('char *', 'EDX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=path, EDX=mode'
    },
    'fclose': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('FILE *', 'EAX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=stream'
    },
    'fread': {
        'return': 'size_t',
        'return_storage': 'EAX',
        'params': [('void *', 'EAX'), ('size_t', 'EDX'), ('size_t', 'EBX'), ('FILE *', 'ECX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=ptr, EDX=size, EBX=nmemb, ECX=stream'
    },
    'fwrite': {
        'return': 'size_t',
        'return_storage': 'EAX',
        'params': [('void *', 'EAX'), ('size_t', 'EDX'), ('size_t', 'EBX'), ('FILE *', 'ECX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=ptr, EDX=size, EBX=nmemb, ECX=stream'
    },
    'fseek': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('FILE *', 'EAX'), ('long', 'EDX'), ('int', 'EBX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=stream, EDX=offset, EBX=whence'
    },
    'ftell': {
        'return': 'long',
        'return_storage': 'EAX',
        'params': [('FILE *', 'EAX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=stream'
    },
    'fgets': {
        'return': 'char *',
        'return_storage': 'EAX',
        'params': [('char *', 'EAX'), ('int', 'EDX'), ('FILE *', 'EBX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=str, EDX=n, EBX=stream'
    },
    'fputs': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('char *', 'EAX'), ('FILE *', 'EDX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=str, EDX=stream'
    },
    'fprintf': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('FILE *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4'), ('...', 'Stack[0xc]:*')],
        'convention': '__cdecl',
        'notes': 'Varargs on stack starting at 0x4'
    },
    'fscanf': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('FILE *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4'), ('...', 'Stack[0xc]:*')],
        'convention': '__cdecl',
        'notes': 'Varargs on stack starting at 0x4'
    },

    # Conversion
    'atoi': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('char *', 'EAX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=str'
    },
    'atol': {
        'return': 'long',
        'return_storage': 'EAX',
        'params': [('char *', 'EAX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=str'
    },
    'atof': {
        'return': 'double',
        'return_storage': 'ST0',
        'params': [('char *', 'EAX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=str, returns ST0'
    },
    'strtol': {
        'return': 'long',
        'return_storage': 'EAX',
        'params': [('char *', 'EAX'), ('char **', 'EDX'), ('int', 'EBX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=str, EDX=endptr, EBX=base'
    },
    'strtoul': {
        'return': 'unsigned long',
        'return_storage': 'EAX',
        'params': [('char *', 'EAX'), ('char **', 'EDX'), ('int', 'EBX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=str, EDX=endptr, EBX=base'
    },
    'strtod': {
        'return': 'double',
        'return_storage': 'ST0',
        'params': [('char *', 'EAX'), ('char **', 'EDX')],
        'convention': '__watcallRegister',
        'notes': 'EAX=str, EDX=endptr, returns ST0'
    },
}

# Suspect patterns in decompiled code that indicate wrong definitions
SUSPECT_INDICATORS = {
    'extraout_': 'Wrong calling convention - register marked as output but should be preserved',
    'in_EAX': 'Missing parameter - EAX used as input but not declared',
    'in_EDX': 'Missing parameter - EDX used as input but not declared',
    'in_EBX': 'Missing parameter - EBX used as input but not declared',
    'in_ECX': 'Missing parameter - ECX used as input but not declared',
    'in_ST0': 'Missing FPU parameter - ST0 used as input but not declared',
    'in_ST1': 'Missing FPU parameter - ST1 used as input but not declared',
    'unaff_': 'Wrong calling convention - register should be marked as killed',
    'CONCAT': 'Wrong return type - likely should be double (EDX:EAX or ST0)',
    'SUB84': 'Wrong return type - extracting from 64-bit return',
    'SUB42': 'Wrong return type - extracting from 64-bit return',
    'BADSPACEBASE': 'Stack frame confusion - wrong stackshift or extrapop',
    'float10': 'FPU type issue - may need __fpureg convention',
    'in_stack_': 'Stack parameter issue - wrong parameter definition',
}


def get_function_at(program, addr):
    """Get function at address."""
    fm = program.getFunctionManager()
    return fm.getFunctionAt(addr)


def analyze_function_assembly(program, func):
    """Analyze function assembly to detect actual calling convention.

    Returns a dict with detected patterns that hint at the convention.
    """
    listing = program.getListing()
    body = func.getBody()

    patterns = {
        'uses_fpu_input': False,      # Takes input from ST0
        'uses_fpu_output': False,     # Returns via ST0
        'uses_stack_double_param': False,  # Double passed on stack
        'uses_edx_eax_return': False,  # Returns 64-bit in EDX:EAX
        'uses_frndint': False,         # round-to-integer instruction
        'uses_fsqrt': False,           # square root
        'uses_fsin_fcos': False,       # trig functions
        'uses_fyl2x': False,           # log functions
        'modifies_eax_before_ret': False,  # Sets EAX before return
        'first_instruction': '',
        'last_instructions': [],
        'fpu_instructions': [],
    }

    instructions = []
    inst_iter = listing.getInstructions(body, True)
    for inst in inst_iter:
        mnemonic = inst.getMnemonicString().upper()
        instructions.append(mnemonic)

        # FPU input patterns
        if mnemonic in ['FRNDINT', 'FSQRT', 'FABS', 'FCHS', 'FSIN', 'FCOS', 'FPTAN', 'FPATAN']:
            patterns['uses_fpu_input'] = True
            patterns['uses_fpu_output'] = True
            patterns['fpu_instructions'].append(mnemonic)

        if mnemonic == 'FRNDINT':
            patterns['uses_frndint'] = True
        if mnemonic == 'FSQRT':
            patterns['uses_fsqrt'] = True
        if mnemonic in ['FSIN', 'FCOS', 'FPTAN', 'FPATAN']:
            patterns['uses_fsin_fcos'] = True
        if mnemonic in ['FYL2X', 'FYL2XP1']:
            patterns['uses_fyl2x'] = True

    # Check if first instruction accesses stack param (typical for __softfp_double)
    if instructions:
        patterns['first_instruction'] = instructions[0]
        patterns['last_instructions'] = instructions[-5:] if len(instructions) >= 5 else instructions

    # Detect EDX:EAX return pattern (MOV EAX/EDX from local before RET)
    # This is a heuristic - look for MOV EAX and MOV EDX near end
    if len(instructions) >= 3:
        last_few = ' '.join(instructions[-6:])
        if 'MOV' in last_few:
            # Could be EDX:EAX return - flag for manual review
            patterns['modifies_eax_before_ret'] = True

    return patterns


def is_crt_function(func):
    """Check if function is in CRT address range."""
    addr = func.getEntryPoint().getOffset()
    return CRT_START <= addr <= CRT_END


def extract_base_name(func_name):
    """Extract base function name from decorated name."""
    # Remove common prefixes/suffixes
    name = func_name

    # Remove file prefix like "crt_math.c_"
    if '_FUN_' in name:
        parts = name.split('_FUN_')
        name = parts[0].split('_')[-1]  # Get last part before _FUN_

    # Handle names like "crt_math.c_round_FUN_005fe6b0"
    match = re.search(r'\.c_(\w+)_FUN_', func_name)
    if match:
        return match.group(1)

    match = re.search(r'\.cpp_(\w+)_FUN_', func_name)
    if match:
        return match.group(1)

    # Handle simple thunk names
    if name.startswith('_'):
        name = name[1:]

    return name.lower()


def analyze_decompiled_code(decompiled_code):
    """Analyze decompiled code for suspect patterns."""
    issues = []

    for pattern, description in SUSPECT_INDICATORS.items():
        if pattern in decompiled_code:
            # Count occurrences
            count = decompiled_code.count(pattern)
            issues.append({
                'pattern': pattern,
                'count': count,
                'description': description
            })

    return issues


def get_function_info(program, func, decompiler):
    """Get detailed info about a function."""
    info = {
        'name': func.getName(),
        'address': str(func.getEntryPoint()),
        'base_name': extract_base_name(func.getName()),
        'return_type': str(func.getReturnType()),
        'calling_convention': func.getCallingConventionName(),
        'param_count': func.getParameterCount(),
        'parameters': [],
        'issues': [],
        'decompile_issues': [],
        'known_signature': None,
        'signature_match': None,
        'asm_patterns': None,
        'suggested_convention': None,
    }

    # Get parameters
    for param in func.getParameters():
        info['parameters'].append({
            'name': param.getName(),
            'type': str(param.getDataType()),
            'storage': str(param.getVariableStorage())
        })

    # Analyze assembly patterns
    asm_patterns = analyze_function_assembly(program, func)
    info['asm_patterns'] = asm_patterns

    # Suggest convention based on assembly analysis
    if asm_patterns['uses_frndint'] and info['calling_convention'] != '__fpureg':
        info['suggested_convention'] = '__fpureg'
        info['issues'].append('Assembly uses FRNDINT (ST0->ST0), should be __fpureg')
    elif asm_patterns['uses_fsqrt'] and info['calling_convention'] != '__fpureg':
        info['suggested_convention'] = '__fpureg'
        info['issues'].append('Assembly uses FSQRT (ST0->ST0), should be __fpureg')
    elif asm_patterns['uses_fsin_fcos'] and info['calling_convention'] != '__fpureg':
        info['suggested_convention'] = '__fpureg'
        info['issues'].append('Assembly uses FSIN/FCOS (ST0->ST0), should be __fpureg')
    elif asm_patterns['modifies_eax_before_ret'] and not asm_patterns['uses_fpu_output']:
        # Likely returns via EAX or EDX:EAX
        if 'double' in info['return_type'].lower() or 'float10' in info['return_type'].lower():
            if info['calling_convention'] in ['__fpureg', '__fpureg_safe']:
                info['suggested_convention'] = '__softfp_double'
                info['issues'].append('Returns double but modifies EAX/EDX before RET - likely __softfp_double')

    # Check against known signatures
    base_name = info['base_name']
    if base_name in KNOWN_CRT_SIGNATURES:
        known = KNOWN_CRT_SIGNATURES[base_name]
        info['known_signature'] = known

        # Check return type
        if known['return'] == 'double' and 'double' not in info['return_type'].lower():
            if 'float10' not in info['return_type'].lower():
                info['issues'].append('Return type mismatch: expected %s, got %s' % (known['return'], info['return_type']))

        # Check calling convention
        if info['calling_convention'] != known['convention']:
            info['issues'].append('Convention mismatch: expected %s, got %s' % (known['convention'], info['calling_convention']))

        # Check param count (rough check, varargs complicate this)
        expected_params = len([p for p in known['params'] if p[0] != '...'])
        if info['param_count'] != expected_params and not any(p[0] == '...' for p in known['params']):
            info['issues'].append('Param count mismatch: expected %d, got %d' % (expected_params, info['param_count']))

        info['signature_match'] = len(info['issues']) == 0

    # Decompile and check for issues
    try:
        results = decompiler.decompileFunction(func, 30, None)
        if results and results.decompileCompleted():
            decomp_func = results.getDecompiledFunction()
            if decomp_func:
                code = decomp_func.getC()
                info['decompile_issues'] = analyze_decompiled_code(code)
    except Exception as e:
        info['decompile_issues'].append({'pattern': 'ERROR', 'count': 1, 'description': str(e)})

    return info


def format_expected_signature(known):
    """Format expected signature with storage info."""
    params_str = ', '.join(['%s %s' % (p[0], p[1]) for p in known['params']])
    return '%s %s(%s) -> %s' % (known['return'], known['convention'], params_str, known['return_storage'])


def analyze_crt_functions(program):
    """Analyze all CRT functions and generate report."""
    # Build output lines for both console and file
    output_lines = []

    def log(msg=""):
        print(msg)
        output_lines.append(msg)

    log("=" * 100)
    log("CRT FUNCTION ANALYSIS REPORT")
    log("=" * 100)

    # Set up decompiler
    decompiler = DecompInterface()
    decompiler.setOptions(DecompileOptions())
    decompiler.openProgram(program)

    fm = program.getFunctionManager()
    crt_functions = []

    # Collect CRT functions
    log("\nCollecting CRT functions...")
    for func in fm.getFunctions(True):
        if is_crt_function(func):
            crt_functions.append(func)

    log("Found %d CRT functions" % len(crt_functions))

    # Analyze each function
    log("\nAnalyzing functions...")
    results = []
    for i, func in enumerate(crt_functions):
        if i % 50 == 0:
            print("  Progress: %d/%d" % (i, len(crt_functions)))  # Only to console
        info = get_function_info(program, func, decompiler)
        results.append(info)

    # Generate reports
    log("\n" + "=" * 100)
    log("FUNCTIONS WITH KNOWN SIGNATURE MISMATCHES")
    log("=" * 100)

    mismatched = [r for r in results if r['known_signature'] and not r['signature_match']]
    for info in sorted(mismatched, key=lambda x: x['base_name']):
        log("\n%s (%s)" % (info['name'], info['address']))
        log("  Base name: %s" % info['base_name'])
        current_params = ', '.join(['%s %s' % (p['type'], p['storage']) for p in info['parameters']])
        log("  Current:  %s %s(%s)" % (info['return_type'], info['calling_convention'], current_params))
        known = info['known_signature']
        log("  Expected: %s" % format_expected_signature(known))
        log("  Notes: %s" % known['notes'])
        for issue in info['issues']:
            log("  -> %s" % issue)

    log("\n" + "=" * 100)
    log("FUNCTIONS WITH DECOMPILATION ISSUES (sorted by issue count)")
    log("=" * 100)

    # Sort by total decompile issues
    with_issues = [r for r in results if r['decompile_issues']]
    with_issues.sort(key=lambda x: sum(i['count'] for i in x['decompile_issues']), reverse=True)

    for info in with_issues[:50]:  # Top 50
        total_issues = sum(i['count'] for i in info['decompile_issues'])
        log("\n%s (%s) - %d issues" % (info['name'], info['address'], total_issues))
        log("  Convention: %s, Return: %s, Params: %d" % (
            info['calling_convention'], info['return_type'], info['param_count']))
        for issue in info['decompile_issues']:
            log("    %s: %d (%s)" % (issue['pattern'], issue['count'], issue['description']))

    log("\n" + "=" * 100)
    log("ISSUE PATTERN SUMMARY")
    log("=" * 100)

    pattern_counts = defaultdict(int)
    pattern_funcs = defaultdict(list)
    for info in results:
        for issue in info['decompile_issues']:
            pattern_counts[issue['pattern']] += issue['count']
            pattern_funcs[issue['pattern']].append(info['name'])

    for pattern, count in sorted(pattern_counts.items(), key=lambda x: -x[1]):
        log("  %-20s %5d occurrences in %3d functions" % (pattern, count, len(pattern_funcs[pattern])))

    log("\n" + "=" * 100)
    log("CALLING CONVENTION DISTRIBUTION")
    log("=" * 100)

    conv_counts = defaultdict(int)
    for info in results:
        conv_counts[info['calling_convention']] += 1

    for conv, count in sorted(conv_counts.items(), key=lambda x: -x[1]):
        log("  %-25s %d functions" % (conv, count))

    log("\n" + "=" * 100)
    log("RETURN TYPE DISTRIBUTION")
    log("=" * 100)

    ret_counts = defaultdict(int)
    for info in results:
        ret_counts[info['return_type']] += 1

    for ret, count in sorted(ret_counts.items(), key=lambda x: -x[1]):
        log("  %-25s %d functions" % (ret, count))

    log("\n" + "=" * 100)
    log("SUGGESTED CONVENTION FIXES (based on assembly analysis)")
    log("=" * 100)

    suggested_fixes = [r for r in results if r['suggested_convention']]
    for info in sorted(suggested_fixes, key=lambda x: x['base_name']):
        log("\n%s (%s)" % (info['name'], info['address']))
        log("  Current:   %s" % info['calling_convention'])
        log("  Suggested: %s" % info['suggested_convention'])
        if info['asm_patterns'] and info['asm_patterns']['fpu_instructions']:
            log("  FPU ops:   %s" % ', '.join(info['asm_patterns']['fpu_instructions']))
        for issue in info['issues']:
            log("  -> %s" % issue)

    log("\n" + "=" * 100)
    log("FPU INSTRUCTION USAGE IN CRT")
    log("=" * 100)

    fpu_usage = defaultdict(list)
    for info in results:
        if info['asm_patterns'] and info['asm_patterns']['fpu_instructions']:
            for fpu_inst in info['asm_patterns']['fpu_instructions']:
                fpu_usage[fpu_inst].append(info['name'])

    for inst, funcs in sorted(fpu_usage.items()):
        log("\n  %s (%d functions):" % (inst, len(funcs)))
        for f in funcs[:10]:  # Show first 10
            log("    - %s" % f)
        if len(funcs) > 10:
            log("    ... and %d more" % (len(funcs) - 10))

    log("\n" + "=" * 100)
    log("ANALYSIS COMPLETE")
    log("=" * 100)

    # Determine output directory - use program's location as base
    program_path = program.getExecutablePath()
    # Program path is like /nocedit.exe, we need the project directory
    # Get project location from program's domain file
    project_location = str(program.getDomainFile().getProjectLocator().getProjectDir())
    # Go up from projects/NocturneEdit.rep to the repo root
    repo_root = os.path.dirname(os.path.dirname(project_location))
    annotations_dir = os.path.join(repo_root, 'annotations', 'nocedit.exe')

    # Save text report
    txt_report_path = os.path.join(annotations_dir, 'crt_analysis_report.txt')
    try:
        with open(txt_report_path, 'w') as f:
            f.write('\n'.join(output_lines))
        log("\nText report saved to: %s" % txt_report_path)
    except Exception as e:
        log("\nFailed to save text report: %s" % str(e))

    # Save detailed JSON report
    json_report_path = os.path.join(annotations_dir, 'crt_analysis.json')
    try:
        # Convert asm_patterns for JSON serialization (remove non-serializable items)
        json_results = []
        for info in results:
            json_info = dict(info)
            if json_info.get('asm_patterns'):
                json_info['asm_patterns'] = {
                    'uses_frndint': info['asm_patterns']['uses_frndint'],
                    'uses_fsqrt': info['asm_patterns']['uses_fsqrt'],
                    'uses_fsin_fcos': info['asm_patterns']['uses_fsin_fcos'],
                    'uses_fyl2x': info['asm_patterns']['uses_fyl2x'],
                    'fpu_instructions': info['asm_patterns']['fpu_instructions'],
                    'modifies_eax_before_ret': info['asm_patterns']['modifies_eax_before_ret'],
                }
            # Convert known_signature params to serializable format
            if json_info.get('known_signature'):
                ks = json_info['known_signature']
                json_info['known_signature'] = {
                    'return': ks['return'],
                    'return_storage': ks['return_storage'],
                    'params': [{'type': p[0], 'storage': p[1]} for p in ks['params']],
                    'convention': ks['convention'],
                    'notes': ks['notes'],
                }
            json_results.append(json_info)

        with open(json_report_path, 'w') as f:
            json.dump({
                'summary': {
                    'total_functions': len(results),
                    'with_known_signatures': len([r for r in results if r['known_signature']]),
                    'signature_mismatches': len(mismatched),
                    'with_decompile_issues': len(with_issues),
                    'pattern_counts': dict(pattern_counts),
                    'convention_counts': dict(conv_counts),
                    'return_type_counts': dict(ret_counts),
                },
                'functions': json_results
            }, f, indent=2)
        log("JSON report saved to: %s" % json_report_path)
    except Exception as e:
        log("Failed to save JSON report: %s" % str(e))

    decompiler.dispose()
    return results


# Main execution
if __name__ == "__main__" or "currentProgram" in dir():
    analyze_crt_functions(currentProgram)

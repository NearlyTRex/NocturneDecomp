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
# NOTE: This binary uses a MIX of calling conventions:
#   - Many CRT functions use __cdecl (stack params) instead of __watcallRegister
#   - FPU math functions use __fpustack, __fpureg, or __softfp_double
#   - Only include entries here for functions where we have verified the convention
#
# Storage notation:
#   - Register params: EAX, EDX, EBX, ECX (Watcom register convention order)
#   - Stack params: Stack[0x4], Stack[0x8], Stack[0xc], etc. (after return address)
#     For doubles on stack: Stack[0x4]:8 means 8-byte double at offset 0x4
#   - FPU params: ST0, ST1 (FPU stack)
#   - Return: EAX (32-bit), EDX:EAX (64-bit), ST0 (FPU)
#
# NOTE: Functions with multiple variants use distinct names (e.g., fclose vs fclose_force)
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
        'notes': 'Verified: value at Stack[0x4]:8, integer_part ptr at Stack[0xc]:4. POPs result to EAX then EDX before RET. __softfp_double is correct.'
    },
    'exp': {
        'return': 'float10',
        'return_storage': 'ST0',
        'params': [('float10', 'ST0')],
        'convention': '__fpureg',
        'notes': 'Verified: Pure FPU - input ST0, uses FRNDINT/F2XM1/FSCALE, returns ST0'
    },
    'pow': {
        'return': 'float10',
        'return_storage': 'ST0',
        'params': [('float10', 'ST0'), ('float10', 'ST1')],
        'convention': '__fpustack',
        'notes': 'Pure FPU: base in ST0, exp in ST1, uses FYL2X, returns ST0'
    },
    'atan2': {
        'return': 'float10',
        'return_storage': 'ST0',
        'params': [('float10', 'ST0'), ('float10', 'ST1')],
        'convention': '__fpustack',
        'notes': 'Pure FPU: FPATAN on ST0/ST1, returns ST0 (y in ST0, x in ST1)'
    },

    # These may use __fpureg - need verification
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

    # String functions - this binary uses __cdecl (stack params) for these
    'strlen': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack param, returns EAX'
    },
    'strcpy': {
        'return': 'char *',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack params'
    },
    'strncpy': {
        'return': 'char *',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4'), ('size_t', 'Stack[0xc]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack params'
    },
    'strstr': {
        'return': 'char *',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack params'
    },
    'strchr': {
        'return': 'char *',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('int', 'Stack[0x8]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack params'
    },
    'sprintf': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4'), ('...', 'Stack[0xc]:*')],
        'convention': '__cdecl',
        'notes': 'Varargs on stack'
    },
    'sscanf': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4'), ('...', 'Stack[0xc]:*')],
        'convention': '__cdecl',
        'notes': 'Varargs on stack'
    },

    # Memory functions - this binary uses __cdecl (stack params) for these
    'memcpy': {
        'return': 'void *',
        'return_storage': 'EAX',
        'params': [('void *', 'Stack[0x4]:4'), ('void *', 'Stack[0x8]:4'), ('size_t', 'Stack[0xc]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack params'
    },
    'memset': {
        'return': 'void *',
        'return_storage': 'EAX',
        'params': [('void *', 'Stack[0x4]:4'), ('int', 'Stack[0x8]:4'), ('size_t', 'Stack[0xc]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack params'
    },

    # Allocation - this binary uses __cdecl (stack params) for these
    'malloc': {
        'return': 'void *',
        'return_storage': 'EAX',
        'params': [('size_t', 'Stack[0x4]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack param'
    },
    'calloc': {
        'return': 'void *',
        'return_storage': 'EAX',
        'params': [('size_t', 'Stack[0x4]:4'), ('size_t', 'Stack[0x8]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack params'
    },
    'realloc': {
        'return': 'void *',
        'return_storage': 'EAX',
        'params': [('void *', 'Stack[0x4]:4'), ('size_t', 'Stack[0x8]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack params'
    },
    'free': {
        'return': 'void',
        'return_storage': 'none',
        'params': [('void *', 'Stack[0x4]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack param'
    },

    # File I/O - this binary uses __cdecl (stack params) for these
    'fopen': {
        'return': 'FILE *',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack params'
    },
    'fread': {
        'return': 'size_t',
        'return_storage': 'EAX',
        'params': [('void *', 'Stack[0x4]:4'), ('size_t', 'Stack[0x8]:4'), ('size_t', 'Stack[0xc]:4'), ('FILE *', 'Stack[0x10]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack params'
    },
    'fseek': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('FILE *', 'Stack[0x4]:4'), ('long', 'Stack[0x8]:4'), ('int', 'Stack[0xc]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack params'
    },
    'fputs': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('FILE *', 'Stack[0x8]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack params'
    },
    'fprintf': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('FILE *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4'), ('...', 'Stack[0xc]:*')],
        'convention': '__cdecl',
        'notes': 'Varargs on stack'
    },
    'fscanf': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('FILE *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4'), ('...', 'Stack[0xc]:*')],
        'convention': '__cdecl',
        'notes': 'Varargs on stack'
    },

    # Conversion - this binary uses __cdecl (stack params) for these
    'strtol': {
        'return': 'long',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('char **', 'Stack[0x8]:4'), ('int', 'Stack[0xc]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack params'
    },
    'strtoul': {
        'return': 'unsigned long',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('char **', 'Stack[0x8]:4'), ('int', 'Stack[0xc]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Stack params'
    },
    'strtod': {
        'return': 'double',
        'return_storage': 'EDX:EAX',
        'params': [('char *', 'Stack[0x4]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Single stack param (no endptr), returns EDX:EAX'
    },

    # 64-bit math helper functions - register-based convention
    'UDivMod64': {
        'return': 'ulonglong',
        'return_storage': 'EDX:EAX',
        'params': [('ulonglong', 'EDX:EAX'), ('ulonglong', 'ECX:EBX')],
        'convention': '__watcallRegister',
        'notes': 'Verified: dividend in EDX:EAX, divisor in ECX:EBX, returns quotient in EDX:EAX, remainder in ECX:EBX'
    },

    # Software FPU division - stack params, ST0 return
    'fdiv': {
        'return': 'float10',
        'return_storage': 'ST0',
        'params': [('float10', 'ST0'), ('float10', 'ST1')],
        'convention': '__fpustack',
        'notes': 'Verified: Callers use FSTP to spill ST0/ST1 to stack before CALL. Function reads from stack internally but convention is __fpustack from caller perspective.'
    },

    # Software FPU multiply - register convention
    'dmul': {
        'return': 'double',
        'return_storage': 'EDX:EAX',
        'params': [('double', 'EDX:EAX'), ('double', 'ECX:EBX')],
        'convention': '__watcallRegister',
        'notes': 'Verified: first double in EDX:EAX, second in ECX:EBX, returns EDX:EAX'
    },

    # Software FPU add - register convention
    'dadd': {
        'return': 'double',
        'return_storage': 'EDX:EAX',
        'params': [('double', 'EDX:EAX'), ('double', 'ECX:EBX')],
        'convention': '__watcallRegister',
        'notes': 'Verified: first double in EDX:EAX, second in ECX:EBX, returns EDX:EAX'
    },

    # Software FPU divide - register convention (with Pentium FDIV bug workaround)
    'ddiv': {
        'return': 'double',
        'return_storage': 'EDX:EAX',
        'params': [('double', 'EDX:EAX'), ('double', 'ECX:EBX')],
        'convention': '__watcallRegister',
        'notes': 'Verified: dividend in EDX:EAX, divisor in ECX:EBX, returns EDX:EAX. Has Pentium FDIV bug workaround.'
    },

    # Software FPU compare - register convention
    'dcmp': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('double', 'EDX:EAX'), ('double', 'ECX:EBX')],
        'convention': '__watcallRegister',
        'notes': 'Verified: compares EDX:EAX with ECX:EBX, returns -1/0/1 in EAX'
    },

    # sqrt - pure FPU register
    'sqrt': {
        'return': 'float10',
        'return_storage': 'ST0',
        'params': [('float10', 'ST0')],
        'convention': '__fpureg',
        'notes': 'Verified: Pure FPU - input ST0, uses FSQRT, returns ST0'
    },

    # integer_power - mixed FPU/register convention
    # Better name: pow_integer or fpow_int
    'integer_power': {
        'return': 'float10',
        'return_storage': 'ST0',
        'params': [('float10', 'ST0'), ('ushort', 'AX')],
        'convention': '__fpureg',
        'notes': 'Verified: base in ST0, exponent in AX, returns ST0. Suggest rename to pow_integer'
    },

    # ldexp - stack params, returns EDX:EAX
    'ldexp': {
        'return': 'double',
        'return_storage': 'EDX:EAX',
        'params': [('double', 'Stack[0x4]:8'), ('int', 'Stack[0xc]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: double x at Stack[0x4], int exp at Stack[0xc], returns EDX:EAX'
    },

    # handle_math_error - internal math error handler
    # Uses __mathinternal - accesses params from caller's stack frame via EBP
    'handle_math_error': {
        'return': 'double',
        'return_storage': 'EDX:EAX',
        'params': [],
        'convention': '__mathinternal',
        'notes': 'Verified: Tail-call helper that accesses caller stack via EBP+0x8 (value) and EBP+0x10 (error_type). No explicit PUSHes at call sites. Returns EDX:EAX.'
    },

    # asin - FPU stack based
    'asin': {
        'return': 'float10',
        'return_storage': 'ST0',
        'params': [('float10', 'ST0')],
        'convention': '__fpustack',
        'notes': 'Verified: input in ST0, calls sqrt and atan2, returns ST0'
    },

    # acos - FPU stack based
    'acos': {
        'return': 'float10',
        'return_storage': 'ST0',
        'params': [('float10', 'ST0')],
        'convention': '__fpustack',
        'notes': 'Verified: input in ST0, calls sqrt and atan2, returns ST0'
    },

    # Additional stdlib functions
    'atoi': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: reads [ESP+0x8] after PUSH EBX, returns EAX'
    },
    'rand': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [],
        'convention': '__cdecl',
        'notes': 'Verified: no params, returns random int in EAX'
    },
    'srand': {
        'return': 'void',
        'return_storage': 'none',
        'params': [('uint', 'Stack[0x4]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: seed at Stack[0x4]'
    },
    'qsort': {
        'return': 'void',
        'return_storage': 'none',
        'params': [('void *', 'Stack[0x4]:4'), ('size_t', 'Stack[0x8]:4'), ('size_t', 'Stack[0xc]:4'), ('int (*)(void *, void *)', 'Stack[0x10]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: stack params base, num, size, compar'
    },
    'strcmp': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: stack params, returns <0, 0, >0 in EAX'
    },
    'fwrite': {
        'return': 'size_t',
        'return_storage': 'EAX',
        'params': [('void *', 'Stack[0x4]:4'), ('size_t', 'Stack[0x8]:4'), ('size_t', 'Stack[0xc]:4'), ('FILE *', 'Stack[0x10]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: stack params ptr, size, count, file'
    },
    'tolower': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('int', 'Stack[0x4]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: reads [ESP+0x4] directly, returns int in EAX'
    },
    'toupper': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('int', 'Stack[0x4]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: reads [ESP+0x4] directly, returns int in EAX'
    },
    'memmove': {
        'return': 'void *',
        'return_storage': 'EAX',
        'params': [('void *', 'Stack[0x4]:4'), ('void *', 'Stack[0x8]:4'), ('size_t', 'Stack[0xc]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: stack params dest, src, n'
    },
    'fgetc': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('FILE *', 'Stack[0x4]:4')],
        'convention': '__cdecl',
        'notes': 'Standard fgetc - 1 param (stream), returns char or EOF in EAX'
    },
    'fgetc_outptr': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('FILE *', 'Stack[0x4]:4'), ('uchar *', 'Stack[0x8]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Internal version with 2 params - stream and output_byte pointer. Call sites show 2 PUSHes + ADD ESP,0x8'
    },
    'fgets': {
        'return': 'char *',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('int', 'Stack[0x8]:4'), ('FILE *', 'Stack[0xc]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: stack params str, num, stream'
    },
    'ftell': {
        'return': 'long',
        'return_storage': 'EAX',
        'params': [('FILE *', 'Stack[0x4]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: stack param file_handle, returns position in EAX'
    },
    'fclose': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('FILE *', 'Stack[0x4]:4')],
        'convention': '__cdecl',
        'notes': 'Standard fclose - 1 param (stream)'
    },
    'fclose_force': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('FILE *', 'Stack[0x4]:4'), ('int', 'Stack[0x8]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Internal version with 2 params - file_handle and force_close_flag. Call sites show 2 PUSHes + ADD ESP,0x8'
    },
    'fflush': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('FILE *', 'Stack[0x4]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: stack param stream'
    },
    'fputc': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('int', 'Stack[0x4]:4'), ('FILE *', 'Stack[0x8]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: stack params character, file'
    },
    'vsprintf': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4'), ('va_list', 'Stack[0xc]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: stack params buffer, format, args'
    },
    'vsscanf': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4'), ('va_list', 'Stack[0xc]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: stack params str, format, args'
    },
    'double_to_float': {
        'return': 'float',
        'return_storage': 'EAX',
        'params': [('double', 'EDX:EAX')],
        'convention': '__watcallRegister',
        'notes': 'Verified: double in EDX:EAX, returns float in EAX. Suggest rename: doubleToFloat'
    },
    'mul64': {
        'return': 'ulonglong',
        'return_storage': 'EDX:EAX',
        'params': [('ulonglong', 'EDX:EAX'), ('ulonglong', 'ECX:EBX')],
        'convention': '__watcallRegister',
        'notes': 'Verified: two 64-bit values in EDX:EAX and ECX:EBX, returns EDX:EAX. Suggest rename: multiply64'
    },
    'strnicmp': {
        'return': 'int',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4'), ('size_t', 'Stack[0xc]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: stack params str1, str2, count. Suggest rename: strncasecmp'
    },
    'strtok': {
        'return': 'char *',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: stack params str, delimiters'
    },
    'atexit': {
        'return': 'void',
        'return_storage': 'none',
        'params': [('void *', 'Stack[0x4]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Watcom-specific - takes destructor node pointer, not function pointer'
    },
    'splitpath': {
        'return': 'void',
        'return_storage': 'none',
        'params': [('char *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4'), ('char *', 'Stack[0xc]:4'), ('char *', 'Stack[0x10]:4'), ('char *', 'Stack[0x14]:4')],
        'convention': '__cdecl',
        'notes': 'Standard _splitpath - 5 params: path, drive, dir, fname, ext'
    },
    'splitpath_s': {
        'return': 'void',
        'return_storage': 'none',
        'params': [('char *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4'), ('char *', 'Stack[0xc]:4'), ('char *', 'Stack[0x10]:4'), ('char *', 'Stack[0x14]:4'), ('char *', 'Stack[0x18]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: Internal 6-param version - path, buffer, drive, dir, fname, ext. Call site shows 6 PUSHes + ADD ESP,0x18'
    },
    'makepath': {
        'return': 'void',
        'return_storage': 'none',
        'params': [('char *', 'Stack[0x4]:4'), ('char *', 'Stack[0x8]:4'), ('char *', 'Stack[0xc]:4'), ('char *', 'Stack[0x10]:4'), ('char *', 'Stack[0x14]:4')],
        'convention': '__cdecl',
        'notes': 'Stack params: path, drive, dir, fname, ext'
    },
    'strupr': {
        'return': 'char *',
        'return_storage': 'EAX',
        'params': [('char *', 'Stack[0x4]:4')],
        'convention': '__cdecl',
        'notes': 'Verified: stack param str, returns str in EAX'
    },
    'localtime': {
        'return': 'struct tm *',
        'return_storage': 'EAX',
        'params': [('time_t *', 'Stack[0x4]:4')],
        'convention': '__cdecl',
        'notes': 'Stack param timer'
    },
    'sleep': {
        'return': 'void',
        'return_storage': 'none',
        'params': [('uint', 'Stack[0x4]:4')],
        'convention': '__cdecl',
        'notes': 'Stack param milliseconds'
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
        'uses_fpu_two_operand': False,  # Uses ST0 and ST1 (FPATAN, FPREM, etc.)
        'uses_stack_double_param': False,  # Double passed on stack
        'uses_edx_eax_return': False,  # Returns 64-bit in EDX:EAX
        'uses_frndint': False,         # round-to-integer instruction
        'uses_fsqrt': False,           # square root
        'uses_fsin_fcos': False,       # trig functions (single operand)
        'uses_fpatan': False,          # FPATAN/FPTAN (two operand)
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
        # Single-operand FPU instructions (ST0 -> ST0): __fpureg
        # Two-operand FPU instructions (ST0, ST1 -> ST0): __fpustack
        if mnemonic in ['FRNDINT', 'FSQRT', 'FABS', 'FCHS', 'FSIN', 'FCOS']:
            patterns['uses_fpu_input'] = True
            patterns['uses_fpu_output'] = True
            patterns['fpu_instructions'].append(mnemonic)
        # Two-operand FPU (FPATAN takes ST0/ST1, FPTAN produces ST0/ST1, FYL2X takes ST0/ST1)
        if mnemonic in ['FPATAN', 'FPTAN', 'FPREM', 'FPREM1', 'FYL2X', 'FYL2XP1']:
            patterns['uses_fpu_input'] = True
            patterns['uses_fpu_output'] = True
            patterns['uses_fpu_two_operand'] = True
            patterns['fpu_instructions'].append(mnemonic)

        if mnemonic == 'FRNDINT':
            patterns['uses_frndint'] = True
        if mnemonic == 'FSQRT':
            patterns['uses_fsqrt'] = True
        if mnemonic in ['FSIN', 'FCOS']:
            patterns['uses_fsin_fcos'] = True
        if mnemonic in ['FPATAN', 'FPTAN']:
            patterns['uses_fpatan'] = True
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
    # Two-operand FPU instructions (FPATAN, FYL2X, FPREM, etc.) -> __fpustack
    if asm_patterns['uses_fpatan'] and info['calling_convention'] != '__fpustack':
        info['suggested_convention'] = '__fpustack'
        info['issues'].append('Assembly uses FPATAN (ST0,ST1->ST0), should be __fpustack')
    elif asm_patterns['uses_fpu_two_operand'] and info['calling_convention'] != '__fpustack':
        info['suggested_convention'] = '__fpustack'
        info['issues'].append('Assembly uses two-operand FPU (ST0,ST1->ST0), should be __fpustack')
    # Single-operand FPU instructions -> __fpureg
    # BUT: don't suggest __fpureg if already __fpustack (which is also valid for single-op FPU)
    elif asm_patterns['uses_frndint'] and info['calling_convention'] not in ['__fpureg', '__fpustack']:
        info['suggested_convention'] = '__fpureg'
        info['issues'].append('Assembly uses FRNDINT (ST0->ST0), should be __fpureg')
    elif asm_patterns['uses_fsqrt'] and info['calling_convention'] not in ['__fpureg', '__fpustack']:
        info['suggested_convention'] = '__fpureg'
        info['issues'].append('Assembly uses FSQRT (ST0->ST0), should be __fpureg')
    elif asm_patterns['uses_fsin_fcos'] and info['calling_convention'] not in ['__fpureg', '__fpustack']:
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
                    'uses_fpatan': info['asm_patterns']['uses_fpatan'],
                    'uses_fpu_two_operand': info['asm_patterns']['uses_fpu_two_operand'],
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

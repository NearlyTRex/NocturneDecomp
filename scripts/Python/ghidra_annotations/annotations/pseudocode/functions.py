# Function-related utilities for pseudocode export
# Provides function analysis, cross-references, and metadata extraction

import os
import re
import json
import glob
from ghidra_annotations.util import resolve_data_type_name


def get_function_xrefs(currentProgram, function):
    """Get cross-references to a function's entry point.

    Args:
        currentProgram: The Ghidra program
        function: The function to analyze

    Returns:
        A list of dictionaries with xref info (name, addr, from_addr, type)
    """
    xrefs = []
    refs_to = currentProgram.getReferenceManager().getReferencesTo(function.getEntryPoint())
    referencing_functions = set()
    for ref in refs_to:
        from_addr = ref.getFromAddress()
        ref_function = currentProgram.getFunctionManager().getFunctionContaining(from_addr)
        if ref_function and ref_function != function:
            func_name = ref_function.getName()
            func_addr = str(ref_function.getEntryPoint())
            ref_type = str(ref.getReferenceType())
            if func_addr not in referencing_functions:
                referencing_functions.add(func_addr)
                xrefs.append({
                    'name': func_name,
                    'addr': func_addr,
                    'from_addr': str(from_addr),
                    'type': ref_type
                })
    xrefs.sort(key=lambda x: x['name'])
    return xrefs


def get_function_globals(currentProgram, function):
    """Get global variables referenced by a function.

    Args:
        currentProgram: The Ghidra program
        function: The function to analyze

    Returns:
        A list of dictionaries with global info (type, name, addr, value)
    """
    globals_refs = []
    seen_globals = set()
    function_body = function.getBody()
    listing = currentProgram.getListing()
    ref_manager = currentProgram.getReferenceManager()
    func_manager = currentProgram.getFunctionManager()
    symbol_table = currentProgram.getSymbolTable()

    # Iterate through instructions instead of every byte - MUCH faster
    for instr in listing.getInstructions(function_body, True):
        current_addr = instr.getAddress()
        refs = ref_manager.getReferencesFrom(current_addr)

        for ref in refs:
            to_addr = ref.getToAddress()
            to_addr_str = str(to_addr)

            # Skip already seen globals
            if to_addr_str in seen_globals:
                continue

            # Skip internal function addresses
            if function_body.contains(to_addr):
                continue

            # Skip function references (these are calls, not globals)
            if func_manager.getFunctionAt(to_addr):
                continue

            data = listing.getDefinedDataAt(to_addr)
            if data:
                data_type = data.getDataType()
                if data_type:
                    type_name = resolve_data_type_name(currentProgram, data_type)
                    symbol = symbol_table.getPrimarySymbol(to_addr)
                    if symbol:
                        global_name = symbol.getName()
                    else:
                        global_name = "DAT_%s" % to_addr_str.replace("0x", "").upper()

                    initializer_value = None
                    try:
                        if data.hasStringValue():
                            pass
                        elif data_type.getName() in ['undefined', 'undefined1', 'undefined2', 'undefined4', 'undefined8']:
                            pass
                        else:
                            value = data.getValue()
                            if value is not None:
                                initializer_value = str(value)
                    except:
                        pass
                    globals_refs.append({
                        'type': type_name,
                        'name': global_name,
                        'addr': to_addr_str,
                        'value': initializer_value
                    })
                    seen_globals.add(to_addr_str)

            else:
                symbol = symbol_table.getPrimarySymbol(to_addr)
                if symbol and not symbol.isExternal():
                    global_name = symbol.getName()
                    if (not global_name.startswith("FUN_") and
                        not global_name.startswith("LAB_") and
                        not global_name.startswith("LOOP_") and
                        not global_name.startswith("SWITCH_")):
                        globals_refs.append({
                            'type': 'undefined4',
                            'name': global_name,
                            'addr': to_addr_str,
                            'value': None
                        })
                        seen_globals.add(to_addr_str)

    globals_refs.sort(key=lambda x: int(x['addr'].replace("0x", ""), 16))
    return globals_refs


def get_function_calls(currentProgram, function):
    """Get functions called by this function.

    Args:
        currentProgram: The Ghidra program
        function: The function to analyze

    Returns:
        A list of dictionaries with called function info (name, addr, is_variadic)
    """
    function_calls = []
    seen_functions = set()
    function_name = function.getName()
    listing = currentProgram.getListing()
    ref_manager = currentProgram.getReferenceManager()
    func_manager = currentProgram.getFunctionManager()
    symbol_table = currentProgram.getSymbolTable()

    # Iterate through instructions instead of every byte - MUCH faster
    for instr in listing.getInstructions(function.getBody(), True):
        refs = ref_manager.getReferencesFrom(instr.getAddress())

        for ref in refs:
            ref_type = ref.getReferenceType()
            if not ref_type.isCall():
                continue

            to_addr = ref.getToAddress()
            target_function = func_manager.getFunctionAt(to_addr)

            if target_function:
                func_name = target_function.getName()
                if func_name != function_name and func_name not in seen_functions:
                    function_calls.append({
                        'name': func_name,
                        'addr': str(to_addr),
                        'is_variadic': target_function.hasVarArgs()
                    })
                    seen_functions.add(func_name)
            else:
                symbol = symbol_table.getPrimarySymbol(to_addr)
                if symbol and symbol.isExternal():
                    func_name = symbol.getName()
                    if func_name not in seen_functions:
                        function_calls.append({
                            'name': func_name,
                            'addr': str(to_addr),
                            'is_variadic': False  # Can't determine for externals
                        })
                        seen_functions.add(func_name)

    function_calls.sort(key=lambda x: x['name'].lower())
    return function_calls


def extract_virtual_filename(func_name):
    """Extract virtual filename from a function name for header generation.

    Args:
        func_name: The function name (e.g., "engine_2d.c_plotPixel_FUN_00401140")

    Returns:
        Virtual path like "engine/2d.h" or None if not extractable
    """
    if "FUN_" not in func_name:
        return None

    parts = func_name.split("_FUN_")
    if len(parts) < 2:
        return None

    prefix = parts[0]
    if ".cpp_" in prefix:
        path_part = prefix.split(".cpp_")[0]
        virtual_path = path_part.replace("_", "/") + ".h"
        return virtual_path
    elif ".c_" in prefix:
        path_part = prefix.split(".c_")[0]
        virtual_path = path_part.replace("_", "/") + ".h"
        return virtual_path
    elif "_cpp_" in prefix:
        path_part = prefix.split("_cpp_")[0]
        virtual_path = path_part.replace("_", "/") + ".h"
        return virtual_path
    elif "_c_" in prefix:
        path_part = prefix.split("_c_")[0]
        virtual_path = path_part.replace("_", "/") + ".h"
        return virtual_path
    elif "." in prefix:
        if ".cpp" in prefix or ".c" in prefix:
            for ext in [".cpp", ".c"]:
                if ext in prefix:
                    path_part = prefix.split(ext)[0]
                    virtual_path = path_part.replace("_", "/") + ".h"
                    return virtual_path
    return None


def extract_cpp_function_name(func_name):
    """Extract C++ style function name from Ghidra function name.

    Args:
        func_name: The Ghidra function name

    Returns:
        C++ style name like "ClassName::methodName" or the original name
    """
    if "FUN_" not in func_name:
        return func_name

    parts = func_name.split("_FUN_")
    if len(parts) < 2:
        return func_name

    prefix = parts[0]
    fun_address = parts[1]
    function_part = None
    if ".cpp_" in prefix:
        function_part = prefix.split(".cpp_", 1)[1]
    elif ".c_" in prefix:
        function_part = prefix.split(".c_", 1)[1]
    elif "_cpp_" in prefix:
        function_part = prefix.split("_cpp_", 1)[1]
    elif "_c_" in prefix:
        function_part = prefix.split("_c_", 1)[1]
    elif "." in prefix and (".cpp" in prefix or ".c" in prefix):
        return "FUN_%s" % fun_address
    else:
        return func_name

    if not function_part:
        return "FUN_%s" % fun_address

    function_parts = function_part.split("_")
    if len(function_parts) >= 2:
        class_name = function_parts[0]
        method_name = "_".join(function_parts[1:])
        return "%s::%s" % (class_name, method_name)
    else:
        return function_part


def _detect_format_attribute(params_str, func_name):
    """Detect if a variadic function is printf/scanf-like and return the attribute string.

    Args:
        params_str: The parameter string (e.g. "char *format,...")
        func_name: The function name for pattern matching

    Returns:
        Attribute string like ' __attribute__((format(printf, 1, 2)))' or empty string.
    """
    if '...' not in params_str:
        return ''

    # Split parameters and find the last named one before ...
    params = []
    depth = 0
    current = ''
    for ch in params_str:
        if ch == '(':
            depth += 1
            current += ch
        elif ch == ')':
            depth -= 1
            current += ch
        elif ch == ',' and depth == 0:
            params.append(current.strip())
            current = ''
        else:
            current += ch
    if current.strip():
        params.append(current.strip())

    # Find index of ... and the param before it
    variadic_idx = None
    for i, p in enumerate(params):
        if p == '...':
            variadic_idx = i
            break
    if variadic_idx is None or variadic_idx == 0:
        return ''

    format_param = params[variadic_idx - 1]

    # Check if the format param is char *
    if 'char *' not in format_param and 'char*' not in format_param:
        return ''

    # Extract the parameter name (last word)
    param_parts = format_param.split()
    param_name = param_parts[-1].lstrip('*') if param_parts else ''

    # Determine format type from param name or function name
    is_scanf = ('scanf' in func_name.lower() or
                'scan' in param_name.lower())
    is_printf = ('format' in param_name.lower() or
                 'fmt' in param_name.lower() or
                 'printf' in func_name.lower() or
                 'print' in func_name.lower() or
                 'log' in func_name.lower() or
                 'error' in func_name.lower() or
                 'trace' in func_name.lower() or
                 'message' in func_name.lower() or
                 'warning' in func_name.lower() or
                 'sprintf' in func_name.lower())

    if not is_scanf and not is_printf:
        return ''

    # Parameter index is 1-based, variadic_idx is the position of the format param
    fmt_idx = variadic_idx  # 0-based index of format param, 1-based = variadic_idx
    va_idx = fmt_idx + 1
    fmt_type = 'scanf' if is_scanf else 'printf'

    return ' __attribute__((format(%s, %d, %d)))' % (fmt_type, fmt_idx, va_idx)


def generate_function_prototype(func_signature, original_func_name, cpp_func_name):
    """Generate a C function prototype from signature.

    Args:
        func_signature: The full function signature
        original_func_name: Original Ghidra function name
        cpp_func_name: C++ style function name

    Returns:
        A prototype string like "void ClassName::methodName(int x);"
    """
    if not func_signature:
        return "// Unable to generate prototype for %s" % original_func_name

    paren_pos = func_signature.find('(')
    if paren_pos == -1:
        return "// Invalid signature for %s" % original_func_name

    before_paren = func_signature[:paren_pos].strip()
    parts = before_paren.split()
    if len(parts) < 2:
        return "// Invalid signature format for %s" % original_func_name

    return_type = " ".join(parts[:-1])
    params_start = paren_pos + 1
    params_end = func_signature.rfind(')')
    if params_end == -1:
        return "// Invalid signature format for %s" % original_func_name

    params_str = func_signature[params_start:params_end].strip()
    format_attr = _detect_format_attribute(params_str, cpp_func_name)
    prototype = "%s %s(%s)%s;" % (return_type, cpp_func_name, params_str, format_attr)
    return prototype


def _scan_forward_for_add_esp(listing, call_addr, caller_func):
    """Scan forward from a CALL instruction for ADD ESP,N to determine stack cleanup.

    For __cdecl functions, the caller cleans the stack with ADD ESP,N after the call.
    This gives us the exact number of stack bytes used for parameters, including any
    early-pushed params that were pushed before intervening calls.

    Args:
        listing: Program listing
        call_addr: Address of the CALL instruction
        caller_func: The function containing the call

    Returns:
        Number of stack bytes cleaned, or None if no ADD ESP found
    """
    caller_body = caller_func.getBody()
    call_instr = listing.getInstructionAt(call_addr)
    if not call_instr:
        return None

    current_instr = call_instr.getNext()
    instructions_checked = 0
    max_forward = 15  # ADD ESP is usually within a few instructions

    while current_instr and instructions_checked < max_forward:
        if not caller_body.contains(current_instr.getAddress()):
            break

        mnemonic = current_instr.getMnemonicString().upper()
        instructions_checked += 1

        # Found ADD ESP,N
        if mnemonic == 'ADD':
            dest = current_instr.getDefaultOperandRepresentation(0).upper()
            if dest == 'ESP':
                src = current_instr.getDefaultOperandRepresentation(1)
                try:
                    if src.lower().startswith('0x'):
                        return int(src, 16)
                    else:
                        return int(src)
                except (ValueError, TypeError):
                    return None

        # Stop if we hit another CALL, RET, or PUSH (meaning cleanup didn't happen
        # immediately - could be batched or callee-cleaned)
        if mnemonic in ('CALL', 'RET', 'RETN', 'PUSH', 'JMP'):
            break

        current_instr = current_instr.getNext()

    return None


def _compute_declared_stack_bytes(params):
    """Compute the expected stack bytes from declared parameter types.

    Only counts stack parameters (skips register params like ESI in __stack_esi).
    Each stack parameter takes at least 4 bytes (dword-aligned).
    Doubles and long longs take 8 bytes.

    Args:
        params: List of Ghidra Parameter objects

    Returns:
        Total expected stack bytes
    """
    total = 0
    for param in params:
        # Skip register parameters (e.g. ESI in __stack_esi conventions)
        if param.isRegisterVariable():
            continue
        size = param.getDataType().getLength()
        # Stack params are dword-aligned (minimum 4 bytes)
        aligned_size = max(4, ((size + 3) // 4) * 4)
        total += aligned_size
    return total


def analyze_call_site(listing, call_addr, caller_func, uses_register_params=True,
                      calling_convention=None):
    """Analyze a single call site to estimate parameter count.

    Primary method: For __cdecl functions, scans FORWARD from the CALL for ADD ESP,N
    to determine the exact stack cleanup bytes. This naturally handles early-pushed
    parameters that were pushed before intervening function calls.

    Fallback method: Walks backward from the CALL counting PUSH instructions.

    Args:
        listing: Program listing
        call_addr: Address of the CALL instruction
        caller_func: The function containing the call
        uses_register_params: If True, count register params (Watcom).
                              If False, only count stack params (__cdecl/__stdcall).
        calling_convention: The calling convention name of the target function

    Returns:
        Dictionary with analysis results or None on failure
    """
    # FPU register conventions don't use stack for params
    FPU_REG_CONVENTIONS = {'__fpustack', '__fpustack_safe', '__fpureg', '__fpureg_safe',
                           '__fpu_thunk'}
    NO_PARAM_CONVENTIONS = {'__mathinternal', '__stk_probe'}

    if calling_convention in FPU_REG_CONVENTIONS:
        return {
            'estimated_params': 0,
            'reg_params': [],
            'stack_params': 0,
            'stack_bytes': 0,
            'method': 'fpu_register',
            'instructions_analyzed': 0
        }

    if calling_convention in NO_PARAM_CONVENTIONS:
        return {
            'estimated_params': 0,
            'reg_params': [],
            'stack_params': 0,
            'stack_bytes': 0,
            'method': 'no_params',
            'instructions_analyzed': 0
        }

    # Default Watcom register-param order: EAX, EDX, EBX, ECX.
    WATCOM_REG_PARAMS = {'EAX', 'EDX', 'EBX', 'ECX', 'eax', 'edx', 'ebx', 'ecx'}

    # Per-convention register set. Conventions not listed here use
    # WATCOM_REG_PARAMS when register-params are enabled. Each entry maps a
    # convention to the registers it loads parameters into BEFORE the CALL.
    # Without this mapping, call-site analysis for these conventions misses
    # the register loads and reports spurious param-count mismatches.
    CONVENTION_REG_PARAMS = {
        '__esi': {'ESI'},
        '__edx': {'EDX'},
        '__edi_esi_ebx': {'EDI', 'ESI', 'EBX'},
        '__stack_esi': {'ESI'},
        '__stack2_esi': {'ESI'},
        '__stack3_esi': {'ESI'},
        '__stack5_esi': {'ESI'},
        '__stackdbl_esi': {'ESI'},
        '__stack_esi_edi': {'ESI', 'EDI'},
        '__stack2_esi_edi': {'ESI', 'EDI'},
    }

    # Pick the register set to scan for. Explicit mapping wins over the
    # coarse WATCOM_REG_PARAMS default.
    if calling_convention in CONVENTION_REG_PARAMS:
        reg_set = CONVENTION_REG_PARAMS[calling_convention]
    elif uses_register_params:
        reg_set = WATCOM_REG_PARAMS
    else:
        reg_set = set()

    # Conventions where the CALLER cleans up with ADD ESP (extrapop="unknown")
    CALLER_CLEANUP_CONVENTIONS = {'__cdecl', '__crtmath', '__fastcall',
                                  '__stack_esi', '__stackdbl_esi', '__stack2_esi', '__stack3_esi',
                                  '__stack5_esi',
                                  '__stack_esi_edi', '__stack2_esi_edi',
                                  None, 'unknown', ''}

    # === Primary method: forward scan for ADD ESP ===
    # This is the most reliable method for caller-cleanup conventions because it
    # captures the total stack bytes including early-pushed parameters
    if calling_convention in CALLER_CLEANUP_CONVENTIONS or not calling_convention:
        stack_bytes = _scan_forward_for_add_esp(listing, call_addr, caller_func)
        if stack_bytes is not None and stack_bytes > 0:
            stack_slots = stack_bytes // 4

            # For register-param conventions, also scan backward for register params
            reg_params_found = set()
            if reg_set:
                reg_params_found = _scan_backward_for_reg_params(
                    listing, call_addr, caller_func, reg_set)

            estimated_total = len(reg_params_found) + stack_slots

            return {
                'estimated_params': estimated_total,
                'reg_params': sorted(reg_params_found),
                'stack_params': stack_slots,
                'stack_bytes': stack_bytes,
                'method': 'add_esp',
                'instructions_analyzed': 0
            }

    # === Fallback: backward PUSH counting ===
    reg_params_found = set()
    stack_params = 0
    instructions_checked = 0
    max_instructions = 30

    call_instr = listing.getInstructionAt(call_addr)
    if not call_instr:
        return None

    caller_body = caller_func.getBody()
    caller_entry = caller_func.getEntryPoint()
    current_instr = call_instr.getPrevious()
    while current_instr and instructions_checked < max_instructions:

        if not caller_body.contains(current_instr.getAddress()):
            break

        mnemonic = current_instr.getMnemonicString().upper()
        instructions_checked += 1
        if mnemonic in ('CALL', 'RET', 'RETN', 'JMP'):
            break

        if mnemonic.startswith('J') and mnemonic not in ('JMP',):
            refs_to = listing.getProgram().getReferenceManager().getReferencesTo(current_instr.getAddress())
            has_branch_ref = False
            for r in refs_to:
                if r.getReferenceType().isJump():
                    has_branch_ref = True
                    break
            if has_branch_ref:
                break

        # Stop at the prologue. `SUB ESP,N` marks the end of prologue
        # register saves; anything before it is `PUSH EBX/ESI/EDI/EBP`
        # etc., which are not parameter pushes for our call site.
        if mnemonic == 'SUB':
            dest = current_instr.getDefaultOperandRepresentation(0)
            if dest and dest.upper() == 'ESP':
                break
        # Also stop when we reach the caller's entry instruction — catches
        # leaf callers with no SUB ESP (pure register-save prologues).
        if current_instr.getAddress() == caller_entry:
            break

        if mnemonic == 'PUSH':
            stack_params += 1

        if reg_set and mnemonic in ('MOV', 'LEA', 'XOR', 'MOVSX', 'MOVZX'):
            dest_operand = current_instr.getDefaultOperandRepresentation(0)
            if dest_operand:
                dest_upper = dest_operand.upper()
                for reg in reg_set:
                    reg_up = reg.upper()
                    if dest_upper == reg_up or dest_upper.startswith(reg_up[0:2]):
                        reg_params_found.add(reg_up[:3])
                        break

        current_instr = current_instr.getPrevious()

    if reg_set:
        num_reg_params = len(reg_params_found)
        estimated_total = num_reg_params + stack_params
    else:
        num_reg_params = 0
        reg_params_found = set()
        estimated_total = stack_params

    return {
        'estimated_params': estimated_total,
        'reg_params': sorted(reg_params_found),
        'stack_params': stack_params,
        'stack_bytes': stack_params * 4,
        'method': 'push_count',
        'instructions_analyzed': instructions_checked
    }


def _scan_backward_for_reg_params(listing, call_addr, caller_func, reg_set):
    """Scan backward from CALL to find register parameter setup.

    Args:
        listing: Program listing
        call_addr: Address of the CALL instruction
        caller_func: The function containing the call
        reg_set: Set of register names to look for

    Returns:
        Set of register names found as parameters
    """
    reg_params_found = set()
    caller_body = caller_func.getBody()
    call_instr = listing.getInstructionAt(call_addr)
    if not call_instr:
        return reg_params_found

    current_instr = call_instr.getPrevious()
    instructions_checked = 0

    while current_instr and instructions_checked < 30:
        if not caller_body.contains(current_instr.getAddress()):
            break

        mnemonic = current_instr.getMnemonicString().upper()
        instructions_checked += 1

        if mnemonic in ('CALL', 'RET', 'RETN', 'JMP'):
            break

        if mnemonic in ('MOV', 'LEA', 'XOR', 'MOVSX', 'MOVZX'):
            dest_operand = current_instr.getDefaultOperandRepresentation(0)
            if dest_operand:
                dest_upper = dest_operand.upper()
                for reg in reg_set:
                    if dest_upper == reg.upper() or dest_upper.startswith(reg.upper()[0:2]):
                        reg_params_found.add(reg.upper()[:3])
                        break

        current_instr = current_instr.getPrevious()

    return reg_params_found


def load_vtable_bucket_files(vtables_dir):
    """Load raw vtable data from bucket JSON files.

    Args:
        vtables_dir: Path to vtables directory containing vtables_bucket_*.json files

    Returns:
        List of vtable dictionaries from all bucket files
    """
    bucket_pattern = os.path.join(vtables_dir, 'vtables_bucket_*.json')
    bucket_files = sorted(glob.glob(bucket_pattern))
    vtables = []
    for bucket_file in bucket_files:
        try:
            with open(bucket_file, 'r') as f:
                bucket_data = json.load(f)
            if isinstance(bucket_data, list):
                vtables.extend(bucket_data)
        except Exception:
            continue
    return vtables


def load_vtable_data(vtables_dir):
    """Load vtable data from bucket JSON files and build lookup structures.

    Args:
        vtables_dir: Path to vtables directory containing vtables_bucket_*.json files

    Returns:
        Dictionary with:
        - func_to_vtables: {func_addr -> [(vtable_addr, offset, class_name)]}
        - vtable_info: {vtable_addr -> {offset -> func_info}}
        - vtable_addrs: set of all vtable addresses (for quick lookup)
    """
    result = {
        'func_to_vtables': {},
        'vtable_info': {},
        'vtable_addrs': set()
    }

    vtables = load_vtable_bucket_files(vtables_dir)

    for vtable in vtables:
        vtable_addr = vtable.get('addr', '').lower()
        if not vtable_addr:
            continue

        result['vtable_addrs'].add(vtable_addr)
        result['vtable_info'][vtable_addr] = {}

        # Extract class name from first function if available
        class_name = "Unknown"
        functions = vtable.get('functions', [])
        if functions:
            first_func = functions[0].get('func_name', '')
            # Parse class name from function name like "core_actor.cpp_CDemonActor_setup_FUN_..."
            if '_' in first_func:
                parts = first_func.split('_')
                for part in parts:
                    if part.startswith('C') and len(part) > 1 and part[1].isupper():
                        class_name = part
                        break

        for func_entry in functions:
            func_addr = func_entry.get('func_addr', '').lower()
            offset = func_entry.get('offset', 0)
            func_name = func_entry.get('func_name', '')

            if not func_addr:
                continue

            # Build reverse lookup: func_addr -> list of vtable entries
            if func_addr not in result['func_to_vtables']:
                result['func_to_vtables'][func_addr] = []
            result['func_to_vtables'][func_addr].append({
                'vtable_addr': vtable_addr,
                'offset': offset,
                'class_name': class_name,
                'func_name': func_name
            })

            # Build forward lookup: vtable_addr -> offset -> func_info
            result['vtable_info'][vtable_addr][offset] = {
                'func_addr': func_addr,
                'func_name': func_name
            }

    return result


def estimate_call_site_params(currentProgram, function, vtable_data=None):
    """Estimate parameter counts by analyzing call sites to this function.

    For Watcom register calling convention, parameters are passed in:
    - Registers: EAX, EDX, EBX, ECX (first 4 params)
    - Stack: Additional params via PUSH

    For __cdecl/__stdcall, all parameters are passed via PUSH on the stack.

    Optionally includes vtable membership info if vtable_data is provided.
    Note: Indirect caller detection is done in a second pass by vtable_calls.py.

    Args:
        currentProgram: The Ghidra program
        function: The function to analyze
        vtable_data: Optional vtable lookup data from load_vtable_data()

    Returns:
        Dictionary with parameter estimation results, optionally including vtable info
    """
    listing = currentProgram.getListing()
    ref_manager = currentProgram.getReferenceManager()
    func_manager = currentProgram.getFunctionManager()

    # Get declared parameter count from function signature
    params = function.getParameters()
    declared_params = len(params) if params else 0

    # Get calling convention
    calling_convention = function.getCallingConventionName()

    # Determine parameter passing style
    REGISTER_PARAM_CONVENTIONS = {'__watcallRegister', '__softfp_double',
                                   '__esi', '__edx', '__edi_esi_ebx',
                                   '__stack_esi', '__stackdbl_esi', '__stack2_esi',
                                   '__stack3_esi', '__stack5_esi',
                                   '__stack_esi_edi', '__stack2_esi_edi'}
    STACK_ONLY_CONVENTIONS = {'__watcallStack', '__stdcall', '__cdecl', '__syscall', '__crtmath', '__thiscall'}
    FPU_REGISTER_CONVENTIONS = {'__fpustack', '__fpustack_safe', '__fpureg', '__fpureg_safe', '__fpu_thunk'}
    NO_PARAM_CONVENTIONS = {'__mathinternal', '__stk_probe'}

    # Skip conventions where params aren't visible in assembly
    if calling_convention in NO_PARAM_CONVENTIONS or calling_convention in FPU_REGISTER_CONVENTIONS:
        result = {
            'declared_params': declared_params,
            'estimated_params': declared_params,
            'call_site_count': 0,
            'confidence': 'skipped',
            'call_sites': [],
            'skip_reason': 'fpu_or_no_param_convention'
        }
        if vtable_data:
            func_addr = str(function.getEntryPoint()).lower().replace('0x', '')
            vtable_entries = vtable_data.get('func_to_vtables', {}).get(func_addr, [])
            if vtable_entries:
                result['vtable_info'] = {
                    'in_vtable': True,
                    'vtable_count': len(vtable_entries),
                    'entries': [{'class_name': e.get('class_name', 'Unknown'),
                                 'vtable_addr': e.get('vtable_addr', ''),
                                 'offset': e.get('offset', 0)} for e in vtable_entries[:5]]
                }
        return result

    if calling_convention in REGISTER_PARAM_CONVENTIONS:
        uses_register_params = True
    elif calling_convention in STACK_ONLY_CONVENTIONS:
        uses_register_params = False
    else:
        uses_register_params = True

    # === Direct call sites (existing logic) ===
    entry_point = function.getEntryPoint()
    refs_to = ref_manager.getReferencesTo(entry_point)

    call_sites = []
    param_counts = []
    max_call_sites = 50

    for ref in refs_to:
        if len(call_sites) >= max_call_sites:
            break
        ref_type = ref.getReferenceType()
        if not ref_type.isCall():
            continue

        from_addr = ref.getFromAddress()
        caller_func = func_manager.getFunctionContaining(from_addr)
        if not caller_func or caller_func == function:
            continue

        site_info = analyze_call_site(listing, from_addr, caller_func, uses_register_params, calling_convention)
        if site_info:
            site_info['caller'] = caller_func.getName()
            site_info['call_addr'] = str(from_addr)
            site_info['call_type'] = 'direct'
            call_sites.append(site_info)
            param_counts.append(site_info['estimated_params'])

    # === Vtable info ===
    vtable_info = None
    if vtable_data:
        func_addr = str(entry_point).lower().replace('0x', '')
        vtable_entries = vtable_data.get('func_to_vtables', {}).get(func_addr, [])
        if vtable_entries:

            # Record vtable info for this function
            vtable_info = {
                'in_vtable': True,
                'vtable_count': len(vtable_entries),
                'entries': [
                    {
                        'class_name': e.get('class_name', 'Unknown'),
                        'vtable_addr': e.get('vtable_addr', ''),
                        'offset': e.get('offset', 0)
                    }
                    for e in vtable_entries[:5]  # Limit to 5 entries
                ]
            }

    # Use direct call sites for parameter estimation
    all_call_sites = call_sites

    # Compute declared stack bytes for comparison with add_esp results
    # This handles doubles (8 bytes) and structs correctly
    declared_stack_bytes = _compute_declared_stack_bytes(params) if params else 0

    # Determine most common param count
    estimated_params = declared_params
    confidence = 'unknown'
    # True when call-site estimate is consistent with the declared signature
    # after accounting for multi-slot params (doubles, by-value structs) and
    # register-passed params. Used by the mismatch detector to suppress false
    # positives.
    matches_declared = True
    if param_counts:
        from collections import Counter
        count_freq = Counter(param_counts)
        most_common = count_freq.most_common(1)[0]
        estimated_params = most_common[0]
        agreement_ratio = most_common[1] / len(param_counts)

        # Check if the estimated stack slots match declared stack bytes
        # This avoids false positives from doubles/structs taking multiple slots
        estimated_stack_bytes = estimated_params * 4  # each stack slot is 4 bytes
        if uses_register_params:
            # For register conventions, subtract register params from stack comparison
            # Use the most common reg param count from call sites
            reg_counts = [len(s.get('reg_params', [])) for s in call_sites if s]
            common_reg = max(set(reg_counts), key=reg_counts.count) if reg_counts else 0
            estimated_stack_bytes = (estimated_params - common_reg) * 4

        matches_declared = (estimated_params == declared_params) or \
                           (estimated_stack_bytes == declared_stack_bytes)

        if matches_declared:
            if len(param_counts) >= 3 and agreement_ratio >= 0.9:
                confidence = 'high'
            elif len(param_counts) >= 2 and agreement_ratio >= 0.7:
                confidence = 'high'
            elif len(param_counts) >= 1:
                confidence = 'medium'
        else:
            if agreement_ratio >= 0.9 and len(param_counts) >= 3:
                confidence = 'high'
            elif agreement_ratio >= 0.7 and len(param_counts) >= 2:
                confidence = 'medium'
            elif len(param_counts) >= 1:
                confidence = 'low'

    result = {
        'declared_params': declared_params,
        'estimated_params': estimated_params,
        'declared_stack_bytes': declared_stack_bytes,
        'call_site_count': len(all_call_sites),
        'confidence': confidence,
        'matches_declared': matches_declared,
        'call_sites': all_call_sites[:10]
    }

    if vtable_info:
        result['vtable_info'] = vtable_info

    return result


def generate_source_filename(func_name, decompiled_code):
    """Generate source filename from function name and decompiled code.

    Args:
        func_name: The function name
        decompiled_code: The decompiled code (may contain path hints)

    Returns:
        A path like "engine/2d.c/plotPixel_FUN_00401140.c"
    """
    file_extension = ".c"
    if ".cpp" in func_name:
        file_extension = ".cpp"

    # Special case: entry function goes in entry/ folder
    if func_name == "entry":
        return os.path.join("entry", func_name + file_extension)

    if "FUN_" not in func_name:
        for potential_type in [".c", ".cpp"]:
            if potential_type in func_name:
                return func_name.replace("_", "/")

    def process_hybrid_path(func_name, separator):
        parts = func_name.split(separator)
        path_components = parts[0].replace("_", "/").split("/")

        for i, component in enumerate(path_components):
            if ".cpp" in component or ".c" in component:
                directory = "/".join(path_components[:i+1])
                filename_prefix = "_".join(path_components[i+1:]) if i+1 < len(path_components) else ""
                filename = (filename_prefix + separator if filename_prefix else separator.lstrip("_")) + parts[1] + file_extension
                return os.path.join(directory, filename) if directory else filename

        if len(path_components) > 1:
            directory = "/".join(path_components[:-1])
            filename = path_components[-1] + separator + parts[1] + file_extension
            return os.path.join(directory, filename)
        return path_components[0] + separator + parts[1] + file_extension

    if "_thunk_FUN_" in func_name:
        return process_hybrid_path(func_name, "_thunk_FUN_")
    elif "_FUN_" in func_name:
        return process_hybrid_path(func_name, "_FUN_")

    if "..\\" in decompiled_code:
        matches = re.finditer(r'"[^"]*(\.\.[\\/][^"]*)"', decompiled_code)
        for match in matches:
            guessed_path = match.group(1)
            if guessed_path.endswith(".txt"):
                continue
            guessed_path = guessed_path.replace("..\\\\", "")
            guessed_path = guessed_path.replace("\\", "/")
            guessed_path = os.path.normpath(guessed_path)
            if ".cpp" in guessed_path:
                file_extension = ".cpp"
            return os.path.join(guessed_path, func_name + file_extension)

    return func_name + file_extension

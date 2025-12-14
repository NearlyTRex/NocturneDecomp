import os
import re
from ghidra_annotations.util import *
from ghidra.program.model.address import AddressSet
from ghidra.program.model.listing import Function
from ghidra.program.model.listing import FunctionManager
from ghidra.program.model.listing import LocalVariableImpl
from ghidra.program.model.listing import Parameter
from ghidra.program.model.listing import ParameterImpl
from ghidra.program.model.listing import Variable
from ghidra.program.model.listing import VariableStorage
from ghidra.program.model.pcode import Varnode
from ghidra.program.model.symbol import SourceType
from ghidra.program.disassemble import Disassembler
from ghidra.util.task import TaskMonitor

def is_function_external(currentProgram, function):

    # Direct external check
    if function.isExternal():
        return True

    # Check if it's a thunk
    if function.isThunk():
        thunk_target = function.getThunkedFunction(True)
        if thunk_target:
            if thunk_target.isExternal():
                return True

    # Check if function is in external memory space
    entry_point = function.getEntryPoint()
    if entry_point:
        addr_space = entry_point.getAddressSpace()
        if addr_space and addr_space.isExternalSpace():
            return True

    # Check if function symbols indicate external
    symbol = function.getSymbol()
    if symbol and symbol.isExternal():
        return True
    return False

def extract_variable_names_from_conflict(conflict_message):

    # Handle overlap conflicts: "Variables var1 and var2 overlap"
    conflicting_vars = set()
    overlap_match = re.search(r"Variables\s+(\w+)\s+and\s+(\w+)\s+overlap", conflict_message)
    if overlap_match:
        conflicting_vars.add(overlap_match.group(1))
        conflicting_vars.add(overlap_match.group(2))
        return conflicting_vars

    # Handle invalid offset/size: "Variable var1 has invalid offset/size"
    invalid_match = re.search(r"Variable\s+(\w+)\s+has\s+invalid", conflict_message)
    if invalid_match:
        conflicting_vars.add(invalid_match.group(1))
        return conflicting_vars

    # Try to extract any variable names from the message
    var_names = re.findall(r"\b[a-zA-Z_][a-zA-Z0-9_]*\b", conflict_message)
    excluded_words = {"Variable", "Variables", "has", "invalid", "offset", "size", "overlap", "and", "vs"}
    for name in var_names:
        if name not in excluded_words:
            conflicting_vars.add(name)
    return conflicting_vars

def get_stack_conflicts(locals_data):

    # Collect all stack variables with their ranges
    stack_vars = []
    for local_data in locals_data:
        storage_info = local_data.get("storage", {})
        if storage_info.get("stack"):
            offset = storage_info.get("offset", 0)
            size = storage_info.get("size", 1)

            # Calculate the range this variable occupies
            start_offset = offset
            end_offset = offset + size - 1
            stack_vars.append({
                "name": local_data.get("name"),
                "offset": offset,
                "size": size,
                "start": start_offset,
                "end": end_offset,
                "data": local_data
            })

    # Sort by offset for easier overlap detection
    stack_vars.sort(key=lambda x: x["offset"])

    # Check for overlaps and invalid ranges
    conflicts = []
    for i, var in enumerate(stack_vars):

        # Check offset
        if var["offset"] < -32768 or var["offset"] > 32767:
            conflicts.append("Variable %s has invalid offset: %d" % (var["name"], var["offset"]))
            continue

        # Check size
        if var["size"] <= 0 or var["size"] > 1024:
            conflicts.append("Variable %s has invalid size: %d" % (var["name"], var["size"]))
            continue

        # Check for overlaps with next variable
        if i < len(stack_vars) - 1:
            next_var = stack_vars[i + 1]
            if var["end"] >= next_var["start"]:
                conflicts.append("Variables %s and %s overlap: [%d-%d] vs [%d-%d]" % (
                    var["name"], next_var["name"],
                    var["start"], var["end"],
                    next_var["start"], next_var["end"]))
    return conflicts

def fix_stack_conflicts(conflicts, locals_data):

    # Check conflicts
    if not conflicts or not locals_data:
        return locals_data, []

    # Build set of all conflicting variable names
    conflicting_vars = set()
    for conflict in conflicts:
        vars_in_conflict = extract_variable_names_from_conflict(conflict)
        conflicting_vars.update(vars_in_conflict)

    # Only remove storage from conflicting variables
    fixed_locals = []
    removed_vars = []
    for local_data in locals_data:
        var_name = local_data.get("name", "")
        if var_name in conflicting_vars:
            local_copy = local_data.copy()
            if "storage" in local_copy:
                del local_copy["storage"]
                removed_vars.append(var_name)
                log_info("Removed storage from conflicting variable: %s" % var_name)
            fixed_locals.append(local_copy)
        else:
            fixed_locals.append(local_data)
    return fixed_locals, removed_vars

def delete_functions(currentProgram, path):

    # Load functions to get importable markings
    log_info("Loading functions to determine which are importable")
    functions_data = load_json_files(path, "functions")
    if functions_data is None:
        log_error("Unable to load functions")
        return

    # Get list of importable function addresses
    importable_functions = set()
    for fn_data in functions_data:
        if fn_data.get("importable", False):
            fn_addr = fn_data.get("addr")
            if fn_addr:
                importable_functions.add(fn_addr)
    if not importable_functions:
        log_info("No existing importable functions found - nothing to delete")
        return

    # Get current functions in Ghidra that still exist
    fm = currentProgram.getFunctionManager()
    current_functions = set()
    for function in fm.getFunctions(True):
        if not is_function_external(currentProgram, function):
            current_functions.add(str(function.getEntryPoint()))

    # Find functions that were importable but no longer exist in Ghidra
    # These are functions that were deleted in Ghidra and should be removed from JSON
    functions_to_remove = importable_functions - current_functions
    log_info("Found %d importable functions that were deleted in Ghidra: %s" % (len(functions_to_remove), list(functions_to_remove)))

    # Note: We don't actually delete anything from Ghidra here since they're already gone
    # This function now serves as a validation/logging step
    # The real cleanup happens during export when we only export existing functions
    if functions_to_remove:
        log_info("These functions will be removed from JSON during next export:")
        for addr in functions_to_remove:
            log_info("  - Function at %s (deleted in Ghidra)" % addr)

def export_variable_storage(currentProgram, variable):

    # Get storage info
    storage_info = {}
    if variable.isStackVariable():
        storage_info["stack"] = True
        storage_info["offset"] = variable.getStackOffset()
    elif variable.isRegisterVariable():
        storage_info["reg"] = str(variable.getRegister())
    elif variable.isMemoryVariable():
        storage_info["mem"] = str(variable.getMinAddress())
    elif variable.isCompoundVariable():
        storage_info["compound"] = True
    elif variable.isUniqueVariable():
        storage_info["unassigned"] = True

    # Get variable storage details
    var_storage = variable.getVariableStorage()
    if var_storage:

        # Size
        size = var_storage.size()
        if size > 0:
            storage_info["size"] = size

        # Validity
        if not var_storage.isValid():
            storage_info["invalid"] = True

        # Direct varnode access
        varnodes = []
        for varnode in var_storage.getVarnodes():
            vn_data = {
                "addr": str(varnode.getAddress()),
                "size": varnode.getSize()
            }
            if varnode.getOffset() != 0:
                vn_data["offset"] = varnode.getOffset()
            varnodes.append(vn_data)

        # Try to get varnodes another way
        if not varnodes and variable.isRegisterVariable():
            reg = variable.getRegister()
            if reg:
                varnodes.append({
                    "addr": "register:%08x" % reg.getOffset(),
                    "size": reg.getBitLength() // 8
                })

        # Set varnodes
        if varnodes:
            storage_info["varnodes"] = varnodes
    return storage_info

def export_function_variables(currentProgram, function):

    # Get variable info
    variable_info = {
        "params": [],
        "locals": [],
        "ret_storage": None
    }

    # Export parameters
    params = []
    for param in function.getParameters():
        param_info = {
            "name": param.getName(),
            "type": resolve_data_type_name(currentProgram, param.getDataType()),
            "storage": export_variable_storage(currentProgram, param)
        }

        # Only include ordinal if not sequential (assumed 0, 1, 2, ...)
        ordinal = param.getOrdinal()
        if ordinal != len(params):
            param_info["ord"] = ordinal

        # Only include comment if present
        comment = param.getComment()
        if comment:
            param_info["cmt"] = comment
        params.append(param_info)
    if params:
        variable_info["params"] = params

    # Export local variables
    locals_list = []
    for local_var in function.getLocalVariables():
        local_info = {
            "name": local_var.getName(),
            "type": resolve_data_type_name(currentProgram, local_var.getDataType()),
            "storage": export_variable_storage(currentProgram, local_var)
        }

        # Only include first use offset if non-zero
        first_use = local_var.getFirstUseOffset()
        if first_use != 0:
            local_info["use"] = first_use

        # Only include comment if present
        comment = local_var.getComment()
        if comment:
            local_info["cmt"] = comment
        locals_list.append(local_info)

    # Validate and fix the exported locals
    if locals_list:
        initial_conflicts = get_stack_conflicts(locals_list)
        if initial_conflicts:

            # Document what needs to be fixed
            log_info("Storage conflicts detected in function %s" % function.getName())
            for conflict in initial_conflicts:
                log_info("  Conflict: %s" % conflict)

            # Fix conflicts
            locals_list, removed_vars = fix_stack_conflicts(initial_conflicts, locals_list)

            # Document what was changed
            if removed_vars:
                variable_info["storage_conflicts_resolved"] = removed_vars
                log_info("Removed storage from %d conflicting variables: %s" % (len(removed_vars), removed_vars))

            # Verify the fix worked
            remaining_conflicts = get_stack_conflicts(locals_list)
            if remaining_conflicts:
                log_info("Warning: Some conflicts remain after:")
                for conflict in remaining_conflicts:
                    log_info("  Remaining: %s" % conflict)
            else:
                log_info("All storage conflicts successfully resolved")
        variable_info["locals"] = locals_list

    # Export return storage information
    return_var = function.getReturn()
    if return_var:
        ret_storage = export_variable_storage(currentProgram, return_var)
        if ret_storage:
            variable_info["ret_storage"] = ret_storage
    return variable_info

def export_function_body(currentProgram, function):
    body_ranges = []
    function_body = function.getBody()
    if function_body:
        for addr_range in function_body:
            range_info = {
                "start": str(addr_range.getMinAddress()),
                "end": str(addr_range.getMaxAddress()),
                "size": addr_range.getLength()
            }
            body_ranges.append(range_info)
    return body_ranges

def import_variable_storage(currentProgram, storage_info, data_type):

    # Ignore empty storage info
    if not storage_info:
        return None

    # Stack variable
    if storage_info.get("stack"):
        stack_offset = storage_info.get("offset", 0)
        expected_size = storage_info.get("size", 1)
        actual_size = data_type.getLength()

        # Validate size consistency
        if expected_size != actual_size:
            log_info("Storage size mismatch: expected=%d, actual=%d - skipping custom storage" % (
                expected_size, actual_size))
            return None

        # Validate offset bounds
        if stack_offset < -32768 or stack_offset > 32767:
            log_info("Stack offset out of bounds: %d - skipping custom storage" % stack_offset)
            return None

        # Validate size bounds
        if actual_size <= 0 or actual_size > 1024:
            log_info("Data type size out of bounds: %d - skipping custom storage" % actual_size)
            return None

        # Use program's address factory
        addr_factory = currentProgram.getAddressFactory()
        stack_space = addr_factory.getStackSpace()

        # Test stack address creation
        stack_addr = stack_space.getAddress(stack_offset)

        # Create storage with actual data type length (not expected size)
        storage = VariableStorage(currentProgram, stack_offset, actual_size)
        if storage.isValid():
            log_info("Created valid stack storage: offset=%d, size=%d" % (stack_offset, actual_size))
            return storage
        else:
            log_info("Created stack storage is invalid")
            return None

    # Register variable
    elif storage_info.get("reg"):
        reg_name = storage_info["reg"]
        register = currentProgram.getRegister(reg_name)
        if register:
            storage = VariableStorage(currentProgram, register)
            return storage if storage.isValid() else None

    # Memory variable
    elif storage_info.get("mem"):
        addr_str = storage_info["mem"]
        address = get_addr_obj(currentProgram, addr_str)
        if address:
            storage = VariableStorage(currentProgram, address, data_type.getLength())
            return storage if storage.isValid() else None

    # Complex storage with varnodes
    elif storage_info.get("varnodes"):
        return None
    return None

def import_function_variables(currentProgram, function, variables_data):

    # Import parameters
    params_data = variables_data.get("params", [])
    new_params = []
    for i, param_data in enumerate(params_data):
        param_name = param_data.get("name", "param")
        param_type_name = param_data.get("type")
        param_type = resolve_data_type_obj(currentProgram, param_type_name)
        param_comment = param_data.get("cmt")
        storage_info = param_data.get("storage", {})
        if param_type:

            # Try custom storage first
            param = None
            custom_storage = import_variable_storage(currentProgram, storage_info, param_type)
            if custom_storage:
                param = ParameterImpl(param_name, param_type, custom_storage, currentProgram)

            # Fallback to register if available
            if param is None and storage_info.get("reg"):
                reg = currentProgram.getRegister(storage_info["reg"])
                if reg:
                    param = ParameterImpl(param_name, param_type, reg, currentProgram)

            # Final fallback to automatic
            if param is None:
                param = ParameterImpl(param_name, param_type, currentProgram)

            # Set comment
            if param_data.get("cmt"):
                param.setComment(param_data.get("cmt"))

            # Add parameter
            new_params.append(param)

    # Replace function parameters
    if new_params:
        function.replaceParameters(
            Function.FunctionUpdateType.CUSTOM_STORAGE,
            True,
            SourceType.USER_DEFINED,
            new_params)

    # Import local variables
    locals_data = variables_data.get("locals", [])

    # Get existing variables mapped by name
    existing_locals = {var.getName(): var for var in function.getLocalVariables()}
    imported_names = {local_data.get("name") for local_data in locals_data}

    # Only remove variables that are NOT in the import data
    for var_name, existing_var in existing_locals.items():
        if var_name not in imported_names:
            function.removeVariable(existing_var)
            log_info("Removed variable not in import: %s" % var_name)

    # Process each imported variable
    for local_data in locals_data:
        local_name = local_data.get("name", "local")
        local_type_name = local_data.get("type")
        local_comment = local_data.get("cmt")
        storage_info = local_data.get("storage", {})
        first_use_offset = local_data.get("use", 0)
        original_type_name = local_type_name
        function_address = str(function.getEntryPoint()).replace("0x", "").lower()

        # Check if variable already exists
        existing_var = existing_locals.get(local_name)
        if existing_var:
            existing_type_name = resolve_data_type_name(currentProgram, existing_var.getDataType())
            existing_storage = export_variable_storage(currentProgram, existing_var)
            existing_comment = existing_var.getComment()
            existing_first_use = existing_var.getFirstUseOffset()

            # Check if everything matches (using the potentially fixed type name)
            type_matches = (existing_type_name == local_type_name)
            storage_matches = (existing_storage.get("offset") == storage_info.get("offset") and
                             existing_storage.get("size") == storage_info.get("size"))
            comment_matches = (existing_comment == local_comment)
            first_use_matches = (existing_first_use == first_use_offset)

            if type_matches and storage_matches and comment_matches and first_use_matches:
                log_info("Skipping unchanged variable: %s (%s, offset=%s, size=%s)" % (
                    local_name, existing_type_name,
                    storage_info.get("offset"), storage_info.get("size")))
                continue

            # If it doesn't match, remove and recreate
            if original_type_name != local_type_name:
                log_info("Updating variable %s at %s: %s -> %s (oscillation fix applied)" % (
                    local_name, function_address, existing_type_name, local_type_name))
            else:
                log_info("Updating changed variable: %s (type: %s -> %s, offset=%s, size: %s -> %s)" % (
                    local_name, existing_type_name, local_type_name,
                    existing_storage.get("offset"), existing_storage.get("size"), storage_info.get("size")))
            function.removeVariable(existing_var)
        else:
            if original_type_name != local_type_name:
                log_info("Creating new variable: %s at %s (%s, offset=%s, size=%s) - oscillation fix applied" % (
                    local_name, function_address, local_type_name, storage_info.get("offset"), storage_info.get("size")))
            else:
                log_info("Creating new variable: %s (%s, offset=%s, size=%s)" % (
                    local_name, local_type_name, storage_info.get("offset"), storage_info.get("size")))

        # Create new variable (only for changed/new variables, using the potentially fixed type)
        local_type = resolve_data_type_obj(currentProgram, local_type_name)
        if local_type:

            # Create local variable
            local_var = None
            if storage_info.get("stack"):
                stack_offset = storage_info.get("offset", 0)
                expected_size = storage_info.get("size", 1)
                actual_size = local_type.getLength()

                # Validate size consistency
                if expected_size != actual_size:
                    log_info("Storage size mismatch: expected=%d, actual=%d - skipping custom storage" % (
                        expected_size, actual_size))
                    custom_storage = None
                else:
                    custom_storage = import_variable_storage(currentProgram, storage_info, local_type)

                # Create local variable
                if custom_storage:
                    local_var = LocalVariableImpl(local_name, first_use_offset, local_type, custom_storage, currentProgram)
                    log_info("Created local variable %s with custom storage" % local_name)
                else:
                    local_var = LocalVariableImpl(local_name, first_use_offset, local_type, VariableStorage.UNASSIGNED_STORAGE, currentProgram)
                    log_info("Created local variable %s with unassigned storage" % local_name)
            else:
                custom_storage = import_variable_storage(currentProgram, storage_info, local_type)
                if custom_storage:
                    local_var = LocalVariableImpl(local_name, first_use_offset, local_type, custom_storage, currentProgram)
                else:
                    local_var = LocalVariableImpl(local_name, first_use_offset, local_type, VariableStorage.UNASSIGNED_STORAGE, currentProgram)

            # Add the variable to the function
            if local_var:
                try:
                    function.addLocalVariable(local_var, SourceType.USER_DEFINED)
                    log_info("Successfully added local variable: %s (%s)" % (local_name, local_type_name))
                except Exception as e:
                    log_info("Failed to add local variable %s: %s" % (local_name, str(e)))
                    continue

            # Set additional properties
            if local_var:
                if local_comment:
                    local_var.setComment(local_comment)
                if first_use_offset != 0:
                    local_var.setFirstUseOffset(first_use_offset)

    # Import return storage
    return_storage_data = variables_data.get("ret_storage")
    if return_storage_data:
        return_type = function.getReturnType()
        custom_return_storage = import_variable_storage(currentProgram, return_storage_data, return_type)
        if custom_return_storage:
            function.setReturn(return_type, custom_return_storage, SourceType.USER_DEFINED)

def import_function_body(currentProgram, fn_addr, body_ranges):

    # Fallback to single address if no body information
    if not body_ranges:
        return AddressSet(fn_addr)

    # Add function body range
    address_set = AddressSet()
    for range_info in body_ranges:
        start_addr = get_addr_obj(currentProgram, range_info["start"])
        end_addr = get_addr_obj(currentProgram, range_info["end"])
        if start_addr and end_addr:
            address_set.add(start_addr, end_addr)
            log_info("Added function body range: %s to %s" % (start_addr, end_addr))

    # If no ranges were successfully added, fall back to single address
    if address_set.isEmpty():
        log_info("No valid body ranges found, using single address")
        address_set.add(fn_addr)
    return address_set

def should_import_return_type(fn_return, fn_variables):

    # If no return type specified, don't modify
    if not fn_return:
        return False

    # If return type is undefined1 and no custom storage, don't modify
    if fn_return == "undefined1":
        if not fn_variables or not fn_variables.get("ret_storage"):
            return False

        # If it has invalid storage only, probably don't modify
        ret_storage = fn_variables.get("ret_storage", {})
        if ret_storage.get("invalid") and len(ret_storage) == 1:
            return False

    # Otherwise, it's safe to set the return type
    return True

def import_functions(currentProgram, path):

    # Get managers
    dtm = currentProgram.getDataTypeManager()
    fm = currentProgram.getFunctionManager()

    # Load functions
    log_info("Loading functions")
    functions = load_json_files(path, "functions")
    if functions is None:
        log_error("Unable to load functions")

    # Import functions
    log_info("Importing functions")
    tx_id = currentProgram.startTransaction("Import Functions")
    try:
        for fn in functions:
            fn_name = fn.get("name")
            fn_addr = get_addr_obj(currentProgram, fn.get("addr"))
            fn_return = fn.get("ret")
            fn_conv = fn.get("conv")
            fn_inline = fn.get("inline")
            fn_variadic = fn.get("variadic")
            fn_thunked = fn.get("thunk")
            fn_thunktarget = get_addr_obj(currentProgram, fn.get("thtarget"))
            fn_tags = fn.get("tags", [])
            fn_comment = fn.get("cmt")
            fn_variables = fn.get("vars")
            fn_body_ranges = fn.get("body", [])
            fn_importable = fn.get("importable", False)
            if not fn_name or not fn_addr or not fn_importable:
                continue

            # Disassemble function if not already
            log_info("Disassembling function for %s" % fn_name)
            for range_info in fn_body_ranges:
                start_addr = get_addr_obj(currentProgram, range_info["start"])
                end_addr = get_addr_obj(currentProgram, range_info["end"])
                if is_addr_disassembled(currentProgram, start_addr):
                    continue
                if start_addr and end_addr:
                    log_info("Disassembling function range from %s to %s" % (start_addr, end_addr))
                    disassemble_at_addr(currentProgram, start_addr, end_addr)

            # Get function body
            function_body = import_function_body(currentProgram, fn_addr, fn_body_ranges)

            # Check for and remove overlapping functions
            removed_functions = []
            for addr_range in function_body.getAddressRanges():
                current_addr = addr_range.getMinAddress()
                while current_addr and current_addr.compareTo(addr_range.getMaxAddress()) <= 0:
                    existing_function = fm.getFunctionContaining(current_addr)
                    if existing_function and existing_function.getEntryPoint() != fn_addr:
                        existing_entry = existing_function.getEntryPoint()
                        existing_name = existing_function.getName()
                        if existing_entry not in removed_functions:
                            log_info("Removing overlapping function %s at %s to make room for %s" % (
                                existing_name, existing_entry, fn_name))
                            fm.removeFunction(existing_entry)
                            removed_functions.append(existing_entry)

                    # Move to next address
                    try:
                        current_addr = current_addr.next()
                    except:
                        break
                    if current_addr is None:
                        break

            # Create or update function
            log_info("Creating or updating function %s with body containing %d ranges" % (fn_addr, len(fn_body_ranges)))
            function = fm.getFunctionAt(fn_addr)
            if not function:
                function = fm.createFunction(fn_name, fn_addr, function_body, SourceType.USER_DEFINED)
            else:
                function.setName(fn_name, SourceType.USER_DEFINED)
                if fn_body_ranges:
                    function.setBody(function_body)
                    log_info("Updated function body for %s" % fn_name)

            # Set return type (only if it's meaningful)
            if should_import_return_type(fn_return, fn_variables):
                ret_type = resolve_data_type_obj(currentProgram, fn_return)
                function.setReturnType(ret_type, SourceType.USER_DEFINED)

            # Set calling convention (only if specified)
            if fn_conv:
                function.setCallingConvention(fn_conv)

            # Set boolean properties (only if true)
            if fn_inline:
                function.setInline(True)
            if fn_variadic:
                function.setVarArgs(True)

            # Import variables
            if fn_variables:
                import_function_variables(currentProgram, function, fn_variables)

            # Thunks
            if fn_thunked and fn_thunktarget:
                target_func = fm.getFunctionAt(fn_thunktarget)
                if target_func:
                    function.setThunkedFunction(target_func)

            # Tags
            for tag_name in fn_tags:
                function.addTag(tag_name)

            # Comment
            if fn_comment:
                function.setComment(fn_comment)
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")

def export_functions(currentProgram, path):

    # Load existing functions to preserve importable markings
    existing_importable = {}
    existing_thunk_info = {}
    try:
        existing_functions = load_json_files(path, "functions")
        if existing_functions:
            log_info("Loading existing importable markings and thunk information")
            for fn_data in existing_functions:
                fn_addr = fn_data.get("addr")
                if fn_addr:
                    existing_importable[fn_addr] = fn_data.get("importable", False)
                    log_info("Preserving importable marking for function at: %s" % fn_addr)
                    if fn_data.get("thunk") or fn_data.get("thtarget"):
                        existing_thunk_info[fn_addr] = {
                            "thunk": fn_data.get("thunk", False),
                            "thtarget": fn_data.get("thtarget")
                        }
                        log_info("Preserving thunk info for function at: %s (thunk=%s, target=%s)" %
                                (fn_addr, fn_data.get("thunk"), fn_data.get("thtarget")))
    except:
        log_info("No existing functions file found, all functions will default to non-importable")

    # Gather functions
    functions = []
    for f in currentProgram.getFunctionManager().getFunctions(True):
        func_name = f.getName()
        func_entry = str(f.getEntryPoint())
        func_ret = resolve_data_type_name(currentProgram, f.getReturnType())
        func_tags = [tag.getName() for tag in f.getTags()]
        func_conv = f.getCallingConventionName()
        func_inline = f.isInline()
        func_variadic = f.hasVarArgs()
        func_thunked = f.isThunk()
        func_thunk_target = str(f.getThunkedFunction(True).getEntryPoint()) if f.isThunk() and f.getThunkedFunction(True) else None
        func_cmt = f.getComment()
        func_variables = export_function_variables(currentProgram, f)
        func_body_ranges = export_function_body(currentProgram, f)
        func_importable = existing_importable.get(func_entry, True)
        func_existing_thunk = existing_thunk_info.get(func_entry, {})

        # Build function data with only non-default values
        func_data = {
            "name": func_name,
            "addr": func_entry,
            "importable": func_importable
        }

        # Always include return type
        func_data["ret"] = func_ret if func_ret else "void"

        # Include function body ranges if available
        if func_body_ranges:
            func_data["body"] = func_body_ranges

        # Only include variables if they exist
        if func_variables:
            func_data["vars"] = func_variables

        # Only include tags if they exist
        if func_tags:
            func_data["tags"] = func_tags

        # Only include calling convention if not default
        if func_conv and func_conv != "unknown":
            func_data["conv"] = func_conv

        # Only include boolean flags if true
        if func_inline:
            func_data["inline"] = True
        if func_variadic:
            func_data["variadic"] = True

        # Handle thunk information
        final_thunked = func_thunked or func_existing_thunk.get("thunk", False)
        final_thunk_target = func_thunk_target or func_existing_thunk.get("thtarget")
        if final_thunked:
            func_data["thunk"] = True
            if final_thunk_target:
                func_data["thtarget"] = final_thunk_target
                log_info("Preserving thunk relationship for %s -> %s" % (func_name, final_thunk_target))

        # Only include comment if present
        if func_cmt:
            func_data["cmt"] = func_cmt

        # Record function
        log_info("Recording function %s with %d body ranges" % (func_name, len(func_body_ranges)))
        functions.append(clean_data(func_data))

    # Export functions
    log_info("Exporting %d functions across multiple files" % len(functions))
    save_json_files(
        path = path,
        filename_base = "functions",
        items = clean_data(functions),
        addr_func = lambda x: x["addr"],
        bucket_bits = 7)
    log_info("Export complete")

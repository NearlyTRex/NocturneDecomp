import os
from ghidra_annotations.util import *
from ghidra.program.model.data import FunctionDefinitionDataType


# ============================================================================
# Helpers
# ============================================================================

def is_function_definition_type(data_type):
    """Check if a data type is a FunctionDefinition (call-site override)."""
    class_name = data_type.__class__.__name__.rsplit('.', 1)[-1]
    return class_name in [
        'FunctionDefinitionDataType',
        'FunctionDefinitionDB',
        'FunctionDefinition',
        'FunctionDefDataType'
    ]


def serialize_function_definition(currentProgram, func_def):
    """Serialize a FunctionDefinition data type to a dict with return type, params, etc."""
    result = {}

    # Return type
    ret_type = func_def.getReturnType()
    if ret_type:
        result["return_type"] = resolve_data_type_name(currentProgram, ret_type)
    else:
        result["return_type"] = "void"

    # Calling convention
    conv = func_def.getCallingConventionName()
    if conv and conv != "unknown":
        result["calling_convention"] = conv

    # Parameters
    params = []
    for arg in func_def.getArguments():
        param = {
            "name": arg.getName(),
            "type": resolve_data_type_name(currentProgram, arg.getDataType())
        }
        params.append(param)
    result["params"] = params

    # Varargs
    if func_def.hasVarArgs():
        result["varargs"] = True

    return result


def build_signature_string(override_data):
    """Build a human-readable C signature string from override data."""
    ret = override_data.get("return_type", "void")
    conv = override_data.get("calling_convention", "")
    params = override_data.get("params", [])
    varargs = override_data.get("varargs", False)

    params_str = ", ".join(["%s %s" % (p["type"], p["name"]) for p in params])
    if varargs:
        params_str += ", ..." if params_str else "..."
    if not params_str:
        params_str = "void"

    conv_str = ("%s " % conv) if conv else ""
    return "%s %soverride(%s)" % (ret, conv_str, params_str)


# ============================================================================
# Export
# ============================================================================

def export_call_overrides(currentProgram, path):
    """Export call-site signature overrides from the Ghidra database.

    These are local variables with FunctionDefinition data types that Ghidra
    creates when the user overrides a call signature in the decompiler view.
    They use HASH-addressed storage and represent prototype overrides at
    specific CALL instruction addresses.
    """
    fm = currentProgram.getFunctionManager()
    overrides = []

    # Load existing overrides to preserve importable markings
    existing_importable = {}
    try:
        existing_overrides = load_json_files(path, "call_overrides")
        if existing_overrides:
            for ov_data in existing_overrides:
                key = "%s_%s" % (ov_data.get("func_addr"), ov_data.get("call_addr"))
                existing_importable[key] = ov_data.get("importable", True)
    except:
        pass

    for function in fm.getFunctions(True):

        # Skip external functions
        if function.isExternal():
            continue

        func_addr = str(function.getEntryPoint())
        func_entry = function.getEntryPoint()

        for local_var in function.getLocalVariables():
            dt = local_var.getDataType()

            # Check if this is a FunctionDefinition (call-site override)
            if not is_function_definition_type(dt):
                continue

            # Get the call site address from first use offset
            first_use = local_var.getFirstUseOffset()
            call_addr = func_entry.add(first_use)

            # Verify this is at a CALL instruction
            listing = currentProgram.getListing()
            instruction = listing.getInstructionAt(call_addr)
            if instruction is None:
                log_info("Warning: override at %s is not at an instruction" % call_addr)
                continue

            # Serialize the override
            override_data = serialize_function_definition(currentProgram, dt)
            call_addr_str = str(call_addr)

            # Preserve importable marking
            key = "%s_%s" % (func_addr, call_addr_str)
            importable = existing_importable.get(key, True)

            entry = {
                "func_addr": func_addr,
                "call_addr": call_addr_str,
                "var_name": local_var.getName(),
                "importable": importable
            }
            entry.update(override_data)

            # Add readable signature for reference
            entry["signature"] = build_signature_string(override_data)

            overrides.append(entry)
            log_info("Found call override in %s at %s: %s" % (
                function.getName(), call_addr_str, entry["signature"]))

    if not overrides:
        log_info("No call-site overrides found")
        return

    # Export
    log_info("Exporting %d call-site overrides" % len(overrides))
    save_json_files(
        path=path,
        filename_base="call_overrides",
        items=clean_data(overrides),
        addr_func=lambda x: x["func_addr"],
        bucket_bits=4)
    log_info("Export complete")


# ============================================================================
# Import
# ============================================================================

def import_call_overrides(currentProgram, path):
    """Import call-site signature overrides into the Ghidra database.

    Uses HighFunctionDBUtil.writeOverride() to persist the overrides in the
    same way Ghidra's UI "Override Signature" does.
    """
    from ghidra.program.model.pcode import HighFunctionDBUtil
    from ghidra.program.model.data import ParameterDefinitionImpl
    from ghidra.program.model.symbol import SourceType

    # Load overrides
    log_info("Loading call overrides")
    overrides = load_json_files(path, "call_overrides")
    if not overrides:
        log_info("No call overrides to import")
        return

    fm = currentProgram.getFunctionManager()
    dtm = currentProgram.getDataTypeManager()

    tx_id = currentProgram.startTransaction("Import Call Overrides")
    try:
        imported = 0
        for override in overrides:
            if not override.get("importable", False):
                continue

            func_addr = get_addr_obj(currentProgram, override.get("func_addr"))
            call_addr = get_addr_obj(currentProgram, override.get("call_addr"))
            if not func_addr or not call_addr:
                continue

            function = fm.getFunctionAt(func_addr)
            if not function:
                log_info("Function not found at %s" % func_addr)
                continue

            # Build FunctionDefinitionDataType from the override data
            func_def = FunctionDefinitionDataType("call_override_%s" % str(call_addr))

            # Set return type
            ret_type_name = override.get("return_type", "void")
            ret_type = resolve_data_type_obj(currentProgram, ret_type_name)
            if ret_type:
                func_def.setReturnType(ret_type)

            # Set parameters
            params = override.get("params", [])
            param_defs = []
            for i, param in enumerate(params):
                param_type_name = param.get("type", "int")
                param_name = param.get("name", "param_%d" % i)
                param_type = resolve_data_type_obj(currentProgram, param_type_name)
                if param_type:
                    param_defs.append(ParameterDefinitionImpl(param_name, param_type, None))
            func_def.setArguments(param_defs)

            # Set varargs
            if override.get("varargs", False):
                func_def.setVarArgs(True)

            # Set calling convention
            conv = override.get("calling_convention")
            if conv:
                try:
                    func_def.setCallingConvention(conv)
                except Exception:
                    pass

            # Apply the override
            try:
                HighFunctionDBUtil.writeOverride(function, call_addr, func_def)
                imported += 1
                log_info("Applied call override at %s in %s" % (call_addr, function.getName()))
            except Exception as e:
                log_info("Failed to apply call override at %s: %s" % (call_addr, str(e)))

        log_info("Imported %d call overrides" % imported)
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")


# ============================================================================
# Delete
# ============================================================================

def delete_call_overrides(currentProgram, path):
    """Delete call-site overrides that were previously imported.

    Removes local variables with FunctionDefinition data types that match
    the importable overrides in the JSON export.
    """
    log_info("Loading call overrides to determine which are importable")
    overrides = load_json_files(path, "call_overrides")
    if not overrides:
        log_info("No call overrides to delete")
        return

    # Build set of importable override locations
    importable_locations = set()
    for ov_data in overrides:
        if ov_data.get("importable", False):
            key = "%s_%s" % (ov_data.get("func_addr"), ov_data.get("call_addr"))
            importable_locations.add(key)

    if not importable_locations:
        log_info("No importable call overrides to delete")
        return

    fm = currentProgram.getFunctionManager()
    tx_id = currentProgram.startTransaction("Delete Call Overrides")
    try:
        deleted = 0
        for function in fm.getFunctions(True):
            if function.isExternal():
                continue

            func_addr = str(function.getEntryPoint())
            func_entry = function.getEntryPoint()

            for local_var in function.getLocalVariables():
                dt = local_var.getDataType()
                if not is_function_definition_type(dt):
                    continue

                first_use = local_var.getFirstUseOffset()
                call_addr = func_entry.add(first_use)
                key = "%s_%s" % (func_addr, str(call_addr))

                if key in importable_locations:
                    function.removeVariable(local_var)
                    deleted += 1
                    log_info("Deleted call override at %s in %s" % (call_addr, function.getName()))

        log_info("Deleted %d call overrides" % deleted)
    finally:
        currentProgram.endTransaction(tx_id, True)

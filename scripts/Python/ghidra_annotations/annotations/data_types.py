import os
from collections import defaultdict
from ghidra_annotations.util import *
from ghidra.program.database.data import DataTypeUtilities
from ghidra.program.model.data import CategoryPath
from ghidra.program.model.data import DataTypeConflictHandler
from ghidra.program.model.data import DefaultDataType
from ghidra.program.model.data import Enum
from ghidra.program.model.data import EnumDataType
from ghidra.program.model.data import FunctionDefinitionDataType
from ghidra.program.model.data import ParameterDefinitionImpl
from ghidra.program.model.data import Pointer
from ghidra.program.model.data import ComponentOffsetSettingsDefinition
from ghidra.program.model.data import PointerDataType
from ghidra.program.model.data import PointerTypedef
from ghidra.program.model.data import Structure
from ghidra.program.model.data import StructureDataType
from ghidra.program.model.data import TypeDef
from ghidra.program.model.data import TypedefDataType
from ghidra.program.model.data import Undefined
from ghidra.program.model.data import Union
from ghidra.program.model.data import UnionDataType
from ghidra.util.task import TaskMonitor

def add_or_update_data_type(currentProgram, new_data_type):
    dtm = currentProgram.getDataTypeManager()
    tx_id = currentProgram.startTransaction("Add or Update Data Type")
    try:
        existing_data_type = dtm.getDataType(new_data_type.getCategoryPath(), new_data_type.getName())
        if existing_data_type is None:
            dtm.addDataType(new_data_type, DataTypeConflictHandler.REPLACE_HANDLER)
        else:
            try:
                if not DataTypeUtilities.isSameOrEquivalentDataType(existing_data_type, new_data_type):
                    dtm.replaceDataType(existing_data_type, new_data_type, False)
            except Exception as e:
                log_info("Replace failed for %s, trying remove and add: %s" % (new_data_type.getName(), str(e)))
                try:
                    dtm.remove(existing_data_type, TaskMonitor.DUMMY)
                    dtm.addDataType(new_data_type, DataTypeConflictHandler.REPLACE_HANDLER)
                    log_info("Successfully removed and re-added %s" % new_data_type.getName())
                except Exception as e2:
                    log_info("Failed to remove and re-add %s: %s" % (new_data_type.getName(), str(e2)))
                    try:
                        dtm.addDataType(new_data_type, DataTypeConflictHandler.REPLACE_EMPTY_STRUCTS_UNIONS_AND_RENAME_HANDLER)
                        log_info("Added %s with rename handler" % new_data_type.getName())
                    except Exception as e3:
                        log_info("All update attempts failed for %s: %s" % (new_data_type.getName(), str(e3)))
    finally:
        currentProgram.endTransaction(tx_id, True)

def is_function_definition_type(data_type):
    if not data_type:
        return False
    function_definition_classes = [
        'FunctionDefinitionDataType',
        'FunctionDefinitionDB',
        'FunctionDefinition',
        'FunctionDefDataType'
    ]
    class_name = data_type.__class__.__name__
    simple_class_name = class_name.rsplit('.', 1)[-1]
    return simple_class_name in function_definition_classes

def is_function_pointer_typedef(currentProgram, typedef_obj):
    if not typedef_obj:
        return False

    # Check base type
    base_type = typedef_obj.getDataType()
    if not base_type:
        return False

    # Check if it's a pointer to a function
    if isinstance(base_type, Pointer):
        pointed_type = base_type.getDataType()
        if pointed_type:
            if is_function_definition_type(pointed_type):
                return True
        else:
            return False
    elif is_function_definition_type(base_type):
        return True
    return False

def get_function_definition_id(func_def):
    try:
        if hasattr(func_def, 'getUniversalID'):
            return str(func_def.getUniversalID())
        return str(id(func_def))
    except:
        return str(id(func_def))

def determine_function_definition_importable(func_def_name, func_def_references, existing_importable):

    # Check if any typedef that references this function definition is importable
    referencing_typedefs = func_def_references.get(func_def_name, [])
    for typedef_info in referencing_typedefs:
        if typedef_info.get("importable", False):
            log_info("Function definition %s is importable because typedef %s is importable" %
                    (func_def_name, typedef_info.get("name")))
            return True

    # Check existing importable markings (for standalone function definitions)
    if existing_importable.get(func_def_name, False):
        log_info("Function definition %s is importable from existing markings" % func_def_name)
        return True

    # If function definition has references but none are importable, it's not importable
    if referencing_typedefs:
        log_info("Function definition %s is not importable (no importable typedef references)" % func_def_name)
        return False

    # Standalone function definitions default to importable unless explicitly marked as non-importable
    if existing_importable.get(func_def_name, None) is False:
        log_info("Function definition %s is explicitly marked non-importable" % func_def_name)
        return False
    return True

def get_function_definition_name(func_def, fallback_base_name):

    # Try to get the existing name from Ghidra
    if hasattr(func_def, 'getName'):
        try:
            existing_name = func_def.getName()
            if existing_name and existing_name.strip():
                if not existing_name.startswith("FunctionDef_") and existing_name != "FunctionPointer":
                    if existing_name == fallback_base_name:
                        func_def_name = existing_name + "_FUNC"
                        log_info("Function definition name conflicts with typedef '%s', using '%s'" % (existing_name, func_def_name))
                        return func_def_name
                    else:
                        log_info("Using existing function definition name: %s" % existing_name)
                        return existing_name
        except:
            pass

    # Generate a meaningful name based on the typedef
    if fallback_base_name.endswith("Ptr"):
        return fallback_base_name[:-3] + "Func"
    elif fallback_base_name.endswith("Callback"):
        return fallback_base_name + "Func"
    elif fallback_base_name.endswith("Handler"):
        return fallback_base_name + "Func"
    else:
        return fallback_base_name + "FuncDef"

def collect_function_definition_dependencies(currentProgram, func_def):

    # Get return type dependency
    dependencies = set()
    if hasattr(func_def, 'getReturnType'):
        return_type = func_def.getReturnType()
        if return_type:
            return_type_name = normalize_data_type_name(resolve_data_type_name(currentProgram, return_type))
            is_pointer = isinstance(return_type, Pointer)
            if not is_pointer and should_track_as_dependency(return_type_name):
                dependencies.add(return_type_name)
                log_info("Function definition dependency: return type %s" % return_type_name)
            elif is_pointer:
                log_info("Function definition return type %s is a pointer - not tracked as hard dependency" % return_type_name)
            else:
                log_info("Function definition return type %s not tracked as dependency" % return_type_name)

    # Get parameters
    params = None
    param_methods = ['getArguments', 'getParameters', 'getParameterDefinitions', 'getArgs']
    for method_name in param_methods:
        if hasattr(func_def, method_name):
            try:
                params = getattr(func_def, method_name)()
                log_info("Found %d parameters using %s()" % (len(params) if params else 0, method_name))
                break
            except Exception as e:
                log_info("Error with %s(): %s" % (method_name, str(e)))
                continue

    # Get parameter type dependencies
    if params:
        for i, param in enumerate(params):
            try:

                # Get type
                param_type = None
                type_methods = ['getDataType', 'getType', 'dataType']
                for method_name in type_methods:
                    if hasattr(param, method_name):
                        try:
                            param_type = getattr(param, method_name)()
                            if param_type:
                                break
                        except:
                            continue

                # Determine if dependency should be tracked
                if param_type:
                    param_type_name = normalize_data_type_name(resolve_data_type_name(currentProgram, param_type))
                    log_info("Parameter %d type: %s -> normalized: %s" % (i, resolve_data_type_name(currentProgram, param_type), param_type_name))

                    # Pointer parameters don't create dependencies - they can use forward declarations
                    is_pointer = isinstance(param_type, Pointer)
                    if not is_pointer and should_track_as_dependency(param_type_name):
                        dependencies.add(param_type_name)
                        log_info("Function definition dependency: parameter type %s" % param_type_name)
                    elif is_pointer:
                        log_info("Parameter type %s is a pointer - not tracked as hard dependency" % param_type_name)
                    else:
                        log_info("Parameter type %s not tracked as dependency" % param_type_name)

                    # Also collect nested dependencies from the parameter type
                    nested_deps = collect_typedef_deps(currentProgram, param_type)
                    for dep in nested_deps:
                        if should_track_as_dependency(dep):
                            dependencies.add(dep)
                            log_info("Function definition nested dependency: %s" % dep)
                else:
                    log_info("Could not get type for parameter %d" % i)
            except Exception as e:
                log_info("Error processing parameter %d: %s" % (i, str(e)))
                continue

    # Return dependencies
    log_info("Function definition collected dependencies: %s" % sorted(dependencies))
    return dependencies

def import_function_signature(currentProgram, signature_info, func_name = "FunctionPointer", category_path = None):

    # Get return type
    return_type_name = signature_info.get("return_type", "void")
    return_type = resolve_data_type_obj(currentProgram, return_type_name)
    if not return_type:
        log_info("Could not resolve return type '%s' for function %s, using void" % (return_type_name, func_name))
        return_type = resolve_data_type_obj(currentProgram, "void")

    # Create function definition with category
    if category_path:
        category = CategoryPath(category_path)
        func_def = FunctionDefinitionDataType(category, func_name)
    else:
        func_def = FunctionDefinitionDataType(func_name)

    # Set return type
    func_def.setReturnType(return_type)

    # Set calling convention
    calling_convention = signature_info.get("calling_convention")
    if calling_convention:
        func_def.setCallingConvention(calling_convention)

    # Set var args
    has_var_args = signature_info.get("has_var_args", False)
    if has_var_args and hasattr(func_def, 'setVarArgs'):
        func_def.setVarArgs(True)

    # Add parameters
    parameters = signature_info.get("parameters", [])
    param_defs = []
    missing_types = []
    for i, param_info in enumerate(parameters):
        param_type_name = param_info.get("type")
        param_type = resolve_data_type_obj(currentProgram, param_type_name)
        if param_type:
            resolved_name = resolve_data_type_name(currentProgram, param_type)
            if resolved_name.startswith("undefined") and param_type_name not in ["undefined", "undefined1"]:
                missing_types.append(param_type_name)
            param_name = param_info.get("name", "param%d" % i)
            param_comment = param_info.get("comment")
            param_def = ParameterDefinitionImpl(param_name, param_type, param_comment)
            param_defs.append(param_def)
        else:
            missing_types.append(param_type_name)
    if param_defs and hasattr(func_def, 'setArguments'):
        func_def.setArguments(param_defs)
    return func_def

def export_function_signature(currentProgram, func_def):

    # Check function definition
    if not func_def:
        return None

    # Get function name
    func_name = func_def.getName()
    log_info("Function name: %s" % func_name)

    # Get return type
    return_type = func_def.getReturnType()
    log_info("Return type: %s" % (return_type.getName() if return_type else "None"))

    # Create signature info
    signature_info = {
        "return_type": resolve_data_type_name(currentProgram, return_type) if return_type else "void",
        "parameters": []
    }

    # Get calling convention
    cc_name = func_def.getCallingConventionName()
    if cc_name:
        signature_info["calling_convention"] = str(cc_name)
        log_info("Calling convention: %s" % cc_name)

    # Get var args
    has_varargs = func_def.hasVarArgs()
    if has_varargs:
        signature_info["has_var_args"] = True
        log_info("Has var args: %s" % has_varargs)

    # Get parameters
    params = func_def.getArguments()
    log_info("Found %d parameters" % (len(params) if params else 0))
    if params:
        for i, param in enumerate(params):
            param_name = "param%d" % i
            param_type_name = "void"

            # Get parameter name
            name = param.getName()
            if name and name.strip():
                param_name = name.strip()

            # Get parameter type
            param_type = param.getDataType()
            if param_type:
                param_type_name = resolve_data_type_name(currentProgram, param_type)

            # Create parameter info
            param_info = {
                "name": param_name,
                "type": param_type_name
            }

            # Get comment if available
            comment = param.getComment()
            if comment and comment.strip():
                param_info["comment"] = comment.strip()

            # Add signature parameter
            signature_info["parameters"].append(param_info)
            log_info("Param %d: %s %s" % (i, param_type_name, param_name))

    # Return function signature
    log_info("Successfully exported function signature with %d parameters" % len(signature_info["parameters"]))
    return signature_info

def delete_data_types(currentProgram, path):

    # Load data types
    log_info("Loading data types")
    data_types = load_json_file(path, "data_types")
    if data_types is None:
        log_info("No existing data types file found - nothing to delete")
        return

    # Get list of importable type names
    importable_types = set()
    all_json_types = set()
    for category in ["structs", "unions", "enums", "typedefs", "function_definitions"]:
        for dt_data in data_types.get(category, []):
            dt_name = dt_data.get("name")
            if dt_name:
                all_json_types.add(dt_name)
                if dt_data.get("importable", False):
                    importable_types.add(dt_name)
    log_info("Found %d total types in JSON, %d marked as importable" % (len(all_json_types), len(importable_types)))
    if not importable_types:
        log_info("No importable types found - nothing to delete")
        return

    # Get current types in Ghidra to see what actually exists
    dtm = currentProgram.getDataTypeManager()
    existing_ghidra_types = set()
    user_created_types = set()
    for dt in dtm.getAllDataTypes():
        dt_name = dt.getName()
        existing_ghidra_types.add(dt_name)
        if dt_name not in all_json_types:
            if not dt_name.startswith("undefined") and dt_name not in get_primitive_data_types().keys():
                user_created_types.add(dt_name)

    # Parse types which are safe to delete and already missing
    safe_to_delete = importable_types & existing_ghidra_types
    already_missing = importable_types - existing_ghidra_types

    # Log safety information
    if user_created_types:
        log_info("Found %d user-created types not in JSON (will be preserved): %s" %
                (len(user_created_types), sorted(list(user_created_types))[:10]))  # Show first 10
    if already_missing:
        log_info("Types marked importable in JSON but not found in Ghidra (already deleted?): %s" %
                sorted(list(already_missing)))
    log_info("Types that will be safely deleted: %s" % sorted(list(safe_to_delete)))
    if not safe_to_delete:
        log_info("No existing importable types found to delete")
        return

    # Warn about function definitions
    function_defs_to_delete = set()
    for category_data in data_types.get("function_definitions", []):
        if (category_data.get("importable", False) and
            category_data.get("name") in safe_to_delete):
            function_defs_to_delete.add(category_data.get("name"))
    if function_defs_to_delete:
        log_info("Will delete %d function definitions: %s" %
                (len(function_defs_to_delete), sorted(list(function_defs_to_delete))))

    # Build deletion order (reverse of apply order, but only for types we're safely deleting)
    apply_order = data_types.get("apply_order", [])
    deletion_order = []
    for dt_type_info in reversed(apply_order):
        dt_name = dt_type_info.get("name")
        if dt_name in safe_to_delete:
            deletion_order.append(dt_name)

    # Add any importable types not in apply order
    for dt_name in safe_to_delete:
        if dt_name not in deletion_order:
            deletion_order.append(dt_name)
            log_info("Type %s not found in apply_order, adding to end of deletion list" % dt_name)

    # Perform deletion in dependency-safe order
    log_info("Deletion order (reverse dependency): %s" % deletion_order)
    tx_id = currentProgram.startTransaction("Delete Importable Data Types")
    try:
        deleted_count = 0
        failed_deletions = []
        for dt_name in deletion_order:
            deleted_this_type = False
            for dt in list(dtm.getAllDataTypes()):
                if dt.getName() == dt_name:
                    log_info("Deleting importable data type: %s (category: %s)" % (dt_name, dt.getCategoryPath()))
                    try:
                        dtm.remove(dt, TaskMonitor.DUMMY)
                        deleted_count += 1
                        deleted_this_type = True
                        break
                    except Exception as e:
                        error_msg = "Failed to delete %s: %s" % (dt_name, str(e))
                        log_info(error_msg)
                        failed_deletions.append((dt_name, str(e)))
                        break
            if not deleted_this_type and dt_name in safe_to_delete:
                log_info("Warning: Could not find data type %s to delete (may have been already removed)" % dt_name)

        # Summary
        log_info("Successfully deleted %d importable data types" % deleted_count)
        if failed_deletions:
            log_info("Failed to delete %d data types:" % len(failed_deletions))
            for name, error in failed_deletions:
                log_info("  %s: %s" % (name, error))

        # Verify deletion
        remaining_types = set()
        for dt in dtm.getAllDataTypes():
            if dt.getName() in safe_to_delete:
                remaining_types.add(dt.getName())
        if remaining_types:
            log_info("Warning: %d types still remain after deletion: %s" %
                    (len(remaining_types), sorted(list(remaining_types))))
        else:
            log_info("All target types successfully removed from Ghidra")
    finally:
        currentProgram.endTransaction(tx_id, True)

def get_fallback_field_type(field_name, field_len, field_type_name):
    if field_len and field_len > 0:
        fallback_type = Undefined.getUndefinedDataType(field_len)
    else:
        fallback_type = Undefined.getUndefinedDataType(1)
    return fallback_type

def fix_typedef_dependencies(type_deps, data_types):

    # Build map of all typedef names to their base types
    typedef_bases = {}
    for typedef_entry in data_types.get("typedefs", []):
        typedef_name = typedef_entry.get("name")
        typedef_base = typedef_entry.get("base")
        if typedef_name and typedef_base:
            typedef_bases[typedef_name] = typedef_base

    # Get all typedef names
    all_typedef_names = set(typedef_bases.keys())

    # Check each typedef to see if its base matches another typedef name
    for typedef_name, base_name in typedef_bases.items():

        # Normalize base name
        base_normalized = normalize_data_type_name(base_name)

        # Check if base name matches any typedef name (case sensitive first, then insensitive)
        matching_typedef = None
        if base_normalized in all_typedef_names:
            matching_typedef = base_normalized
        else:
            for other_typedef in all_typedef_names:
                if other_typedef.lower() == base_normalized.lower():
                    matching_typedef = other_typedef
                    break

        # If we found a matching typedef, add the dependency
        if matching_typedef and matching_typedef != typedef_name:
            if typedef_name not in type_deps:
                type_deps[typedef_name] = set()
            type_deps[typedef_name].add(matching_typedef)
            log_info("Fixed typedef dependency: %s -> %s" % (typedef_name, matching_typedef))
    return type_deps

def import_function_signature_lenient(currentProgram, signature_info, func_name = "FunctionPointer", category_path = None):

    # Get return type
    return_type_name = signature_info.get("return_type", "void")
    return_type = resolve_data_type_obj(currentProgram, return_type_name)
    if not return_type:
        log_info("Could not resolve return type '%s' for function %s, using undefined1" % (return_type_name, func_name))
        return_type = resolve_data_type_obj(currentProgram, "undefined1")

    # Create function definition with category
    if category_path:
        category = CategoryPath(category_path)
        func_def = FunctionDefinitionDataType(category, func_name)
    else:
        func_def = FunctionDefinitionDataType(func_name)

    # Set return type
    func_def.setReturnType(return_type)

    # Set calling convention
    calling_convention = signature_info.get("calling_convention")
    if calling_convention:
        func_def.setCallingConvention(calling_convention.strip("_"))

    # Set var args
    func_def.setVarArgs(signature_info.get("has_var_args", False))

    # Add parameters
    parameters = signature_info.get("parameters", [])
    param_defs = []
    for i, param_info in enumerate(parameters):
        param_type_name = param_info.get("type")
        param_type = resolve_data_type_obj(currentProgram, param_type_name)
        if not param_type:
            log_info("Could not resolve parameter type '%s' for function %s, using undefined1" % (param_type_name, func_name))
            param_type = resolve_data_type_obj(currentProgram, "undefined1")
        param_name = param_info.get("name", "param%d" % i)
        param_comment = param_info.get("comment")
        param_def = ParameterDefinitionImpl(param_name, param_type, param_comment)
        param_defs.append(param_def)
    if param_defs:
        func_def.setArguments(param_defs)
    return func_def

def import_data_types(currentProgram, path):

    # Load data types
    log_info("Loading data types")
    data_types = load_json_file(path, "data_types")
    if data_types is None:
        log_error("Unable to load data types")

    # Get managers
    dtm = currentProgram.getDataTypeManager()

    # Create empty structs/unions
    log_info("Creating empty struct/unions")
    for dt_type_info in data_types.get("apply_order", []):
        dt_name = dt_type_info.get("name")
        dt_type = dt_type_info.get("type")

        # Find the actual data type definition
        dt_data = None
        if dt_type == "union":
            dt_data = next((dt for dt in data_types.get("unions", []) if dt["name"] == dt_name), None)
        elif dt_type == "struct":
            dt_data = next((dt for dt in data_types.get("structs", []) if dt["name"] == dt_name), None)
        if not dt_data or not dt_data.get("importable", False):
            continue

        # Create empty struct/union shell
        if dt_type == "struct":
            log_info("Creating empty struct shell: %s" % dt_name)
            category = CategoryPath(dt_data.get("cat")) if dt_data.get("cat") else CategoryPath("/")
            struct = StructureDataType(category, dt_data.get("name"), 0)
            if dt_data.get("desc"):
                struct.setDescription(dt_data.get("desc"))
            if dt_data.get("pack", False):
                struct.setPackingEnabled(True)
            if "alig" in dt_data:
                struct.setExplicitMinimumAlignment(dt_data.get("alig"))
            add_or_update_data_type(currentProgram, struct)
        elif dt_type == "union":
            log_info("Creating empty union shell: %s" % dt_name)
            category = CategoryPath(dt_data.get("cat")) if dt_data.get("cat") else CategoryPath("/")
            union = UnionDataType(category, dt_data.get("name"))
            if dt_data.get("desc"):
                union.setDescription(dt_data.get("desc"))
            if dt_data.get("pack", False):
                union.setPackingEnabled(True)
            if "alig" in dt_data:
                union.setExplicitMinimumAlignment(dt_data.get("alig"))
            add_or_update_data_type(currentProgram, union)

    # Import all enums first
    log_info("Importing all enums")
    for enum_data in data_types.get("enums", []):
        if not enum_data.get("importable", False):
            continue
        dt_name = enum_data["name"]
        log_info("Importing enum %s" % dt_name)
        category = CategoryPath(enum_data.get("cat")) if enum_data.get("cat") else CategoryPath("/")
        enum = EnumDataType(category, enum_data["name"], 4)
        for value in enum_data["values"]:
            enum.add(value["name"], value["val"])
        add_or_update_data_type(currentProgram, enum)
        log_info("Enum import complete")

    # Import all regular typedefs next
    log_info("Importing all regular typedefs")
    failed_typedefs = []
    deferred_dependent_typedefs = []

    # Collect all function pointer typedef names for dependency checking
    function_pointer_typedef_names = set()
    for typedef_data in data_types.get("typedefs", []):
        if typedef_data.get("function_definition") and typedef_data.get("importable", False):
            function_pointer_typedef_names.add(typedef_data.get("name"))
    log_info("Function pointer typedef names: %s" % sorted(function_pointer_typedef_names))

    # Import regular typedefs (non-function-pointer ones and non-dependent ones)
    for typedef_data in data_types.get("typedefs", []):
        if not typedef_data.get("importable", False):
            continue
        if typedef_data.get("function_definition"):
            continue
        dt_name = typedef_data["name"]
        base_type_name = normalize_data_type_name(typedef_data.get("base", ""))

        # Check if this typedef depends on a function pointer typedef
        if base_type_name in function_pointer_typedef_names:
            log_info("Deferring dependent typedef %s (depends on function pointer typedef %s)" % (dt_name, base_type_name))
            deferred_dependent_typedefs.append(typedef_data)
            continue

        # Import regular typedef
        log_info("Importing regular typedef %s -> %s" % (dt_name, typedef_data.get("base")))
        category = CategoryPath(typedef_data.get("cat")) if typedef_data.get("cat") else CategoryPath("/")
        base_type = resolve_data_type_obj(currentProgram, typedef_data["base"])
        if base_type:

            # Check if resolved type is valid
            resolved_name = resolve_data_type_name(currentProgram, base_type)
            if resolved_name.startswith("undefined") and typedef_data["base"] not in ["undefined", "undefined1"]:
                log_info("Base type '%s' resolved to '%s', deferring typedef %s" %
                        (typedef_data["base"], resolved_name, dt_name))
                failed_typedefs.append(typedef_data)
                continue

            # Check if this is an offset pointer typedef
            component_offset = typedef_data.get("component_offset")
            if component_offset is not None:
                log_info("Creating offset pointer typedef %s with offset %d" % (dt_name, component_offset))
                typedef = PointerTypedef(
                    typedef_data["name"],  # name
                    base_type,             # referenced data type
                    -1,                    # pointer size (-1 for default)
                    dtm,                   # data type manager
                    component_offset       # component offset
                )
            else:
                # Regular typedef
                typedef = TypedefDataType(category, typedef_data["name"], base_type)
            add_or_update_data_type(currentProgram, typedef)
            log_info("Regular typedef import complete")
        else:
            log_info("Could not resolve base type '%s', deferring typedef %s" % (typedef_data["base"], dt_name))
            failed_typedefs.append(typedef_data)

    # Retry failed typedefs (for dependent typedefs that don't depend on function pointers)
    retry_count = 0
    max_retries = 3
    while failed_typedefs and retry_count < max_retries:
        retry_count += 1
        log_info("Typedef retry attempt %d/%d (%d remaining)" % (retry_count, max_retries, len(failed_typedefs)))
        successfully_imported = []
        for typedef_data in failed_typedefs:
            dt_name = typedef_data["name"]
            log_info("Retrying typedef %s -> %s" % (dt_name, typedef_data.get("base")))
            category = CategoryPath(typedef_data.get("cat")) if typedef_data.get("cat") else CategoryPath("/")
            base_type = resolve_data_type_obj(currentProgram, typedef_data["base"])
            if base_type:
                resolved_name = resolve_data_type_name(currentProgram, base_type)
                if resolved_name.startswith("undefined") and typedef_data["base"] not in ["undefined", "undefined1"]:
                    continue
                # Check if this is an offset pointer typedef
                component_offset = typedef_data.get("component_offset")
                if component_offset is not None:
                    log_info("Creating offset pointer typedef %s with offset %d (retry)" % (dt_name, component_offset))
                    typedef = PointerTypedef(
                        typedef_data["name"],  # name
                        base_type,             # referenced data type
                        -1,                    # pointer size (-1 for default)
                        dtm,                   # data type manager
                        component_offset       # component offset
                    )
                else:
                    typedef = TypedefDataType(category, typedef_data["name"], base_type)
                add_or_update_data_type(currentProgram, typedef)
                log_info("Typedef retry successful")
                successfully_imported.append(typedef_data)
        for typedef_data in successfully_imported:
            failed_typedefs.remove(typedef_data)

    # Warn about typedefs that cannot be imported
    if failed_typedefs:
        log_info("Warning: %d regular typedefs could not be imported:" % len(failed_typedefs))
        for typedef_data in failed_typedefs:
            log_info("  - %s (base: %s)" % (typedef_data["name"], typedef_data.get("base")))

    # Import all function definitions with lenient type resolution
    log_info("Importing all function definitions (with fallback types for missing dependencies)")
    for func_def_data in data_types.get("function_definitions", []):
        if not func_def_data.get("importable", False):
            continue
        func_def_name = func_def_data["name"]
        log_info("Importing function definition: %s" % func_def_name)
        category = CategoryPath(func_def_data.get("cat")) if func_def_data.get("cat") else CategoryPath("/")
        func_signature = {
            "return_type": func_def_data.get("return_type", "void"),
            "parameters": func_def_data.get("parameters", []),
            "calling_convention": func_def_data.get("calling_convention"),
            "has_var_args": func_def_data.get("has_var_args", False)
        }
        try:
            func_def = import_function_signature_lenient(currentProgram, func_signature, func_def_name, func_def_data.get("cat"))
            if func_def:
                add_or_update_data_type(currentProgram, func_def)
                log_info("Function definition import complete")
            else:
                log_info("Failed to create function definition %s" % func_def_name)
        except Exception as e:
            log_info("Error importing function definition %s: %s" % (func_def_name, str(e)))

    # Import all function pointer typedefs (now that function definitions exist)
    log_info("Importing all function pointer typedefs")
    for typedef_data in data_types.get("typedefs", []):
        if not typedef_data.get("importable", False):
            continue
        if not typedef_data.get("function_definition"):
            continue
        dt_name = typedef_data["name"]
        function_definition_ref = typedef_data.get("function_definition")
        log_info("Importing function pointer typedef: %s -> %s" % (dt_name, function_definition_ref))
        category = CategoryPath(typedef_data.get("cat")) if typedef_data.get("cat") else CategoryPath("/")
        func_def = resolve_data_type_obj(currentProgram, function_definition_ref)
        if func_def:
            base_type = PointerDataType(func_def)
            typedef = TypedefDataType(category, typedef_data["name"], base_type)
            add_or_update_data_type(currentProgram, typedef)
            log_info("Function pointer typedef import complete")
        else:
            log_info("Warning: Could not resolve function definition '%s', using fallback" % function_definition_ref)
            base_type = resolve_data_type_obj(currentProgram, typedef_data["base"])
            if base_type:
                typedef = TypedefDataType(category, typedef_data["name"], base_type)
                add_or_update_data_type(currentProgram, typedef)
            else:
                log_info("Error: Could not resolve fallback base type '%s'" % typedef_data["base"])

    # Import dependent typedefs (now that function pointer typedefs are available)
    log_info("Importing dependent typedefs")
    for typedef_data in deferred_dependent_typedefs:
        dt_name = typedef_data["name"]
        log_info("Importing dependent typedef: %s -> %s" % (dt_name, typedef_data.get("base")))
        category = CategoryPath(typedef_data.get("cat")) if typedef_data.get("cat") else CategoryPath("/")
        base_type = resolve_data_type_obj(currentProgram, typedef_data["base"])
        if base_type:
            # Check if this is an offset pointer typedef
            component_offset = typedef_data.get("component_offset")
            if component_offset is not None:
                log_info("Creating offset pointer typedef %s with offset %d (dependent)" % (dt_name, component_offset))
                typedef = PointerTypedef(
                    typedef_data["name"],  # name
                    base_type,             # referenced data type
                    -1,                    # pointer size (-1 for default)
                    dtm,                   # data type manager
                    component_offset       # component offset
                )
            else:
                typedef = TypedefDataType(category, typedef_data["name"], base_type)
            add_or_update_data_type(currentProgram, typedef)
            log_info("Dependent typedef import complete")
        else:
            log_info("Warning: Could not resolve base type '%s' for dependent typedef %s" % (typedef_data["base"], dt_name))

    # Re-import function definitions now that ALL typedefs are available
    log_info("Re-importing function definitions with correct types")
    for func_def_data in data_types.get("function_definitions", []):
        if not func_def_data.get("importable", False):
            continue
        func_def_name = func_def_data["name"]
        log_info("Re-importing function definition with correct types: %s" % func_def_name)
        category = CategoryPath(func_def_data.get("cat")) if func_def_data.get("cat") else CategoryPath("/")
        func_signature = {
            "return_type": func_def_data.get("return_type", "void"),
            "parameters": func_def_data.get("parameters", []),
            "calling_convention": func_def_data.get("calling_convention"),
            "has_var_args": func_def_data.get("has_var_args", False)
        }
        try:
            func_def = import_function_signature(currentProgram, func_signature, func_def_name, func_def_data.get("cat"))
            if func_def:
                add_or_update_data_type(currentProgram, func_def)
                log_info("Function definition re-import complete with correct types")
            else:
                log_info("Failed to re-import function definition %s" % func_def_name)
        except Exception as e:
            log_info("Error re-importing function definition %s: %s" % (func_def_name, str(e)))

    # Populate struct/union fields
    log_info("Populating struct/union fields")
    unresolved_fields = []
    for dt_type_info in data_types.get("apply_order", []):
        dt_name = dt_type_info.get("name")
        dt_type = dt_type_info.get("type")
        if dt_type not in ["struct", "union"]:
            continue

        # Find the actual data type definition
        dt_data = None
        if dt_type == "union":
            dt_data = next((dt for dt in data_types.get("unions", []) if dt["name"] == dt_name), None)
        elif dt_type == "struct":
            dt_data = next((dt for dt in data_types.get("structs", []) if dt["name"] == dt_name), None)
        if not dt_data or not dt_data.get("importable", False):
            continue

        # Get the existing empty struct/union
        category = CategoryPath(dt_data.get("cat")) if dt_data.get("cat") else CategoryPath("/")
        existing_dt = dtm.getDataType(category, dt_name)
        if existing_dt is None:
            log_info("Warning: Could not find existing shell for %s, creating new one" % dt_name)
            if dt_type == "struct":
                existing_dt = StructureDataType(category, dt_name, 0)
            else:
                existing_dt = UnionDataType(category, dt_name)

        # Populate struct fields
        if dt_type == "struct":
            log_info("Populating struct fields for %s" % dt_name)
            new_struct = StructureDataType(category, dt_name, 0)
            if dt_data.get("desc"):
                new_struct.setDescription(dt_data.get("desc"))
            if dt_data.get("pack", False):
                new_struct.setPackingEnabled(True)
            if "alig" in dt_data:
                new_struct.setExplicitMinimumAlignment(dt_data.get("alig"))

            # Add fields
            for field in dt_data.get("fields", []):
                field_type = resolve_data_type_obj(currentProgram, field.get("type"))
                field_name = field.get("name")
                field_type_name = field.get("type")
                field_len = field.get("len")
                if field_type:
                    log_info("Adding field: %s -> %s" % (field_name, field_type_name))
                    new_struct.insertAtOffset(
                        field.get("offset"),
                        field_type,
                        field_len if field_len else field_type.getLength(),
                        field_name,
                        field.get("comment"))
                else:
                    log_info("Could not resolve field type '%s', using fallback" % field_type_name)
                    fallback_type = get_fallback_field_type(field_name, field_len, field_type_name)
                    new_struct.insertAtOffset(
                        field.get("offset"),
                        fallback_type,
                        field_len if field_len else fallback_type.getLength(),
                        field_name,
                        field.get("comment"))
                    unresolved_fields.append({
                        "struct": dt_name,
                        "field": field_name,
                        "type": field_type_name
                    })
            add_or_update_data_type(currentProgram, new_struct)

        # Populate union fields
        elif dt_type == "union":
            log_info("Populating union fields for %s" % dt_name)
            new_union = UnionDataType(category, dt_name)
            if dt_data.get("desc"):
                new_union.setDescription(dt_data.get("desc"))
            if dt_data.get("pack", False):
                new_union.setPackingEnabled(True)
            if "alig" in dt_data:
                new_union.setExplicitMinimumAlignment(dt_data.get("alig"))

            # Add fields
            for field in dt_data.get("fields", []):
                field_type = resolve_data_type_obj(currentProgram, field.get("type"))
                field_name = field.get("name")
                field_type_name = field.get("type")
                field_len = field.get("len")
                if field_type:
                    log_info("Adding field: %s -> %s" % (field_name, field_type_name))
                    new_union.add(field_type, field_name, field.get("comment"))
                else:
                    log_info("Could not resolve field type '%s', using fallback" % field_type_name)
                    fallback_type = get_fallback_field_type(field_name, field_len, field_type_name)
                    new_union.add(fallback_type, field_name, field.get("comment"))
                    unresolved_fields.append({
                        "struct": dt_name,
                        "field": field_name,
                        "type": field_type_name
                    })
            add_or_update_data_type(currentProgram, new_union)
        log_info("Import complete for %s" % dt_name)

    # Log summary
    if unresolved_fields:
        log_info("Summary: %d fields used fallback undefined types:" % len(unresolved_fields))
        for field_info in unresolved_fields:
            log_info("%s.%s: %s -> undefined" % (field_info["struct"], field_info["field"], field_info["type"]))
    else:
        log_info("All field types resolved successfully")

def export_data_types(currentProgram, path):

    # Load existing data types to preserve importable markings
    existing_importable = {}
    try:
        existing_data = load_json_file(path, "data_types")
        if existing_data:
            log_info("Loading existing importable markings")
            for category in ["structs", "unions", "enums", "typedefs", "function_definitions"]:
                for dt_data in existing_data.get(category, []):
                    dt_name = dt_data.get("name")
                    if dt_name:
                        existing_importable[dt_name] = dt_data.get("importable", False)
                        log_info("Preserving importable marking for: %s" % dt_name)
    except:
        log_info("No existing data types file found, all types will default to non-importable")

    # Dependency list
    type_deps = defaultdict(set)
    type_defs = {}
    function_definitions = {}
    processed_func_defs = {}
    func_def_references = defaultdict(list)

    # Store original function definition metadata
    original_func_def_metadata = {}

    # Data types layout
    data_types = {
        "structs": [],
        "unions": [],
        "enums": [],
        "typedefs": [],
        "function_definitions": [],
        "apply_order": []
    }

    # Collect all standalone function definitions and their original metadata
    log_info("Collecting standalone function definitions")
    for dt in list(currentProgram.getDataTypeManager().getAllDataTypes()):
        dt_name = dt.getName()
        if not dt_name or dt_name.startswith("undefined") or dt_name.startswith("__") or dt_name == "":
            continue
        if dt_name in get_primitive_data_types().keys():
            continue
        if is_function_definition_type(dt):
            func_def_id = get_function_definition_id(dt)
            dt_cat_path = dt.getCategoryPath().getPath()
            is_importable = existing_importable.get(dt_name, True)
            original_func_def_metadata[func_def_id] = {
                "name": dt_name,
                "category": dt_cat_path,
                "importable": is_importable,
                "data_type": dt
            }
            log_info("Stored original metadata for function definition: %s (category: %s)" % (dt_name, dt_cat_path))

    # Process all other data types
    log_info("Processing all data types")
    for dt in list(currentProgram.getDataTypeManager().getAllDataTypes()):

        # Get type info
        dt_name = dt.getName()
        if not dt_name or dt_name.startswith("undefined") or dt_name.startswith("__") or dt_name == "":
            continue
        if dt_name in get_primitive_data_types().keys():
            continue
        dt_cat_path = dt.getCategoryPath().getPath()
        dt_type = "unknown"

        # Get additional info
        is_standard_category = is_standard_ghidra_category(dt_cat_path)
        is_importable = existing_importable.get(dt_name, True)

        # Enum types
        if isinstance(dt, Enum):
            dt_type = "enum"
            dt_values = [{"name": n, "val": dt.getValue(n)} for n in dt.getNames()]
            log_info("Recording enum %s (importable: %s)" % (dt_name, is_importable))
            entry = {
                "type": dt_type,
                "name": dt_name,
                "cat": dt_cat_path,
                "values": dt_values,
                "importable": is_importable
            }
            data_types["enums"].append(entry)
            type_defs[dt_name] = dt_type
            type_deps[dt_name] = set()

        # TypeDef types
        elif isinstance(dt, TypeDef):
            dt_type = "typedef"
            dt_type_name = resolve_data_type_name(currentProgram, dt.getDataType())
            log_info("Recording typedef %s (importable: %s)" % (dt_name, is_importable))
            entry = {
                "type": dt_type,
                "name": dt_name,
                "cat": dt_cat_path,
                "base": dt_type_name,
                "importable": is_importable
            }

            # Check for offset pointer typedef (pointer with component offset)
            try:
                settings = dt.getDefaultSettings()
                if settings and ComponentOffsetSettingsDefinition.DEF.hasValue(settings):
                    component_offset = ComponentOffsetSettingsDefinition.DEF.getValue(settings)
                    entry["component_offset"] = int(component_offset)
                    log_info("Detected offset pointer typedef: %s with offset %d" % (dt_name, component_offset))
            except Exception as e:
                # Not an offset pointer or inspection failed
                pass

            # Function pointer typedef
            is_func_ptr_typedef = is_function_pointer_typedef(currentProgram, dt)
            log_info("Typedef %s: is_function_pointer_typedef = %s, base type = %s" % (dt_name, is_func_ptr_typedef, dt_type_name))
            if is_func_ptr_typedef:
                log_info("Detected function pointer typedef: %s" % dt_name)
                base_type = dt.getDataType()
                log_info("Base type class: %s" % base_type.__class__.__name__)

                # Get function definition
                func_def = None
                if isinstance(base_type, Pointer):
                    pointed_type = base_type.getDataType()
                    log_info("Pointed type class: %s, name: %s" % (pointed_type.__class__.__name__ if pointed_type else "None", pointed_type.getName() if pointed_type else "None"))
                    if is_function_definition_type(pointed_type):
                        func_def = pointed_type
                        log_info("Found function definition through pointer: %s" % pointed_type.getName())
                elif is_function_definition_type(base_type):
                    func_def = base_type
                    log_info("Found direct function definition: %s" % base_type.getName())
                else:
                    log_info("Base type is not a function definition, class: %s" % base_type.__class__.__name__)
                if func_def:

                    # Get unique ID to check for duplicates
                    func_def_id = get_function_definition_id(func_def)
                    log_info("Function definition ID: %s" % func_def_id)

                    # Check if we already processed this function definition
                    if func_def_id in processed_func_defs:
                        func_def_name = processed_func_defs[func_def_id]
                        log_info("Function definition already processed as %s, reusing for typedef %s" % (func_def_name, dt_name))
                        entry["function_definition"] = func_def_name
                        entry["base"] = func_def_name + "*"

                        # Add function definition reference
                        func_def_references[func_def_name].append({
                            "name": dt_name,
                            "importable": is_importable
                        })

                        # Ensure type_deps entry exists and set dependency
                        if dt_name not in type_deps:
                            type_deps[dt_name] = set()
                        type_deps[dt_name].add(func_def_name)
                    else:

                        # Use original metadata if available, otherwise generate name
                        if func_def_id in original_func_def_metadata:
                            original_metadata = original_func_def_metadata[func_def_id]
                            func_def_name = original_metadata["name"]
                            func_def_category = original_metadata["category"]
                            func_def_importable = original_metadata["importable"]
                            log_info("Using original metadata for function definition %s (category: %s)" % (func_def_name, func_def_category))
                        else:
                            func_def_name = get_function_definition_name(func_def, dt_name)
                            func_def_category = dt_cat_path
                            func_def_importable = is_importable
                            log_info("No original metadata found, generating name %s for function definition" % func_def_name)

                        # Export function signature
                        function_signature = export_function_signature(currentProgram, func_def)
                        if function_signature:

                            # Store function definition separately
                            func_def_entry = {
                                "type": "function_definition",
                                "name": func_def_name,
                                "cat": func_def_category,
                                "return_type": function_signature.get("return_type", "void"),
                                "parameters": function_signature.get("parameters", []),
                                "importable": func_def_importable
                            }

                            # Add optional fields
                            if "calling_convention" in function_signature:
                                func_def_entry["calling_convention"] = function_signature["calling_convention"]
                            if function_signature.get("has_var_args", False):
                                func_def_entry["has_var_args"] = True

                            # Add to function definitions
                            data_types["function_definitions"].append(func_def_entry)
                            function_definitions[func_def_name] = func_def_entry
                            processed_func_defs[func_def_id] = func_def_name
                            type_defs[func_def_name] = "function_definition"

                            # Collect dependencies for function definitions
                            func_def_deps = collect_function_definition_dependencies(currentProgram, func_def)
                            type_deps[func_def_name] = func_def_deps
                            log_info("Function definition %s has dependencies: %s" % (func_def_name, sorted(func_def_deps)))

                            # Add function definition reference
                            func_def_references[func_def_name].append({
                                "name": dt_name,
                                "importable": is_importable
                            })

                            # Update typedef to reference the function definition
                            entry["function_definition"] = func_def_name
                            entry["base"] = func_def_name + "*"

                            # Ensure type_deps entry exists and set dependency
                            if dt_name not in type_deps:
                                type_deps[dt_name] = set()
                            type_deps[dt_name].add(func_def_name)
                            log_info("Successfully exported function definition %s for typedef %s" % (func_def_name, dt_name))

            # Add typedef entry
            data_types["typedefs"].append(entry)
            type_defs[dt_name] = dt_type

            # Ensure type_deps entry exists for this typedef
            if dt_name not in type_deps:
                type_deps[dt_name] = set()

            # If this typedef doesn't reference a function definition, collect its dependencies
            if not entry.get("function_definition"):
                deps = collect_typedef_deps(currentProgram, dt)
                for dep in deps:
                    if dep != dt_name and should_track_as_dependency(dep):
                        type_deps[dt_name].add(dep)

        # Structures/Unions
        elif isinstance(dt, Structure) or isinstance(dt, Union):

            # Get type string
            dt_type = "struct"
            if isinstance(dt, Union):
                dt_type = "union"

            # Get struct/union fields
            dt_fields = []
            struct_deps = set()
            for comp in dt.getComponents():
                dt_field_type = comp.getDataType()
                if dt_field_type is None:
                    continue
                dt_field_offset = comp.getOffset()
                dt_field_length = comp.getLength()
                dt_field_type_name = resolve_data_type_name(currentProgram, dt_field_type)
                dt_field_name = comp.getFieldName() or "field_" + str(dt_field_offset)
                if dt_field_type_name.startswith("undefined") and dt_field_length == 1:
                    continue
                dt_field_entry = {
                    "name": dt_field_name,
                    "type": dt_field_type_name,
                    "offset": dt_field_offset,
                    "len": dt_field_length
                }
                if comp.getComment():
                    dt_field_entry["comment"] = comp.getComment()
                dt_fields.append(dt_field_entry)

                # Collect dependencies
                field_deps = collect_typedef_deps(currentProgram, dt_field_type)
                for dep in field_deps:
                    if dep != dt_name and should_track_as_dependency(dep):
                        struct_deps.add(dep)

                # Also add direct field type if it should be tracked as dependency
                dt_field_type_name_norm = normalize_data_type_name(dt_field_type_name)
                if should_track_as_dependency(dt_field_type_name_norm) and dt_field_type_name_norm != dt_name:
                    struct_deps.add(dt_field_type_name_norm)

            # Record struct/union
            dt_length = dt.getLength()
            dt_description = dt.getDescription()
            dt_alignment = getattr(dt, 'getAlignment', lambda: None)()
            dt_packing = getattr(dt, 'isPackingEnabled', lambda: None)()
            log_info("Recording %s %s with %d fields (importable: %s)" % (dt_type, dt_name, len(dt_fields), is_importable))
            entry = {
                "type": dt_type,
                "name": dt_name,
                "cat": dt_cat_path,
                "len": dt_length,
                "desc": dt_description,
                "fields": dt_fields,
                "alig": dt_alignment,
                "pack": dt_packing,
                "importable": is_importable
            }
            data_types["unions" if isinstance(dt, Union) else "structs"].append(entry)
            type_defs[dt_name] = dt_type
            type_deps[dt_name] = struct_deps

        # Function Definitions
        elif is_function_definition_type(dt):
            func_def_id = get_function_definition_id(dt)
            if func_def_id in processed_func_defs:
                log_info("Function definition %s already processed from typedef, skipping standalone" % dt_name)
                continue

            # Use the original metadata we stored
            if func_def_id in original_func_def_metadata:
                original_metadata = original_func_def_metadata[func_def_id]
                actual_name = original_metadata["name"]
                actual_category = original_metadata["category"]
                actual_importable = original_metadata["importable"]
                log_info("Processing standalone function definition %s (category: %s, importable: %s)" % (actual_name, actual_category, actual_importable))

                # Export function signature
                function_signature = export_function_signature(currentProgram, dt)
                if function_signature:
                    entry = {
                        "type": "function_definition",
                        "name": actual_name,
                        "cat": actual_category,
                        "return_type": function_signature.get("return_type", "void"),
                        "parameters": function_signature.get("parameters", []),
                        "importable": actual_importable
                    }

                    # Add optional fields
                    if "calling_convention" in function_signature:
                        entry["calling_convention"] = function_signature["calling_convention"]
                    if function_signature.get("has_var_args", False):
                        entry["has_var_args"] = True

                    # Add entry
                    data_types["function_definitions"].append(entry)
                    function_definitions[actual_name] = entry
                    processed_func_defs[func_def_id] = actual_name
                    type_defs[actual_name] = "function_definition"

                    # Collect dependencies for standalone function definitions too
                    func_def_deps = collect_function_definition_dependencies(currentProgram, dt)
                    type_deps[actual_name] = func_def_deps
                    log_info("Standalone function definition %s has dependencies: %s" % (actual_name, sorted(func_def_deps)))

    # Determine importable status for function definitions
    log_info("Determining importable status")
    log_info("Function definition references: %s" % dict(func_def_references))
    for func_def_entry in data_types["function_definitions"]:
        func_def_name = func_def_entry["name"]
        final_importable = determine_function_definition_importable(
            func_def_name, func_def_references, existing_importable)
        func_def_entry["importable"] = final_importable
        log_info("Function definition %s final importable status: %s" % (func_def_name, final_importable))

    # Fix typedef dependencies that were lost due to primitive resolution
    log_info("Fixing typedef dependencies")
    type_deps = fix_typedef_dependencies(type_deps, data_types)

    # Sort dependencies
    log_info("Sorting dependencies")
    log_info("Type definitions found: %s" % list(type_defs.keys()))
    log_info("Dependencies: %s" % dict(type_deps))
    sorted_order = resolve_circular_dependencies(type_deps, type_defs)

    # Create apply order list
    log_info("Determining apply order")
    apply_order = []
    for type_name in sorted_order:
        if type_name in type_defs:
            type_entry = {
                "name": type_name,
                "type": type_defs[type_name]
            }
            apply_order.append(type_entry)
            log_info("Apply order: %s (%s)" % (type_name, type_defs[type_name]))
    data_types["apply_order"] = apply_order

    # Export data types
    log_info("Exporting %d data types (%d function definitions)" % (len(type_defs), len(function_definitions)))
    save_json_file(path, "data_types", data_types)
    log_info("Export complete")

    # Export function conventions lookup for ESP tracking
    export_func_conventions(currentProgram, path)


def export_func_conventions(currentProgram, path):
    """Export function calling conventions lookup for ESP tracking.

    Creates a simple lookup file mapping function definition names to their
    calling convention and parameter byte sizes. Used by pcode.py to handle
    indirect calls (CALLIND) with proper stack cleanup.

    Args:
        currentProgram: The Ghidra program
        path: Base path for output files
    """
    from ghidra.program.model.data import FunctionDefinition as FuncDefType

    log_info("Exporting function conventions lookup")
    conventions = {}

    dtm = currentProgram.getDataTypeManager()
    for dt in dtm.getAllDataTypes():
        # Check if it's a function definition
        if not isinstance(dt, FuncDefType):
            continue

        name = dt.getName()
        if not name or name.startswith("undefined"):
            continue

        cc_name = dt.getCallingConventionName()

        # Calculate total parameter bytes
        param_bytes = 0
        args = dt.getArguments()
        if args:
            for arg in args:
                arg_type = arg.getDataType()
                if arg_type:
                    # Get actual size, align to 4 bytes for stack
                    size = arg_type.getLength()
                    param_bytes += max(4, ((size + 3) // 4) * 4)

        conventions[name] = {
            'convention': str(cc_name) if cc_name else None,
            'param_bytes': param_bytes
        }

    log_info("Exported %d function conventions" % len(conventions))
    save_json_file(path, "func_conventions", conventions)

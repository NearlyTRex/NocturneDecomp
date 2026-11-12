import os
import re

from ghidra.program.model.address import AddressSet
from ghidra.program.model.listing import Function, LocalVariableImpl, ParameterImpl, VariableStorage
from ghidra.program.model.symbol import SourceType
from ghidra.util.exception import DuplicateNameException, InvalidInputException

from ghidra_annotations.annotations.tracked import known_type

from ghidra_annotations.util import (
    clean_data, disassemble_at_addr, get_addr_obj, is_addr_disassembled, load_json_files, log_info, log_warning,
    resolve_data_type_name, save_json_files)


class FunctionNameAddressMismatchError(Exception):
    """A function's _FUN_<addr> suffix disagrees with its entry point."""


class ThisPtrMismatchError(Exception):
    """A class method's receiver contradicts the class its name claims."""


class TUNameError(Exception):
    """A function's TU cannot be an original file: a placeholder folder or not 8.3."""


# folder_file.ext_functionName_FUN_<address> -- the trailing address is a
# redundant copy of the entry point, which is exactly what makes it checkable.
NAME_ADDRESS_SUFFIX = re.compile(r"_FUN_([0-9a-fA-F]{4,8})$")


def is_import_thunk(func_data):
    """A JMP straight into a DLL import stub.

    Ghidra binds such a thunk's name to the external symbol, so it cannot be
    given a label of its own: it inherits the import thunk's name, suffix and
    all, and no rename will separate them. The address in that inherited suffix
    is therefore someone else's by construction, not by mistake.

    Thunks into a normal function of this program are deliberately NOT exempt --
    those do take an independent label, so a mismatch on one is a real defect.
    """
    if not func_data.get("thunk"):
        return False
    return str(func_data.get("thtarget") or "").upper().startswith("EXTERNAL")


def is_default_thunk_name(func_data, claimed):
    """A thunk still wearing the name Ghidra derives from its target.

    Nobody applied `thunk_FUN_<target>`: Ghidra composes it from the target's
    name until the thunk is given a label of its own, so the suffix is the
    target's address by construction. A freshly analysed program is full of them.
    """
    if not func_data.get("thunk") or not (func_data.get("name") or "").startswith("thunk_"):
        return False
    return str(func_data.get("thtarget") or "").lower().lstrip("0") == claimed.lstrip("0")


def find_name_address_mismatches(functions):
    """Functions whose _FUN_<addr> suffix does not match where they start.

    The suffix is redundant with `addr`, so a disagreement can only mean a name
    was applied to the wrong symbol -- typically when two candidates carried the
    same placeholder (two Ordinal_116 thunks, two FUN_ stubs) and a rename hit
    the wrong one. It is never a difference of opinion, EXCEPT where Ghidra owns
    the name: thunks into a DLL import (is_import_thunk) and thunks not yet
    named (is_default_thunk_name).

    This is not cosmetic, which is why it fails the export rather than warning:

      * the pseudocode exporter derives its filenames from the name, so a stolen
        suffix puts two functions in one file and the loser is silently absent
        from the tree;
      * the sibling transfer ledger reads `expect.name` out of the header inside
        that file, so a batch built from a collided export retypes the wrong
        body while reporting success;
      * every cross-binary lookup in this repo is by name, and a name carrying
        another function's address sends the reader to the wrong place.

    Returned strings are for the log; the caller decides whether to raise.
    """
    mismatches = []
    for func_data in functions:
        name = func_data.get("name") or ""
        addr = (func_data.get("addr") or "").lower()
        match = NAME_ADDRESS_SUFFIX.search(name)
        if not match or not addr:
            continue
        if is_import_thunk(func_data):
            continue
        claimed = match.group(1).lower()
        if is_default_thunk_name(func_data, claimed):
            continue
        if claimed.lstrip("0") != addr.lstrip("0"):
            mismatches.append(
                "%s starts at %s but its name claims %s" % (name, addr, claimed))
    return mismatches


# <tu>_<Class>_<method>_FUN_<addr>. The class is the first C- or S-prefixed
# component after the translation unit (classes C, structs S), which is exactly
# what the schema promises.
CLASS_METHOD_RE = re.compile(
    r"^(?P<tu>[A-Za-z0-9_]+\.c(?:pp)?)_(?P<cls>[CS][A-Z][A-Za-z0-9]*)_"
    r"(?P<method>.+)_FUN_[0-9a-fA-F]+$")

RECEIVER_NAME = "this_ptr"


def known_class_names(currentProgram):
    """Class names that exist as real types, read from the LIVE type manager.

    Deliberately not read from include/types/classes/: that directory is
    written by the data_types export, so depending on it here would make this
    gate's verdict depend on whether another exporter had already run.
    """
    return {data_type.getName() for data_type in currentProgram.getDataTypeManager().getAllDataTypes()}


def find_this_ptr_defects(functions, class_names):
    """Class methods whose parameter 0 contradicts the class in their name.

    `<tu>_<Class>_<method>_FUN_<addr>` asserts membership of `Class`, which
    makes two claims about parameter 0 that are otherwise unenforced: it is the
    `this` pointer, and its type is `Class *`. Three ways that fails:

      NO_PARAMS  a member function declaring no parameters cannot receive
                 `this`, so the prototype is wrong and every caller decompiles
                 against it.
      TYPE       the name spells the class one way and the parameter another.
                 Two spellings of one class splits greps and invites a second,
                 divergent struct.
      NAME       the receiver is typed right but called something else, so a
                 reader cannot tell the implicit `this` from a real argument
                 and any tooling keyed on `this_ptr` skips the function.

    Returned strings are for the log; the caller decides whether to raise.
    """
    defects = []
    for func_data in functions:
        name = func_data.get("name") or ""
        match = CLASS_METHOD_RE.match(name)
        if not match:
            continue
        cls = match.group("cls")
        params = (func_data.get("vars") or {}).get("params") or []
        if not params:
            defects.append(
                "%s declares no parameters, so it cannot receive `%s` of type %s *"
                % (name, RECEIVER_NAME, cls))
            continue
        p0 = params[0]
        have_name = p0.get("name")
        have_type = (p0.get("type") or "").replace(" ", "")
        if have_type != cls + "*":
            hint = ""
            have_cls = have_type.rstrip("*")
            if cls not in class_names and have_cls in class_names:
                hint = (" -- %s is not a type and %s is, so the NAME is wrong"
                        % (cls, have_cls))
            defects.append(
                "%s claims class %s but parameter 0 is `%s %s`%s"
                % (name, cls, p0.get("type"), have_name, hint))
        elif have_name != RECEIVER_NAME:
            defects.append(
                "%s receiver is typed %s but named `%s`, not `%s`"
                % (name, p0.get("type"), have_name, RECEIVER_NAME))
    return defects


def is_function_external(currentProgram, function):
    """An external function, or a thunk to one.

    An external function's entry point is in the external space and its symbol
    is external, so isExternal() answers for all three.
    """
    if function.isExternal():
        return True
    target = function.getThunkedFunction(True) if function.isThunk() else None
    return target is not None and target.isExternal()

def get_stack_conflicts(locals_data):
    """(names, messages) for the stack locals an import could not place.

    One is out of the 16-bit offset range, or of a size no stack slot has, or
    overlaps the next one up the frame.
    """
    stack_vars = sorted(((d.get("name"), d["storage"].get("offset", 0), d["storage"].get("size", 1))
                         for d in locals_data if d.get("storage", {}).get("stack")), key = lambda v: v[1])
    names, messages = set(), []
    for i, (name, offset, size) in enumerate(stack_vars):
        if offset < -32768 or offset > 32767:
            names.add(name)
            messages.append("Variable %s has invalid offset: %d" % (name, offset))
        elif size <= 0 or size > 1024:
            names.add(name)
            messages.append("Variable %s has invalid size: %d" % (name, size))
        elif i + 1 < len(stack_vars) and offset + size > stack_vars[i + 1][1]:
            next_name, next_offset, next_size = stack_vars[i + 1]
            names.update((name, next_name))
            messages.append("Variables %s and %s overlap: [%d-%d] vs [%d-%d]" % (
                name, next_name, offset, offset + size - 1, next_offset, next_offset + next_size - 1))
    return names, messages


def without_conflicting_storage(locals_data, names):
    """The locals with the storage of the named ones dropped, and the names whose storage went."""
    fixed, removed = [], []
    for local_data in locals_data:
        if local_data.get("name") in names and "storage" in local_data:
            local_data = {k: v for k, v in local_data.items() if k != "storage"}
            removed.append(local_data.get("name"))
        fixed.append(local_data)
    return fixed, removed

def delete_functions(currentProgram, path):
    """Removes nothing: the import creates or updates each function in place."""
    log_info("Functions are updated in place by the import, never deleted")

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

    # The storage's size, validity and varnodes; a register's varnode is made from the register
    var_storage = variable.getVariableStorage()
    if var_storage.size() > 0:
        storage_info["size"] = var_storage.size()
    if not var_storage.isValid():
        storage_info["invalid"] = True
    varnodes = []
    for varnode in var_storage.getVarnodes():
        vn_data = {"addr": str(varnode.getAddress()), "size": varnode.getSize()}
        if varnode.getOffset() != 0:
            vn_data["offset"] = varnode.getOffset()
        varnodes.append(vn_data)
    if not varnodes and variable.isRegisterVariable():
        reg = variable.getRegister()
        varnodes.append({"addr": "register:%08x" % reg.getOffset(), "size": reg.getBitLength() // 8})
    # Only what is there: clean_data keeps a value that only empties once cleaned
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

    # A local whose storage an import could not place is exported without it
    if locals_list:
        names, messages = get_stack_conflicts(locals_list)
        if names:
            log_info("Storage conflicts in function %s: %s" % (function.getName(), "; ".join(messages)))
            locals_list, removed_vars = without_conflicting_storage(locals_list, names)
            variable_info["storage_conflicts_resolved"] = removed_vars
        variable_info["locals"] = locals_list

    # Export return storage information
    return_var = function.getReturn()
    ret_storage = export_variable_storage(currentProgram, return_var) if return_var else None
    if ret_storage:
        variable_info["ret_storage"] = ret_storage
    return variable_info

def export_function_body(currentProgram, function):
    return [{"start": str(r.getMinAddress()), "end": str(r.getMaxAddress()), "size": r.getLength()}
            for r in function.getBody()]

def import_variable_storage(currentProgram, storage_info, data_type):
    """The VariableStorage a recorded storage stands for, or None to leave the storage to Ghidra.

    A stack slot must fit its type and the frame; a hash-addressed varnode is a
    decompiler override of a variable's type.
    """
    storage = None
    if not storage_info:
        return None
    if storage_info.get("stack"):
        offset, size = storage_info.get("offset", 0), data_type.getLength()
        if storage_info.get("size", 1) != size or not -32768 <= offset <= 32767 or not 0 < size <= 1024:
            log_info("Stack storage at %d of size %s does not fit a %d-byte type" % (
                offset, storage_info.get("size"), size))
            return None
        storage = VariableStorage(currentProgram, offset, size)
    elif storage_info.get("reg"):
        register = currentProgram.getRegister(storage_info["reg"])
        storage = VariableStorage(currentProgram, register) if register else None
    elif storage_info.get("mem"):
        address = get_addr_obj(currentProgram, storage_info["mem"])
        storage = VariableStorage(currentProgram, address, data_type.getLength()) if address else None
    elif len(storage_info.get("varnodes", [])) == 1 and storage_info["varnodes"][0].get("addr", "").startswith("HASH:"):
        varnode = storage_info["varnodes"][0]
        hash_space = currentProgram.getAddressFactory().getAddressSpace("HASH")
        if hash_space is not None:
            address = hash_space.getAddress(int(varnode["addr"][len("HASH:"):], 16))
            storage = VariableStorage(currentProgram, address, varnode.get("size", data_type.getLength()))
    return storage if storage is not None and storage.isValid() else None

def import_parameters(currentProgram, function, params_data, custom_storage):
    """Replace the function's parameters with the recorded ones.

    The recorded storage is used only when the function has custom storage;
    otherwise the calling convention places them. A parameter of a type the
    program lacks leaves the parameters as they are, since dropping or
    retyping one would change the signature.
    """
    params = []
    for param_data in params_data:
        param_type = known_type(currentProgram, param_data.get("type"))
        if param_type is None:
            log_info("%s: parameter %s has a type the program lacks (%s); parameters left as they are" % (
                function.getName(), param_data.get("name"), param_data.get("type")))
            return
        storage = import_variable_storage(currentProgram, param_data.get("storage"), param_type) \
            if custom_storage else None
        param = ParameterImpl(param_data.get("name", "param"), param_type, storage, currentProgram) \
            if storage is not None else ParameterImpl(param_data.get("name", "param"), param_type, currentProgram)
        if param_data.get("cmt"):
            param.setComment(param_data["cmt"])
        params.append(param)
    if params:
        update = (Function.FunctionUpdateType.CUSTOM_STORAGE if custom_storage
                  else Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS)
        function.replaceParameters(update, True, SourceType.USER_DEFINED, params)


def local_unchanged(currentProgram, existing, local_data):
    """Whether a local already has the recorded type, stack slot, comment and first use."""
    storage, recorded = export_variable_storage(currentProgram, existing), local_data.get("storage", {})
    return (resolve_data_type_name(currentProgram, existing.getDataType()) == local_data.get("type")
            and (storage.get("offset"), storage.get("size")) == (recorded.get("offset"), recorded.get("size"))
            and existing.getComment() == local_data.get("cmt")
            and existing.getFirstUseOffset() == local_data.get("use", 0))


def import_locals(currentProgram, function, locals_data):
    """Make the function's locals the recorded ones: others removed, changed ones remade."""
    existing = {var.getName(): var for var in function.getLocalVariables()}
    recorded_names = {local_data.get("name") for local_data in locals_data}
    for name, variable in existing.items():
        if name not in recorded_names:
            function.removeVariable(variable)
    for local_data in locals_data:
        name = local_data.get("name", "local")
        if name in existing and local_unchanged(currentProgram, existing[name], local_data):
            continue
        local_type = known_type(currentProgram, local_data.get("type"))
        if local_type is None:
            log_info("%s: local %s has a type the program lacks (%s)" % (function.getName(), name,
                                                                        local_data.get("type")))
            continue
        if name in existing:
            function.removeVariable(existing[name])
        storage = import_variable_storage(currentProgram, local_data.get("storage"), local_type)
        local = LocalVariableImpl(name, local_data.get("use", 0), local_type,
                                  storage if storage is not None else VariableStorage.UNASSIGNED_STORAGE,
                                  currentProgram)
        try:
            added = function.addLocalVariable(local, SourceType.USER_DEFINED)
        except (DuplicateNameException, InvalidInputException) as error:
            log_info("%s: local %s not added: %s" % (function.getName(), name, error))
            continue
        # The comment goes on the variable the function made, not the one handed to it
        if local_data.get("cmt"):
            added.setComment(local_data["cmt"])


def import_function_variables(currentProgram, function, variables_data, custom_storage = False):
    import_parameters(currentProgram, function, variables_data.get("params", []), custom_storage)
    import_locals(currentProgram, function, variables_data.get("locals", []))
    # Only a custom-storage function keeps a return storage of its own; otherwise the convention places it
    return_storage = import_variable_storage(currentProgram, variables_data.get("ret_storage"),
                                             function.getReturnType()) if custom_storage else None
    if return_storage is not None:
        function.setReturn(function.getReturnType(), return_storage, SourceType.USER_DEFINED)

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

def place_function(currentProgram, fn, fn_addr):
    """The function the record describes, made or moved to its body; overlapping functions are removed."""
    fm = currentProgram.getFunctionManager()
    body_ranges = fn.get("body", [])
    for range_info in body_ranges:
        start_addr = get_addr_obj(currentProgram, range_info["start"])
        end_addr = get_addr_obj(currentProgram, range_info["end"])
        if start_addr and end_addr and not is_addr_disassembled(currentProgram, start_addr):
            disassemble_at_addr(currentProgram, start_addr, end_addr)
    body = import_function_body(currentProgram, fn_addr, body_ranges)
    for other in list(fm.getFunctionsOverlapping(body)):
        if other.getEntryPoint() != fn_addr:
            log_info("Removing %s at %s, which overlaps %s" % (other.getName(), other.getEntryPoint(), fn["name"]))
            fm.removeFunction(other.getEntryPoint())
    function = fm.getFunctionAt(fn_addr)
    if function is None:
        return fm.createFunction(fn["name"], fn_addr, body, SourceType.USER_DEFINED)
    function.setName(fn["name"], SourceType.USER_DEFINED)
    if body_ranges:
        function.setBody(body)
    return function


def apply_function(currentProgram, function, fn):
    """Set the record's signature, flags, variables, thunk target, tags and comment on the function."""
    if should_import_return_type(fn.get("ret"), fn.get("vars")):
        return_type = known_type(currentProgram, fn["ret"])
        if return_type is not None:
            function.setReturnType(return_type, SourceType.USER_DEFINED)
    if fn.get("conv"):
        function.setCallingConvention(fn["conv"])
    # Set both ways: a flag the record lacks is off
    function.setInline(bool(fn.get("inline")))
    function.setVarArgs(bool(fn.get("variadic")))
    function.setNoReturn(bool(fn.get("noreturn")))
    function.setCustomVariableStorage(bool(fn.get("custom_storage")))
    if fn.get("vars"):
        import_function_variables(currentProgram, function, fn["vars"], bool(fn.get("custom_storage")))
    target_addr = get_addr_obj(currentProgram, fn.get("thtarget")) if fn.get("thunk") else None
    target = currentProgram.getFunctionManager().getFunctionAt(target_addr) if target_addr else None
    if target is not None:
        function.setThunkedFunction(target)
    for tag_name in fn.get("tags", []):
        function.addTag(tag_name)
    if fn.get("cmt"):
        function.setComment(fn["cmt"])


def import_functions(currentProgram, path):
    log_info("Importing functions")
    tx_id = currentProgram.startTransaction("Import Functions")
    try:
        for fn in load_json_files(path, "functions"):
            fn_addr = get_addr_obj(currentProgram, fn.get("addr"))
            if not fn.get("name") or not fn_addr or not fn.get("importable", False):
                continue
            apply_function(currentProgram, place_function(currentProgram, fn, fn_addr), fn)
    finally:
        currentProgram.endTransaction(tx_id, True)
    log_info("Import complete")

def export_functions(currentProgram, path, allow_name_address_mismatch=False,
                     allow_this_ptr_mismatch=False, allow_tu_name_violations=False):

    # The importable flags are the user's, kept from the previous export; everything else is Ghidra's
    existing_importable = {fn_data["addr"]: fn_data.get("importable", False)
                           for fn_data in load_json_files(path, "functions") if fn_data.get("addr")}

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
        func_noreturn = f.hasNoReturn()
        func_custom_storage = f.hasCustomVariableStorage()
        func_thunked = f.isThunk()
        func_thunk_target = str(f.getThunkedFunction(True).getEntryPoint()) if f.isThunk() and f.getThunkedFunction(True) else None
        func_cmt = f.getComment()
        func_variables = export_function_variables(currentProgram, f)
        func_body_ranges = export_function_body(currentProgram, f)
        func_importable = existing_importable.get(func_entry, True)

        # Build function data with only non-default values
        func_data = {
            "name": func_name,
            "addr": func_entry,
            "importable": func_importable
        }

        # Always include return type
        func_data["ret"] = func_ret if func_ret else "void"

        # Only what is there: clean_data keeps a value that only empties once cleaned
        func_data["body"] = func_body_ranges
        func_data["tags"] = func_tags
        if any(func_variables.values()):
            func_data["vars"] = func_variables

        # Only include calling convention if not default
        if func_conv and func_conv != "unknown":
            func_data["conv"] = func_conv

        # Only include boolean flags if true
        if func_inline:
            func_data["inline"] = True
        if func_variadic:
            func_data["variadic"] = True
        if func_noreturn:
            func_data["noreturn"] = True
        if func_custom_storage:
            func_data["custom_storage"] = True

        # A thunk and its target, as Ghidra has them now
        if func_thunked:
            func_data["thunk"] = True
            func_data["thtarget"] = func_thunk_target

        # Only include comment if present
        if func_cmt:
            func_data["cmt"] = func_cmt
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

    # Checked after the write, so the offending entries are on disk to diagnose
    # from. Raising here aborts the export before pseudocode runs, which is the
    # point: a stolen address suffix collides two functions onto one pseudocode
    # filename, and the tree it would produce is quietly missing a function.
    # log_warning, not log_error: log_error exits the process, so using it here
    # printed the header and then died -- the detail lines never appeared and
    # --allow-name-address-mismatch was never reached to be honoured. The raise
    # below is what aborts, and only when the flag says it should.
    mismatches = find_name_address_mismatches(functions)
    if mismatches:
        log_warning("FUNCTION NAME/ADDRESS MISMATCHES (%d):" % len(mismatches))
        for msg in mismatches:
            log_warning("  " + msg)
    if mismatches and not allow_name_address_mismatch:
        raise FunctionNameAddressMismatchError(
            "Function name/address mismatch: %d function(s) carry a _FUN_<addr> "
            "suffix that is not their entry point. A name was applied to the "
            "wrong symbol. Fix the names in Ghidra before exporting, or pass "
            "--allow-name-address-mismatch to export anyway.\n" % len(mismatches)
            + "\n".join(mismatches))

    # Same placement and the same reason: an `undefined` or absent receiver
    # degrades the decompilation of every caller, so it must not reach the
    # pseudocode tree.
    this_ptr_defects = find_this_ptr_defects(functions,
                                             known_class_names(currentProgram))
    if this_ptr_defects:
        log_warning("CLASS METHOD RECEIVER DEFECTS (%d):" % len(this_ptr_defects))
        for msg in this_ptr_defects:
            log_warning("  " + msg)
    if this_ptr_defects and not allow_this_ptr_mismatch:
        raise ThisPtrMismatchError(
            "Class method receiver: %d function(s) named "
            "<tu>_<Class>_<method>_FUN_<addr> do not take `%s` of type "
            "`<Class> *` as parameter 0. Fix them in Ghidra (see "
            "scripts/Python/fix_this_ptr.py) before exporting, or pass "
            "--allow-this-ptr-mismatch to export anyway.\n"
            % (len(this_ptr_defects), RECEIVER_NAME)
            + "\n".join(this_ptr_defects))

    # A TU is a file the original build compiled: a real folder and an 8.3 name
    # (check_tu_alignment.gate; its skip file holds the exceptions).
    # The folder of `path` is the program's own name: the Blair Witch builds all
    # call themselves nocturne.exe.
    import check_tu_alignment
    tu_violations = check_tu_alignment.gate(os.path.basename(os.path.normpath(path)), functions)
    if tu_violations:
        log_warning("TU NAME VIOLATIONS (%d):" % len(tu_violations))
        for msg in tu_violations:
            log_warning("  " + msg)
    if tu_violations and not allow_tu_name_violations:
        raise TUNameError(
            "TU names: %d function TU(s) cannot be an original file. Rename them in "
            "Ghidra (see research/24-bw_units), list a real exception in "
            "scripts/Python/check_tu_alignment_skip.txt with its reason, or pass "
            "--allow-tu-name-violations to export anyway.\n" % len(tu_violations)
            + "\n".join(tu_violations))

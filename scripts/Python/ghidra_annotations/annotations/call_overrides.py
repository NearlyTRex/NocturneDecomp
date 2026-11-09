# Call-site signature overrides: the local variables of a FunctionDefinition
# type Ghidra makes when the user overrides a call's signature in the
# decompiler. Each sits at the CALL it overrides, by its first-use offset.

from ghidra.program.model.data import FunctionDefinition, FunctionDefinitionDataType, ParameterDefinitionImpl
from ghidra.program.model.pcode import HighFunctionDBUtil
from ghidra.util.exception import InvalidInputException

from ghidra_annotations.annotations.tracked import (
    TrackedKind, delete_tracked, export_tracked, import_tracked, known_type)
from ghidra_annotations.util import get_addr_obj, log_info, resolve_data_type_name


def is_function_definition_type(data_type):
    """Whether a type is a FunctionDefinition, which a call-site override's variable has."""
    return isinstance(data_type, FunctionDefinition)


def serialize_function_definition(currentProgram, func_def):
    """A FunctionDefinition as its return type, calling convention, parameters and varargs."""
    result = {"return_type": resolve_data_type_name(currentProgram, func_def.getReturnType()),
              "params": [{"name": arg.getName(), "type": resolve_data_type_name(currentProgram, arg.getDataType())}
                         for arg in func_def.getArguments()]}
    convention = func_def.getCallingConventionName()
    if convention and convention != "unknown":
        result["calling_convention"] = convention
    if func_def.hasVarArgs():
        result["varargs"] = True
    return result


def build_signature_string(override_data):
    """A readable C signature for the override."""
    params = ", ".join(["%s %s" % (p["type"], p["name"]) for p in override_data.get("params", [])])
    if override_data.get("varargs", False):
        params += ", ..." if params else "..."
    convention = override_data.get("calling_convention", "")
    return "%s %soverride(%s)" % (override_data.get("return_type", "void"),
                                  ("%s " % convention) if convention else "", params or "void")


def items(program):
    """(function, override variable) for each override at an instruction."""
    found = []
    listing = program.getListing()
    for function in program.getFunctionManager().getFunctions(True):
        if function.isExternal():
            continue
        for variable in function.getLocalVariables():
            if not is_function_definition_type(variable.getDataType()):
                continue
            call_addr = function.getEntryPoint().add(variable.getFirstUseOffset())
            if listing.getInstructionAt(call_addr) is None:
                log_info("Warning: override at %s is not at an instruction" % call_addr)
                continue
            found.append((function, variable))
    return found


def record(program, item):
    function, variable = item
    override = serialize_function_definition(program, variable.getDataType())
    return dict(override, func_addr = str(function.getEntryPoint()),
                call_addr = str(function.getEntryPoint().add(variable.getFirstUseOffset())),
                var_name = variable.getName(), signature = build_signature_string(override))


def key(entry):
    return "%s_%s" % (entry["func_addr"], entry["call_addr"]) if entry.get("func_addr") and entry.get("call_addr") \
        else None


def build_definition(program, entry):
    """The override's FunctionDefinition, or None when the program lacks one of its types.

    Leaving a parameter out would change the call's arity, so an unknown type
    leaves the whole override out.
    """
    return_type = known_type(program, entry.get("return_type", "void"))
    params = [(p.get("name", "param_%d" % i), known_type(program, p.get("type")))
              for i, p in enumerate(entry.get("params", []))]
    if return_type is None or any(t is None for _, t in params):
        log_info("Call override at %s names a type the program lacks" % entry.get("call_addr"))
        return None
    definition = FunctionDefinitionDataType("call_override_%s" % entry["call_addr"])
    definition.setReturnType(return_type)
    definition.setArguments([ParameterDefinitionImpl(name, data_type, None) for name, data_type in params])
    definition.setVarArgs(entry.get("varargs", False))
    if entry.get("calling_convention"):
        try:
            definition.setCallingConvention(entry["calling_convention"])
        except InvalidInputException:
            log_info("Call override at %s names a calling convention the program lacks: %s" % (
                entry["call_addr"], entry["calling_convention"]))
            return None
    return definition


def apply(program, entry):
    func_addr = get_addr_obj(program, entry.get("func_addr"))
    call_addr = get_addr_obj(program, entry.get("call_addr"))
    function = program.getFunctionManager().getFunctionAt(func_addr) if func_addr else None
    definition = build_definition(program, entry) if function and call_addr else None
    if definition is None:
        return False
    HighFunctionDBUtil.writeOverride(function, call_addr, definition)
    return True


KIND = TrackedKind("call_overrides", "call overrides", items, record, key, apply,
                   lambda program, item: item[0].removeVariable(item[1]),
                   bucket = lambda entry: entry["func_addr"])


def export_call_overrides(currentProgram, path):
    export_tracked(KIND, currentProgram, path)


def import_call_overrides(currentProgram, path):
    import_tracked(KIND, currentProgram, path)


def delete_call_overrides(currentProgram, path):
    delete_tracked(KIND, currentProgram, path)

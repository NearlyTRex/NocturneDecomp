import re
from ghidra_annotations.util.log import log_error
from ghidra_annotations.util.log import log_info
from ghidra_annotations.util.log import log_warning
from ghidra_annotations.util.string import get_string_data_type_obj
from ghidra.program.model.data import Array
from ghidra.program.model.data import ArrayDataType
from ghidra.program.model.data import BuiltInDataTypeManager
from ghidra.program.model.data import DefaultDataType
from ghidra.program.model.data import FunctionDefinitionDataType
from ghidra.program.model.data import Pointer
from ghidra.program.model.data import PointerDataType
from ghidra.program.model.data import Structure
from ghidra.program.model.data import TypeDef
from ghidra.program.model.data import Undefined
from ghidra.program.model.data import Union

#####################################################################
## Primitive types
#####################################################################

def get_primitive_data_types():
    builtins = BuiltInDataTypeManager.getDataTypeManager()
    primitives = {

        # Core signed types
        "void": builtins.getDataType("/void"),
        "bool": builtins.getDataType("/bool"),
        "char": builtins.getDataType("/char"),
        "short": builtins.getDataType("/short"),
        "int": builtins.getDataType("/int"),
        "long": builtins.getDataType("/long"),
        "longlong": builtins.getDataType("/longlong"),
        "float": builtins.getDataType("/float"),
        "double": builtins.getDataType("/double"),

        # Unsigned types
        "uchar": builtins.getDataType("/uchar"),
        "ushort": builtins.getDataType("/ushort"),
        "uint": builtins.getDataType("/uint"),
        "ulong": builtins.getDataType("/ulong"),
        "ulonglong": builtins.getDataType("/ulonglong"),

        # Alternate names and aliases
        "byte": builtins.getDataType("/byte"),
        "ubyte": builtins.getDataType("/ubyte"),

        # Wide character support
        "wchar_t": builtins.getDataType("/wchar_t"),

        # Common Ghidra built-in types
        "word": builtins.getDataType("/word"),
        "dword": builtins.getDataType("/dword"),
        "qword": builtins.getDataType("/qword"),
        "unicode": builtins.getDataType("/unicode"),
        "string": builtins.getDataType("/string"),
    }

    # Add undefined types
    for size in [1, 2, 4, 8, 16, 32]:
        undefined_name = "undefined%d" % size
        try:
            undefined_type = Undefined.getUndefinedDataType(size)
            if undefined_type:
                primitives[undefined_name] = undefined_type
        except Exception:
            pass

    # Also add "undefined" as alias for undefined1
    primitives["undefined"] = primitives.get("undefined1")

    # Filter out None values
    return {k: v for k, v in primitives.items() if v is not None}

#####################################################################
## Data type resolving
#####################################################################

def normalize_data_type_name(type_name):
    return re.sub(r'[\*\[].*$', '', type_name).strip()

def resolve_data_type_obj(currentProgram, type_name, type_category = None):

    # Check type name
    if not type_name:
        return None

    # Handle exact type name first
    original_type_name = type_name
    if type_name == "undefined":
        type_name = "undefined1"

    # Track type information
    is_pointer = "*" in type_name
    pointer_depth = type_name.count("*")
    is_array = False
    array_length = None
    is_function_pointer = False
    type_name_norm = normalize_data_type_name(type_name)

    # Check for array syntax
    array_match = re.match(r'(.+)\[(\d+)\]$', type_name.strip())
    if array_match:
        is_array = True
        base_type = array_match.group(1).strip()
        array_length = int(array_match.group(2))
        type_name = base_type
        type_name_norm = normalize_data_type_name(type_name)

    # Check for function pointer syntax
    if re.match(r'.+\(\s*\*\s*\)\s*\(.+\)', type_name):
        is_function_pointer = True

    # Try exact matches
    dtm = currentProgram.getDataTypeManager()
    data_type = None

    # If this is an array, recursively resolve the base type first; resolving
    # never fails, an unknown name comes back as DefaultDataType
    if is_array:
        base_data_type = resolve_data_type_obj(currentProgram, base_type, type_category)
        return ArrayDataType(base_data_type, array_length, base_data_type.getLength())

    # Continue with normal resolution for non-array types
    if type_category:
        data_type = dtm.getDataType(type_category, original_type_name)
    if not data_type:
        data_type = dtm.getDataType(original_type_name)

    # Try searching by exact name in all categories
    if not data_type:
        search_name = original_type_name
        for dt in dtm.getAllDataTypes():
            if dt.getName() == search_name:
                data_type = dt
                break

    # Try normalized name search
    if not data_type:
        for dt in dtm.getAllDataTypes():
            if dt.getName() == type_name_norm:
                data_type = dt
                break

    # Try strings
    if not data_type:
        data_type = get_string_data_type_obj(type_name)

    # Try undefined
    if not data_type:
        if type_name_norm.startswith("undefined"):
            match = re.match(r"undefined(\d+)", type_name_norm)
            if match and match.end() == len(type_name_norm):
                size = int(match.group(1))
                data_type = Undefined.getUndefinedDataType(size)
            else:
                data_type = Undefined.getUndefinedDataType(1)

    # Try primitives
    if not data_type:
        data_type = get_primitive_data_types().get(type_name_norm)

    # Try pointer matching (only if not already an array)
    if is_pointer and data_type and not is_array:
        for _ in range(pointer_depth):
            data_type = PointerDataType(data_type)

    # Handle function pointer as generic pointer to function
    if is_function_pointer:
        data_type = PointerDataType(FunctionDefinitionDataType("FunctionPointer"))

    # Fallback to default data type
    return data_type if data_type else DefaultDataType.dataType

def resolve_data_type_name(currentProgram, type_obj, seen = None, preserve_typedefs = True):

    # Check type object
    if type_obj is None:
        return "void"

    # Check undefined types FIRST to get proper size
    if isinstance(type_obj, Undefined):
        size = type_obj.getLength()
        return "undefined%d" % size

    # Start recording seen types
    if seen is None:
        seen = set()

    # Get type name
    type_name = type_obj.getName()
    if type_name == "undefined":
        type_name = "undefined1"

    # Check if already seen
    if type_name in seen:
        return type_name

    # Add seen name
    seen.add(type_name)

    # Preserve the typedef name
    if preserve_typedefs and isinstance(type_obj, TypeDef):
        return type_name

    # Check primitives
    if type_name in get_primitive_data_types().keys():
        return type_name

    # Check pointers
    if isinstance(type_obj, Pointer):
        base_name = resolve_data_type_name(currentProgram, type_obj.getDataType(), seen, preserve_typedefs)
        return base_name + "*"

    # Check arrays
    if isinstance(type_obj, Array):

        # Collect all dimensions for multi-dimensional arrays
        dimensions = []
        current_type = type_obj
        while isinstance(current_type, Array):
            dimensions.append(current_type.getNumElements())
            current_type = current_type.getDataType()

        # Get the base type name
        base_name = resolve_data_type_name(currentProgram, current_type, seen, preserve_typedefs)

        # Build the array declaration with all dimensions
        dimension_str = "".join("[{}]".format(dim) for dim in dimensions)
        return "{}{}".format(base_name, dimension_str)

    # Fallback
    return type_name

#####################################################################
## Data type dependencies
#####################################################################

# Identifies a type for the dependency walks. Ghidra gives no universal ID to
# pointers, arrays or built-ins, so those go by their path ("/CHero *"), which
# also tells a pointer or array apart from the type it holds.
def get_dependency_walk_key(type_obj):
    try:
        universal_id = type_obj.getUniversalID()
    except Exception:
        universal_id = None
    if universal_id is not None:
        return ("id", str(universal_id))
    try:
        return ("path", type_obj.getPathName())
    except Exception:
        return ("object", id(type_obj))

# The typedef base types reachable from a type. Each type is walked once, which
# also ends any cycle, a structure reaching itself through a pointer among them.
def collect_typedef_deps(currentProgram, type_obj, seen = None, visited_ids = None):

    # Sentinel check
    if seen is None:
        seen = set()
    if visited_ids is None:
        visited_ids = set()
    if type_obj is None:
        return seen

    # Already visited
    dt_id = get_dependency_walk_key(type_obj)
    if dt_id in visited_ids:
        return seen
    visited_ids.add(dt_id)
    type_name = normalize_data_type_name(type_obj.getName())

    # Typedefs
    if isinstance(type_obj, TypeDef):
        base_dt = type_obj.getDataType()
        base_name = normalize_data_type_name(resolve_data_type_name(currentProgram, base_dt))
        if should_track_as_dependency(base_name) and base_name != type_name:
            seen.add(base_name)
            collect_typedef_deps(currentProgram, base_dt, seen, visited_ids)

    # Pointers and arrays lead to what they hold
    elif isinstance(type_obj, (Pointer, Array)):
        collect_typedef_deps(currentProgram, type_obj.getDataType(), seen, visited_ids)

    # Structures / Unions
    elif isinstance(type_obj, (Structure, Union)):
        for comp in type_obj.getComponents():
            comp_dt = comp.getDataType()
            if isinstance(comp_dt, Pointer):
                collect_typedef_deps(currentProgram, comp_dt.getDataType(), seen, visited_ids)
            elif comp_dt:
                comp_name = normalize_data_type_name(resolve_data_type_name(currentProgram, comp_dt))
                if comp_name != type_name and should_track_as_dependency(comp_name):
                    collect_typedef_deps(currentProgram, comp_dt, seen, visited_ids)
    return seen

def get_ghidra_primitive_types():
    return {
        # Sized unsigned types
        'byte', 'uchar', 'ushort', 'uint', 'ulong',
        'longlong', 'ulonglong',
        # Undefined placeholder types
        'undefined', 'undefined1', 'undefined2', 'undefined4', 'undefined8',
        # Pointer type
        'pointer',
    }

def should_track_as_dependency(type_name):

    # Check type name
    if not type_name:
        return False

    # Normalize the name
    normalized_name = normalize_data_type_name(type_name).lower()

    # Resolve bitfields to their base type. Ghidra names a bitfield "<base>:<bits>"
    # (e.g. "dword:31" for a 31-bit field over dword), so strip a trailing ":<digits>"
    # suffix and let the primitive/builtin checks below apply to the base type. Only
    # a numeric suffix is stripped, so C++ qualified names like "foo::bar" are left
    # untouched.
    if ':' in normalized_name:
        base_name, _, bit_width = normalized_name.rpartition(':')
        if base_name and bit_width.isdigit():
            normalized_name = base_name

    # Check against primitive types
    primitive_names = set(k.lower() for k in get_primitive_data_types().keys())
    if normalized_name in primitive_names:
        return False

    # Check for undefined types
    if normalized_name.startswith('undefined'):
        return False

    # Check for other common built-in patterns
    builtin_patterns = [
        'string', 'unicode', 'wchar', 'char*', 'void*',
        'byte', 'word', 'dword', 'qword',
        'int8', 'int16', 'int32', 'int64',
        'uint8', 'uint16', 'uint32', 'uint64'
    ]
    for pattern in builtin_patterns:
        if normalized_name == pattern or normalized_name.startswith(pattern + '_'):
            return False
    return True

def resolve_circular_dependencies(type_deps, type_defs, depth=0, max_depth=100):

    # Validate dependencies first (only on initial call)
    if depth == 0:
        missing_deps = set()
        available_types = set(type_defs.keys()) | set(get_primitive_data_types().keys())
        for type_name, deps in type_deps.items():
            for dep in deps:
                if should_track_as_dependency(dep) and dep not in available_types:
                    missing_deps.add(dep)
        if missing_deps:
            log_error("Missing definitions for dependencies: %s" % sorted(missing_deps))

    # Build adjacency list and in-degree count
    graph = {}
    in_degree = {}
    all_types = set()

    # Initialize with all types that have definitions, sorted for consistency
    for type_name in sorted(type_defs.keys()):
        all_types.add(type_name)

    # Add any dependencies that might not be in our definitions
    for type_name in sorted(type_deps.keys()):
        all_types.add(type_name)
        for dep in sorted(type_deps[type_name]):
            all_types.add(dep)

    # Initialize graph structures
    for type_name in sorted(all_types):
        graph[type_name] = set()
        in_degree[type_name] = 0

    # Build graph and calculate in-degrees
    for type_name, deps in type_deps.items():
        for dep in deps:
            if dep in all_types and dep != type_name:
                graph[dep].add(type_name)
                in_degree[type_name] += 1

    # Modified Kahn's algorithm with deterministic ordering
    queue = sorted([type_name for type_name in all_types if in_degree[type_name] == 0])
    sorted_types = []
    while queue:

        # Always take the first item for deterministic ordering
        current = queue.pop(0)
        sorted_types.append(current)

        # Sort neighbors for consistent processing order
        neighbors = sorted(list(graph[current]))
        for neighbor in neighbors:
            in_degree[neighbor] -= 1
            if in_degree[neighbor] == 0:
                queue.append(neighbor)
                queue.sort()

    # Handle cycles deterministically
    if len(sorted_types) != len(all_types):
        log_info("Detected circular dependencies, attempting to resolve... (depth: %d)" % depth)
        remaining = sorted(list(all_types - set(sorted_types)))
        log_info("Types in cycle: %s" % remaining)

        # Check recursion depth
        if depth >= max_depth:
            log_warning("Maximum recursion depth (%d) exceeded while resolving circular dependencies" % max_depth)
            log_warning("This indicates a complex circular dependency that cannot be automatically resolved")
            log_warning("Remaining types in cycle: %s" % remaining)
            log_error("Consider manually breaking the cycle by using forward declarations or pointers")

        # Remove a self-dependency if a type in the cycle has one. Otherwise drop
        # one dependency inside the cycle: a type left unsorted still waits on
        # another unsorted type, so the first one always has such a dependency.
        self_dependent = [type_name for type_name in remaining if type_name in type_deps.get(type_name, set())]
        if self_dependent:
            type_name = self_dependent[0]
            type_deps[type_name].discard(type_name)
            log_info("Removed self-dependency: %s -> %s" % (type_name, type_name))
        else:
            type_name = remaining[0]
            dep_to_remove = sorted(type_deps[type_name] & set(remaining))[0]
            type_deps[type_name].discard(dep_to_remove)
            log_info("Broke potential cycle: %s -> %s" % (type_name, dep_to_remove))

        # Try again with modified dependencies
        return resolve_circular_dependencies(type_deps, type_defs, depth + 1, max_depth)

    # Filter to only include types we actually have definitions for
    result = [t for t in sorted_types if t in type_defs]
    log_info("Final apply order determined: %d types" % len(result))
    return result

#####################################################################
## Data type categories
#####################################################################

# What a type needs before it: the types it must see whole (direct) and the
# structures and unions it only points to, which a forward declaration covers.
# Each type is walked once, which also ends any cycle. root_name is the type the
# walk started from, so a pointer back to it is not reported as a dependency.
def collect_type_dependencies_with_context(currentProgram, type_obj, seen_direct=None, seen_pointer=None, visited_ids=None, root_name=None):
    if seen_direct is None:
        seen_direct = set()
    if seen_pointer is None:
        seen_pointer = set()
    if visited_ids is None:
        visited_ids = set()
    if type_obj is None:
        return (seen_direct, seen_pointer)

    # Already visited
    dt_id = get_dependency_walk_key(type_obj)
    if dt_id in visited_ids:
        return (seen_direct, seen_pointer)
    visited_ids.add(dt_id)

    # Get type name
    type_name = normalize_data_type_name(type_obj.getName())
    if root_name is None:
        root_name = type_name

    # Typedefs
    if isinstance(type_obj, TypeDef):
        base_dt = type_obj.getDataType()
        base_name = normalize_data_type_name(resolve_data_type_name(currentProgram, base_dt))
        if should_track_as_dependency(base_name) and base_name != type_name:
            # Typedef base types need direct includes
            seen_direct.add(base_name)
            collect_type_dependencies_with_context(currentProgram, base_dt, seen_direct, seen_pointer, visited_ids, root_name)

    # Pointers
    elif isinstance(type_obj, Pointer):
        # Walk pointer chain to find ultimate pointed-to type
        # This handles X*, X**, X***, etc.
        pointed_dt = type_obj.getDataType()
        while pointed_dt and isinstance(pointed_dt, Pointer):
            pointed_dt = pointed_dt.getDataType()
        if pointed_dt:
            pointed_name = normalize_data_type_name(resolve_data_type_name(currentProgram, pointed_dt))
            if should_track_as_dependency(pointed_name) and pointed_name != root_name:
                # Only struct/union pointers can be forward declared in C
                if isinstance(pointed_dt, (Structure, Union)):
                    seen_pointer.add(pointed_name)
                    # Don't recurse - forward declaration doesn't need transitive deps
                else:
                    seen_direct.add(pointed_name)
                    # Recurse for non-struct/union (typedefs, func ptrs) to get their deps
                    collect_type_dependencies_with_context(currentProgram, pointed_dt, seen_direct, seen_pointer, visited_ids, root_name)

    # Arrays
    elif isinstance(type_obj, Array):
        # Array element types need direct includes (for sizing). An array is
        # named after its element ("CHero[4]"), so whoever reached the array
        # already recorded the element under that name.
        collect_type_dependencies_with_context(currentProgram, type_obj.getDataType(), seen_direct, seen_pointer, visited_ids, root_name)

    # Structures / Unions
    elif isinstance(type_obj, Structure) or isinstance(type_obj, Union):
        for comp in type_obj.getComponents():
            comp_dt = comp.getDataType()
            if comp_dt:
                comp_name = normalize_data_type_name(resolve_data_type_name(currentProgram, comp_dt))

                if isinstance(comp_dt, Pointer):
                    # Pointer field - only struct/union pointers can be forward declared
                    # Walk pointer chain to find ultimate pointed-to type
                    # This handles X*, X**, X***, etc.
                    pointed_dt = comp_dt.getDataType()
                    while pointed_dt and isinstance(pointed_dt, Pointer):
                        pointed_dt = pointed_dt.getDataType()
                    if pointed_dt:
                        pointed_name = normalize_data_type_name(resolve_data_type_name(currentProgram, pointed_dt))
                        if should_track_as_dependency(pointed_name) and pointed_name != type_name:
                            # Only struct/union can be forward declared in C
                            # Typedefs, function types, etc. must be defined first
                            if isinstance(pointed_dt, (Structure, Union)):
                                seen_pointer.add(pointed_name)
                                # Don't recurse - forward declaration doesn't need transitive deps
                            else:
                                seen_direct.add(pointed_name)
                                # Recurse for non-struct/union (typedefs, func ptrs) to get their deps
                                collect_type_dependencies_with_context(currentProgram, pointed_dt, seen_direct, seen_pointer, visited_ids, root_name)
                else:
                    # Non-pointer field - needs direct include for sizing
                    if comp_name != type_name and should_track_as_dependency(comp_name):
                        seen_direct.add(comp_name)
                        # Only recurse into non-struct/union types (typedefs, arrays, etc.)
                        # For struct/union fields, that type's header will include its own deps
                        if not isinstance(comp_dt, (Structure, Union)):
                            collect_type_dependencies_with_context(currentProgram, comp_dt, seen_direct, seen_pointer, visited_ids, root_name)

    # Function definitions (check by class name since there are multiple classes)
    else:
        class_name = type_obj.__class__.__name__.rsplit('.', 1)[-1]
        if class_name in ['FunctionDefinitionDataType', 'FunctionDefinitionDB', 'FunctionDefinition', 'FunctionDefDataType']:
            # Get return type dependencies
            if hasattr(type_obj, 'getReturnType') and type_obj.getReturnType():
                ret_dt = type_obj.getReturnType()
                ret_name = normalize_data_type_name(resolve_data_type_name(currentProgram, ret_dt))
                if should_track_as_dependency(ret_name) and ret_name != type_name:
                    # Return type - only struct/union pointers can be forward declared
                    if isinstance(ret_dt, Pointer):
                        # Walk pointer chain to find ultimate pointed-to type
                        # This handles X*, X**, X***, etc. A pointer is named
                        # after its target ("CHero *"), so the target is the
                        # tracked ret_name; a chain ending in nothing is
                        # "void*", which is not tracked and never gets here.
                        pointed_dt = ret_dt.getDataType()
                        while isinstance(pointed_dt, Pointer):
                            pointed_dt = pointed_dt.getDataType()
                        if isinstance(pointed_dt, (Structure, Union)):
                            seen_pointer.add(ret_name)
                            # Don't recurse - forward declaration doesn't need transitive deps
                        else:
                            seen_direct.add(ret_name)
                            collect_type_dependencies_with_context(currentProgram, pointed_dt, seen_direct, seen_pointer, visited_ids, root_name)
                    else:
                        seen_direct.add(ret_name)
                        collect_type_dependencies_with_context(currentProgram, ret_dt, seen_direct, seen_pointer, visited_ids, root_name)

            # Get parameter type dependencies
            if hasattr(type_obj, 'getArguments') and type_obj.getArguments():
                for param in type_obj.getArguments():
                    if hasattr(param, 'getDataType') and param.getDataType():
                        param_dt = param.getDataType()
                        param_name = normalize_data_type_name(resolve_data_type_name(currentProgram, param_dt))
                        if should_track_as_dependency(param_name) and param_name != type_name:
                            # Parameter type - only struct/union pointers can be forward declared
                            if isinstance(param_dt, Pointer):
                                # Walk pointer chain to find ultimate pointed-to type
                                # This handles X*, X**, X***, etc. As for the return
                                # type, the target is the tracked param_name.
                                pointed_dt = param_dt.getDataType()
                                while isinstance(pointed_dt, Pointer):
                                    pointed_dt = pointed_dt.getDataType()
                                if isinstance(pointed_dt, (Structure, Union)):
                                    seen_pointer.add(param_name)
                                    # Don't recurse - forward declaration doesn't need transitive deps
                                else:
                                    seen_direct.add(param_name)
                                    collect_type_dependencies_with_context(currentProgram, pointed_dt, seen_direct, seen_pointer, visited_ids, root_name)
                            else:
                                seen_direct.add(param_name)
                                collect_type_dependencies_with_context(currentProgram, param_dt, seen_direct, seen_pointer, visited_ids, root_name)

    return (seen_direct, seen_pointer)

def is_standard_ghidra_category(path):
    # Only the root "/" and single-level /foo.h paths are filtered — those
    # hold Ghidra primitives. /PE, /DOS, /VxD, /WinNT used to be filtered
    # too, but the types in them (IMAGE_DOS_HEADER, VS_VERSION_INFO, the
    # IMAGE_* family) are used by the binary and need to be exported.
    # Letting them flow through the normal individual-header pipeline keeps
    # those headers in sync with Ghidra (source of truth) instead of drifting
    # from a hand-written fallback block.
    return (
        path == "/" or
        re.match(r"^/[^/]+\.h$", path)
    )

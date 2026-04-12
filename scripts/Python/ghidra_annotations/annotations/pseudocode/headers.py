# Header file generation for pseudocode export
# Provides header generation for structs, unions, enums, typedefs, and function definitions

import os
import re
import json
from java.io import File
from ghidra.program.model.data import Enum
from ghidra.program.model.data import Structure
from ghidra.program.model.data import Union
from ghidra.program.model.data import TypeDef
from ghidra.program.model.data import Pointer
from ghidra.program.model.data import Array
from ghidra_annotations.util import make_dirs
from ghidra_annotations.util.log import log_info
from ghidra_annotations.util.data_type import collect_type_dependencies_with_context, get_ghidra_primitive_types
from ghidra_annotations.annotations.pseudocode.basetypes import get_types_needing_basetypes, get_all_basetypes
from ghidra_annotations.annotations.pseudocode.intrinsics import write_intrinsics_header
from ghidra_annotations.annotations import is_standard_ghidra_category, get_primitive_data_types
from ghidra_annotations.util.string import sanitize_c_identifier
from ghidra_annotations.annotations.pseudocode.strings import sanitize_string


# Default path to the cspec file (relative to project root)
DEFAULT_CSPEC_PATH = "spec/Ghidra/Processors/x86/data/languages/x86watcom.cspec"


def parse_cspec_calling_conventions(cspec_path=None):
    """Parse calling conventions from the Ghidra cspec XML file.

    Args:
        cspec_path: Path to the .cspec file. If None, uses DEFAULT_CSPEC_PATH.

    Returns:
        List of calling convention names found in the cspec file.
    """
    import xml.etree.ElementTree as ET

    # Try to find cspec file
    if cspec_path is None:
        script_dir = os.path.dirname(os.path.abspath(__file__))
        project_root = os.path.dirname(os.path.dirname(os.path.dirname(
            os.path.dirname(os.path.dirname(script_dir)))))
        cspec_path = os.path.join(project_root, DEFAULT_CSPEC_PATH)
    if not os.path.exists(cspec_path):
        log_info("Warning: cspec file not found at %s, using fallback conventions" % cspec_path)
        return get_fallback_calling_conventions()

    # Gather calling conventions
    conventions = []
    try:
        tree = ET.parse(cspec_path)
        root = tree.getroot()

        # Find default_proto/prototype (the default calling convention)
        default_proto = root.find("default_proto")
        if default_proto is not None:
            proto = default_proto.find("prototype")
            if proto is not None:
                name = proto.get("name")
                if name:
                    conventions.append(name)

        # Find all top-level prototype elements (non-default conventions)
        for proto in root.findall("prototype"):
            name = proto.get("name")
            if name and name not in conventions:
                conventions.append(name)
        log_info("Parsed %d calling conventions from %s" % (len(conventions), cspec_path))

    except Exception as e:
        log_info("Error parsing cspec file %s: %s, using fallback conventions" % (cspec_path, str(e)))
        return get_fallback_calling_conventions()
    return conventions


def get_fallback_calling_conventions():
    """Return fallback list of calling conventions if cspec parsing fails.

    This matches the previously hardcoded list for backwards compatibility.
    """
    return [
        # Standard Windows calling conventions
        "__cdecl", "__stdcall", "__fastcall", "__thiscall", "__vectorcall",
        # Watcom-specific calling conventions
        "__watcallRegister", "__watcallStack", "__syscall", "__fpustack",
        "__fpustack_safe", "__mathinternal", "__crtmath", "__fpureg",
        "__fpureg_safe", "__softfp_double", "__fpu_thunk",
        # Watcom __cdecl variants with stack cleanup sizes
        "__cdecl0", "__cdecl4", "__cdecl8", "__cdecl12", "__cdecl16",
        "__cdecl20", "__cdecl24", "__cdecl28", "__cdecl32", "__cdecl36", "__cdecl40",
        # Hybrid conventions
        "__stack_esi", "__stack2_esi", "__stack3_esi",
        "__stack_esi_edi", "__stack2_esi_edi",
    ]


def resolve_data_type_name_for_headers(currentProgram, type_obj, seen=None, preserve_typedefs=True):
    """Resolve data type name with struct/union prefix for C header generation.

    This variant adds 'struct ' or 'union ' prefix for pointer types pointing
    to structs/unions, which is needed for forward declaration compatibility in C.

    Args:
        currentProgram: The Ghidra program
        type_obj: The data type object to resolve
        seen: Set of already seen type names (for cycle detection)
        preserve_typedefs: Whether to preserve typedef names

    Returns:
        String representation of the type suitable for C headers
    """
    if type_obj is None:
        return "void"

    if seen is None:
        seen = set()

    type_name = type_obj.getName()
    if type_name == "undefined":
        type_name = "undefined1"

    if type_name in seen:
        return type_name

    seen.add(type_name)

    # Preserve typedef names
    if preserve_typedefs and isinstance(type_obj, TypeDef):
        return type_name

    # Check primitives
    from ghidra_annotations.util.data_type import get_primitive_data_types
    if type_name in get_primitive_data_types().keys():
        return type_name

    # Check pointers - add struct/union prefix for forward declaration compatibility
    if isinstance(type_obj, Pointer):
        base_type = type_obj.getDataType()
        base_name = resolve_data_type_name_for_headers(currentProgram, base_type, seen, preserve_typedefs)
        # Use 'struct'/'union' prefix for struct/union pointers to handle forward references
        if isinstance(base_type, Structure):
            return "struct " + base_name + "*"
        elif isinstance(base_type, Union):
            return "union " + base_name + "*"
        return base_name + "*"

    # Check arrays
    if isinstance(type_obj, Array):
        dimensions = []
        current_type = type_obj
        while isinstance(current_type, Array):
            dimensions.append(current_type.getNumElements())
            current_type = current_type.getDataType()
        base_name = resolve_data_type_name_for_headers(currentProgram, current_type, seen, preserve_typedefs)
        dimension_str = "".join("[{}]".format(dim) for dim in dimensions)
        return "{}{}".format(base_name, dimension_str)

    return type_name


def resolve_field_type_for_component(currentProgram, comp):
    """Resolve a struct/union field's type, handling Ghidra string types.

    Ghidra represents fields declared as `unicode` or `string` with a fixed
    byte length as a single non-Array string instance. In C those need to
    become byte arrays to preserve the layout.
    """
    resolved = resolve_data_type_name_for_headers(currentProgram, comp.getDataType())
    if resolved in ('unicode', 'string') and hasattr(comp, 'getLength'):
        try:
            length = int(comp.getLength())
        except Exception:
            length = 0
        if length > 0:
            return 'char[%d]' % length
    return resolved


def is_function_definition_type(data_type):
    """Check if a data type is a function definition type.

    Args:
        data_type: The data type to check

    Returns:
        True if function definition, False otherwise
    """
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


def get_new_export_path(original_path, data_type):
    """Map Ghidra category path to new flat export structure.

    Args:
        original_path: Original Ghidra category path like /Nocturne/Class/Game
        data_type: The data type object

    Returns:
        Tuple of (export_path, is_individual_file)
        - export_path: The new target directory path
        - is_individual_file: True if this type should have its own .h file
    """
    # Category mapping for game types (individual files)
    category_map = {
        "Class": "types/classes",
        "Struct": "types/structs",
        "Union": "types/unions",
        "Enum": "types/enums",
        "Typedef": "types/typedefs",
        "FunctionDefinition": "types/funcdefs"
    }

    # Game types -> types/{category} (individual files)
    if original_path.endswith("/Game"):
        parts = original_path.split("/")
        if len(parts) >= 3:
            type_category = parts[2]  # Class, Struct, etc.
            new_path = category_map.get(type_category, "types/misc")
            return (new_path, True)

    # System types with header source -> system/{header} (grouped files)
    if "/System/" in original_path:
        parts = original_path.split("/")
        # Find header file name (last component ending in .h)
        for part in reversed(parts):
            if part.endswith(".h"):
                header_name = part[:-2]  # Remove .h suffix
                return ("system/%s" % header_name, False)
        # No .h found, use system/misc folder
        return ("system/misc", False)

    # Bare /System types (no header specified)
    if original_path.endswith("/System"):
        return ("system/misc", False)

    # Ghidra's built-in Windows categories — route each to a dedicated
    # system/<name>.h so consumers can include a single file per subsystem.
    builtin_path_to_header = {
        "/PE":    "system/pe",
        "/DOS":   "system/dos",
        "/VxD":   "system/vxd",
        "/WinNT": "system/winnt",
    }
    if original_path in builtin_path_to_header:
        return (builtin_path_to_header[original_path], False)

    # Ghidra parks a few built-in composite types at root "/" that we can't
    # reassign in the UI. Route them by name prefix to their logical header.
    if original_path == "/":
        dt_name = data_type.getName() if data_type is not None else ""
        if dt_name.startswith("IMAGE_DOS_"):
            return ("system/dos", False)
        if dt_name.startswith("IMAGE_"):
            return ("system/pe", False)
        return ("system/misc", False)

    # Non-Nocturne paths - route to system/misc
    if not original_path.startswith("/Nocturne"):
        return ("system/misc", False)

    # Default fallback for unhandled /Nocturne paths
    return ("types/misc", False)


def format_field_declaration(field_type, field_name):
    """Format a field declaration, handling array types correctly.

    Args:
        field_type: The type string
        field_name: The field name

    Returns:
        Formatted declaration string
    """
    # C++ allows a struct member to share a name with its type (name lookup
    # disambiguates by context), so we emit the Ghidra-recorded field name
    # verbatim. Keeping this lets Ghidra stay the source of truth and lets
    # the globals exporter use `.FieldName = ...` designated initializers
    # without a separate rename.
    array_match = re.match(r'^(.+?)(\[.+\])$', field_type)
    if array_match:
        base_type = array_match.group(1)
        array_dims = array_match.group(2)
        return "%s %s%s" % (base_type, field_name, array_dims)
    else:
        return "%s %s" % (field_type, field_name)


def type_uses_basetypes(currentProgram, data_type, visited=None):
    """Check if a data type uses any types that require basetypes.h.

    Args:
        currentProgram: The Ghidra program
        data_type: The data type to check
        visited: Set of already visited type IDs to prevent infinite recursion

    Returns:
        True if the type uses basetypes, False otherwise
    """
    if visited is None:
        visited = set()

    if data_type is None:
        return False

    # Prevent infinite recursion
    try:
        dt_id = data_type.getUniversalID()
    except:
        dt_id = id(data_type)

    if dt_id in visited:
        return False
    visited.add(dt_id)

    type_name = data_type.getName()
    basetypes = get_types_needing_basetypes()

    # Check if this type itself is a basetype
    if type_name in basetypes:
        return True

    # Also check if the type name looks like an array (e.g., "uchar[8][8]") and
    # extract the base type name to check against basetypes. This is a fallback
    # in case the isinstance(Array) check doesn't work as expected.
    if '[' in type_name:
        base_type_name = type_name[:type_name.index('[')]
        if base_type_name in basetypes:
            return True

    # Also check if the type name looks like a pointer (e.g., "uint *" or "uint*")
    # and extract the base type name to check against basetypes.
    if type_name.endswith('*') or ' *' in type_name:
        base_type_name = type_name.replace(' *', '').replace('*', '').strip()
        if base_type_name in basetypes:
            return True

    # Helper to check if a type is a pointer (handles Jython isinstance issues)
    def is_pointer_type(dt):
        if isinstance(dt, Pointer):
            return True
        class_name = dt.__class__.__name__
        return 'Pointer' in class_name

    # Helper to check if a type is an array
    def is_array_type(dt):
        if isinstance(dt, Array):
            return True
        class_name = dt.__class__.__name__
        return 'Array' in class_name

    # Helper to check if a type is a typedef
    def is_typedef_type(dt):
        if isinstance(dt, TypeDef):
            return True
        class_name = dt.__class__.__name__
        return 'TypeDef' in class_name or 'Typedef' in class_name

    # Helper to check if a type is a struct or union
    def is_struct_or_union(dt):
        if isinstance(dt, (Structure, Union)):
            return True
        class_name = dt.__class__.__name__
        return 'Structure' in class_name or 'Union' in class_name

    # Check pointers
    if is_pointer_type(data_type):
        if hasattr(data_type, 'getDataType'):
            return type_uses_basetypes(currentProgram, data_type.getDataType(), visited)

    # Check arrays
    if is_array_type(data_type):
        if hasattr(data_type, 'getDataType'):
            return type_uses_basetypes(currentProgram, data_type.getDataType(), visited)

    # Check typedefs
    if is_typedef_type(data_type):
        if hasattr(data_type, 'getDataType'):
            return type_uses_basetypes(currentProgram, data_type.getDataType(), visited)

    # Check structs/unions - check all component types
    if is_struct_or_union(data_type):
        if hasattr(data_type, 'getComponents'):
            for comp in data_type.getComponents():
                comp_dt = comp.getDataType()
                if comp_dt:
                    # Check the component type name directly first
                    comp_name = comp_dt.getName()
                    if comp_name in basetypes:
                        return True
                    # Then check recursively for nested types
                    if type_uses_basetypes(currentProgram, comp_dt, visited):
                        return True

    # Check function definitions
    if is_function_definition_type(data_type):
        if hasattr(data_type, 'getReturnType') and data_type.getReturnType():
            ret_name = data_type.getReturnType().getName()
            if ret_name in basetypes:
                return True
            if type_uses_basetypes(currentProgram, data_type.getReturnType(), visited):
                return True
        if hasattr(data_type, 'getArguments') and data_type.getArguments():
            for param in data_type.getArguments():
                if hasattr(param, 'getDataType') and param.getDataType():
                    param_name = param.getDataType().getName()
                    if param_name in basetypes:
                        return True
                    if type_uses_basetypes(currentProgram, param.getDataType(), visited):
                        return True

    return False


def collect_type_dependencies(currentProgram, data_type):
    """Collect dependencies for a type, separating pointer vs direct deps.

    Args:
        currentProgram: The Ghidra program
        data_type: The data type to analyze

    Returns:
        Tuple of (direct_deps, pointer_deps) where:
        - direct_deps: Set of types that need #include
        - pointer_deps: Set of types that can use forward declaration
    """
    from ghidra.program.model.data import Pointer

    direct_deps, pointer_deps = collect_type_dependencies_with_context(
        currentProgram, data_type
    )

    # For pointer typedefs (typedef struct X* LPX or typedef struct X** LPLPX),
    # ALL transitive dependencies through the struct should be ignored for ordering,
    # since we only need a forward declaration. The recursive collection adds deps
    # from X's members, but those aren't needed for the pointer typedef itself.
    if isinstance(data_type, TypeDef):
        base_dt = data_type.getDataType()
        if isinstance(base_dt, Pointer):
            # Walk the pointer chain to find the ultimate pointed-to type
            # Handles X*, X**, X***, etc.
            pointed_dt = base_dt.getDataType()
            while isinstance(pointed_dt, Pointer):
                pointed_dt = pointed_dt.getDataType()
            if pointed_dt and isinstance(pointed_dt, (Structure, Union)):
                # For pointer typedefs, we only need the pointed-to struct
                # to be forward-declarable. Clear all direct deps and just
                # add the struct as a pointer dep.
                direct_deps.clear()
                pointer_deps.add(pointed_dt.getName())


    # Remove pointer deps that are also direct deps (direct wins)
    pointer_only = pointer_deps - direct_deps

    return (direct_deps, pointer_only)


def strip_type_prefix(name):
    """Strip 'struct ' or 'union ' prefix from a type name.

    The dependency collection adds these prefixes for forward reference handling,
    but we need the bare type name for matching against types_in_file.
    """
    if name.startswith('struct '):
        return name[7:]
    elif name.startswith('union '):
        return name[6:]
    return name


def make_unique_param_name(param_name, used_names):
    """Ensure param_name is unique by appending a number if needed.

    Args:
        param_name: The parameter name to check
        used_names: Set of already used names (will be modified!)

    Returns:
        Unique parameter name
    """
    if param_name not in used_names:
        used_names.add(param_name)
        return param_name

    idx = 1
    while "%s%d" % (param_name, idx) in used_names:
        idx += 1
    unique_name = "%s%d" % (param_name, idx)
    used_names.add(unique_name)
    return unique_name


def generate_dependency_includes(type_name, direct_deps, pointer_deps, type_to_path_map, needs_basetypes=False):
    """Generate #include lines and forward declarations for a type header.

    Args:
        type_name: Name of the type being generated
        direct_deps: Types needing full include
        pointer_deps: Types needing only forward declaration
        type_to_path_map: Map of type names to their header paths
        needs_basetypes: If True, always include system/basetypes.h

    Returns:
        List of lines with forward declarations and #includes
    """
    lines = []
    includes = set()
    forward_decls = []

    # Add basetypes.h if needed (for Ghidra primitives like uint, uchar, etc.)
    if needs_basetypes:
        includes.add("system/basetypes.h")

    # Process pointer-only deps - generate forward declarations instead of includes
    for dep in sorted(pointer_deps):
        # Strip struct/union prefix for matching (added by resolve_data_type_name_for_headers)
        dep_name = strip_type_prefix(dep)
        if dep_name == type_name:
            continue
        if dep in direct_deps or dep_name in direct_deps:
            continue
        if dep_name in type_to_path_map:
            dep_path = type_to_path_map[dep_name]
            # Skip function definitions - they don't need forward decls for pointer use
            if '/funcdefs/' in dep_path:
                continue
            # Determine if it's a struct or union based on path
            if '/unions/' in dep_path:
                forward_decls.append('union %s;' % dep_name)
            else:
                # classes/ and structs/ are both struct types in C
                forward_decls.append('struct %s;' % dep_name)
        # No path - generate struct forward decl as fallback
        else:
            forward_decls.append('struct %s;' % dep_name)

    # Process direct deps
    for dep in sorted(direct_deps):
        # Strip struct/union prefix for matching (added by resolve_data_type_name_for_headers)
        dep_name = strip_type_prefix(dep)
        if dep_name == type_name:
            continue
        if dep_name in type_to_path_map:
            includes.add(type_to_path_map[dep_name])

    # Generate forward declarations section first (before includes)
    if forward_decls:
        lines.append("")
        lines.append("// Forward declarations")
        for fwd in sorted(set(forward_decls)):
            lines.append(fwd)

    # Generate includes section
    if includes:
        lines.append("")
        lines.append("// Dependencies")
        # Put basetypes.h first if present
        if "system/basetypes.h" in includes:
            lines.append('#include "system/basetypes.h"')
            includes.remove("system/basetypes.h")
        for inc_path in sorted(includes):
            lines.append('#include "%s"' % inc_path)

    return lines


def write_header_file(file_path, content):
    """Write content to a header file.

    Args:
        file_path: Path to the header file
        content: Content to write
    """
    try:
        with open(file_path, 'w') as f:
            f.write(sanitize_string(content, preserve_newlines=True))
            f.write("\n")
    except Exception as e:
        log_info("Failed to write header file %s: %s" % (file_path, str(e)))


def generate_individual_struct_header(currentProgram, struct, type_to_path_map=None):
    """Generate header content for an individual struct.

    Args:
        currentProgram: The Ghidra program
        struct: The structure data type
        type_to_path_map: Optional map of type names to header paths for includes

    Returns:
        Header content as string
    """
    content = []
    content.append("#pragma once")

    # Add dependencies if type_to_path_map provided
    if type_to_path_map is not None:
        direct_deps, pointer_deps = collect_type_dependencies(currentProgram, struct)
        # Always include basetypes.h for game types - they commonly use primitives
        # and it's harmless to include when not strictly needed
        needs_basetypes = True
        dep_lines = generate_dependency_includes(struct.getName(), direct_deps, pointer_deps, type_to_path_map, needs_basetypes)
        content.extend(dep_lines)

    content.append("")
    content.append("// Structure: %s" % struct.getName())
    if struct.getDescription():
        content.append("// %s" % struct.getDescription())

    # Add Ghidra size
    ghidra_size = struct.getLength()
    content.append("// Ghidra size: 0x%x (%d bytes)" % (ghidra_size, ghidra_size))

    # Try to load Watcom typeinfo size
    try:
        script_source = sourceFile if 'sourceFile' in dir() else None
        if script_source:
            repo_root = File(script_source).getParentFile().getParentFile().getParentFile()
        else:
            import sys
            for path in sys.path:
                if 'NocturneDecomp' in path:
                    repo_root = File(path).getParentFile()
                    if File(repo_root, 'annotations').exists():
                        break
        typeinfo_path = os.path.join(str(repo_root), 'annotations', 'nocedit.exe', 'type_info', 'type_info.json')
        if os.path.exists(typeinfo_path):
            with open(typeinfo_path, 'r') as f:
                typeinfo_data = json.load(f)
                for type_entry in typeinfo_data.get('type_info', []):
                    if type_entry.get('name') == struct.getName() and 'watcom_size' in type_entry:
                        watcom_size = type_entry['watcom_size']
                        content.append("// Watcom typeinfo size: 0x%x (%d bytes)" % (watcom_size, watcom_size))
                        if watcom_size != ghidra_size:
                            content.append("// WARNING: Size mismatch between Ghidra (0x%x) and Watcom typeinfo (0x%x)" % (ghidra_size, watcom_size))
                        break
    except:
        pass

    # Mirror Ghidra's packing + alignment exactly so struct layouts match the
    # original Watcom binary. Order of precedence:
    #   * Packing enabled with explicit value  -> #pragma pack(push, N)
    #   * Packing enabled without explicit val -> #pragma pack(push, 1)
    #   * Not packed but minimum alignment < 4 -> #pragma pack(push, alignment)
    # Additionally, if the struct's own alignment differs from the pack value
    # (Windows SDK case: packed members, but struct must be 4-byte aligned),
    # emit __attribute__((aligned(N))) on the closing brace.
    pack_value, align_attr = _packing_and_alignment(struct)
    if pack_value is not None:
        content.append("#pragma pack(push, %d)" % pack_value)
    content.append("typedef struct %s {" % struct.getName())
    for field_index, comp in enumerate(struct.getComponents()):
        field_type = resolve_field_type_for_component(currentProgram, comp)
        # Use Ghidra decompiler naming convention: field{index}_0x{offset_hex}
        # This matches what the decompiler outputs for unnamed struct fields
        field_name = sanitize_c_identifier(comp.getFieldName()) if comp.getFieldName() else ("field_%d" % comp.getOffset())
        field_offset = comp.getOffset()
        comment_parts = []
        comment_parts.append("0x%x" % field_offset)
        if comp.getComment():
            comment_parts.append(comp.getComment())
        comment = " // %s" % ", ".join(comment_parts)
        field_decl = format_field_declaration(field_type, field_name)
        content.append("    %s;%s" % (field_decl, comment))
    if align_attr is not None:
        content.append("} %s %s;" % (align_attr, struct.getName()))
    else:
        content.append("} %s;" % struct.getName())
    if pack_value is not None:
        content.append("#pragma pack(pop)")
    content.append("")
    return "\n".join(content)


def _packing_and_alignment(dt):
    """Return (pack_value, align_attr_str) for a Structure or Union.

    pack_value: int to use as argument to #pragma pack(push, N), or None.
    align_attr_str: e.g. '__attribute__((aligned(4)))', or None if the
                    struct's alignment matches what pack_value naturally
                    produces (no extra attribute needed).
    """
    pack_value = None
    alignment = None
    is_packed = False
    try:
        is_packed = bool(dt.isPackingEnabled())
    except Exception:
        pass
    try:
        a = dt.getAlignment()
        if a and a > 0:
            alignment = a
    except Exception:
        pass
    if is_packed:
        explicit_pv = None
        try:
            pv = dt.getExplicitPackingValue()
            if pv and pv > 0:
                explicit_pv = int(pv)
        except Exception:
            pass
        pack_value = explicit_pv if explicit_pv is not None else 1
    elif alignment is not None and alignment < 4:
        pack_value = alignment

    align_attr = None
    if alignment is not None and pack_value is not None and alignment != pack_value:
        align_attr = "__attribute__((aligned(%d)))" % alignment

    return pack_value, align_attr


def generate_individual_union_header(currentProgram, union, type_to_path_map=None):
    """Generate header content for an individual union.

    Args:
        currentProgram: The Ghidra program
        union: The union data type
        type_to_path_map: Optional map of type names to header paths for includes

    Returns:
        Header content as string
    """
    content = []
    content.append("#pragma once")

    # Add dependencies if type_to_path_map provided
    if type_to_path_map is not None:
        direct_deps, pointer_deps = collect_type_dependencies(currentProgram, union)
        # Always include basetypes.h for game types
        needs_basetypes = True
        dep_lines = generate_dependency_includes(union.getName(), direct_deps, pointer_deps, type_to_path_map, needs_basetypes)
        content.extend(dep_lines)

    content.append("")
    content.append("// Union: %s" % union.getName())
    if union.getDescription():
        content.append("// %s" % union.getDescription())
    pack_value, align_attr = _packing_and_alignment(union)
    if pack_value is not None:
        content.append("#pragma pack(push, %d)" % pack_value)
    content.append("typedef union %s {" % union.getName())
    for field_index, comp in enumerate(union.getComponents()):
        field_type = resolve_field_type_for_component(currentProgram, comp)
        # Use Ghidra decompiler naming convention: field{index}_0x{offset_hex}
        field_name = sanitize_c_identifier(comp.getFieldName()) if comp.getFieldName() else ("field_%d" % comp.getOffset())
        comment = " // %s" % comp.getComment() if comp.getComment() else ""
        field_decl = format_field_declaration(field_type, field_name)
        content.append("    %s;%s" % (field_decl, comment))
    if align_attr is not None:
        content.append("} %s %s;" % (align_attr, union.getName()))
    else:
        content.append("} %s;" % union.getName())
    if pack_value is not None:
        content.append("#pragma pack(pop)")
    content.append("")
    return "\n".join(content)


def _enum_typedef_type(enum):
    """Return the C type name for an enum's typedef based on its size."""
    size = enum.getLength()
    if size == 1:
        return "uchar"
    elif size == 2:
        return "ushort"
    elif size == 8:
        return "long long"
    return "int"


def generate_individual_enum_header(currentProgram, enum, type_to_path_map=None):
    """Generate header content for an individual enum.

    Args:
        currentProgram: The Ghidra program
        enum: The enum data type
        type_to_path_map: Optional map of type names to header paths (unused for enums)

    Returns:
        Header content as string
    """
    content = []
    content.append("#pragma once")
    content.append("")
    typedef_type = _enum_typedef_type(enum)
    if typedef_type != "int":
        content.append("// Dependencies")
        content.append('#include "system/basetypes.h"')
        content.append("")
    content.append("// Enum: %s" % enum.getName())
    if enum.getDescription():
        content.append("// %s" % enum.getDescription())
    content.append("enum {")
    enum_values = []
    for name in enum.getNames():
        value = enum.getValue(name)
        enum_values.append("    %s = %d" % (name, value))
    content.append(",\n".join(enum_values))
    content.append("};")
    content.append("typedef %s %s;" % (typedef_type, enum.getName()))
    content.append("")
    return "\n".join(content)


def generate_individual_typedef_header(currentProgram, typedef, type_to_path_map=None):
    """Generate header content for an individual typedef.

    Args:
        currentProgram: The Ghidra program
        typedef: The typedef data type
        type_to_path_map: Optional map of type names to header paths for includes

    Returns:
        Header content as string
    """
    content = []
    content.append("#pragma once")

    # Add dependencies if type_to_path_map provided
    if type_to_path_map is not None:
        direct_deps, pointer_deps = collect_type_dependencies(currentProgram, typedef)
        # Always include basetypes.h for game types
        needs_basetypes = True
        dep_lines = generate_dependency_includes(typedef.getName(), direct_deps, pointer_deps, type_to_path_map, needs_basetypes)
        content.extend(dep_lines)

    content.append("")
    td_name = typedef.getName()
    base_type = resolve_data_type_name_for_headers(currentProgram, typedef.getDataType())

    # Check if this is a _ptr_N adjusted pointer type (e.g., CCharacter_ptr_344)
    import re as _re
    ptr_match = _re.match(r'^(\w+)_ptr_(\d+)$', td_name)
    if ptr_match and base_type.startswith('struct ') and base_type.endswith('*'):
        # Generate a struct with operator overloads instead of a typedef.
        # This allows Ghidra's adjusted pointer code to compile without
        # text transforms for declarations, assignments, or function args.
        #
        # operator->() returns the subobject type at the offset (for direct field access)
        # adj() returns the base class pointer (used by the ADJ() template)
        struct_name = ptr_match.group(1)
        offset = int(ptr_match.group(2))

        # Look up the subobject type at the given offset in the base struct
        member_type_name = struct_name  # fallback to base class
        dtm = currentProgram.getDataTypeManager()
        # Search for the base struct in the data type manager
        for dt_candidate in dtm.getAllDataTypes():
            if dt_candidate.getName() == struct_name and isinstance(dt_candidate, Structure):
                comp = dt_candidate.getComponentAt(offset)
                if comp and comp.getDataType():
                    comp_type = comp.getDataType()
                    # Unwrap array types to get the base element type
                    # e.g. SBodyPartFire[2] -> SBodyPartFire
                    while isinstance(comp_type, Array):
                        comp_type = comp_type.getDataType()
                    # Only use the member type if it's a struct/union
                    # (primitives, typedefs, enums can't be forward-declared as structs)
                    if isinstance(comp_type, (Structure, Union)):
                        member_type_name = comp_type.getName()
                break

        content.append("// Adjusted pointer: %s" % td_name)
        content.append("// Points to %s at offset 0x%x in %s" % (member_type_name, offset, struct_name))
        if typedef.getDescription():
            content.append("// %s" % typedef.getDescription())

        # Forward-declare the member type if different from base
        if member_type_name != struct_name:
            content.append("struct %s;" % member_type_name)

        content.append("struct %s {" % td_name)
        content.append("    void *_raw;")
        content.append("    typedef %s base_type;" % struct_name)
        content.append("    %s() : _raw(0) {}" % td_name)
        content.append("    template<typename T> %s(T* p) : _raw((void*)p) {}" % td_name)
        content.append("    template<typename T> %s& operator=(T* p) { _raw = (void*)p; return *this; }" % td_name)
        content.append("    %s* operator->() const { return (%s*)_raw; }" % (member_type_name, member_type_name))
        content.append("    %s* adj() const { return (%s*)_raw; }" % (struct_name, struct_name))
        content.append("    template<typename T> operator T*() const { return (T*)_raw; }")
        content.append("    explicit operator bool() const { return _raw != 0; }")
        content.append("};")
    else:
        content.append("// Typedef: %s" % td_name)
        if typedef.getDescription():
            content.append("// %s" % typedef.getDescription())
        content.append("typedef %s %s;" % (base_type, td_name))

    content.append("")
    return "\n".join(content)


def generate_individual_function_definition_header(currentProgram, func_def, type_to_path_map=None):
    """Generate header content for an individual function definition.

    Args:
        currentProgram: The Ghidra program
        func_def: The function definition data type
        type_to_path_map: Optional map of type names to header paths for includes

    Returns:
        Header content as string
    """
    content = []
    content.append("#pragma once")

    # Add dependencies if type_to_path_map provided
    # For funcdef headers, we ONLY include basetypes.h - not class/vtable headers
    # This prevents circular dependencies: funcdef->class->vtable->funcdef
    # Struct/union types are handled via forward declarations below
    if type_to_path_map is not None:
        direct_deps, pointer_deps = collect_type_dependencies(currentProgram, func_def)
        # Filter out class/vtable/struct dependencies to prevent circular includes
        # We use forward declarations for struct pointer types instead
        filtered_direct_deps = set()
        filtered_pointer_deps = set()
        for dep in direct_deps:
            dep_name = strip_type_prefix(dep)
            if dep_name in type_to_path_map:
                path = type_to_path_map[dep_name]
                # Skip class headers, vtable headers, and struct headers - use forward decls
                if '/classes/' in path or '/structs/' in path:
                    continue
            filtered_direct_deps.add(dep)
        for dep in pointer_deps:
            dep_name = strip_type_prefix(dep)
            if dep_name in type_to_path_map:
                path = type_to_path_map[dep_name]
                # Skip class headers, vtable headers, and struct headers - use forward decls
                if '/classes/' in path or '/structs/' in path:
                    continue
            filtered_pointer_deps.add(dep)
        # Always include basetypes.h for game types
        needs_basetypes = True
        dep_lines = generate_dependency_includes(func_def.getName(), filtered_direct_deps, filtered_pointer_deps, type_to_path_map, needs_basetypes)
        content.extend(dep_lines)

    # Collect struct/union types that need forward declarations
    # These are types used as pointers in params/return that aren't included via headers
    forward_decls = set()

    def extract_struct_from_pointer_type(type_str):
        """Extract struct/union name from a pointer type string like 'struct CStrList*'"""
        type_str = type_str.strip()
        if type_str.endswith('*'):
            base = type_str.rstrip('* ').strip()
            if base.startswith('struct '):
                return ('struct', base[7:].strip())
            elif base.startswith('union '):
                return ('union', base[6:].strip())
        return None

    # Check return type
    if hasattr(func_def, 'getReturnType') and func_def.getReturnType():
        ret_type_str = resolve_data_type_name_for_headers(currentProgram, func_def.getReturnType())
        decl = extract_struct_from_pointer_type(ret_type_str)
        if decl:
            forward_decls.add(decl)

    # Check parameters
    if hasattr(func_def, 'getArguments') and func_def.getArguments():
        for param in func_def.getArguments():
            if hasattr(param, 'getDataType') and param.getDataType():
                param_type_str = resolve_data_type_name_for_headers(currentProgram, param.getDataType())
                decl = extract_struct_from_pointer_type(param_type_str)
                if decl:
                    forward_decls.add(decl)

    # Add forward declarations
    if forward_decls:
        content.append("")
        content.append("// Forward declarations")
        for keyword, name in sorted(forward_decls):
            content.append("%s %s;" % (keyword, name))

    content.append("")
    content.append("// Function Definition: %s" % func_def.getName())
    if func_def.getComment():
        content.append("// %s" % func_def.getComment())
    return_type = "void"
    if hasattr(func_def, 'getReturnType') and func_def.getReturnType():
        return_type = resolve_data_type_name_for_headers(currentProgram, func_def.getReturnType())
    params = []
    used_param_names = set()
    if hasattr(func_def, 'getArguments') and func_def.getArguments():
        for param in func_def.getArguments():
            param_type = "void"
            param_name = "param"
            if hasattr(param, 'getDataType') and param.getDataType():
                param_type = resolve_data_type_name_for_headers(currentProgram, param.getDataType())
            if hasattr(param, 'getName') and param.getName():
                param_name = sanitize_c_identifier(param.getName())
            # Ensure unique parameter names to avoid "conflicting types" errors
            param_name = make_unique_param_name(param_name, used_param_names)
            params.append("%s %s" % (param_type, param_name))
    params_str = ", ".join(params) if params else "void"
    content.append("typedef %s %s(%s);" % (return_type, func_def.getName(), params_str))
    content.append("")
    return "\n".join(content)


def generate_structs_header(currentProgram, structs):
    """Generate combined header content for multiple structs.

    Args:
        currentProgram: The Ghidra program
        structs: List of structure data types

    Returns:
        Header content as string
    """
    content = []
    content.append("#pragma once")
    content.append("")
    for struct in sorted(structs, key=lambda s: s.getName()):
        content.append("// Structure: %s" % struct.getName())
        if struct.getDescription():
            content.append("// %s" % struct.getDescription())
        pack_value, align_attr = _packing_and_alignment(struct)
        if pack_value is not None:
            content.append("#pragma pack(push, %d)" % pack_value)
        content.append("typedef struct %s {" % struct.getName())
        for field_index, comp in enumerate(struct.getComponents()):
            field_type = resolve_field_type_for_component(currentProgram, comp)
            # Use Ghidra decompiler naming convention: field{index}_0x{offset_hex}
            field_name = sanitize_c_identifier(comp.getFieldName()) if comp.getFieldName() else ("field_%d" % comp.getOffset())
            comment = " // %s" % comp.getComment() if comp.getComment() else ""
            field_decl = format_field_declaration(field_type, field_name)
            content.append("    %s;%s" % (field_decl, comment))
        if align_attr is not None:
            content.append("} %s %s;" % (align_attr, struct.getName()))
        else:
            content.append("} %s;" % struct.getName())
        if pack_value is not None:
            content.append("#pragma pack(pop)")
        content.append("")
    return "\n".join(content)


def generate_unions_header(currentProgram, unions):
    """Generate combined header content for multiple unions.

    Args:
        currentProgram: The Ghidra program
        unions: List of union data types

    Returns:
        Header content as string
    """
    content = []
    content.append("#pragma once")
    content.append("")
    for union in sorted(unions, key=lambda u: u.getName()):
        content.append("// Union: %s" % union.getName())
        if union.getDescription():
            content.append("// %s" % union.getDescription())
        pack_value, align_attr = _packing_and_alignment(union)
        if pack_value is not None:
            content.append("#pragma pack(push, %d)" % pack_value)
        content.append("typedef union %s {" % union.getName())
        for field_index, comp in enumerate(union.getComponents()):
            field_type = resolve_field_type_for_component(currentProgram, comp)
            # Use Ghidra decompiler naming convention: field{index}_0x{offset_hex}
            field_name = sanitize_c_identifier(comp.getFieldName()) if comp.getFieldName() else ("field_%d" % comp.getOffset())
            comment = " // %s" % comp.getComment() if comp.getComment() else ""
            field_decl = format_field_declaration(field_type, field_name)
            content.append("    %s;%s" % (field_decl, comment))
        if align_attr is not None:
            content.append("} %s %s;" % (align_attr, union.getName()))
        else:
            content.append("} %s;" % union.getName())
        if pack_value is not None:
            content.append("#pragma pack(pop)")
        content.append("")
    return "\n".join(content)


def generate_enums_header(currentProgram, enums):
    """Generate combined header content for multiple enums.

    Args:
        currentProgram: The Ghidra program
        enums: List of enum data types

    Returns:
        Header content as string
    """
    content = []
    content.append("#pragma once")
    content.append("")
    # Include basetypes if any enum needs a non-int typedef (uchar, ushort)
    needs_basetypes = any(_enum_typedef_type(e) != "int" for e in enums)
    if needs_basetypes:
        content.append('#include "system/basetypes.h"')
        content.append("")
    for enum in sorted(enums, key=lambda e: e.getName()):
        content.append("// Enum: %s" % enum.getName())
        if enum.getDescription():
            content.append("// %s" % enum.getDescription())
        content.append("enum {")
        enum_values = []
        for name in enum.getNames():
            value = enum.getValue(name)
            enum_values.append("    %s = %d" % (name, value))
        content.append(",\n".join(enum_values))
        content.append("};")
        content.append("typedef %s %s;" % (_enum_typedef_type(enum), enum.getName()))
        content.append("")
    return "\n".join(content)


def generate_typedefs_header(currentProgram, typedefs):
    """Generate combined header content for multiple typedefs.

    Args:
        currentProgram: The Ghidra program
        typedefs: List of typedef data types

    Returns:
        Header content as string
    """
    content = []
    content.append("#pragma once")
    content.append("")
    for typedef in sorted(typedefs, key=lambda t: t.getName()):
        content.append("// Typedef: %s" % typedef.getName())
        if typedef.getDescription():
            content.append("// %s" % typedef.getDescription())
        base_type = resolve_data_type_name_for_headers(currentProgram, typedef.getDataType())
        content.append("typedef %s %s;" % (base_type, typedef.getName()))
        content.append("")
    return "\n".join(content)


def generate_function_definitions_header(currentProgram, function_definitions):
    """Generate combined header content for function definitions.

    Args:
        currentProgram: The Ghidra program
        function_definitions: List of function definition data types

    Returns:
        Header content as string
    """
    content = []
    content.append("#pragma once")
    content.append("")
    for func_def in sorted(function_definitions, key=lambda f: f.getName()):
        content.append("// Function Definition: %s" % func_def.getName())
        if func_def.getComment():
            content.append("// %s" % func_def.getComment())
        return_type = "void"
        if hasattr(func_def, 'getReturnType') and func_def.getReturnType():
            return_type = resolve_data_type_name_for_headers(currentProgram, func_def.getReturnType())
        params = []
        used_param_names = set()
        if hasattr(func_def, 'getArguments') and func_def.getArguments():
            for param in func_def.getArguments():
                param_type = "void"
                param_name = "param"
                if hasattr(param, 'getDataType') and param.getDataType():
                    param_type = resolve_data_type_name_for_headers(currentProgram, param.getDataType())
                if hasattr(param, 'getName') and param.getName():
                    param_name = sanitize_c_identifier(param.getName())
                # Ensure unique parameter names to avoid "conflicting types" errors
                param_name = make_unique_param_name(param_name, used_param_names)
                params.append("%s %s" % (param_type, param_name))
        params_str = ", ".join(params) if params else "void"
        content.append("typedef %s %s(%s);" % (return_type, func_def.getName(), params_str))
        content.append("")
    return "\n".join(content)


def generate_equates_header(currentProgram, equates_list):
    """Generate header content for equates (defines).

    Args:
        currentProgram: The Ghidra program
        equates_list: List of equate dictionaries

    Returns:
        Header content as string
    """
    content = []
    content.append("#pragma once")
    content.append("")
    content.append("// Equates / Constants")
    content.append("")

    # Sort equates by name for consistent output
    sorted_equates = sorted(equates_list, key=lambda eq: eq['name'])

    # Group by prefix for better organization
    grouped_equates = {}
    for equate in sorted_equates:
        eq_name = equate['name']
        if '_' in eq_name:
            prefix = eq_name.split('_')[0]
        else:
            prefix = "MISC"
        if prefix not in grouped_equates:
            grouped_equates[prefix] = []
        grouped_equates[prefix].append(equate)

    # Generate defines by group
    for prefix in sorted(grouped_equates.keys()):
        group_equates = grouped_equates[prefix]
        content.append("// %s Constants" % prefix.upper())
        max_name_len = max(len(eq['name']) for eq in group_equates)
        alignment = max(max_name_len + 4, 50)
        for equate in group_equates:
            eq_name = equate['name']
            eq_formatted_value = equate['formatted_value']

            # Create #define
            define_line = "#define %s" % eq_name
            padding = " " * (alignment - len(define_line))
            define_line += padding + eq_formatted_value

            # Add comment with decimal value if it's hex, or hex value if it's decimal
            eq_value = equate['value']
            if eq_formatted_value.startswith('0x') or eq_formatted_value.startswith('0X'):
                if eq_value != 0:
                    define_line += "  // %d" % eq_value
            else:
                if eq_value >= 10:
                    define_line += "  // 0x%X" % eq_value
            content.append(define_line)
        content.append("")

    # Generate equates header
    total_equates = len(sorted_equates)
    total_refs = sum(len(eq.get('refs', [])) for eq in sorted_equates)
    content.append("// Total equates: %d" % total_equates)
    content.append("// Total references: %d" % total_refs)
    content.append("")
    return "\n".join(content)


def is_valid_define_name(name):
    """Check if a name is valid for a C #define.

    Args:
        name: The equate name to validate

    Returns:
        True if valid C identifier, False otherwise
    """
    if not name:
        return False

    # Must start with letter or underscore
    if not (name[0].isalpha() or name[0] == '_'):
        return False

    # Rest must be alphanumeric or underscore
    for char in name[1:]:
        if not (char.isalnum() or char == '_'):
            return False

    # Reject names that are just numbers with prefix (like hex literals)
    if name.startswith('0x') or name.startswith('0X'):
        return False

    # Reject names that look like addresses or raw hex
    if re.match(r'^[0-9A-Fa-f]+$', name):
        return False

    return True


def organize_equates_by_category(currentProgram):
    """Organize equates into categories.

    Args:
        currentProgram: The Ghidra program

    Returns:
        Dictionary mapping category paths to lists of equates
    """
    equates_by_category = {}
    equate_table = currentProgram.getEquateTable()
    all_equates = []
    skipped_count = 0
    total_count = 0

    for equate in equate_table.getEquates():
        total_count += 1
        eq_name = equate.getName()
        eq_value = equate.getValue()

        # Skip invalid define names
        if not is_valid_define_name(eq_name):
            skipped_count += 1
            continue

        # Use Ghidra's built-in reference iterator instead of scanning all addresses
        refs = []
        ref_iter = equate.getReferences()
        for ref in ref_iter:
            refs.append({
                'addr': str(ref.getAddress()),
                'opIndex': ref.getOpIndex()
            })

        # Build equate data
        equate_data = {
            'name': eq_name,
            'value': eq_value,
            'refs': refs,
            'formatted_value': format_equate_value(eq_value)
        }
        all_equates.append(equate_data)

    log_info("Found %d equates in Ghidra (%d valid, %d skipped invalid names)" % (
        total_count, len(all_equates), skipped_count))

    # Categorize equates based on usage patterns and names
    for equate_data in all_equates:
        category = categorize_equate(currentProgram, equate_data)
        if category not in equates_by_category:
            equates_by_category[category] = []
        equates_by_category[category].append(equate_data)
    return equates_by_category


def categorize_equate(currentProgram, equate_data):
    """Categorize an equate based on its name.

    Args:
        currentProgram: The Ghidra program
        equate_data: Equate dictionary

    Returns:
        Category path string (defines/system or defines/game)
    """
    eq_name = equate_data['name']
    eq_name_lower = eq_name.lower()

    # System constants
    if eq_name_lower.startswith("system_"):
        return "defines/system"

    # Default category - game defines
    return "defines/game"


def format_equate_value(value):
    """Format an equate value for output.

    Args:
        value: The numeric value

    Returns:
        Formatted string representation
    """
    if value == 0:
        return "0"
    elif value > 0:
        if value <= 255:
            return str(value)
        elif (value & (value - 1)) == 0:
            return "0x%X" % value
        elif value >= 0x1000:
            return "0x%X" % value
        else:
            return str(value)
    else:
        if value >= -128:
            return str(value)
        else:
            return "0x%X" % (value & 0xFFFFFFFF)


def export_equates_file(currentProgram, pseudocode_dir, equates_by_category):
    """Export equates to defines.h.

    Args:
        currentProgram: The Ghidra program
        pseudocode_dir: Base directory for headers
        equates_by_category: Dictionary mapping categories to equate lists
    """
    log_info("Exporting equates to defines.h...")
    try:
        all_equates = []
        for equates_list in equates_by_category.values():
            all_equates.extend(equates_list)

        defines_file = os.path.join(pseudocode_dir, "defines.h")

        if all_equates:
            equates_content = generate_equates_header(currentProgram, all_equates)
            write_header_file(defines_file, equates_content)
            log_info("Created defines.h with %d equates" % len(all_equates))
        else:
            # Create empty defines.h with placeholder comment
            empty_content = "#pragma once\n\n// No equates defined in Ghidra\n// Add equates in Ghidra (Window -> Equates) to populate this file\n"
            write_header_file(defines_file, empty_content)
            log_info("Created empty defines.h (no equates found in Ghidra)")
    except Exception as e:
        log_info("ERROR exporting equates: %s" % str(e))
        import traceback
        log_info(traceback.format_exc())


def export_individual_game_files(currentProgram, pseudocode_dir, game_individual_types, type_to_path_map=None):
    """Export individual header files for /Game category types.

    Args:
        currentProgram: The Ghidra program
        pseudocode_dir: Base directory for headers
        game_individual_types: List of type info dictionaries
        type_to_path_map: Optional map of type names to header paths for includes
    """
    if not game_individual_types:
        return

    log_info("Creating individual files for %d /Game data types" % len(game_individual_types))
    for type_info in game_individual_types:
        dt = type_info['data_type']
        export_path = type_info['export_path']
        original_path = type_info['original_path']
        dt_name = type_info['name']

        # Create directory path for export
        if export_path.startswith("/"):
            export_path = export_path[1:]
        header_dir = os.path.join(pseudocode_dir, export_path) if export_path else pseudocode_dir
        make_dirs(header_dir)

        # Generate content based on data type (with dependency tracking)
        content = ""
        file_extension = ".h"
        if isinstance(dt, Structure):
            content = generate_individual_struct_header(currentProgram, dt, type_to_path_map)
            filename = "%s%s" % (dt_name, file_extension)
        elif isinstance(dt, Union):
            content = generate_individual_union_header(currentProgram, dt, type_to_path_map)
            filename = "%s%s" % (dt_name, file_extension)
        elif isinstance(dt, Enum):
            content = generate_individual_enum_header(currentProgram, dt, type_to_path_map)
            filename = "%s%s" % (dt_name, file_extension)
        elif isinstance(dt, TypeDef):
            content = generate_individual_typedef_header(currentProgram, dt, type_to_path_map)
            filename = "%s%s" % (dt_name, file_extension)
        elif is_function_definition_type(dt):
            content = generate_individual_function_definition_header(currentProgram, dt, type_to_path_map)
            filename = "%s%s" % (dt_name, file_extension)
        else:
            log_info("Unknown data type for individual export: %s" % dt_name)
            continue

        # Write the individual file
        file_path = os.path.join(header_dir, filename)
        write_header_file(file_path, content)
        log_info("Created individual file: %s (original Ghidra category: %s)" % (file_path, original_path))


def collect_forward_declarations_needed(currentProgram, sorted_types, types_in_file):
    """Collect struct/union forward declarations needed for function pointers.

    When function definitions use pointers to structs that are defined later or
    are external to this file, we need forward declarations to avoid
    "declared inside parameter list" warnings.

    Args:
        currentProgram: The Ghidra program
        sorted_types: Types in their sorted order
        types_in_file: Set of type names in this file

    Returns:
        Set of type names needing forward declarations
    """
    forward_decls = set()
    defined_so_far = set()

    # Map type names to their data types
    name_to_type = {dt.getName(): dt for dt in sorted_types}

    for dt in sorted_types:
        dt_name = dt.getName()

        # Check if this is a function definition
        class_name = dt.__class__.__name__.rsplit('.', 1)[-1]
        if class_name in ['FunctionDefinitionDataType', 'FunctionDefinitionDB', 'FunctionDefinition', 'FunctionDefDataType']:
            # Get pointer dependencies (structs/unions referenced by pointer)
            _, pointer_deps = collect_type_dependencies(currentProgram, dt)

            for dep in pointer_deps:
                # Strip struct/union prefix for matching (added by resolve_data_type_name_for_headers)
                dep_name = strip_type_prefix(dep)

                # Case 1: Type is in this file but not yet defined - needs forward decl
                if dep_name in types_in_file and dep_name not in defined_so_far:
                    dep_dt = name_to_type.get(dep_name)
                    if dep_dt and isinstance(dep_dt, (Structure, Union)):
                        forward_decls.add(dep_name)

                # Case 2: Type is NOT in this file (external) - also needs forward decl
                # to avoid "declared inside parameter list" warning.
                # Note: pointer_deps only contains struct/union types (per
                # collect_type_dependencies_with_context which filters on line 635)
                elif dep_name not in types_in_file:
                    forward_decls.add(dep_name)

        defined_so_far.add(dt_name)

    return forward_decls


def topological_sort_types(currentProgram, types_list, types_in_file):
    """Topologically sort types by their internal dependencies.

    Args:
        currentProgram: The Ghidra program
        types_list: List of data type objects
        types_in_file: Set of type names in this file

    Returns:
        List of types sorted so dependencies come first
    """
    from collections import defaultdict

    # Build name -> type mapping
    name_to_type = {}
    for dt in types_list:
        name_to_type[dt.getName()] = dt

    # Build set of function definition names (to filter spurious deps)
    funcdef_names = set()
    for dt in types_list:
        if is_function_definition_type(dt):
            funcdef_names.add(dt.getName())

    # Build dependency graph (only for deps within this file)
    # NOTE: Only use direct_deps for ordering. Pointer deps don't require
    # ordering because we use 'struct TypeName*' syntax which allows
    # forward references. This prevents cycles when types reference each
    # other only through pointers (e.g., a struct has a pointer to a
    # function type that takes a pointer to that struct as a parameter).
    deps = defaultdict(set)  # deps[A] = set of types that A depends on
    for dt in types_list:
        dt_name = dt.getName()
        is_funcdef = is_function_definition_type(dt)
        direct_deps, pointer_deps = collect_type_dependencies(currentProgram, dt)
        # Only track direct (non-pointer) internal dependencies
        for dep in direct_deps:
            # Strip struct/union prefix for matching (added by resolve_data_type_name_for_headers)
            dep_name = strip_type_prefix(dep)
            if dep_name in types_in_file and dep_name != dt_name:
                # Filter out function-def-to-function-def deps (spurious from vtable traversal)
                if is_funcdef and dep_name in funcdef_names:
                    continue
                deps[dt_name].add(dep_name)

    # Kahn's algorithm for topological sort
    in_degree = defaultdict(int)
    for dt_name in name_to_type:
        in_degree[dt_name] = 0
    for dt_name, dt_deps in deps.items():
        for dep in dt_deps:
            if dep in name_to_type:  # Only count deps on types we're sorting
                in_degree[dt_name] += 1

    # Start with types that have no internal dependencies
    queue = [name for name in name_to_type if in_degree[name] == 0]
    queue.sort()  # Alphabetical as secondary sort

    result = []
    while queue:
        # Take type with no remaining dependencies
        current = queue.pop(0)
        result.append(name_to_type[current])

        # Update in-degrees
        for dt_name in name_to_type:
            if current in deps[dt_name]:
                in_degree[dt_name] -= 1
                if in_degree[dt_name] == 0 and dt_name not in [r.getName() for r in result]:
                    queue.append(dt_name)
                    queue.sort()

    # Add any remaining types (circular deps - shouldn't happen often)
    for dt in types_list:
        if dt not in result:
            result.append(dt)

    return result


def generate_type_definition(currentProgram, dt):
    """Generate the definition for a single data type.

    Args:
        currentProgram: The Ghidra program
        dt: The data type

    Returns:
        List of lines for this type definition
    """
    lines = []
    dt_name = dt.getName()

    if isinstance(dt, Enum):
        lines.append("")
        lines.append("// Enum: %s" % dt_name)
        if dt.getDescription():
            lines.append("// %s" % dt.getDescription())
        lines.append("enum {")
        enum_values = []
        for name in dt.getNames():
            value = dt.getValue(name)
            enum_values.append("    %s = %d" % (name, value))
        lines.append(",\n".join(enum_values))
        lines.append("};")
        lines.append("typedef %s %s;" % (_enum_typedef_type(dt), dt_name))

    elif isinstance(dt, TypeDef):
        lines.append("")
        lines.append("// Typedef: %s" % dt_name)
        if dt.getDescription():
            lines.append("// %s" % dt.getDescription())
        base_type = resolve_data_type_name_for_headers(currentProgram, dt.getDataType())
        lines.append("typedef %s %s;" % (base_type, dt_name))

    elif isinstance(dt, Union):
        lines.append("")
        lines.append("// Union: %s" % dt_name)
        if dt.getDescription():
            lines.append("// %s" % dt.getDescription())
        pack_value, align_attr = _packing_and_alignment(dt)
        if pack_value is not None:
            lines.append("#pragma pack(push, %d)" % pack_value)
        lines.append("typedef union %s {" % dt_name)
        for field_index, comp in enumerate(dt.getComponents()):
            field_type = resolve_field_type_for_component(currentProgram, comp)
            # Use Ghidra decompiler naming convention: field{index}_0x{offset_hex}
            field_name = sanitize_c_identifier(comp.getFieldName()) if comp.getFieldName() else ("field_%d" % comp.getOffset())
            comment = " // %s" % comp.getComment() if comp.getComment() else ""
            field_decl = format_field_declaration(field_type, field_name)
            lines.append("    %s;%s" % (field_decl, comment))
        if align_attr is not None:
            lines.append("} %s %s;" % (align_attr, dt_name))
        else:
            lines.append("} %s;" % dt_name)
        if pack_value is not None:
            lines.append("#pragma pack(pop)")

    elif isinstance(dt, Structure):
        lines.append("")
        lines.append("// Structure: %s" % dt_name)
        if dt.getDescription():
            lines.append("// %s" % dt.getDescription())
        pack_value, align_attr = _packing_and_alignment(dt)
        if pack_value is not None:
            lines.append("#pragma pack(push, %d)" % pack_value)
        lines.append("typedef struct %s {" % dt_name)
        for field_index, comp in enumerate(dt.getComponents()):
            field_type = resolve_field_type_for_component(currentProgram, comp)
            # Use Ghidra decompiler naming convention: field{index}_0x{offset_hex}
            field_name = sanitize_c_identifier(comp.getFieldName()) if comp.getFieldName() else ("field_%d" % comp.getOffset())
            comment = " // %s" % comp.getComment() if comp.getComment() else ""
            field_decl = format_field_declaration(field_type, field_name)
            lines.append("    %s;%s" % (field_decl, comment))
        if align_attr is not None:
            lines.append("} %s %s;" % (align_attr, dt_name))
        else:
            lines.append("} %s;" % dt_name)
        if pack_value is not None:
            lines.append("#pragma pack(pop)")

    elif is_function_definition_type(dt):
        lines.append("")
        lines.append("// Function Definition: %s" % dt_name)
        if hasattr(dt, 'getComment') and dt.getComment():
            lines.append("// %s" % dt.getComment())
        return_type = "void"
        if hasattr(dt, 'getReturnType') and dt.getReturnType():
            return_type = resolve_data_type_name_for_headers(currentProgram, dt.getReturnType())
        params = []
        used_param_names = set()
        if hasattr(dt, 'getArguments') and dt.getArguments():
            for param in dt.getArguments():
                param_type = "void"
                param_name = "param"
                if hasattr(param, 'getDataType') and param.getDataType():
                    param_type = resolve_data_type_name_for_headers(currentProgram, param.getDataType())
                if hasattr(param, 'getName') and param.getName():
                    param_name = param.getName()
                # Ensure unique parameter names to avoid "conflicting types" errors
                param_name = make_unique_param_name(param_name, used_param_names)
                params.append("%s %s" % (param_type, param_name))
        params_str = ", ".join(params) if params else "void"
        lines.append("typedef %s %s(%s);" % (return_type, dt_name, params_str))

    return lines


def get_basetypes_defined_types():
    """Return the set of type names that are defined in basetypes.h.

    These types should be skipped when generating system headers to avoid
    redefinition errors. This delegates to the single source of truth in basetypes.py.
    """
    return get_all_basetypes()


def generate_basetypes_header(pseudocode_dir):
    """Generate system/basetypes.h with Ghidra and Windows primitive type definitions.

    This header defines fundamental types that break circular dependencies between
    system headers. Types defined here should match get_basetypes_defined_types().

    Args:
        pseudocode_dir: Base directory for headers
    """
    system_dir = os.path.join(pseudocode_dir, "system")
    make_dirs(system_dir)

    content = []
    content.append("#pragma once")
    content.append("")
    content.append("// =============================================================================")
    content.append("// BASETYPES - Primitive Type Definitions")
    content.append("// =============================================================================")
    content.append("// This header defines Ghidra's built-in types and Windows primitives.")
    content.append("// It must be included first to break circular dependencies between system headers.")
    content.append("")
    content.append("// Standard includes")
    content.append("#include <stddef.h>  // for wchar_t")
    content.append("#include <stdbool.h>  // for bool")
    content.append("")
    content.append("// =============================================================================")
    content.append("// Calling Convention Macros")
    content.append("// =============================================================================")
    content.append("// Calling conventions parsed from x86watcom.cspec - define as empty for non-MSVC compilers")
    content.append("#ifndef _MSC_VER")

    # Parse calling conventions from cspec file
    cspec_conventions = parse_cspec_calling_conventions()

    # Standard Windows conventions that should always be included
    standard_conventions = ["__cdecl", "__stdcall", "__fastcall", "__thiscall", "__vectorcall"]

    # Unknown conventions
    unknown_conventions = ["__unknown"]

    # Add standard conventions first
    content.append("// Standard Windows calling conventions")
    for conv in standard_conventions:
        content.append("#define %s" % conv)

    # Add cspec-parsed conventions (excluding standard ones already added)
    content.append("// Calling conventions from x86watcom.cspec")
    for conv in cspec_conventions:
        if conv not in standard_conventions:
            content.append("#define %s" % conv)

    # Add unknown conventions
    content.append("// Unknown conventions")
    for conv in unknown_conventions:
        content.append("#define %s" % conv)

    content.append("#endif")
    content.append("")
    content.append("// =============================================================================")
    content.append("// Ghidra Primitive Types")
    content.append("// =============================================================================")
    content.append("")
    content.append("// Sized unsigned types")
    content.append("typedef unsigned char byte;")
    content.append("typedef unsigned char uchar;")
    content.append("typedef unsigned short ushort;")
    content.append("typedef unsigned int uint;")
    content.append("typedef unsigned long ulong;")
    content.append("typedef long long longlong;")
    content.append("typedef unsigned long long ulonglong;")
    content.append("")
    content.append("// Lowercase aliases (Ghidra sometimes uses these)")
    content.append("typedef unsigned long dword;")
    content.append("typedef unsigned short word;")
    content.append("")
    content.append("// Undefined types (placeholder bytes for unknown data)")
    content.append("typedef unsigned char undefined;")
    content.append("typedef unsigned char undefined1;")
    content.append("typedef unsigned short undefined2;")
    content.append("typedef unsigned int undefined4;")
    content.append("typedef unsigned long long undefined8;")
    content.append("")
    content.append("// Generic pointer type")
    content.append("typedef void* pointer;")
    content.append("")
    content.append("// Ghidra string types (const for C++ string literal compatibility)")
    content.append("typedef char* TerminatedCString;")
    content.append("typedef wchar_t* TerminatedUnicode;")
    content.append("typedef char* string;  // Ghidra's generic string type")
    content.append("")
    content.append("// Extended precision float (x87 80-bit)")
    content.append("typedef long double float10;")
    content.append("")
    content.append("// Unknown byte types (Ghidra's unkbyteN = N bytes of unknown data)")
    content.append("typedef long double unkbyte10;  // 10-byte, typically x87 80-bit float returns")
    content.append("")
    content.append("// =============================================================================")
    content.append("// Windows Primitive Types")
    content.append("// =============================================================================")
    content.append("// These are the fundamental Windows types that other system headers depend on.")
    content.append("// Defined here to break circular dependencies.")
    content.append("")
    content.append("// Basic Windows integer types")
    content.append("typedef int BOOL;")
    content.append("typedef unsigned char BYTE;")
    content.append("typedef char CHAR;")
    content.append("typedef unsigned short WORD;")
    content.append("typedef unsigned long DWORD;")
    content.append("typedef short SHORT;")
    content.append("typedef long LONG;")
    content.append("typedef int INT;")
    content.append("typedef unsigned int UINT;")
    content.append("typedef unsigned short USHORT;")
    content.append("typedef unsigned long ULONG;")
    content.append("typedef unsigned char UCHAR;")
    content.append("typedef float FLOAT;")
    content.append("typedef double DOUBLE;")
    # WCHAR is 2 bytes on the Win32 ABI the binary was compiled against.
    # Linux clang's wchar_t is 4 bytes, so using it here doubles the size of
    # every WCHAR[N] field (e.g. TIME_ZONE_INFORMATION.StandardName would be
    # 128 bytes instead of 64). Use a fixed 16-bit integer to match the ABI.
    content.append("typedef unsigned short WCHAR;")
    content.append("typedef long long LONGLONG;")
    content.append("typedef unsigned long long ULONGLONG;")
    content.append("typedef unsigned long long QWORD;")
    content.append("")
    content.append("// Pointer-sized types (32-bit)")
    content.append("typedef long LONG_PTR;")
    content.append("typedef unsigned long ULONG_PTR;")
    content.append("typedef unsigned long DWORD_PTR;")
    content.append("typedef unsigned long SIZE_T;")
    content.append("typedef unsigned int UINT_PTR;")
    content.append("typedef int INT_PTR;")
    content.append("")
    content.append("// Handle types")
    content.append("typedef void* HANDLE;")
    content.append("typedef void* PVOID;")
    content.append("typedef void* LPVOID;")
    content.append("typedef const void* LPCVOID;")
    content.append("")
    content.append("// String pointer types")
    content.append("typedef char* LPSTR;")
    content.append("typedef const char* LPCSTR;")
    content.append("typedef wchar_t* LPWSTR;")
    content.append("typedef const wchar_t* LPCWSTR;")
    content.append("typedef BYTE* LPBYTE;")
    content.append("typedef DWORD* LPDWORD;")
    content.append("")
    content.append("// Common typedefs")
    content.append("typedef DWORD COLORREF;")
    content.append("typedef UINT WPARAM;")
    content.append("typedef LONG LPARAM;")
    content.append("typedef LONG LRESULT;")
    content.append("typedef long HRESULT;")
    content.append("typedef WORD ATOM;")
    content.append("")
    content.append("// =============================================================================")
    content.append("// Windows PE Resource Placeholders (not recorded by Ghidra)")
    content.append("// =============================================================================")
    content.append("//")
    content.append("// These resource types are referenced by decompiled winMain but Ghidra")
    content.append("// does not track their actual layout — variable-size BYTE blobs. Kept")
    content.append("// as hand-written placeholders. All other PE/DOS structs (IMAGE_*,")
    content.append("// VS_VERSION_INFO, etc.) are auto-generated from data_types.json into")
    content.append("// system/pe.h and system/dos.h.")
    content.append("")
    content.append("typedef struct IconResource {")
    content.append("    BYTE data[1]; // Variable size icon data")
    content.append("} IconResource;")
    content.append("")
    content.append("typedef struct MenuResource {")
    content.append("    BYTE data[1]; // Variable size menu data")
    content.append("} MenuResource;")
    content.append("")
    content.append("typedef struct GroupIconResource {")
    content.append("    BYTE data[1]; // Variable size group icon data")
    content.append("} GroupIconResource;")
    content.append("")
    content.append("// 32-bit Image Base Offset Relative Pointer (Ghidra typedef).")
    content.append("// Ghidra records the base type as void*, but these fields are")
    content.append("// initialized with integer RVAs in the decompiled globals, so we")
    content.append("// emit it as a 32-bit integer to allow direct literal initialization.")
    content.append("typedef dword ImageBaseOffset32;")
    content.append("")

    header_path = os.path.join(system_dir, "basetypes.h")
    write_header_file(header_path, "\n".join(content))
    log_info("Created system/basetypes.h with Ghidra and Windows primitive types")


def detect_include_cycles(system_grouped_types, type_to_path_map):
    """Detect circular include dependencies between system headers.

    Args:
        system_grouped_types: Dict mapping export_path to type lists
        type_to_path_map: Map of type names to header paths

    Returns:
        Set of header paths involved in cycles
    """
    from collections import defaultdict

    # Build dependency graph between headers
    header_deps = defaultdict(set)
    for export_path, types in system_grouped_types.items():
        this_header = "%s.h" % export_path
        all_types = (types['function_definitions'] + types['enums'] +
                    types['typedefs'] + types['structs'] + types['unions'])

        for dt in all_types:
            dt_name = dt.getName()
            if dt_name in type_to_path_map:
                dep_header = type_to_path_map[dt_name]
                if dep_header != this_header and dep_header.startswith("system/"):
                    header_deps[this_header].add(dep_header)

    # Find cycles using DFS
    cycles = set()
    visited = set()
    rec_stack = set()

    def dfs(header, path):
        visited.add(header)
        rec_stack.add(header)
        path.append(header)

        for dep in header_deps.get(header, []):
            if dep not in visited:
                if dfs(dep, path):
                    return True
            elif dep in rec_stack:
                # Found a cycle
                cycle_start = path.index(dep)
                for h in path[cycle_start:]:
                    cycles.add(h)
                return True

        path.pop()
        rec_stack.remove(header)
        return False

    for header in header_deps:
        if header not in visited:
            dfs(header, [])

    return cycles


def generate_watcom_runtime_inlines():
    """Generate Watcom C++ runtime function declarations.

    These are appended to watcom.h after the struct definitions from Ghidra.
    The functions implement the Watcom 11 C++ runtime array new/delete helpers.

    Implementations are in shims/watcom.cpp.

    Returns:
        List of content lines to append to watcom.h
    """
    lines = []
    lines.append("// =============================================================================")
    lines.append("// WATCOM C++ RUNTIME FUNCTIONS")
    lines.append("// =============================================================================")
    lines.append("//")
    lines.append("// Internal Watcom C++ runtime functions for array new/delete.")
    lines.append("// These work with the WatcomTypeInfo and WatcomTypeArrayInfo structs above.")
    lines.append("//")
    lines.append("// Construction hierarchy:")
    lines.append("//   __vec_new -> __vec_new_ -> __arrinit_dispatch -> __arrinit / __arrinit_")
    lines.append("// Destruction hierarchy:")
    lines.append("//   __vec_delete -> __arrfini -> __arrdtor")
    lines.append("//")
    lines.append("// Implementations are in shims/watcom.cpp.")
    lines.append("//")
    lines.append("// =============================================================================")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Array Construction Functions")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("extern void* __arrinit(void* array_start, int count, WatcomTypeInfo* ti);")
    lines.append("extern void* __arrinit_(void* array_start, int count, WatcomTypeInfo* ti);")
    lines.append("extern void* __arrinit_dispatch(void* array_ptr, int count, WatcomTypeInfo* ti);")
    lines.append("extern void* __vec_new_(void* dest, int count, WatcomTypeInfo* ti);")
    lines.append("extern void* __vec_new(void* dest, int count, WatcomTypeInfo* ti);")
    lines.append("extern void* __arrcopy(void* dest, void* src, int count, WatcomTypeInfo* ti);")
    lines.append("")
    lines.append("// __arr_op - Generic array operation with function pointer")
    lines.append("// Templated to accept any function pointer type (callers pass typed copy funcs)")
    lines.append("template<typename CopyFunc>")
    lines.append("inline void* __arr_op(void* dest, void* src, int count, int size, CopyFunc copy_func) {")
    lines.append("    char* d = (char*)dest;")
    lines.append("    char* s = (char*)src;")
    lines.append("    void (*func)(void*, void*) = (void (*)(void*, void*))copy_func;")
    lines.append("    for (int i = 0; i < count; i++, d += size, s += size)")
    lines.append("        func(d, s);")
    lines.append("    return dest;")
    lines.append("}")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Array Destruction Functions")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("extern void* __arrdtor(WatcomTypeArrayInfo* info);")
    lines.append("extern void* __arrfini(void* obj_array, int count, WatcomTypeInfo* ti);")
    lines.append("extern void* __vec_delete(void* ptr, WatcomTypeInfo* ti);")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Watcom Memory Helper Functions")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("extern void __memfill(void* dest, unsigned int value, unsigned int count);")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Watcom CRT Internal Functions")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("extern void notifyAbnormalTermination();")
    lines.append("extern void __stosd(void* dest, unsigned int value, unsigned int dword_count);")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Stack Probe (Watcom compiler intrinsic)")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("extern void __STK();")
    lines.append("extern void __STK(size_t size);")
    lines.append("#define stack_probe __STK")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Watcom CRT Functions (io.h)")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("#include <cerrno>")
    lines.append("#include <cstdlib>")
    lines.append("#include <cstring>")
    lines.append("#ifndef _MSC_VER")
    lines.append("#include <unistd.h>")
    lines.append("#endif")
    lines.append("")
    lines.append("extern void* _memcpy(void* dest, const void* src, size_t count);")
    lines.append("extern void* _memset(void* dest, int value, size_t count);")
    lines.append("extern long tell(int fd);")
    lines.append("extern int chsize(int fd, long size);")
    lines.append("")
    lines.append("// access() mode flags")
    lines.append("#ifndef F_OK")
    lines.append("#define F_OK 0")
    lines.append("#define W_OK 2")
    lines.append("#define R_OK 4")
    lines.append("#endif")
    lines.append("")
    lines.append("#ifndef PATH_MAX")
    lines.append("#define PATH_MAX 4096")
    lines.append("#endif")
    lines.append("extern char* _fullpath(char* buffer, const char* path, size_t maxlen);")
    lines.append("extern char* _getcwd(char* buffer, int size);")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// File Find Functions (Watcom io.h)")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Note: _find_t struct is defined in system/dos.h (from Ghidra)")
    lines.append("")
    lines.append("extern long _findfirst(const char* filespec, void* fileinfo);")
    lines.append("extern int _findnext(long handle, void* fileinfo);")
    lines.append("extern int _findclose(long handle);")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Watcom Directory Functions (direct.h)")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("extern int _mkdir(const char* path);")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Watcom Heap Functions (malloc.h)")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("// Heap status constants")
    lines.append("#ifndef _HEAPOK")
    lines.append("#define _HEAPOK       0")
    lines.append("#define _HEAPEMPTY    1")
    lines.append("#define _HEAPBADBEGIN 2")
    lines.append("#define _HEAPBADNODE  3")
    lines.append("#define _HEAPEND      4")
    lines.append("#define _HEAPBADPTR   5")
    lines.append("#endif")
    lines.append("")
    lines.append("#ifndef _USEDENTRY")
    lines.append("#define _USEDENTRY    0")
    lines.append("#define _FREEENTRY    1")
    lines.append("#endif")
    lines.append("")
    lines.append("// _heapinfo - forward declaration (full definition from Ghidra types)")
    lines.append("struct _heapinfo;")
    lines.append("")
    lines.append("extern int _heapchk(void);")
    lines.append("extern int _heapwalk(struct _heapinfo* entry);")
    lines.append("extern size_t _memmax(void);")
    lines.append("extern size_t memavl(void);")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Watcom Internal CRT Functions")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("extern unsigned long __getfileattr(const char* filename);")
    lines.append("extern unsigned long __set_errno(void);")
    lines.append("extern int* _errno(void);")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Watcom Static Destructor Registration")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("struct WatcomStaticDestructorNode;  // Forward declaration")
    lines.append("")
    lines.append("extern void _atexit(WatcomStaticDestructorNode* node);")
    lines.append("")
    return lines


def generate_winsock_runtime_inlines():
    """Generate Winsock function declarations.

    These are appended to winsock.h after the struct/typedef definitions from Ghidra.
    The transforms.py CRT transform converts crt_wsock32_c_* calls to standard
    winsock function names, and these declarations resolve them.

    Implementations are in shims/winsock.cpp (POSIX BSD sockets).

    Returns:
        List of content lines to append to winsock.h
    """
    lines = []
    lines.append("// =============================================================================")
    lines.append("// WINSOCK FUNCTIONS")
    lines.append("// =============================================================================")
    lines.append("//")
    lines.append("// Winsock function declarations.")
    lines.append("// The CRT transform in transforms.py converts crt_wsock32_c_* calls to")
    lines.append("// standard winsock function names (e.g., crt_wsock32_c_recv_FUN_XXXX -> recv).")
    lines.append("//")
    lines.append("// Implementations are in shims/winsock.cpp (POSIX BSD sockets).")
    lines.append("//")
    lines.append("// =============================================================================")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Byte Order Conversion")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("extern ushort htons(ushort hostshort);")
    lines.append("extern ulong htonl(ulong hostlong);")
    lines.append("extern ushort ntohs(ushort netshort);")
    lines.append("extern ulong ntohl(ulong netlong);")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Winsock Initialization")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("extern int WSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData);")
    lines.append("extern int WSACleanup(void);")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Socket Operations")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("extern _SOCKET accept(_SOCKET s, struct SOCKADDR* addr, int* addrlen);")
    lines.append("extern int bind(_SOCKET s, const struct SOCKADDR* addr, int namelen);")
    lines.append("extern int closesocket(_SOCKET s);")
    lines.append("extern int connect(_SOCKET s, const struct SOCKADDR* name, int namelen);")
    lines.append("extern int getsockname(_SOCKET s, struct SOCKADDR* name, int* namelen);")
    lines.append("extern int ioctlsocket(_SOCKET s, long cmd, uint* argp);")
    lines.append("extern int listen(_SOCKET s, int backlog);")
    lines.append("extern int recv(_SOCKET s, char* buf, int len, int flags);")
    lines.append("extern int recvfrom(_SOCKET s, char* buf, int len, int flags, struct SOCKADDR* from, int* fromlen);")
    lines.append("extern int send(_SOCKET s, const char* buf, int len, int flags);")
    lines.append("extern int sendto(_SOCKET s, const char* buf, int len, int flags, const struct SOCKADDR* to, int tolen);")
    lines.append("extern int setsockopt(_SOCKET s, int level, int optname, const char* optval, int optlen);")
    lines.append("extern int shutdown(_SOCKET s, int how);")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Name Resolution")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("extern struct HOSTENT* gethostbyname(const char* name);")
    lines.append("extern ulong inet_addr(const char* cp);")
    lines.append("extern int gethostname(char* name, int namelen);")
    lines.append("extern struct SERVENT* getservbyport(int port, const char* proto);")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Socket Creation")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("extern _SOCKET socket(int af, int type, int protocol);")
    lines.append("")
    return lines


def generate_ddraw_api_functions():
    """Generate DirectDraw API function declarations.

    These are appended to ddraw.h after the struct/typedef definitions from Ghidra.
    Ghidra emits direct calls to these in decompiled code, but at runtime they
    are loaded dynamically via GetProcAddress from ddraw.dll.

    Returns:
        List of content lines to append to ddraw.h
    """
    lines = []
    lines.append("// =============================================================================")
    lines.append("// DIRECTDRAW API FUNCTIONS")
    lines.append("// =============================================================================")
    lines.append("")
    lines.append("extern HRESULT DirectDrawCreate(GUID* lpGUID, LPDIRECTDRAW* lplpDD, struct IUnknown* pUnkOuter);")
    lines.append("")
    return lines


def generate_dsound_api_functions():
    """Generate DirectSound API function declarations.

    These are appended to dsound.h after the struct/typedef definitions from Ghidra.
    Ghidra emits direct calls to these in decompiled code, but at runtime they
    are loaded dynamically via GetProcAddress from dsound.dll.

    Returns:
        List of content lines to append to dsound.h
    """
    lines = []
    lines.append("// =============================================================================")
    lines.append("// DIRECTSOUND API FUNCTIONS")
    lines.append("// =============================================================================")
    lines.append("")
    lines.append("extern HRESULT DirectSoundCreate(LPGUID lpGuid, LPDIRECTSOUND* ppDS, LPUNKNOWN pUnkOuter);")
    lines.append("extern HRESULT DirectSoundEnumerateA(LPDSENUMCALLBACKA lpDSEnumCallback, LPVOID lpContext);")
    lines.append("")
    return lines


def export_system_grouped_files(currentProgram, pseudocode_dir, system_grouped_types, type_to_path_map=None):
    """Export grouped header files for system types as single files.

    Args:
        currentProgram: The Ghidra program
        pseudocode_dir: Base directory for headers
        system_grouped_types: Dict mapping export_path to type lists
        type_to_path_map: Optional map of type names to header paths for includes
    """
    # Ensure system directory exists
    system_dir = os.path.join(pseudocode_dir, "system")
    make_dirs(system_dir)

    # Generate basetypes.h with Ghidra primitives and Windows base types
    generate_basetypes_header(pseudocode_dir)

    # Get the set of types already defined in basetypes.h
    basetypes_types = get_basetypes_defined_types()

    # Detect cycles in header dependencies
    if type_to_path_map:
        cyclic_headers = detect_include_cycles(system_grouped_types, type_to_path_map)
        if cyclic_headers:
            log_info("Detected circular dependencies in headers: %s" % ", ".join(sorted(cyclic_headers)))

    # Generate system headers
    for export_path, types in system_grouped_types.items():
        # export_path is like "system/winnt" or "system/ddraw"
        header_name = export_path.split("/")[-1]
        this_header_path = "%s.h" % export_path

        # Collect all types in this header
        # Put function_definitions first - they're needed by vtable structs.
        # Pointer typedefs (like LPDIRECTDRAW) work with forward declarations
        # so they don't create true circular deps with function defs.
        all_types_list = (types['function_definitions'] + types['enums'] +
                         types['typedefs'] + types['structs'] + types['unions'])

        # Filter out types that are already defined in basetypes.h
        filtered_types = [dt for dt in all_types_list if dt.getName() not in basetypes_types]
        skipped_count = len(all_types_list) - len(filtered_types)
        if skipped_count > 0:
            log_info("Skipped %d types in %s (already in basetypes.h)" % (skipped_count, header_name))

        # Skip empty headers
        if not filtered_types:
            continue

        types_in_this_header = set(dt.getName() for dt in filtered_types)

        # Collect external dependencies (excluding basetypes types)
        all_deps = set()
        if type_to_path_map is not None:
            for dt in filtered_types:
                direct_deps, pointer_deps = collect_type_dependencies(currentProgram, dt)
                # Filter out basetypes - they're always available
                all_deps.update(d for d in direct_deps if d not in basetypes_types)
                all_deps.update(d for d in pointer_deps if d not in basetypes_types)

        # Find which system headers we need to include
        needed_includes = set()
        # Always include basetypes.h first
        needed_includes.add("system/basetypes.h")

        if type_to_path_map is not None:
            for dep in all_deps:
                # Strip struct/union prefix for matching (added by resolve_data_type_name_for_headers)
                dep_name = strip_type_prefix(dep)
                if dep_name in types_in_this_header:
                    continue
                if dep_name in type_to_path_map:
                    dep_path = type_to_path_map[dep_name]
                    if dep_path != this_header_path and dep_path != "system/basetypes.h":
                        needed_includes.add(dep_path)

        content = []
        content.append("#pragma once")

        if needed_includes:
            content.append("")
            content.append("// Dependencies")
            # Put basetypes.h first
            if "system/basetypes.h" in needed_includes:
                content.append('#include "system/basetypes.h"')
                needed_includes.remove("system/basetypes.h")
            for inc_path in sorted(needed_includes):
                content.append('#include "%s"' % inc_path)

        content.append("")
        content.append("// =============================================================================")
        content.append("// %s - System Header" % header_name.upper())
        content.append("// =============================================================================")

        # Topologically sort all types by internal dependencies
        sorted_types = topological_sort_types(currentProgram, filtered_types, types_in_this_header)

        # Collect forward declarations needed for function definitions
        forward_decls = collect_forward_declarations_needed(currentProgram, sorted_types, types_in_this_header)
        if forward_decls:
            content.append("")
            content.append("// Forward declarations")
            for fwd_name in sorted(forward_decls):
                # Determine if it's a struct or union
                fwd_dt = next((dt for dt in sorted_types if dt.getName() == fwd_name), None)
                if fwd_dt:
                    if isinstance(fwd_dt, Union):
                        content.append("union %s;" % fwd_name)
                    else:
                        content.append("struct %s;" % fwd_name)
                else:
                    # External type not in this file - assume struct (most common)
                    # This handles types used in function pointers but defined elsewhere
                    content.append("struct %s;" % fwd_name)

        # Generate definitions in dependency order
        for dt in sorted_types:
            type_lines = generate_type_definition(currentProgram, dt)
            content.extend(type_lines)

        content.append("")

        # Special case: append Watcom C++ runtime inline functions to watcom.h
        if header_name == "watcom":
            content.extend(generate_watcom_runtime_inlines())

        # Special case: append Winsock inline function stubs to winsock.h
        if header_name == "winsock":
            content.extend(generate_winsock_runtime_inlines())

        # Special case: append DirectDraw API function declarations to ddraw.h
        if header_name == "ddraw":
            content.extend(generate_ddraw_api_functions())

        # Special case: append DirectSound API function declarations to dsound.h
        if header_name == "dsound":
            content.extend(generate_dsound_api_functions())

        # Special case: append VA_START_T/VA_END_T macros to stdarg.h
        if header_name == "stdarg":
            content.append("// Variadic argument macros for va_list_t")
            content.append("// Ghidra produces uncompilable va_list_t initialization patterns in variadic")
            content.append("// functions. These macros provide compilable equivalents.")
            content.append('#define VA_START_T(ap, last) do { (ap).value[0] = (char*)(&(last) + 1); } while(0)')
            content.append('#define VA_END_T(ap) do { (ap).value[0] = (char*)0; } while(0)')
            content.append("")

        # Write header file
        header_path = os.path.join(system_dir, "%s.h" % header_name)
        write_header_file(header_path, "\n".join(content))
        log_info("Created system/%s.h with %d types" % (header_name, len(filtered_types)))


def generate_type_category_aggregate(pseudocode_dir, category_name):
    """Generate an aggregate header for a types subdirectory.

    Args:
        pseudocode_dir: Base directory for headers
        category_name: Name of the category (classes, structs, unions, funcdefs)

    Returns:
        Number of headers included, or 0 if directory doesn't exist
    """
    category_dir = os.path.join(pseudocode_dir, "types", category_name)
    if not os.path.exists(category_dir):
        return 0

    # Get all .h files in the category directory
    headers = []
    for filename in sorted(os.listdir(category_dir)):
        if filename.endswith('.h'):
            headers.append(filename)

    if not headers:
        return 0

    content = []
    content.append("#pragma once")
    content.append("")
    content.append("// =============================================================================")
    content.append("// %s - Aggregate Header" % category_name.upper())
    content.append("// =============================================================================")
    content.append("// Auto-generated aggregate of all %s type definitions." % category_name)
    content.append("")

    for header in headers:
        content.append('#include "types/%s/%s"' % (category_name, header))

    content.append("")

    # Write aggregate in types/ directory
    aggregate_path = os.path.join(pseudocode_dir, "types", "%s.h" % category_name)
    write_header_file(aggregate_path, "\n".join(content))
    return len(headers)


def generate_types_aggregate(pseudocode_dir):
    """Generate types.h aggregate that includes all game type headers.

    This provides a single include for all game type definitions (classes, structs, etc.).

    Args:
        pseudocode_dir: Base directory for headers
    """
    types_dir = os.path.join(pseudocode_dir, "types")
    if not os.path.exists(types_dir):
        log_info("Types directory does not exist, skipping types.h generation")
        return

    # Generate aggregates for each category
    # Order matters for dependencies: base types first, then typedefs, then classes
    categories = ['enums', 'structs', 'unions', 'typedefs', 'funcdefs', 'classes']
    category_counts = {}

    for category in categories:
        count = generate_type_category_aggregate(pseudocode_dir, category)
        if count > 0:
            category_counts[category] = count
            log_info("Created types/%s.h with %d headers" % (category, count))

    # Generate main types.h that includes all category aggregates
    content = []
    content.append("#pragma once")
    content.append("")
    content.append("// =============================================================================")
    content.append("// TYPES - All Game Type Definitions")
    content.append("// =============================================================================")
    content.append("// This header includes all game types (classes, structs, unions, funcdefs).")
    content.append("")

    for category in categories:
        if category in category_counts:
            content.append('#include "types/%s.h"' % category)

    content.append("")

    # Write types.h in the include directory
    types_path = os.path.join(pseudocode_dir, "types.h")
    write_header_file(types_path, "\n".join(content))
    total = sum(category_counts.values())
    log_info("Created types aggregate: %s (%d total headers)" % (types_path, total))


def generate_system_aggregate(pseudocode_dir):
    """Generate system.h aggregate that includes all system headers.

    This provides a single include for all system type definitions.

    Args:
        pseudocode_dir: Base directory for headers
    """
    system_dir = os.path.join(pseudocode_dir, "system")
    if not os.path.exists(system_dir):
        log_info("System directory does not exist, skipping system.h generation")
        return

    # Ensure misc.h exists (may be empty if all types moved to basetypes.h)
    misc_path = os.path.join(system_dir, "misc.h")
    if not os.path.exists(misc_path):
        misc_content = []
        misc_content.append("#pragma once")
        misc_content.append("")
        misc_content.append("// =============================================================================")
        misc_content.append("// MISC - Miscellaneous System Types")
        misc_content.append("// =============================================================================")
        misc_content.append("// This header is reserved for system types that don't fit elsewhere.")
        misc_content.append("// Types may be moved to basetypes.h or other specific headers over time.")
        misc_content.append("")
        misc_content.append('#include "system/basetypes.h"')
        misc_content.append("")
        write_header_file(misc_path, "\n".join(misc_content))
        log_info("Created empty misc.h placeholder")

    # Get all .h files in system directory (except system.h itself)
    system_headers = []
    for filename in sorted(os.listdir(system_dir)):
        if filename.endswith('.h') and filename != 'system.h':
            system_headers.append(filename)

    content = []
    content.append("#pragma once")
    content.append("")
    content.append("// =============================================================================")
    content.append("// SYSTEM - Aggregate System Headers")
    content.append("// =============================================================================")
    content.append("// This header includes all system type definitions for convenience.")
    content.append("// Individual headers manage their own dependencies.")
    content.append("")

    # Include crt.h first (standard C library headers)
    if 'crt.h' in system_headers:
        content.append('#include "system/crt.h"')
        system_headers.remove('crt.h')

    # Include basetypes.h next as the foundation for other types
    if 'basetypes.h' in system_headers:
        content.append('#include "system/basetypes.h"')
        system_headers.remove('basetypes.h')

    # Include remaining headers alphabetically
    for header in system_headers:
        content.append('#include "system/%s"' % header)

    content.append("")

    # Write system.h in the include directory (not system subdirectory)
    system_path = os.path.join(pseudocode_dir, "system.h")
    write_header_file(system_path, "\n".join(content))
    log_info("Created system aggregate: %s (%d headers)" % (system_path, len(system_headers) + 1))


def generate_master_include(pseudocode_dir):
    """Generate nocturne.h master include file.

    This is the main include file that should be included by all source files.
    It aggregates all the major headers in the correct order.

    Args:
        pseudocode_dir: Base directory for headers
    """
    content = []
    content.append("#pragma once")
    content.append("")
    content.append("// =============================================================================")
    content.append("// NOCTURNE MASTER INCLUDE")
    content.append("// =============================================================================")
    content.append("// Include this file in all source files to get access to all declarations.")
    content.append("// This provides all type definitions, constants, globals, and prototypes.")
    content.append("")
    content.append("// System type definitions (Windows API, C runtime, DirectX, DirectSound, etc.)")
    content.append('#include "system.h"')
    content.append("")
    content.append("// Game type definitions (classes, structs, unions, function pointer types)")
    content.append('#include "types.h"')
    content.append("")
    content.append("// Symbolic constants (#define macros extracted from Ghidra equates)")
    content.append('#include "defines.h"')
    content.append("")
    content.append("// Constant data (const arrays, lookup tables, string literals)")
    content.append('#include "constants.h"')
    content.append("")
    content.append("// Global variables (extern declarations for all global state)")
    content.append('#include "globals.h"')
    content.append("")
    content.append("// Function prototypes (declarations for all decompiled functions)")
    content.append('#include "prototypes.h"')
    content.append("")

    # Write master include
    master_path = os.path.join(pseudocode_dir, "nocturne.h")
    write_header_file(master_path, "\n".join(content))
    log_info("Created master include: %s" % master_path)


def write_stream_compat_header(pseudocode_dir):
    """Write stream_compat.h to the system directory.

    Provides adapter functions for bridging std::ifstream/std::ofstream
    to Watcom _istream/_ostream at the codec function boundary.
    The original binary uses Watcom C++ 11.0 iostream classes internally,
    but reconstructed .keep files use std:: streams for readability.

    Args:
        pseudocode_dir: Base directory for headers (include folder)
    """
    system_dir = os.path.join(pseudocode_dir, "system")
    make_dirs(system_dir)

    content = [
        "#pragma once",
        "",
        "// =============================================================================",
        "// STREAM_COMPAT - Watcom/STL Stream Compatibility Layer",
        "// =============================================================================",
        "//",
        "// The original binary uses Watcom C++ 11.0 iostream classes internally.",
        "// The codec functions (CLZWCompress, CLZWDecompress) and ostream_write take",
        "// Watcom _istream*/_ostream* parameters. In reconstructed code we use",
        "// std::ifstream/std::ofstream for readability, and these adapters bridge",
        "// the interface at the boundary.",
        "//",
        "// At the binary level, the Watcom ifstream contains an _istream subobject",
        "// and the Watcom ofstream contains an _ostream subobject. The original code",
        "// passed pointers to these subobjects directly. These helpers replicate that",
        "// conversion for the reconstructed std:: streams.",
        "",
        "#include <fstream>",
        '#include "system/iostream.h"',
        "",
        "inline _istream *watcom_istream_from(std::istream &is) {",
        "    return reinterpret_cast<_istream *>(&is);",
        "}",
        "",
        "inline _ostream *watcom_ostream_from(std::ostream &os) {",
        "    return reinterpret_cast<_ostream *>(&os);",
        "}",
        "",
    ]

    header_path = os.path.join(system_dir, "stream_compat.h")
    write_header_file(header_path, "\n".join(content))
    log_info("Generated stream compatibility header: %s" % header_path)


def export_header_files(currentProgram, pseudocode_dir):
    """Export all header files for data types.

    Args:
        currentProgram: The Ghidra program
        pseudocode_dir: Base directory for headers
    """
    # Get equates data first
    log_info("Collecting equates from Ghidra...")
    try:
        equates_by_category = organize_equates_by_category(currentProgram)
        log_info("  Equate categories: %d" % len(equates_by_category))
    except Exception as e:
        log_info("ERROR collecting equates: %s" % str(e))
        import traceback
        log_info(traceback.format_exc())
        equates_by_category = {}

    # Organize data types into game (individual) and system (grouped)
    game_individual_types = []
    system_grouped_types = {}
    type_to_path_map = {}  # Map type names to their header paths for includes
    seen_type_names = set()  # Track types to avoid duplicates across categories

    # Map Ghidra primitive types to basetypes.h
    for prim_name in get_ghidra_primitive_types():
        type_to_path_map[prim_name] = "system/basetypes.h"

    # Map all basetypes (including Windows primitives) to basetypes.h
    for basetype_name in get_basetypes_defined_types():
        type_to_path_map[basetype_name] = "system/basetypes.h"

    for dt in currentProgram.getDataTypeManager().getAllDataTypes():
        dt_name = dt.getName()
        if not dt_name or dt_name.startswith("undefined") or dt_name.startswith("__") or dt_name == "":
            continue
        if dt_name in get_primitive_data_types().keys():
            continue

        # Get the original category path
        original_cat_path = dt.getCategoryPath().getPath()

        # Skip standard Ghidra categories (including root "/") — except for
        # composite types (Structure/Union) sitting at root. Ghidra parks a
        # few built-ins like IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion at
        # "/" and won't let them be moved. Those still need to reach
        # consumers that reference them (e.g. IMAGE_RESOURCE_DIRECTORY_ENTRY
        # in /PE), so we let Structure/Union at root pass and route them by
        # name in get_new_export_path below.
        is_root_composite = (
            original_cat_path == "/" and isinstance(dt, (Structure, Union))
        )
        if not is_root_composite and is_standard_ghidra_category(original_cat_path):
            continue

        # Skip duplicate types (same name in multiple categories)
        # NOTE: This must be AFTER the standard category filter, otherwise a
        # built-in Ghidra type (e.g. GUID in /winnt.h) marks the name as seen
        # and then our Nocturne version gets skipped.
        if dt_name in seen_type_names:
            continue
        seen_type_names.add(dt_name)

        # Determine the export path using new mapping
        export_path, is_individual = get_new_export_path(original_cat_path, dt)

        if is_individual:
            # Game types get individual files
            game_individual_types.append({
                'data_type': dt,
                'original_path': original_cat_path,
                'export_path': export_path,
                'name': dt_name
            })
            # Map type name to its header path (e.g., "types/classes/CDemonActor.h")
            type_to_path_map[dt_name] = "%s/%s.h" % (export_path, dt_name)
        else:
            # System types are grouped by export path
            if export_path not in system_grouped_types:
                system_grouped_types[export_path] = {
                    'structs': [],
                    'unions': [],
                    'enums': [],
                    'typedefs': [],
                    'function_definitions': []
                }

            # Categorize the data type
            if isinstance(dt, Structure):
                system_grouped_types[export_path]['structs'].append(dt)
            elif isinstance(dt, Union):
                system_grouped_types[export_path]['unions'].append(dt)
            elif isinstance(dt, Enum):
                system_grouped_types[export_path]['enums'].append(dt)
            elif isinstance(dt, TypeDef):
                system_grouped_types[export_path]['typedefs'].append(dt)
            elif is_function_definition_type(dt):
                system_grouped_types[export_path]['function_definitions'].append(dt)

            # Map system type to its header path (e.g., "system/ddraw.h")
            # export_path is like "system/ddraw", so we add .h
            type_to_path_map[dt_name] = "%s.h" % export_path

    # Ensure the include directory exists before writing any files
    make_dirs(pseudocode_dir)

    # Export equates to defines.h
    export_equates_file(currentProgram, pseudocode_dir, equates_by_category)

    # Export individual files for game types (with dependency tracking)
    export_individual_game_files(currentProgram, pseudocode_dir, game_individual_types, type_to_path_map)

    # Export grouped files for system types (as single files, not subfolders)
    export_system_grouped_files(currentProgram, pseudocode_dir, system_grouped_types, type_to_path_map)

    # Generate intrinsics header (must be before system aggregate so it gets included)
    write_intrinsics_header(pseudocode_dir)

    # Generate stream compatibility header for Watcom/STL bridging
    write_stream_compat_header(pseudocode_dir)

    # Generate aggregate headers
    generate_system_aggregate(pseudocode_dir)
    generate_types_aggregate(pseudocode_dir)

    # Generate master nocturne.h include file
    generate_master_include(pseudocode_dir)

    # Return the type_to_path_map for use by globals/constants generation
    return type_to_path_map

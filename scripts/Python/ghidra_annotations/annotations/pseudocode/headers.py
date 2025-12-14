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
from ghidra_annotations.util import resolve_data_type_name, make_dirs
from ghidra_annotations.util.log import log_info
from ghidra_annotations.annotations import is_standard_ghidra_category, get_primitive_data_types
from ghidra_annotations.annotations.pseudocode.strings import sanitize_file_content


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


def get_export_category_path(original_path, data_type):
    """Get the export category path for file organization.

    Args:
        original_path: The original Ghidra category path
        data_type: The data type

    Returns:
        Export path for file organization
    """
    # If already starts with /Nocturne, keep as-is for export
    if original_path.startswith("/Nocturne"):
        return original_path

    # Determine the data type category for export organization
    if isinstance(data_type, Structure):
        type_category = "Struct"
    elif isinstance(data_type, Union):
        type_category = "Union"
    elif isinstance(data_type, Enum):
        type_category = "Enum"
    elif isinstance(data_type, TypeDef):
        type_category = "Typedef"
    elif is_function_definition_type(data_type):
        type_category = "FunctionDefinition"
    else:
        type_category = "Unknown"
    return "/Nocturne/%s/System" % type_category


def format_field_declaration(field_type, field_name):
    """Format a field declaration, handling array types correctly.

    Args:
        field_type: The type string
        field_name: The field name

    Returns:
        Formatted declaration string
    """
    array_match = re.match(r'^(.+?)(\[.+\])$', field_type)
    if array_match:
        base_type = array_match.group(1)
        array_dims = array_match.group(2)
        return "%s %s%s" % (base_type, field_name, array_dims)
    else:
        return "%s %s" % (field_type, field_name)


def write_header_file(file_path, content):
    """Write content to a header file.

    Args:
        file_path: Path to the header file
        content: Content to write
    """
    try:
        with open(file_path, 'w') as f:
            f.write(sanitize_file_content(content))
            f.write("\n")
    except Exception as e:
        log_info("Failed to write header file %s: %s" % (file_path, str(e)))


def generate_individual_struct_header(currentProgram, struct):
    """Generate header content for an individual struct.

    Args:
        currentProgram: The Ghidra program
        struct: The structure data type

    Returns:
        Header content as string
    """
    content = []
    content.append("#pragma once")
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

    # Write struct
    content.append("typedef struct %s {" % struct.getName())
    for comp in struct.getComponents():
        field_type = resolve_data_type_name(currentProgram, comp.getDataType())
        field_name = comp.getFieldName() or ("field_%d" % comp.getOffset())
        field_offset = comp.getOffset()
        comment_parts = []
        comment_parts.append("0x%x" % field_offset)
        if comp.getComment():
            comment_parts.append(comp.getComment())
        comment = " // %s" % ", ".join(comment_parts)
        field_decl = format_field_declaration(field_type, field_name)
        content.append("    %s;%s" % (field_decl, comment))
    content.append("} %s;" % struct.getName())
    content.append("")
    return "\n".join(content)


def generate_individual_union_header(currentProgram, union):
    """Generate header content for an individual union.

    Args:
        currentProgram: The Ghidra program
        union: The union data type

    Returns:
        Header content as string
    """
    content = []
    content.append("#pragma once")
    content.append("")
    content.append("// Individual union header for: %s" % union.getName())
    content.append("")
    content.append("// Union: %s" % union.getName())
    if union.getDescription():
        content.append("// %s" % union.getDescription())
    content.append("typedef union %s {" % union.getName())
    for comp in union.getComponents():
        field_type = resolve_data_type_name(currentProgram, comp.getDataType())
        field_name = comp.getFieldName() or ("field_%d" % comp.getOffset())
        comment = " // %s" % comp.getComment() if comp.getComment() else ""
        field_decl = format_field_declaration(field_type, field_name)
        content.append("    %s;%s" % (field_decl, comment))
    content.append("} %s;" % union.getName())
    content.append("")
    return "\n".join(content)


def generate_individual_enum_header(currentProgram, enum):
    """Generate header content for an individual enum.

    Args:
        currentProgram: The Ghidra program
        enum: The enum data type

    Returns:
        Header content as string
    """
    content = []
    content.append("#pragma once")
    content.append("")
    content.append("// Individual enum header for: %s" % enum.getName())
    content.append("")
    content.append("// Enum: %s" % enum.getName())
    if enum.getDescription():
        content.append("// %s" % enum.getDescription())
    content.append("typedef enum %s {" % enum.getName())
    enum_values = []
    for name in enum.getNames():
        value = enum.getValue(name)
        enum_values.append("    %s = %d" % (name, value))
    content.append(",\n".join(enum_values))
    content.append("} %s;" % enum.getName())
    content.append("")
    return "\n".join(content)


def generate_individual_typedef_header(currentProgram, typedef):
    """Generate header content for an individual typedef.

    Args:
        currentProgram: The Ghidra program
        typedef: The typedef data type

    Returns:
        Header content as string
    """
    content = []
    content.append("#pragma once")
    content.append("")
    content.append("// Individual typedef header for: %s" % typedef.getName())
    content.append("")
    content.append("// Typedef: %s" % typedef.getName())
    if typedef.getDescription():
        content.append("// %s" % typedef.getDescription())
    base_type = resolve_data_type_name(currentProgram, typedef.getDataType())
    content.append("typedef %s %s;" % (base_type, typedef.getName()))
    content.append("")
    return "\n".join(content)


def generate_individual_function_definition_header(currentProgram, func_def):
    """Generate header content for an individual function definition.

    Args:
        currentProgram: The Ghidra program
        func_def: The function definition data type

    Returns:
        Header content as string
    """
    content = []
    content.append("#pragma once")
    content.append("")
    content.append("// Individual function definition header for: %s" % func_def.getName())
    content.append("")
    content.append("// Function Definition: %s" % func_def.getName())
    if func_def.getComment():
        content.append("// %s" % func_def.getComment())
    return_type = "void"
    if hasattr(func_def, 'getReturnType') and func_def.getReturnType():
        return_type = resolve_data_type_name(currentProgram, func_def.getReturnType())
    params = []
    if hasattr(func_def, 'getArguments') and func_def.getArguments():
        for param in func_def.getArguments():
            param_type = "void"
            param_name = "param"
            if hasattr(param, 'getDataType') and param.getDataType():
                param_type = resolve_data_type_name(currentProgram, param.getDataType())
            if hasattr(param, 'getName') and param.getName():
                param_name = param.getName()
            params.append("%s %s" % (param_type, param_name))
    params_str = ", ".join(params) if params else "void"
    content.append("typedef %s (*%s)(%s);" % (return_type, func_def.getName(), params_str))
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
        content.append("typedef struct %s {" % struct.getName())
        for comp in struct.getComponents():
            field_type = resolve_data_type_name(currentProgram, comp.getDataType())
            field_name = comp.getFieldName() or ("field_%d" % comp.getOffset())
            comment = " // %s" % comp.getComment() if comp.getComment() else ""
            field_decl = format_field_declaration(field_type, field_name)
            content.append("    %s;%s" % (field_decl, comment))
        content.append("} %s;" % struct.getName())
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
        content.append("typedef union %s {" % union.getName())
        for comp in union.getComponents():
            field_type = resolve_data_type_name(currentProgram, comp.getDataType())
            field_name = comp.getFieldName() or ("field_%d" % comp.getOffset())
            comment = " // %s" % comp.getComment() if comp.getComment() else ""
            field_decl = format_field_declaration(field_type, field_name)
            content.append("    %s;%s" % (field_decl, comment))
        content.append("} %s;" % union.getName())
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
    for enum in sorted(enums, key=lambda e: e.getName()):
        content.append("// Enum: %s" % enum.getName())
        if enum.getDescription():
            content.append("// %s" % enum.getDescription())
        content.append("typedef enum %s {" % enum.getName())
        enum_values = []
        for name in enum.getNames():
            value = enum.getValue(name)
            enum_values.append("    %s = %d" % (name, value))
        content.append(",\n".join(enum_values))
        content.append("} %s;" % enum.getName())
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
        base_type = resolve_data_type_name(currentProgram, typedef.getDataType())
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
            return_type = resolve_data_type_name(currentProgram, func_def.getReturnType())
        params = []
        if hasattr(func_def, 'getArguments') and func_def.getArguments():
            for param in func_def.getArguments():
                param_type = "void"
                param_name = "param"
                if hasattr(param, 'getDataType') and param.getDataType():
                    param_type = resolve_data_type_name(currentProgram, param.getDataType())
                if hasattr(param, 'getName') and param.getName():
                    param_name = param.getName()
                params.append("%s %s" % (param_type, param_name))
        params_str = ", ".join(params) if params else "void"
        content.append("typedef %s (*%s)(%s);" % (return_type, func_def.getName(), params_str))
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

    for equate in equate_table.getEquates():
        eq_name = equate.getName()
        eq_value = equate.getValue()

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
        Category path string
    """
    eq_name = equate_data['name']
    eq_name_lower = eq_name.lower()

    # System constants
    if eq_name_lower.startswith("system_"):
        return "/Nocturne/Constants/System"

    # Default category
    return "/Nocturne/Constants/Game"


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


def export_individual_game_files(currentProgram, pseudocode_dir, game_individual_types):
    """Export individual header files for /Game category types.

    Args:
        currentProgram: The Ghidra program
        pseudocode_dir: Base directory for headers
        game_individual_types: List of type info dictionaries
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

        # Generate content based on data type
        content = ""
        file_extension = ".h"
        if isinstance(dt, Structure):
            content = generate_individual_struct_header(currentProgram, dt)
            filename = "%s%s" % (dt_name, file_extension)
        elif isinstance(dt, Union):
            content = generate_individual_union_header(currentProgram, dt)
            filename = "%s%s" % (dt_name, file_extension)
        elif isinstance(dt, Enum):
            content = generate_individual_enum_header(currentProgram, dt)
            filename = "%s%s" % (dt_name, file_extension)
        elif isinstance(dt, TypeDef):
            content = generate_individual_typedef_header(currentProgram, dt)
            filename = "%s%s" % (dt_name, file_extension)
        elif is_function_definition_type(dt):
            content = generate_individual_function_definition_header(currentProgram, dt)
            filename = "%s%s" % (dt_name, file_extension)
        else:
            log_info("Unknown data type for individual export: %s" % dt_name)
            continue

        # Write the individual file
        file_path = os.path.join(header_dir, filename)
        write_header_file(file_path, content)
        log_info("Created individual file: %s (original Ghidra category: %s)" % (file_path, original_path))


def export_header_files(currentProgram, pseudocode_dir):
    """Export all header files for data types.

    Args:
        currentProgram: The Ghidra program
        pseudocode_dir: Base directory for headers
    """
    # Get equates data first
    equates_by_category = organize_equates_by_category(currentProgram)

    # Organize data types by category and type
    type_categories = {}
    game_individual_types = []
    for dt in currentProgram.getDataTypeManager().getAllDataTypes():
        dt_name = dt.getName()
        if not dt_name or dt_name.startswith("undefined") or dt_name.startswith("__") or dt_name == "":
            continue
        if dt_name in get_primitive_data_types().keys():
            continue

        # Get the original category path
        original_cat_path = dt.getCategoryPath().getPath()
        if original_cat_path == "/":
            original_cat_path = ""

        # Skip standard Ghidra categories
        if is_standard_ghidra_category(original_cat_path):
            continue

        # Determine the export category path
        export_cat_path = get_export_category_path(original_cat_path, dt)

        # Check if this should be handled as individual Game files
        if original_cat_path.endswith("/Game"):
            game_individual_types.append({
                'data_type': dt,
                'original_path': original_cat_path,
                'export_path': export_cat_path,
                'name': dt_name
            })
            continue

        # Normal category grouping
        if export_cat_path not in type_categories:
            type_categories[export_cat_path] = {
                'structs': [],
                'unions': [],
                'enums': [],
                'typedefs': [],
                'function_definitions': [],
                'equates': []
            }

        # Categorize the data type
        if isinstance(dt, Structure):
            type_categories[export_cat_path]['structs'].append(dt)
        elif isinstance(dt, Union):
            type_categories[export_cat_path]['unions'].append(dt)
        elif isinstance(dt, Enum):
            type_categories[export_cat_path]['enums'].append(dt)
        elif isinstance(dt, TypeDef):
            type_categories[export_cat_path]['typedefs'].append(dt)
        elif is_function_definition_type(dt):
            type_categories[export_cat_path]['function_definitions'].append(dt)

    # Add equates to their respective categories
    for category_path, equates_list in equates_by_category.items():
        if category_path not in type_categories:
            type_categories[category_path] = {
                'structs': [],
                'unions': [],
                'enums': [],
                'typedefs': [],
                'function_definitions': [],
                'equates': []
            }
        type_categories[category_path]['equates'] = equates_list

    # Create header files for grouped categories
    for category_path, types in type_categories.items():
        if category_path.startswith("/"):
            category_path = category_path[1:]

        # Make header dir
        header_dir = os.path.join(pseudocode_dir, category_path) if category_path else pseudocode_dir
        make_dirs(header_dir)

        # Export equates
        if types['equates']:
            equates_content = generate_equates_header(currentProgram, types['equates'])
            equates_file = os.path.join(header_dir, "defines.h")
            write_header_file(equates_file, equates_content)
            log_info("Created defines.h with %d equates in %s" % (len(types['equates']), header_dir))

        # Export structs
        if types['structs']:
            structs_content = generate_structs_header(currentProgram, types['structs'])
            structs_file = os.path.join(header_dir, "structs.h")
            write_header_file(structs_file, structs_content)
            log_info("Created structs.h with %d structures in %s" % (len(types['structs']), header_dir))

        # Export unions
        if types['unions']:
            unions_content = generate_unions_header(currentProgram, types['unions'])
            unions_file = os.path.join(header_dir, "unions.h")
            write_header_file(unions_file, unions_content)
            log_info("Created unions.h with %d unions in %s" % (len(types['unions']), header_dir))

        # Export enums
        if types['enums']:
            enums_content = generate_enums_header(currentProgram, types['enums'])
            enums_file = os.path.join(header_dir, "enums.h")
            write_header_file(enums_file, enums_content)
            log_info("Created enums.h with %d enums in %s" % (len(types['enums']), header_dir))

        # Export typedefs
        if types['typedefs']:
            typedefs_content = generate_typedefs_header(currentProgram, types['typedefs'])
            typedefs_file = os.path.join(header_dir, "types.h")
            write_header_file(typedefs_file, typedefs_content)
            log_info("Created types.h with %d typedefs in %s" % (len(types['typedefs']), header_dir))

        # Export function definitions
        if types['function_definitions']:
            func_defs_content = generate_function_definitions_header(currentProgram, types['function_definitions'])
            func_defs_file = os.path.join(header_dir, "function_definitions.h")
            write_header_file(func_defs_file, func_defs_content)
            log_info("Created function_definitions.h with %d function definitions in %s" % (len(types['function_definitions']), header_dir))

    # Create individual files for /Game ending categories
    export_individual_game_files(currentProgram, pseudocode_dir, game_individual_types)

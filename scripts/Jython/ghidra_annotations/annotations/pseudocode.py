import os
import re
import json
import base64
from java.io import File
from ghidra_annotations.annotations import *
from ghidra_annotations.util import *
from ghidra_annotations.util.string import is_string_data_type_obj, extract_string_value
from ghidra.app.decompiler import DecompInterface
from ghidra.app.decompiler import DecompileOptions
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.program.model.data import StringDataType
from ghidra.program.model.lang import OperandType
from ghidra.program.model.data import Enum
from ghidra.program.model.data import FunctionDefinitionDataType
from ghidra.program.model.data import Structure
from ghidra.program.model.data import Union
from ghidra.program.model.data import TypeDef

def get_safe_str(val):
    if val is None:
        return ""
    try:
        if hasattr(val, "toString"):
            val = val.toString()
        if hasattr(val, 'encode'):
            return val.encode("ascii", "ignore")
        else:
            return str(val)
    except Exception:
        try:
            return str(val)
        except Exception:
            return "[conversion_error]"

def escape_c_string(s):

    # Invalid string
    if not s:
        return s

    # Dictionary of characters that need escaping in C strings
    escape_map = {
        '\\': '\\\\',  # Backslash
        '"': '\\"',    # Double quote
        '\n': '\\n',   # Newline
        '\r': '\\r',   # Carriage return
        '\t': '\\t',   # Tab
        '\b': '\\b',   # Backspace
        '\f': '\\f',   # Form feed
        '\v': '\\v',   # Vertical tab
        '\a': '\\a',   # Alert (bell)
        '\0': '\\0',   # Null character
    }

    # Replace non-printable characters
    result = []
    for char in s:
        if char in escape_map:
            result.append(escape_map[char])
        elif ord(char) < 32 or ord(char) > 126:
            result.append('\\%03o' % ord(char))
        else:
            result.append(char)
    return ''.join(result)

def format_char_array_as_c_strings(currentProgram, raw_bytes, type_name):

    # Invalid bytes
    if not raw_bytes or len(raw_bytes) < 4:
        return None

    # Handle char*[N] arrays - array of string pointers
    if "[" in type_name and "]" in type_name:
        string_array = []
        ptr_size = 4  # 32-bit pointers
        num_ptrs = len(raw_bytes) // ptr_size
        successful_strings = 0

        # Always try to convert
        for i in range(num_ptrs):

            # Extract 4-byte pointer from raw_bytes (little-endian)
            ptr_bytes = raw_bytes[i * ptr_size:(i + 1) * ptr_size]
            if len(ptr_bytes) == 4:
                ptr_val = (ptr_bytes[3] << 24) | (ptr_bytes[2] << 16) | (ptr_bytes[1] << 8) | ptr_bytes[0]
                if ptr_val != 0:
                    string_found = False
                    try:
                        ptr_addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(ptr_val)

                        # First try: check for defined string data types
                        pointed_data = currentProgram.getListing().getDefinedDataAt(ptr_addr)
                        if pointed_data and is_string_data_type_obj(pointed_data.getDataType()):
                            pointed_value = extract_string_value(pointed_data)
                            if pointed_value:
                                safe_str = get_safe_str(pointed_value)
                                escaped = escape_c_string(safe_str)
                                string_array.append('"%s"' % escaped)
                                successful_strings += 1
                                string_found = True

                        # Second try: read raw memory as string
                        if not string_found:
                            try:
                                memory = currentProgram.getMemory()
                                string_chars = []
                                for j in range(128):  # Increased from 64 to 128 chars
                                    char_addr = ptr_addr.add(j)
                                    if not memory.contains(char_addr):
                                        break
                                    byte_val = memory.getByte(char_addr) & 0xFF
                                    if byte_val == 0:  # Null terminator
                                        break
                                    if 32 <= byte_val <= 126:  # Printable ASCII
                                        string_chars.append(chr(byte_val))
                                    elif byte_val in [9, 10, 13]:  # Tab, newline, carriage return
                                        string_chars.append(chr(byte_val))
                                    else:
                                        # Non-printable, but continue for a few chars in case of encoding
                                        if len(string_chars) > 0:
                                            break

                                if string_chars and len(string_chars) >= 1:  # Even 1 char can be valid
                                    string_val = ''.join(string_chars)
                                    # Additional validation: check if this looks like a reasonable string
                                    if string_val.strip():  # Must have non-whitespace content
                                        escaped = escape_c_string(string_val)
                                        string_array.append('"%s"' % escaped)
                                        successful_strings += 1
                                        string_found = True
                            except:
                                pass

                        # If still no string found, show as hex pointer
                        if not string_found:
                            string_array.append("0x%08X" % ptr_val)
                    except Exception:
                        string_array.append("0x%08X" % ptr_val)
                else:
                    string_array.append("NULL")

        # Only return string array if we successfully parsed enough strings
        if string_array and successful_strings >= max(2, len(string_array) * 0.3):
            if len(string_array) <= 8:
                return "{%s}" % ", ".join(string_array)
            else:
                # Multi-line for large arrays
                lines = []
                for i in range(0, len(string_array), 4):
                    line_items = string_array[i:i+4]
                    if i == 0:
                        lines.append("{\n    " + ", ".join(line_items))
                    else:
                        lines.append("    " + ", ".join(line_items))
                return "\n".join(lines) + "\n}"
    return None

def format_single_char_pointer(currentProgram, ghidra_value, name):
    try:
        str_val = get_safe_str(ghidra_value)
        if str_val and (str_val.startswith("0x") or name.startswith("s_")):
            if str_val.startswith("0x"):
                try:
                    ptr_addr_val = int(str_val.replace("0x", ""), 16)
                    ptr_addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(ptr_addr_val)
                    pointed_data = currentProgram.getListing().getDefinedDataAt(ptr_addr)
                    if pointed_data and is_string_data_type_obj(pointed_data.getDataType()):
                        pointed_value = extract_string_value(pointed_data)
                        if pointed_value:
                            safe_str = get_safe_str(pointed_value)
                            escaped = escape_c_string(safe_str)
                            return '"%s"' % escaped
                except Exception:
                    pass
        return None
    except Exception:
        return None

def detect_char_array_pattern(type_name, raw_bytes):

    # Invalid bytes
    if not type_name or not raw_bytes:
        return False, False

    # Check for char arrays
    type_lower = type_name.lower()
    is_char_array = "char" in type_lower and "[" in type_name

    # Check for 2D char arrays (char[][] or char[N][M])
    is_2d_char_array = "char" in type_lower and type_name.count("[") >= 2

    # Also check for likely string arrays based on data patterns
    has_string_pattern = False
    if len(raw_bytes) >= 4:
        null_count = raw_bytes.count(0)
        printable_count = sum(1 for b in raw_bytes if 32 <= b <= 126)
        has_string_pattern = null_count >= 2 and printable_count >= len(raw_bytes) * 0.6

        # Additional check for 2D patterns - regular null spacing might indicate fixed-width strings
        if null_count >= 3 and is_char_array:
            null_positions = [i for i, b in enumerate(raw_bytes) if b == 0]
            if len(null_positions) >= 2:
                intervals = []
                for i in range(1, len(null_positions)):
                    intervals.append(null_positions[i] - null_positions[i-1])
                if intervals and all(abs(interval - intervals[0]) <= 1 for interval in intervals):
                    is_2d_char_array = True
    return is_char_array or has_string_pattern, is_2d_char_array

def format_2d_char_array(raw_bytes, type_name=None):

    # Invalid bytes
    if not raw_bytes:
        return None

    # Try to extract dimensions from type name like char[4][12] or char[4][7]
    rows = None
    cols = None
    if type_name:

        # Match patterns like char[4][12]
        match = re.search(r'char\s*\[(\d+)\]\s*\[(\d+)\]', type_name)
        if match:
            rows = int(match.group(1))
            cols = int(match.group(2))

    # First, check if this data contains mostly printable ASCII with nulls
    printable_count = sum(1 for b in raw_bytes if 32 <= b <= 126)
    null_count = raw_bytes.count(0)
    total_bytes = len(raw_bytes)

    # If less than 50% is printable ASCII, probably not strings
    if printable_count < total_bytes * 0.5:
        return None

    # If we don't have any nulls, probably not null-terminated strings
    if null_count == 0:
        return None

    # We know the exact dimensions, process fixed-width strings
    strings = []
    if rows and cols:
        for row in range(rows):
            start_idx = row * cols
            end_idx = start_idx + cols
            if end_idx <= len(raw_bytes):
                row_bytes = raw_bytes[start_idx:end_idx]
                string_chars = []
                for b in row_bytes:
                    if b == 0:
                        break
                    if 32 <= b <= 126:
                        string_chars.append(chr(b))
                    else:
                        return None
                if string_chars:
                    string_val = ''.join(string_chars)
                    escaped = escape_c_string(string_val)
                    strings.append('"%s"' % escaped)
                else:
                    strings.append('""')

    # Fall back to null-terminator detection with improved logic
    else:
        current_string = []
        string_start_pos = 0

        for i, byte in enumerate(raw_bytes):
            if byte == 0:
                if current_string:
                    try:
                        string_val = ''.join(chr(b) for b in current_string)
                        if string_val and len(string_val) > 0:
                            escaped = escape_c_string(string_val)
                            strings.append('"%s"' % escaped)
                        current_string = []
                        string_start_pos = i + 1
                    except Exception:
                        current_string = []
            elif 32 <= byte <= 126:
                current_string.append(byte)
            else:
                if len(current_string) == 0:
                    string_start_pos = i + 1
                else:
                    current_string.append(byte)

        # Handle any remaining string (shouldn't happen with proper null-terminated arrays)
        if current_string and len(current_string) > 1:
            try:
                string_val = ''.join(chr(b) for b in current_string if 32 <= b <= 126)
                if string_val:
                    escaped = escape_c_string(string_val)
                    strings.append('"%s"' % escaped)
            except Exception:
                pass

    # Need at least 2 strings to justify array formatting
    if strings and len(strings) >= 2:
        if len(strings) <= 8:
            return "{%s}" % ", ".join(strings)
        else:
            lines = []
            for i in range(0, len(strings), 4):
                line_items = strings[i:i+4]
                if i == 0:
                    lines.append("{\n    " + ", ".join(line_items))
                else:
                    lines.append("    " + ", ".join(line_items))
            return "\n".join(lines) + "\n}"
    return None

def delete_pseudocode(currentProgram, path):

    # Get pseudocode dir
    pseudocode_dir = os.path.join(path, "pseudocode")
    if not os.path.exists(pseudocode_dir):
        log_info("No pseudocode directory found - nothing to delete")
        return

    # Delete all pseudocode files
    deleted_count = 0
    log_info("Deleting all pseudocode files")
    for root, dirs, files in os.walk(pseudocode_dir):
        for file in files:
            if file.lower().endswith(('.c', '.cpp', '.h')):
                file_path = os.path.join(root, file)
                try:
                    os.remove(file_path)
                    log_info("Deleted pseudocode file: %s" % os.path.relpath(file_path, pseudocode_dir))
                    deleted_count += 1
                except Exception as e:
                    log_info("Failed to delete pseudocode file %s: %s" % (file, str(e)))

    # Remove empty directories
    for root, dirs, files in os.walk(pseudocode_dir, topdown=False):
        for dir_name in dirs:
            dir_path = os.path.join(root, dir_name)
            try:
                if not os.listdir(dir_path):
                    os.rmdir(dir_path)
                    log_info("Removed empty directory: %s" % os.path.relpath(dir_path, pseudocode_dir))
            except Exception as e:
                pass
    log_info("Deleted %d pseudocode files" % deleted_count)

def export_header_files(currentProgram, pseudocode_dir):

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

        # Get the original category path (this stays unchanged in Ghidra)
        original_cat_path = dt.getCategoryPath().getPath()
        if original_cat_path == "/":
            original_cat_path = ""

        # Skip standard Ghidra categories
        if is_standard_ghidra_category(original_cat_path):
            continue

        # Determine the export category path (ONLY for file organization, not changing Ghidra)
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

        # Normal category grouping (using export path for file organization)
        if export_cat_path not in type_categories:
            type_categories[export_cat_path] = {
                'structs': [],
                'unions': [],
                'enums': [],
                'typedefs': [],
                'function_definitions': [],
                'equates': []
            }

        # Categorize the data type (data type itself remains unchanged in Ghidra)
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
    return class_name in function_definition_classes

def get_export_category_path(original_path, data_type):

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

def export_individual_game_files(currentProgram, pseudocode_dir, game_individual_types):

    # Inalid types
    if not game_individual_types:
        return

    # Create individual game files
    log_info("Creating individual files for %d /Game data types" % len(game_individual_types))
    for type_info in game_individual_types:
        dt = type_info['data_type']
        export_path = type_info['export_path']  # This is the export path, not the original Ghidra path
        original_path = type_info['original_path']  # This is the unchanged Ghidra category
        dt_name = type_info['name']

        # Create directory path for export (doesn't affect Ghidra categories)
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

def format_field_declaration(field_type, field_name):
    array_match = re.match(r'^(.+?)(\[.+\])$', field_type)
    if array_match:
        base_type = array_match.group(1)
        array_dims = array_match.group(2)
        return "%s %s%s" % (base_type, field_name, array_dims)
    else:
        return "%s %s" % (field_type, field_name)

def generate_individual_struct_header(currentProgram, struct):
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

def generate_function_definitions_header(currentProgram, function_definitions):
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

def generate_individual_function_definition_header(currentProgram, func_def):
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

def generate_individual_union_header(currentProgram, union):
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

def generate_structs_header(currentProgram, structs):
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

def generate_equates_header(currentProgram, equates_list):
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

    # Get all equates
    equates_by_category = {}
    equate_table = currentProgram.getEquateTable()
    all_equates = []
    for equate in equate_table.getEquates():
        eq_name = equate.getName()
        eq_value = equate.getValue()

        # Get references to determine category
        refs = []
        address_set = currentProgram.getMemory().getAllInitializedAddressSet()
        addresses = address_set.getAddresses(True)
        while addresses.hasNext():
            addr = addresses.next()
            addr_equates = equate_table.getEquates(addr)
            if not addr_equates:
                continue
            listing = currentProgram.getListing()
            code_unit = listing.getCodeUnitAt(addr)
            if not code_unit:
                continue
            num_operands = code_unit.getNumOperands()
            for op_index in range(num_operands):
                op_equates = equate_table.getEquates(addr, op_index)
                for op_equate in op_equates:
                    if op_equate.getName() == eq_name:
                        refs.append({
                            'addr': str(addr),
                            'opIndex': op_index
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

    # Analyze equate name
    eq_name = equate_data['name']
    eq_name_lower = eq_name.lower()

    # System constants
    if eq_name_lower.startswith("system_"):
        return "/Nocturne/Constants/System"

    # Default category
    return "/Nocturne/Constants/Game"

def format_equate_value(value):
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

def write_header_file(file_path, content):
    try:
        with open(file_path, 'w') as f:
            f.write(sanitize_for_ascii(content))
            f.write("\n")
    except Exception as e:
        log_info("Failed to write header file %s: %s" % (file_path, str(e)))

def get_function_xrefs(currentProgram, function):

    # Get references to this function's entry point
    xrefs = []
    refs_to = currentProgram.getReferenceManager().getReferencesTo(function.getEntryPoint())
    referencing_functions = set()
    for ref in refs_to:
        from_addr = ref.getFromAddress()

        # Find the function containing the reference
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

    # Sort by function name for consistent output
    xrefs.sort(key=lambda x: x['name'])
    return xrefs

def get_function_globals(currentProgram, function):

    # Track unique globals by address to avoid duplicates
    globals_refs = []
    seen_globals = set()

    # Get function body for checking if referenced address is within this function
    function_body = function.getBody()

    # Iterate through all addresses in the function body
    for addr_range in function.getBody():
        current_addr = addr_range.getMinAddress()
        while current_addr and current_addr.compareTo(addr_range.getMaxAddress()) <= 0:

            # Get all references FROM this address
            refs = currentProgram.getReferenceManager().getReferencesFrom(current_addr)
            for ref in refs:
                to_addr = ref.getToAddress()

                # Skip if we've already seen this global
                if str(to_addr) in seen_globals:
                    current_addr = current_addr.next()
                    if current_addr is None:
                        break
                    continue

                # Skip if the referenced address is within this function's body (internal labels)
                if function_body.contains(to_addr):
                    current_addr = current_addr.next()
                    if current_addr is None:
                        break
                    continue

                # Check if target is a function (skip function calls)
                target_function = currentProgram.getFunctionManager().getFunctionAt(to_addr)
                if target_function:
                    current_addr = current_addr.next()
                    if current_addr is None:
                        break
                    continue

                # Check if target has defined data (potential global variable)
                data = currentProgram.getListing().getDefinedDataAt(to_addr)
                if data:
                    data_type = data.getDataType()
                    if data_type:
                        type_name = resolve_data_type_name(currentProgram, data_type)

                        # Get symbol name for the global, or create a default name
                        symbol = currentProgram.getSymbolTable().getPrimarySymbol(to_addr)
                        if symbol:
                            global_name = symbol.getName()
                        else:
                            global_name = "DAT_%s" % str(to_addr).replace("0x", "").upper()

                        # Try to get the initializer value for constants
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
                            'addr': str(to_addr),
                            'value': initializer_value
                        })
                        seen_globals.add(str(to_addr))

                # Also check for undefined data that might be globals
                elif not data:
                    symbol = currentProgram.getSymbolTable().getPrimarySymbol(to_addr)
                    if symbol and not symbol.isExternal():
                        global_name = symbol.getName()
                        if (not global_name.startswith("FUN_") and
                            not global_name.startswith("LAB_") and
                            not global_name.startswith("LOOP_") and
                            not global_name.startswith("SWITCH_")):
                            globals_refs.append({
                                'type': 'undefined4',
                                'name': global_name,
                                'addr': str(to_addr),
                                'value': None
                            })
                            seen_globals.add(str(to_addr))

            # Move to next address
            try:
                current_addr = current_addr.next()
            except:
                break
            if current_addr is None:
                break

    # Sort globals by address for consistent output
    globals_refs.sort(key=lambda x: int(x['addr'].replace("0x", ""), 16))
    return globals_refs

def get_function_calls(currentProgram, function):

    # Track unique function calls by name to avoid duplicates
    function_calls = []
    seen_functions = set()

    # Iterate through all addresses in the function body
    for addr_range in function.getBody():
        current_addr = addr_range.getMinAddress()
        while current_addr and current_addr.compareTo(addr_range.getMaxAddress()) <= 0:

            # Get all references FROM this address
            refs = currentProgram.getReferenceManager().getReferencesFrom(current_addr)
            for ref in refs:
                to_addr = ref.getToAddress()
                ref_type = ref.getReferenceType()

                # Check if this is a function call reference
                if ref_type.isCall():
                    target_function = currentProgram.getFunctionManager().getFunctionAt(to_addr)
                    if target_function:
                        func_name = target_function.getName()

                        # Skip self-references
                        if func_name != function.getName() and func_name not in seen_functions:
                            function_calls.append({
                                'name': func_name,
                                'addr': str(to_addr)
                            })
                            seen_functions.add(func_name)
                    else:

                        # Check if there's a symbol at the call target (external function)
                        symbol = currentProgram.getSymbolTable().getPrimarySymbol(to_addr)
                        if symbol and symbol.isExternal():
                            func_name = symbol.getName()
                            if func_name not in seen_functions:
                                function_calls.append({
                                    'name': func_name,
                                    'addr': str(to_addr)
                                })
                                seen_functions.add(func_name)

            # Move to next address
            try:
                current_addr = current_addr.next()
            except:
                break
            if current_addr is None:
                break

    # Sort function calls alphabetically by name
    function_calls.sort(key=lambda x: x['name'].lower())
    return function_calls

def sanitize_for_ascii(text):

    # Handle None or empty text
    if not text:
        return text or ""

    # Convert to string if it's not already
    try:
        if hasattr(text, 'decode'):
            text = text.decode('utf-8', errors='ignore')
        elif not isinstance(text, (str, unicode)):
            text = str(text)
    except:
        try:
            text = str(text)
        except:
            return "[unreadable_text]"

    # Ensure we have a unicode string at this point
    if isinstance(text, str) and not isinstance(text, unicode):
        try:
            text = text.decode('utf-8', errors='ignore')
        except:
            try:
                text = text.decode('latin1', errors='ignore')
            except:
                return "[encoding_error]"

    # Convert Unicode to ASCII, replacing non-ASCII characters
    try:
        # First try to encode to ASCII, ignoring non-ASCII characters
        ascii_text = text.encode('ascii', errors='ignore').decode('ascii')

        # Replace common Unicode characters with ASCII equivalents
        if not ascii_text or len(ascii_text) < len(text) * 0.5:
            replacements = {
                u'\u2013': '-',  # en dash
                u'\u2014': '--', # em dash
                u'\u2018': "'",  # left single quote
                u'\u2019': "'",  # right single quote
                u'\u201c': '"',  # left double quote
                u'\u201d': '"',  # right double quote
                u'\u2026': '...', # ellipsis
                u'\ufffd': '?',  # replacement character
            }
            for unicode_char, ascii_replacement in replacements.items():
                text = text.replace(unicode_char, ascii_replacement)
            ascii_text = ''.join(char if ord(char) < 128 else '?' for char in text)
        return ascii_text
    except Exception as e:
        try:
            return ''.join(char if ord(char) < 128 else '?' for char in text)
        except:
            return "[sanitization_failed]"

def escape_for_c_string(s):
    if not s:
        return s

    # Dictionary of characters that need escaping in C strings
    escape_map = {
        '\\': '\\\\',  # Backslash
        '"': '\\"',    # Double quote
        '\n': '\\n',   # Newline
        '\r': '\\r',   # Carriage return
        '\t': '\\t',   # Tab
        '\b': '\\b',   # Backspace
        '\f': '\\f',   # Form feed
        '\v': '\\v',   # Vertical tab
        '\a': '\\a',   # Alert (bell)
        '\0': '\\0',   # Null character
    }

    # Escape c-string
    result = []
    for char in s:
        if char in escape_map:
            result.append(escape_map[char])
        elif ord(char) < 32 or ord(char) > 126:
            result.append('\\%03o' % ord(char))
        else:
            result.append(char)
    return ''.join(result)

def build_string_map(defined_data):
    string_map = {}
    while defined_data.hasNext():
        data = defined_data.next()
        if is_string_data_type_obj(data.getDataType()):
            string_addr = data.getAddress()
            string_val = extract_string_value(data)
            if string_val:
                try:
                    safe_string = sanitize_for_ascii(str(string_val))
                    addr_str = string_addr.toString()
                    string_map[addr_str.lower()] = safe_string
                    string_map[addr_str.replace("0x", "").lower()] = safe_string
                    hex_offset = "%08x" % string_addr.getOffset()
                    string_map[hex_offset] = safe_string
                    string_map[hex_offset.lower()] = safe_string
                except Exception as e:
                    log_info("Warning: Failed to process string at %s: %s" % (string_addr, str(e)))
                    safe_string = "[binary_data_%s]" % str(string_addr).replace("0x", "")
                    addr_str = string_addr.toString()
                    string_map[addr_str.lower()] = safe_string
                    hex_offset = "%08x" % string_addr.getOffset()
                    string_map[hex_offset.lower()] = safe_string
    return string_map

def replace_symbol(match, string_map):

    # Try different address formats to find the string
    symbol_name = match.group(0)
    hex_addr = match.group(2)
    address_variants = [
        hex_addr.lower(),
        hex_addr.upper(),
        ("0x" + hex_addr).lower(),
        ("ram:" + hex_addr).lower(),
        ("ram:0x" + hex_addr).lower(),
        hex_addr.lstrip('0').lower() if hex_addr != '0' else '0',
        ("0x" + hex_addr.lstrip('0')).lower() if hex_addr != '0' else '0x0',
    ]
    for addr_variant in address_variants:
        if addr_variant in string_map:
            try:
                string_literal = string_map[addr_variant]
                sanitized_literal = sanitize_for_ascii(string_literal)
                escaped_literal = escape_for_c_string(sanitized_literal)
                return '"%s"' % escaped_literal
            except Exception as e:
                log_info("Warning: Failed to process string replacement for %s: %s" % (hex_addr, str(e)))
                break

    # If no string found, return original symbol
    return symbol_name

def generate_decompilation_code(interface, func, symbol_table, string_map, timeout=60):

    # Start decompilation
    res = interface.decompileFunction(func, timeout, ConsoleTaskMonitor())
    if not res.decompileCompleted():
        return "// Decompilation failed or timed out\n"

    # Get initial decompiled code
    decompiled_code = res.getDecompiledFunction().getC()

    # Clean decompiled code with improved regex patterns
    try:
        pattern1 = re.compile(r'\b(s_[^\s\(\),;]*?_([0-9A-Fa-f]{6,}))\b')
        pattern2 = re.compile(r'\b(PTR_s_[^\s\(\),;]*?_([0-9A-Fa-f]{6,}))\b')
        decompiled_code = pattern1.sub(lambda m: replace_symbol(m, string_map), decompiled_code)
        decompiled_code = pattern2.sub(lambda m: replace_symbol(m, string_map), decompiled_code)
    except Exception as e:
        log_info("Warning: Failed to process string replacements: %s" % str(e))
    return decompiled_code

def generate_assembly_code(func, symbol_table, reference_manager, program_listing):

    # Parse program listing
    asm_lines = []
    for instr in program_listing.getInstructions(func.getBody(), True):
        addr = instr.getAddress()
        instr_str = str(instr)

        # Default line
        line = "// %s: %s" % (addr, instr_str)

        # Adjust call target name
        if instr.getMnemonicString() == "CALL":
            for i in range(instr.getNumOperands()):
                operand_type = instr.getOperandType(i)
                if operand_type & OperandType.ADDRESS:
                    target_addr = instr.getAddress(i)
                    if target_addr:
                        target_sym = symbol_table.getPrimarySymbol(target_addr)
                        if target_sym:
                            symbol_name = target_sym.getName()
                            addr_str = "0x%s" % target_addr
                            if addr_str in line:
                                line = line.replace(addr_str, symbol_name)

        # Add symbol label for instruction if it has one
        symbol = symbol_table.getPrimarySymbol(addr)
        if symbol and symbol.getName() != instr.toString():
            line += "\n//   Label: %s" % symbol.getName()

        # Add cross references for this instruction
        refs_from = reference_manager.getReferencesFrom(addr)
        for ref in refs_from:
            line += "\n//   XREF to: %s (%s)" % (ref.getToAddress(), ref.getReferenceType())

        # Append assembly line
        asm_lines.append(line + "\n")
    return "".join(asm_lines)

def generate_source_filename(func_name, decompiled_code):

    # Initial guess for extension
    file_extension = ".c"
    if ".cpp" in func_name:
        file_extension = ".cpp"

    # Completely custom path
    if "FUN_" not in func_name:
        for potential_type in [".c", ".cpp"]:
            if potential_type in func_name:
                return func_name.replace("_", "/")

    # Helper function for hybrid paths
    def process_hybrid_path(func_name, separator):
        parts = func_name.split(separator)
        path_components = parts[0].replace("_", "/").split("/")

        # Find file type indicator
        for i, component in enumerate(path_components):
            if ".cpp" in component or ".c" in component:
                directory = "/".join(path_components[:i+1])
                filename_prefix = "_".join(path_components[i+1:]) if i+1 < len(path_components) else ""
                filename = (filename_prefix + separator if filename_prefix else separator.lstrip("_")) + parts[1] + file_extension
                return os.path.join(directory, filename) if directory else filename

        # Fallback if no file type found
        if len(path_components) > 1:
            directory = "/".join(path_components[:-1])
            filename = path_components[-1] + separator + parts[1] + file_extension
            return os.path.join(directory, filename)
        return path_components[0] + separator + parts[1] + file_extension

    # Hybrid paths (thunk and regular)
    if "_thunk_FUN_" in func_name:
        return process_hybrid_path(func_name, "_thunk_FUN_")
    elif "_FUN_" in func_name:
        return process_hybrid_path(func_name, "_FUN_")

    # Decompilation guessed path
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

    # Fallback
    return func_name + file_extension

def create_pseudocode_file_content(
    func_name,
    func_addr,
    func_addr_range,
    func_convention,
    func_signature,
    decompiled_code,
    assembly_code,
    func_xrefs,
    func_globals,
    func_calls):

    # Build XREFS section
    xrefs_section = ""
    if func_xrefs:
        xrefs_section = "// Cross-references:\n"
        for xref in func_xrefs:
            xref_line = "//   %s (%s) at %s [%s]\n" % (
                sanitize_for_ascii(xref['name']),
                xref['addr'],
                xref['from_addr'],
                xref['type'])
            xrefs_section += xref_line

    # Build GLOBALS section
    globals_section = ""
    if func_globals:
        globals_section = "// Globals:\n"
        for global_ref in func_globals:
            if global_ref.get('value') is not None:
                global_line = "//   %s %s = %s\n" % (
                    sanitize_for_ascii(global_ref['type']),
                    sanitize_for_ascii(global_ref['name']),
                    sanitize_for_ascii(global_ref['value']))
            else:
                global_line = "//   %s %s\n" % (
                    sanitize_for_ascii(global_ref['type']),
                    sanitize_for_ascii(global_ref['name']))
            globals_section += global_line

    # Build FUNCTION CALLS section
    calls_section = ""
    if func_calls:
        calls_section = "// Function calls:\n"
        for call in func_calls:
            call_line = "//   %s\n" % sanitize_for_ascii(call['name'])
            calls_section += call_line

    # Function template - only include sections that have content
    template_parts = [
        "// Name: {func_name}",
        "// Address: {func_addr}",
        "// Address Range: {func_addr_range}",
        "// Convention: {func_convention}",
        "// Signature: {func_signature}"
    ]

    # Add sections only if they have content
    if xrefs_section:
        template_parts.append("{xrefs_section}")
    if globals_section:
        template_parts.append("{globals_section}")
    if calls_section:
        template_parts.append("{calls_section}")

    # Add the rest of the template
    template_parts.extend([
        "",
        "#include \"nocturne.h\"",
        "{func_decomp_code}",
        "// Assembly code:",
        "{func_asm_code}"
    ])
    template = "\n".join(template_parts)

    # Format from template
    safe_decompiled = sanitize_for_ascii(decompiled_code)
    safe_assembly = sanitize_for_ascii(assembly_code)
    safe_signature = sanitize_for_ascii(func_signature)
    safe_func_name = sanitize_for_ascii(func_name)
    safe_convention = sanitize_for_ascii(func_convention or "unknown")
    safe_addr_range = sanitize_for_ascii(str(func_addr_range))
    return template.format(
        func_name = safe_func_name,
        func_addr = func_addr,
        func_addr_range = safe_addr_range,
        func_convention = safe_convention,
        func_signature = safe_signature,
        xrefs_section = xrefs_section.rstrip(),
        globals_section = globals_section.rstrip(),
        calls_section = calls_section.rstrip(),
        func_decomp_code = safe_decompiled,
        func_asm_code = safe_assembly).strip()

def extract_globals_and_constants(currentProgram):
    globals_list = []
    constants_list = []
    memory = currentProgram.getMemory()
    symbol_table = currentProgram.getSymbolTable()
    program_listing = currentProgram.getListing()

    # Get all defined data (initialized memory)
    defined_data = program_listing.getDefinedData(True)
    log_info("Processing %d defined data entries" % len(list(defined_data)))
    defined_data = program_listing.getDefinedData(True)
    for data in defined_data:
        if data is None:
            continue

        addr = data.getAddress()
        data_type = data.getDataType()

        # Get symbol name
        symbol = symbol_table.getPrimarySymbol(addr)
        name = symbol.getName() if symbol else "DAT_%s" % str(addr).replace("0x", "").upper()

        # Skip functions, labels, and PE headers
        if (name.startswith("FUN_") or name.startswith("LAB_") or name.startswith("LOOP_") or
            name.startswith("IMAGE_") or name.startswith("SWITCH_") or
            name.startswith("PTR_")):
            continue

        # Get type name
        type_name = resolve_data_type_name(currentProgram, data_type)
        log_info("Extracting data for %s %s %s" % (symbol, name, type_name))

        # Get integer value
        def get_int(val, base = 10, default_val = None):
            try:
                return int(str(val))
            except Exception as e:
                return default_val

        # Get float value
        def get_float(val, default_val = None):
            try:
                return float(str(val))
            except Exception as e:
                return default_val

        # Get string value
        def get_str(val, default_val = None):
            try:
                return str(val)
            except Exception as e:
                return default_val

        # Check if it's initialized and get the value
        is_initialized = False
        initializer_value = None
        data_length = data_type.getLength()

        # Check if this is an array type
        is_array_type = "Array" in data_type.__class__.__name__
        ghidra_value = data.getValue()

        # Read raw bytes from memory to check for nonzero data
        has_nonzero_bytes = False
        raw_bytes = None
        try:
            raw_bytes = []
            for i in range(data_length):
                byte_addr = addr.add(i)
                byte_val = memory.getByte(byte_addr) & 0xFF
                raw_bytes.append(byte_val)
                if byte_val != 0:
                    has_nonzero_bytes = True
        except:
            raw_bytes = None
            has_nonzero_bytes = False

        # Larger initializer lists
        if ghidra_value is not None:
            is_initialized = True
        elif has_nonzero_bytes and raw_bytes is not None:
            is_initialized = True

            # Use base64 encoding for large arrays (> 256 bytes), hex for smaller ones
            if data_length > 256:
                try:
                    byte_array = bytearray(raw_bytes)
                    b64_string = base64.b64encode(bytes(byte_array)).decode('ascii')
                    lines = []
                    for i in range(0, len(b64_string), 64):
                        line = b64_string[i:i+64]
                        if i == 0:
                            lines.append('/* Base64 encoded data (%d bytes):' % data_length)
                            lines.append('   "%s"' % line)
                        else:
                            lines.append('   "%s"' % line)
                    lines.append('*/')
                    initializer_value = '\n'.join(lines)
                except Exception as e:
                    initializer_value = "/* %d bytes of data */" % data_length
            else:

                # Create C/C++ char array initializer with line wrapping for smaller arrays
                hex_values = ["0x%02X" % b for b in raw_bytes]
                bytes_per_line = 16
                lines = []
                for i in range(0, len(hex_values), bytes_per_line):
                    line_bytes = hex_values[i:i+bytes_per_line]
                    if i == 0:
                        lines.append("{\n    " + ", ".join(line_bytes))
                    else:
                        lines.append("    " + ", ".join(line_bytes))
                if len(lines) == 1:
                    initializer_value = "{" + ", ".join(hex_values) + "}"
                else:
                    initializer_value = "\n".join(lines) + "\n}"
        elif is_array_type and data_length > 0:
            is_initialized = True
            initializer_value = "{}"

        # Keep checking for initializer
        if ghidra_value is not None:

            # Characters
            if "char" in type_name.lower() and data_length == 1:
                val = get_int(ghidra_value)
                if val:
                    if 32 <= val <= 126:
                        initializer_value = "'%s'" % chr(val)
                    else:
                        initializer_value = "0x%02X" % val
                else:
                    initializer_value = get_safe_str(ghidra_value)

            # Bools
            elif "bool" in type_name.lower():
                val = get_int(ghidra_value)
                if val:
                    initializer_value = "true" if val != 0 else "false"
                else:
                    initializer_value = get_safe_str(ghidra_value)

            # Floats
            elif "float" in type_name.lower():
                float_val = get_float(ghidra_value)
                if float_val:
                    if abs(float_val - 0.57735027) < 1e-8:
                        initializer_value = "0.57735027f"
                    else:
                        initializer_value = "%.8gf" % float_val
                else:
                    initializer_value = get_safe_str(ghidra_value)

            # Doubles
            elif "double" in type_name.lower():
                double_val = get_float(ghidra_value)
                if double_val:
                    if abs(double_val - 0.57735027) < 1e-15:
                        initializer_value = "0.57735027"
                    else:
                        initializer_value = "%.17g" % double_val
                else:
                    initializer_value = get_safe_str(ghidra_value)

            # Strings and char arrays - handle as C strings or string arrays
            elif name.startswith("s_") or (is_string_data_type_obj(data_type)):
                str_val = get_safe_str(ghidra_value)
                if str_val:
                    if str_val.startswith('"') and str_val.endswith('"'):
                        initializer_value = str_val
                    else:
                        escaped = escape_c_string(str_val)
                        initializer_value = '"%s"' % escaped
                else:
                    initializer_value = '""'

            # Char pointer arrays - MUST come before single char* check
            elif (type_name.startswith("char*[") or
                  type_name.startswith("char *[") or
                  "char*[" in type_name or
                  "char *[" in type_name or
                  (re.match(r'.*char\s*\*\s*\[', type_name))):
                embedded_content = None
                if has_nonzero_bytes and raw_bytes:
                    embedded_content = format_char_array_as_c_strings(currentProgram, raw_bytes, type_name)
                if embedded_content:
                    initializer_value = embedded_content
                else:
                    if has_nonzero_bytes and raw_bytes and len(raw_bytes) >= 4:
                        hex_values = ["0x%02X" % b for b in raw_bytes]
                        bytes_per_line = 16
                        lines = []
                        for i in range(0, len(hex_values), bytes_per_line):
                            line_bytes = hex_values[i:i+bytes_per_line]
                            if i == 0:
                                lines.append("{\n    " + ", ".join(line_bytes))
                            else:
                                lines.append("    " + ", ".join(line_bytes))
                        initializer_value = "\n".join(lines) + "\n}"
                    else:
                        initializer_value = "{}"

            # Single char pointers - try to embed string content
            elif "char" in type_name.lower() and "*" in type_name:
                embedded_content = format_single_char_pointer(currentProgram, ghidra_value, name)
                if embedded_content:
                    initializer_value = embedded_content
                else:
                    str_val = get_safe_str(ghidra_value) if ghidra_value else ""
                    if str_val:
                        try:
                            if str_val.startswith("0x") or str_val.startswith("0X"):
                                int_val = int(str_val, 16)
                            else:
                                try:
                                    int_val = int(str_val, 16)
                                except ValueError:
                                    int_val = int(str_val, 10)
                            if int_val == 0:
                                initializer_value = "NULL"
                            else:
                                initializer_value = "0x%08X" % int_val
                        except ValueError:
                            initializer_value = str_val
                    else:
                        initializer_value = "NULL"

            # Char arrays - handle as string arrays or single strings
            elif "char" in type_name.lower() and "[" in type_name:
                embedded_content = None
                if type_name.count("[") >= 2 or (has_nonzero_bytes and raw_bytes):
                    embedded_content = format_2d_char_array(raw_bytes, type_name)
                if not embedded_content and has_nonzero_bytes and raw_bytes:
                    try:
                        string_chars = []
                        for b in raw_bytes:
                            if b == 0:
                                break
                            if 32 <= b <= 126:
                                string_chars.append(chr(b))
                            else:
                                string_chars = []
                                break
                        if string_chars and len(string_chars) > 1:
                            string_val = ''.join(string_chars)
                            escaped = escape_c_string(string_val)
                            embedded_content = '"%s"' % escaped
                    except Exception:
                        pass
                if embedded_content:
                    initializer_value = embedded_content
                else:
                    initializer_value = None

            # Regular pointers (non-char)
            elif "*" in type_name or "Ptr" in type_name:
                str_val = get_safe_str(ghidra_value)
                if str_val:
                    try:
                        if str_val.startswith("0x") or str_val.startswith("0X"):
                            int_val = int(str_val, 16)
                        else:
                            try:
                                int_val = int(str_val, 16)
                            except ValueError:
                                int_val = int(str_val, 10)

                        if int_val == 0:
                            initializer_value = "NULL"
                        else:
                            initializer_value = "0x%08X" % int_val
                    except ValueError:
                        initializer_value = str_val
                else:
                    initializer_value = "NULL"

            # Integrals
            elif data_length <= 8 and any(t in type_name.lower() for t in ["int", "word", "dword", "qword", "byte", "short", "long"]):
                int_val = get_int(ghidra_value, default_val = 0)
                if int_val:
                    if int_val >= 0x100:
                        initializer_value = "0x%X" % int_val
                    else:
                        initializer_value = str(int_val)
                else:
                    initializer_value = get_safe_str(ghidra_value)

            # Additional string handling for missed cases
            elif name.startswith("STR_") or (ghidra_value and get_safe_str(ghidra_value).startswith('"')):
                str_val = get_safe_str(ghidra_value)
                if str_val:
                    if str_val.startswith('"') and str_val.endswith('"'):
                        inner_str = str_val[1:-1]
                        escaped = escape_c_string(inner_str)
                        initializer_value = '"%s"' % escaped
                    else:
                        escaped = escape_c_string(str_val)
                        initializer_value = '"%s"' % escaped
                else:
                    initializer_value = '""'

            # Other types try to get as a byte array
            else:
                data_length = data_type.getLength()
                byte_values = []
                str_val = get_str(ghidra_value)
                if str_val:
                    if data_length <= 8:
                        int_val = get_int(str_val, default_val = 0)
                        if int_val:
                            for i in range(data_length):
                                byte_values.append((int_val >> (i * 8)) & 0xFF)
                        else:
                            byte_values = [ord(c) for c in str_val[:data_length]]
                            while len(byte_values) < data_length:
                                byte_values.append(0)
                    else:
                        byte_values = [ord(c) for c in str_val[:min(len(str_val), data_length)]]
                        while len(byte_values) < data_length and len(byte_values) < 16:
                            byte_values.append(0)

                # Create char array initializer
                if len(byte_values) <= 16:
                    hex_bytes = ", ".join("0x%02X" % b for b in byte_values)
                    initializer_value = "{%s}" % hex_bytes
                else:
                    hex_bytes = ", ".join("0x%02X" % b for b in byte_values[:12])
                    initializer_value = "{%s /* ... %d bytes total */}" % (hex_bytes, data_length)

        # Handle cases where no initializer was found
        if not initializer_value:
            if "[" in type_name:
                if "char" in type_name.lower():
                    initializer_value = '""'
                else:
                    initializer_value = "{}"
            else:
                continue

        # Build entry
        entry = {
            'name': name,
            'type': type_name,
            'address': str(addr),
            'size': data_type.getLength(),
            'is_initialized': is_initialized,
            'initializer': initializer_value
        }

        # Better classification logic
        is_constant = False

        # Add entry
        if (name.startswith("STR_") or name.startswith("s_") or name.startswith("CONST_")):
            is_constant = True
        elif is_initialized and data_type.getLength() <= 8 and name.startswith("DAT_"):
            is_constant = True
        elif "char" in type_name.lower() and "[" in type_name and is_initialized:
            is_constant = True
        elif is_initialized and ("float" in type_name.lower() or "double" in type_name.lower()):
            is_constant = True
        if is_constant:
            constants_list.append(entry)
        else:
            globals_list.append(entry)

    # Return globals/constants
    log_info("Found %d constants and %d globals" % (len(constants_list), len(globals_list)))
    return globals_list, constants_list

def generate_constants_file(constants_list):

    # Write header
    content = []
    content.append("#pragma once")
    content.append("")
    content.append("// =============================================================================")
    content.append("// CONSTANTS")
    content.append("// =============================================================================")
    content.append("")
    if not constants_list:
        content.append("// No constants found")
        content.append("")
        return "\n".join(content)

    # Group constants by type
    type_groups = {}
    for const in constants_list:
        type_name = const['type']
        if type_name not in type_groups:
            type_groups[type_name] = []
        type_groups[type_name].append(const)

    # Generate constants by type
    for type_name in sorted(type_groups.keys()):
        content.append("// %s constants" % type_name)
        for const in type_groups[type_name]:
            if const['is_initialized'] and const['initializer'] and const['initializer'] != "None":
                content.append("const %s %s = %s;" % (const['type'], const['name'], const['initializer']))
            else:
                content.append("// extern const %s %s; // No initializer found" % (const['type'], const['name']))
        content.append("")
    return "\n".join(content)

def generate_globals_file(globals_list):

    # Write header
    content = []
    content.append("#pragma once")
    content.append("")
    content.append("// =============================================================================")
    content.append("// GLOBAL VARIABLES")
    content.append("// =============================================================================")
    content.append("")
    if not globals_list:
        content.append("// No global variables found")
        content.append("")
        return "\n".join(content)

    # Generate extern declarations
    for global_var in globals_list:
        content.append("extern %s %s;" % (global_var['type'], global_var['name']))
    content.append("")
    return "\n".join(content)

def split_data_by_address_range(data_list):
    ranges = {}
    for entry in data_list:
        addr_str = entry['address'].replace("0x", "").replace("0X", "")
        addr_val = int(addr_str, 16)
        range_start = (addr_val // 0x10000) * 0x10000
        range_key = "0x%06X" % range_start
        if range_key not in ranges:
            ranges[range_key] = []
        ranges[range_key].append(entry)
    return ranges

def generate_globals_cpp_file(globals_list, range_key=""):

    # Write body
    content = []
    content.append("#include \"globals.h\"")
    content.append("")
    content.append("// =============================================================================")
    if range_key:
        content.append("// GLOBAL VARIABLE DEFINITIONS - Range %s" % range_key)
    else:
        content.append("// GLOBAL VARIABLE DEFINITIONS")
    content.append("// =============================================================================")
    content.append("")
    if not globals_list:
        content.append("// No global variables found")
        content.append("")
        return "\n".join(content)

    # Sort by address for consistent output
    sorted_globals = sorted(globals_list, key=lambda x: x['address'])

    # Generate definitions with initializers
    for global_var in sorted_globals:
        if global_var['is_initialized'] and global_var['initializer'] and global_var['initializer'] != "None":
            content.append("%s %s = %s;" % (global_var['type'], global_var['name'], global_var['initializer']))
        else:
            content.append("%s %s;" % (global_var['type'], global_var['name']))
    content.append("")
    return "\n".join(content)

def extract_virtual_filename(func_name):

    # Not a function
    if "FUN_" not in func_name:
        return None

    # Split by FUN_ to get the prefix
    parts = func_name.split("_FUN_")
    if len(parts) < 2:
        return None

    # Handle patterns
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

    # Not a function
    if "FUN_" not in func_name:
        return func_name

    # Split by FUN_ to get the prefix and function address
    parts = func_name.split("_FUN_")
    if len(parts) < 2:
        return func_name

    # Find the file extension indicator and extract function part
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

    # If we found no function part after the file extension, it's an unnamed function
    if not function_part:
        return "FUN_%s" % fun_address

    # Check if it's a class method (has at least 2 parts when split by _)
    function_parts = function_part.split("_")
    if len(function_parts) >= 2:
        class_name = function_parts[0]
        method_name = "_".join(function_parts[1:])
        return "%s::%s" % (class_name, method_name)
    else:
        return function_part

def generate_function_prototype(func_signature, original_func_name, cpp_func_name):

    # No function signature
    if not func_signature:
        return "// Unable to generate prototype for %s" % original_func_name

    # Find the opening parenthesis
    paren_pos = func_signature.find('(')
    if paren_pos == -1:
        return "// Invalid signature for %s" % original_func_name

    # Extract everything before the opening paren
    before_paren = func_signature[:paren_pos].strip()

    # Split by whitespace to get return type and function name
    parts = before_paren.split()
    if len(parts) < 2:
        return "// Invalid signature format for %s" % original_func_name

    # Return type is everything except the last part (which is the function name)
    return_type = " ".join(parts[:-1])

    # Extract parameters (everything between parentheses)
    params_start = paren_pos + 1
    params_end = func_signature.rfind(')')
    if params_end == -1:
        return "// Invalid signature format for %s" % original_func_name

    # Build the prototype with the correct C++ function name
    params_str = func_signature[params_start:params_end].strip()
    prototype = "%s %s(%s);" % (return_type, cpp_func_name, params_str)
    return prototype

def export_function_prototypes(currentProgram, pseudocode_dir, function_groups):

    # Make prototypes dir
    prototypes_dir = os.path.join(pseudocode_dir, "prototypes")
    make_dirs(prototypes_dir)

    # Make headers
    headers_created = 0
    for virtual_filename, functions in function_groups.items():
        if not virtual_filename:
            continue

        # Create the directory structure
        header_path = os.path.join(prototypes_dir, virtual_filename)
        header_dir = os.path.dirname(header_path)
        make_dirs(header_dir)

        # Generate header content
        content = []
        content.append("#pragma once")
        content.append("")
        content.append("// Function prototypes for %s" % virtual_filename.replace(".h", ".cpp"))
        content.append("// Generated from Ghidra function signatures")
        content.append("")

        # Sort functions by address for consistent output
        sorted_functions = sorted(functions, key=lambda f: f['address'])
        for func_info in sorted_functions:
            original_name = func_info['name']
            cpp_name = extract_cpp_function_name(original_name)
            content.append("// Original: %s" % original_name)
            content.append("// Address: %s" % func_info['address'])
            prototype = generate_function_prototype(func_info['signature'], original_name, cpp_name)
            content.append(prototype)
            content.append("")

        # Write the header file
        try:
            with open(header_path, 'w') as f:
                f.write("\n".join(content))
            log_info("Created prototype header: %s with %d functions" % (virtual_filename, len(functions)))
            headers_created += 1
        except Exception as e:
            log_info("Failed to write prototype header %s: %s" % (virtual_filename, str(e)))
    log_info("Created %d function prototype headers" % headers_created)

def export_pseudocode(currentProgram, path):

    # Clean up existing pseudocode files first to handle renamed functions
    log_info("Cleaning up existing pseudocode files before export")
    delete_pseudocode(currentProgram, path)

    # Initialize decompiler interface
    log_info("Initializing decompiler interface")
    interface = DecompInterface()
    interface.setOptions(DecompileOptions())
    interface.openProgram(currentProgram)

    # Create output directory
    pseudocode_dir = os.path.join(path, "pseudocode")
    pseudocode_include_dir = os.path.join(pseudocode_dir, "include")
    pseudocode_src_dir = os.path.join(pseudocode_dir, "src")
    make_dirs(pseudocode_dir)

    # Export header files first
    export_header_files(currentProgram, pseudocode_include_dir)

    # Extract and export globals and constants
    log_info("Extracting globals and constants")
    globals_list, constants_list = extract_globals_and_constants(currentProgram)

    # Generate constants files (split by address range)
    if constants_list:
        log_info("Generating constants files with %d constants" % len(constants_list))
        const_ranges = split_data_by_address_range(constants_list)

        # Generate main constants.h that includes all ranges
        main_constants_content = []
        main_constants_content.append("#pragma once")
        main_constants_content.append("")
        main_constants_content.append("// =============================================================================")
        main_constants_content.append("// CONSTANTS - Master Include")
        main_constants_content.append("// =============================================================================")
        main_constants_content.append("")
        for range_key in sorted(const_ranges.keys()):
            range_filename = "constants_%s.h" % range_key.replace("0x", "")
            main_constants_content.append("#include \"%s\"" % range_filename)

            # Generate individual range file
            range_content = generate_constants_file(const_ranges[range_key])
            range_path = os.path.join(pseudocode_include_dir, range_filename)
            write_header_file(range_path, range_content)
            log_info("Created constants range file: %s with %d constants" % (range_filename, len(const_ranges[range_key])))

        # Write constants
        main_constants_content.append("")
        constants_path = os.path.join(pseudocode_include_dir, "constants.h")
        write_header_file(constants_path, "\n".join(main_constants_content))
        log_info("Created master constants file: %s" % constants_path)

    # Generate globals files (split by address range)
    if globals_list:
        log_info("Generating globals files with %d globals" % len(globals_list))
        global_ranges = split_data_by_address_range(globals_list)

        # Generate main globals.h with all extern declarations
        globals_h_content = generate_globals_file(globals_list)
        globals_h_path = os.path.join(pseudocode_include_dir, "globals.h")
        write_header_file(globals_h_path, globals_h_content)

        # Generate separate .cpp files for each range
        make_dirs(pseudocode_src_dir)
        for range_key in sorted(global_ranges.keys()):
            range_filename = "globals_%s.cpp" % range_key.replace("0x", "")
            globals_cpp_content = generate_globals_cpp_file(global_ranges[range_key], range_key)
            globals_cpp_path = os.path.join(pseudocode_src_dir, range_filename)
            try:
                with open(globals_cpp_path, 'w') as f:
                    f.write(globals_cpp_content + "\n")
                log_info("Created globals range file: %s with %d globals" % (range_filename, len(global_ranges[range_key])))
            except Exception as e:
                log_info("Failed to write %s: %s" % (range_filename, str(e)))
        log_info("Created globals header: %s" % globals_h_path)

    # Get program managers
    function_manager = currentProgram.getFunctionManager()
    program_listing = currentProgram.getListing()
    reference_manager = currentProgram.getReferenceManager()
    symbol_table = currentProgram.getSymbolTable()

    # Build string map for inline replacement
    log_info("Building string map for symbol replacement")
    defined_data = program_listing.getDefinedData(True)
    string_map = build_string_map(defined_data)

    # Process all functions
    files_created = 0
    function_groups = {}
    log_info("Processing functions for pseudocode generation")
    for func in function_manager.getFunctions(True):

        # Skip external functions
        if is_function_external(currentProgram, func):
            continue

        # Get function info
        func_name = func.getName()
        func_addr = str(func.getEntryPoint())
        func_signature = func.getPrototypeString(True, False)
        func_addr_range = func.getBody()
        func_convention = func.getCallingConventionName()
        log_info("Processing function: %s at %s" % (func_name, func_addr))

        # Group function for prototype generation
        virtual_filename = extract_virtual_filename(func_name)
        if virtual_filename:
            if virtual_filename not in function_groups:
                function_groups[virtual_filename] = []
            function_groups[virtual_filename].append({
                'name': func_name,
                'address': func_addr,
                'signature': func_signature
            })
            log_info("Grouped function %s -> %s" % (func_name, virtual_filename))
        else:
            log_info("Skipped function (no virtual file match): %s" % func_name)

        # Get function cross-references
        func_xrefs = get_function_xrefs(currentProgram, func)

        # Get function globals
        func_globals = get_function_globals(currentProgram, func)

        # Get function calls
        func_calls = get_function_calls(currentProgram, func)

        # Generate decompiled code
        decompiled_code = generate_decompilation_code(
            interface, func, symbol_table, string_map, timeout=60)

        # Generate assembly code for reference
        assembly_code = generate_assembly_code(func, symbol_table, reference_manager, program_listing)

        # Determine source file name
        source_filename = generate_source_filename(func_name, decompiled_code)

        # Create the pseudocode file content
        file_content = create_pseudocode_file_content(
            func_name, func_addr, func_addr_range, func_convention,
            func_signature, decompiled_code, assembly_code, func_xrefs, func_globals, func_calls)

        # Write pseudocode file
        output_path = os.path.join(pseudocode_src_dir, source_filename)

        # Ensure the directory exists
        make_dirs(os.path.dirname(output_path))

        # Write pseudocode
        try:
            with open(output_path, 'w') as f:
                f.write(file_content + "\n")
            log_info("Wrote pseudocode file: %s" % source_filename)
            files_created += 1
        except Exception as e:
            log_info("Failed to write pseudocode file %s: %s" % (source_filename, str(e)))

    # Generate function prototype headers
    log_info("Generating function prototype headers")
    log_info("Found %d function groups: %s" % (len(function_groups), list(function_groups.keys())))
    export_function_prototypes(currentProgram, pseudocode_dir, function_groups)
    log_info("Export complete - created %d pseudocode files" % files_created)

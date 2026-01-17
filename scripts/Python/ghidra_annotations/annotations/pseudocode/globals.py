# Globals and constants extraction for pseudocode export
# Provides extraction of global variables and constants from the program

import re
from ghidra_annotations.util import resolve_data_type_name
from ghidra_annotations.util.string import is_string_data_type_obj
from ghidra_annotations.util.log import log_info
from ghidra_annotations.annotations.pseudocode.basetypes import (
    get_types_needing_basetypes, is_primitive_type, bytes_to_int_le, format_int_by_size
)
from ghidra_annotations.util.string import sanitize_c_identifier
from ghidra_annotations.annotations.pseudocode.strings import (
    get_safe_str, escape_c_string, format_char_array_as_c_strings,
    format_single_char_pointer, format_2d_char_array, format_array_initializer
)
from ghidra_annotations.annotations.pseudocode.headers import strip_type_prefix


def format_struct_initializer(data_type, raw_bytes):
    """Build a proper struct initializer by introspecting the struct's field layout.

    Args:
        data_type: The Ghidra Structure data type
        raw_bytes: List of raw byte values

    Returns:
        A C initializer string like "{0x00000003, 0x80000030}" or None if can't introspect
    """
    try:
        # Check if this is actually a Structure type
        if not hasattr(data_type, 'getComponents'):
            return None

        components = data_type.getComponents()
        if not components:
            return None

        field_values = []
        for comp in components:
            offset = comp.getOffset()
            length = comp.getLength()
            comp_type = comp.getDataType()
            comp_type_name = comp_type.getName() if comp_type else ""

            # Extract bytes for this field
            if offset + length > len(raw_bytes):
                # Not enough bytes, use 0
                field_bytes = [0] * length
            else:
                field_bytes = raw_bytes[offset:offset + length]

            # Convert bytes to appropriate value based on field size (little-endian)
            if length <= 8:
                val = bytes_to_int_le(field_bytes)
                field_values.append(format_int_by_size(val, length))
            else:
                # For other sizes (arrays, nested structs), output as byte array
                byte_vals = ["0x%02X" % b for b in field_bytes]
                field_values.append("{%s}" % ", ".join(byte_vals))

        return "{" + ", ".join(field_values) + "}"
    except Exception:
        return None


def format_variable_declaration(type_name, var_name):
    """Format a variable declaration correctly for C, handling array types.

    In C, array dimensions go after the variable name, not the type:
        char[80] name  ->  char name[80]
        int[10][20] x  ->  int x[10][20]

    Args:
        type_name: The type as string (may include array dimensions)
        var_name: The variable name

    Returns:
        Tuple of (base_type, full_var_name) where full_var_name includes array dims
    """
    # Match array dimensions at the end of type
    # Handles char[80], int[10][20], etc.
    array_pattern = re.compile(r'^(.+?)(\[[\d\][\[]+)$')
    match = array_pattern.match(type_name)

    if match:
        base_type = match.group(1).strip()
        array_dims = match.group(2)
        return (base_type, var_name + array_dims)
    else:
        return (type_name, var_name)


def extract_globals_and_constants(currentProgram):
    """Extract global variables and constants from the program.

    Args:
        currentProgram: The Ghidra program

    Returns:
        Tuple of (globals_list, constants_list)
    """
    globals_list = []
    constants_list = []
    memory = currentProgram.getMemory()
    symbol_table = currentProgram.getSymbolTable()
    program_listing = currentProgram.getListing()

    defined_data = program_listing.getDefinedData(True)
    log_info("Processing defined data entries")
    defined_data = program_listing.getDefinedData(True)
    for data in defined_data:
        if data is None:
            continue

        addr = data.getAddress()
        data_type = data.getDataType()

        symbol = symbol_table.getPrimarySymbol(addr)
        raw_name = symbol.getName() if symbol else "DAT_%s" % str(addr).replace("0x", "").upper()
        name = sanitize_c_identifier(raw_name)

        if (name.startswith("FUN_") or name.startswith("LAB_") or name.startswith("LOOP_") or
            name.startswith("IMAGE_") or name.startswith("SWITCH_") or
            name.startswith("PTR_")):
            continue

        type_name = resolve_data_type_name(currentProgram, data_type)

        def get_int(val, base=10, default_val=None):
            try:
                return int(str(val))
            except Exception:
                return default_val

        def get_float(val, default_val=None):
            try:
                return float(str(val))
            except Exception:
                return default_val

        def get_str(val, default_val=None):
            try:
                return str(val)
            except Exception:
                return default_val

        is_initialized = False
        initializer_value = None
        data_length = data_type.getLength()
        is_array_type = "Array" in data_type.__class__.__name__
        ghidra_value = data.getValue()

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

        if ghidra_value is not None:
            is_initialized = True
        elif has_nonzero_bytes and raw_bytes is not None:
            is_initialized = True
            # Check if this is a struct type (not array, not primitive)
            # For struct types, byte-by-byte initializers cause "excess elements" warnings
            is_struct_type = (not is_array_type and
                              not is_primitive_type(type_name) and
                              not type_name.endswith('*'))
            if is_struct_type:
                # Try to build proper struct initializer by introspecting fields
                struct_init = format_struct_initializer(data_type, raw_bytes)
                if struct_init:
                    initializer_value = struct_init
                else:
                    # Fallback: output as byte array comment if can't introspect
                    hex_values = ["0x%02X" % b for b in raw_bytes]
                    initializer_value = "{0} /* raw: %s */" % ", ".join(hex_values)
            else:
                # Check if this is an undefined scalar type (undefined1, undefined2, undefined4, undefined8)
                # These should be converted to integer values, not byte arrays
                # BUT: if it's an array type, handle it as an array, not a scalar
                base_type = type_name.split('[')[0].strip().lower()
                is_undefined_scalar = (base_type in ('undefined1', 'undefined2', 'undefined4', 'undefined8', 'undefined')
                                       and not is_array_type)
                if is_undefined_scalar:
                    # Convert bytes to integer value (little-endian)
                    int_val = bytes_to_int_le(raw_bytes)
                    initializer_value = format_int_by_size(int_val, len(raw_bytes))
                elif is_array_type:
                    # Check element type for proper grouping
                    elem_type = data_type.getDataType() if hasattr(data_type, 'getDataType') else None
                    elem_type_name = elem_type.getName().lower() if elem_type else ""
                    is_pointer_array = elem_type and "Pointer" in elem_type.__class__.__name__
                    is_double_array = "double" in elem_type_name or "float10" in elem_type_name
                    is_float_array = "float" in elem_type_name and not is_double_array

                    if is_double_array:
                        # Double array - group bytes into 8-byte double values
                        import struct
                        double_size = 8
                        double_values = []
                        for i in range(0, len(raw_bytes), double_size):
                            if i + double_size <= len(raw_bytes):
                                double_bytes = bytes(raw_bytes[i:i+double_size])
                                try:
                                    double_val = struct.unpack('<d', double_bytes)[0]
                                    # Format with enough precision
                                    formatted = "%.17g" % double_val
                                    double_values.append(formatted)
                                except:
                                    # Fallback to hex
                                    double_values.append("0x%016X" % int.from_bytes(double_bytes, 'little'))
                        initializer_value = format_array_initializer(double_values, vals_per_line=4)

                    elif is_float_array:
                        # Float array - group bytes into 4-byte float values
                        import struct
                        float_size = 4
                        float_values = []
                        for i in range(0, len(raw_bytes), float_size):
                            if i + float_size <= len(raw_bytes):
                                float_bytes = bytes(raw_bytes[i:i+float_size])
                                try:
                                    float_val = struct.unpack('<f', float_bytes)[0]
                                    # Format with f suffix
                                    formatted = "%.8g" % float_val
                                    if '.' not in formatted and 'e' not in formatted.lower():
                                        formatted += ".0"
                                    float_values.append(formatted + "f")
                                except:
                                    # Fallback to hex
                                    float_values.append("0x%08X" % int.from_bytes(float_bytes, 'little'))
                        initializer_value = format_array_initializer(float_values, vals_per_line=4)

                    elif is_pointer_array:
                        # Pointer array - group bytes into 4-byte pointer values (32-bit)
                        ptr_size = 4
                        ptr_values = []
                        for i in range(0, len(raw_bytes), ptr_size):
                            if i + ptr_size <= len(raw_bytes):
                                ptr_bytes = raw_bytes[i:i+ptr_size]
                                ptr_val = bytes_to_int_le(ptr_bytes)
                                if ptr_val == 0:
                                    ptr_values.append("NULL")
                                else:
                                    ptr_values.append("(void*)0x%08X" % ptr_val)
                        initializer_value = format_array_initializer(ptr_values, vals_per_line=4)
                    else:
                        # Regular array - byte values
                        hex_values = ["0x%02X" % b for b in raw_bytes]
                        initializer_value = format_array_initializer(hex_values, vals_per_line=16)
                else:
                    # Other scalar types - try to convert to single value
                    int_val = bytes_to_int_le(raw_bytes)
                    initializer_value = "0x%X" % int_val
        elif is_array_type and data_length > 0:
            is_initialized = True
            initializer_value = "{}"

        if ghidra_value is not None:
            if "char" in type_name.lower() and data_length == 1:
                val = get_int(ghidra_value)
                if val is not None:
                    if val == 0:
                        initializer_value = "'\\0'"
                    elif 32 <= val <= 126:
                        initializer_value = "'%s'" % chr(val)
                    else:
                        initializer_value = "0x%02X" % val
                else:
                    # Ghidra might return escape sequences as strings
                    str_val = get_safe_str(ghidra_value)
                    if str_val == "" or str_val == "\\x00" or str_val == "\x00":
                        initializer_value = "'\\0'"
                    elif str_val.startswith("\\x") and len(str_val) == 4:
                        # Convert \xNN to hex value
                        try:
                            hex_val = int(str_val[2:], 16)
                            if hex_val == 0:
                                initializer_value = "'\\0'"
                            elif 32 <= hex_val <= 126:
                                initializer_value = "'%s'" % chr(hex_val)
                            else:
                                initializer_value = "0x%02X" % hex_val
                        except:
                            initializer_value = "'\\0'"  # Default to null char
                    elif len(str_val) == 1:
                        # Single character
                        char_val = ord(str_val)
                        if char_val == 0:
                            initializer_value = "'\\0'"
                        elif 32 <= char_val <= 126:
                            initializer_value = "'%s'" % str_val
                        else:
                            initializer_value = "0x%02X" % char_val
                    else:
                        initializer_value = "'\\0'"  # Default for unknown formats

            elif "bool" in type_name.lower():
                val = get_int(ghidra_value)
                if val:
                    initializer_value = "true" if val != 0 else "false"
                else:
                    initializer_value = get_safe_str(ghidra_value)

            elif "float" in type_name.lower():
                float_val = get_float(ghidra_value)
                if float_val is not None:
                    # Handle special float values
                    import math
                    if math.isinf(float_val):
                        initializer_value = "INFINITY" if float_val > 0 else "(-INFINITY)"
                    elif math.isnan(float_val):
                        initializer_value = "NAN"
                    else:
                        # Ensure float literals always have a decimal point
                        formatted = "%.8g" % float_val
                        if '.' not in formatted and 'e' not in formatted.lower():
                            formatted += ".0"
                        initializer_value = formatted + "f"
                else:
                    initializer_value = get_safe_str(ghidra_value)

            elif "double" in type_name.lower():
                double_val = get_float(ghidra_value)
                if double_val is not None:
                    # Handle special double values
                    import math
                    if math.isinf(double_val):
                        initializer_value = "INFINITY" if double_val > 0 else "(-INFINITY)"
                    elif math.isnan(double_val):
                        initializer_value = "NAN"
                    else:
                        initializer_value = "%.17g" % double_val
                else:
                    initializer_value = get_safe_str(ghidra_value)

            elif name.startswith("s_") or is_string_data_type_obj(data_type):
                str_val = get_safe_str(ghidra_value)
                if str_val:
                    # Strip any existing quotes from Ghidra's representation
                    if str_val.startswith('"') and str_val.endswith('"') and len(str_val) >= 2:
                        str_val = str_val[1:-1]
                    # Always escape the content for C string literal
                    escaped = escape_c_string(str_val)
                    initializer_value = '"%s"' % escaped
                else:
                    initializer_value = '""'

            elif (type_name.startswith("char*[") or
                  type_name.startswith("char *[") or
                  "char*[" in type_name or
                  "char *[" in type_name or
                  re.match(r'.*char\s*\*\s*\[', type_name)):
                embedded_content = None
                if has_nonzero_bytes and raw_bytes:
                    embedded_content = format_char_array_as_c_strings(currentProgram, raw_bytes, type_name)
                if embedded_content:
                    initializer_value = embedded_content
                else:
                    if has_nonzero_bytes and raw_bytes and len(raw_bytes) >= 4:
                        hex_values = ["0x%02X" % b for b in raw_bytes]
                        initializer_value = format_array_initializer(hex_values, vals_per_line=16)
                    else:
                        initializer_value = "{}"

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

            elif data_length <= 8 and any(t in type_name.lower() for t in ["int", "word", "dword", "qword", "byte", "short", "long"]):
                int_val = get_int(ghidra_value, default_val=0)
                if int_val:
                    if int_val >= 0x100:
                        initializer_value = "0x%X" % int_val
                    else:
                        initializer_value = str(int_val)
                else:
                    initializer_value = get_safe_str(ghidra_value)

            elif "undefined" in type_name.lower() and data_length <= 8:
                # Handle undefined types - convert to single hex value
                int_val = get_int(ghidra_value, default_val=None)
                if int_val is not None:
                    initializer_value = format_int_by_size(int_val, data_length)
                elif has_nonzero_bytes and raw_bytes:
                    # Fallback to raw bytes conversion (little-endian)
                    int_val = bytes_to_int_le(raw_bytes)
                    initializer_value = format_int_by_size(int_val, data_length)
                else:
                    initializer_value = "0"

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

            else:
                data_length = data_type.getLength()
                byte_values = []
                str_val = get_str(ghidra_value)
                if str_val:
                    if data_length <= 8:
                        int_val = get_int(str_val, default_val=0)
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

                if len(byte_values) <= 16:
                    hex_bytes = ", ".join("0x%02X" % b for b in byte_values)
                    initializer_value = "{%s}" % hex_bytes
                else:
                    hex_bytes = ", ".join("0x%02X" % b for b in byte_values[:12])
                    initializer_value = "{%s /* ... %d bytes total */}" % (hex_bytes, data_length)

        if not initializer_value:
            if "[" in type_name:
                if "char" in type_name.lower():
                    initializer_value = '""'
                else:
                    initializer_value = "{}"
            else:
                continue

        entry = {
            'name': name,
            'type': type_name,
            'address': str(addr),
            'size': data_type.getLength(),
            'is_initialized': is_initialized,
            'initializer': initializer_value
        }

        is_constant = False
        if name.startswith("STR_") or name.startswith("s_") or name.startswith("CONST_"):
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

    log_info("Found %d constants and %d globals" % (len(constants_list), len(globals_list)))
    return globals_list, constants_list


def generate_constants_file(constants_list, type_to_path_map=None):
    """Generate a header file with constant definitions.

    Args:
        constants_list: List of constant entries
        type_to_path_map: Optional map of type names to header paths for includes

    Returns:
        Header file content as a string
    """
    content = []
    content.append("#pragma once")

    # Collect type dependencies from constants
    needed_includes = set()
    basetypes = get_types_needing_basetypes()
    needs_math_h = False

    if constants_list:
        for const in constants_list:
            type_name = extract_base_type_name(const['type'])
            # Check if base type needs basetypes.h
            if type_name in basetypes:
                needed_includes.add("system/basetypes.h")
            # Check if we have a mapping to a specific header
            if type_to_path_map and type_name in type_to_path_map:
                needed_includes.add(type_to_path_map[type_name])
            # Check if initializer uses INFINITY or NAN macros
            if const.get('initializer'):
                init_val = str(const['initializer'])
                if 'INFINITY' in init_val or 'NAN' in init_val:
                    needs_math_h = True

    if needed_includes or needs_math_h:
        content.append("")
        content.append("// Dependencies")
        # Put math.h first if needed (for INFINITY/NAN macros)
        if needs_math_h:
            content.append('#include <math.h>')
        # Put basetypes.h next if present
        if "system/basetypes.h" in needed_includes:
            content.append('#include "system/basetypes.h"')
            needed_includes.remove("system/basetypes.h")
        for inc_path in sorted(needed_includes):
            content.append('#include "%s"' % inc_path)

    content.append("")
    content.append("// =============================================================================")
    content.append("// CONSTANTS")
    content.append("// =============================================================================")
    content.append("")
    if not constants_list:
        content.append("// No constants found")
        content.append("")
        return "\n".join(content)

    type_groups = {}
    for const in constants_list:
        type_name = const['type']
        if type_name not in type_groups:
            type_groups[type_name] = []
        type_groups[type_name].append(const)

    for type_name in sorted(type_groups.keys()):
        content.append("// %s constants" % type_name)
        for const in type_groups[type_name]:
            # Format the declaration correctly (handles array types)
            base_type, full_var_name = format_variable_declaration(const['type'], const['name'])
            if const['is_initialized'] and const['initializer'] and const['initializer'] != "None":
                content.append("const %s %s = %s;" % (base_type, full_var_name, const['initializer']))
            else:
                content.append("// extern const %s %s; // No initializer found" % (base_type, full_var_name))
        content.append("")
    return "\n".join(content)


def generate_globals_file(globals_list):
    """Generate a header file with global variable declarations.

    Args:
        globals_list: List of global variable entries

    Returns:
        Header file content as a string
    """
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

    for global_var in globals_list:
        # Format the declaration correctly (handles array types)
        base_type, full_var_name = format_variable_declaration(global_var['type'], global_var['name'])
        content.append("extern %s %s;" % (base_type, full_var_name))
    content.append("")
    return "\n".join(content)


def extract_base_type_name(type_str):
    """Extract the base type name from a type string.

    Handles pointers, arrays, and struct/union prefixes.
    Examples:
        'CDemonActor*' -> 'CDemonActor'
        'struct CDemonActor*' -> 'CDemonActor'
        'char[80]' -> 'char'
        'int' -> 'int'
        'FileSearchHandler*[5]' -> 'FileSearchHandler'

    Args:
        type_str: Type string

    Returns:
        Base type name
    """
    base = type_str

    # Remove array suffixes first (before removing pointer suffixes)
    # This handles cases like 'Type*[5]' where the * comes before []
    if '[' in base:
        base = base[:base.index('[')].strip()

    # Remove pointer suffixes
    base = base.rstrip('*').strip()

    # Remove struct/union prefixes using shared helper
    return strip_type_prefix(base)


def generate_globals_header_file(globals_list, range_key="", type_to_path_map=None):
    """Generate a bucketed header file with global variable extern declarations.

    Args:
        globals_list: List of global variable entries for this range
        range_key: Optional range key for organization
        type_to_path_map: Optional map of type names to header paths for includes

    Returns:
        Header file content as a string
    """
    content = []
    content.append("#pragma once")

    # Collect type dependencies from globals
    needed_includes = set()
    needed_includes.add("system/basetypes.h")  # Always include basetypes

    if type_to_path_map:
        for global_var in globals_list:
            type_name = extract_base_type_name(global_var['type'])
            if type_name in type_to_path_map:
                needed_includes.add(type_to_path_map[type_name])

    if needed_includes:
        content.append("")
        content.append("// Type dependencies")
        # Put basetypes.h first
        if "system/basetypes.h" in needed_includes:
            content.append('#include "system/basetypes.h"')
            needed_includes.remove("system/basetypes.h")
        for inc_path in sorted(needed_includes):
            content.append('#include "%s"' % inc_path)

    content.append("")
    content.append("// =============================================================================")
    if range_key:
        content.append("// GLOBAL VARIABLES - Range %s" % range_key)
    else:
        content.append("// GLOBAL VARIABLES")
    content.append("// =============================================================================")
    content.append("")

    if not globals_list:
        content.append("// No global variables in this range")
        content.append("")
        return "\n".join(content)

    for global_var in globals_list:
        # Format the declaration correctly (handles array types)
        base_type, full_var_name = format_variable_declaration(global_var['type'], global_var['name'])
        content.append("extern %s %s;" % (base_type, full_var_name))
    content.append("")
    return "\n".join(content)


def split_data_by_address_range(data_list):
    """Split data entries by address range for organization.

    Args:
        data_list: List of data entries

    Returns:
        Dictionary mapping range keys to lists of entries
    """
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
    """Generate a C++ file with global variable definitions.

    Args:
        globals_list: List of global variable entries
        range_key: Optional range key for organization

    Returns:
        C++ file content as a string
    """
    content = []
    content.append('#include "globals.h"')
    content.append("")
    content.append("// =============================================================================")
    if range_key:
        content.append("// GLOBAL VARIABLE DEFINITIONS - Range %s" % range_key)
    else:
        content.append("// GLOBAL VARIABLE DEFINITIONS")
    content.append("// =============================================================================")
    content.append("")

    if not globals_list:
        content.append("// No global variables in this range")
        content.append("")
        return "\n".join(content)

    for global_var in globals_list:
        # Format the declaration correctly (handles array types)
        base_type, full_var_name = format_variable_declaration(global_var['type'], global_var['name'])
        if global_var['is_initialized'] and global_var['initializer']:
            content.append("%s %s = %s;" % (base_type, full_var_name, global_var['initializer']))
        else:
            content.append("%s %s;" % (base_type, full_var_name))
    content.append("")
    return "\n".join(content)

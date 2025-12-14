# Globals and constants extraction for pseudocode export
# Provides extraction of global variables and constants from the program

import re
import base64
from ghidra_annotations.util import resolve_data_type_name
from ghidra_annotations.util.string import is_string_data_type_obj
from ghidra_annotations.util.log import log_info
from ghidra_annotations.annotations.pseudocode.strings import (
    get_safe_str, escape_c_string, format_char_array_as_c_strings,
    format_single_char_pointer, format_2d_char_array
)


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
        name = symbol.getName() if symbol else "DAT_%s" % str(addr).replace("0x", "").upper()

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
                except Exception:
                    initializer_value = "/* %d bytes of data */" % data_length
            else:
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

        if ghidra_value is not None:
            if "char" in type_name.lower() and data_length == 1:
                val = get_int(ghidra_value)
                if val:
                    if 32 <= val <= 126:
                        initializer_value = "'%s'" % chr(val)
                    else:
                        initializer_value = "0x%02X" % val
                else:
                    initializer_value = get_safe_str(ghidra_value)

            elif "bool" in type_name.lower():
                val = get_int(ghidra_value)
                if val:
                    initializer_value = "true" if val != 0 else "false"
                else:
                    initializer_value = get_safe_str(ghidra_value)

            elif "float" in type_name.lower():
                float_val = get_float(ghidra_value)
                if float_val:
                    initializer_value = "%.8gf" % float_val
                else:
                    initializer_value = get_safe_str(ghidra_value)

            elif "double" in type_name.lower():
                double_val = get_float(ghidra_value)
                if double_val:
                    initializer_value = "%.17g" % double_val
                else:
                    initializer_value = get_safe_str(ghidra_value)

            elif name.startswith("s_") or is_string_data_type_obj(data_type):
                str_val = get_safe_str(ghidra_value)
                if str_val:
                    if str_val.startswith('"') and str_val.endswith('"'):
                        initializer_value = str_val
                    else:
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


def generate_constants_file(constants_list):
    """Generate a header file with constant definitions.

    Args:
        constants_list: List of constant entries

    Returns:
        Header file content as a string
    """
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

    type_groups = {}
    for const in constants_list:
        type_name = const['type']
        if type_name not in type_groups:
            type_groups[type_name] = []
        type_groups[type_name].append(const)

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
        content.append("extern %s %s;" % (global_var['type'], global_var['name']))
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
        if global_var['is_initialized'] and global_var['initializer']:
            content.append("%s %s = %s;" % (global_var['type'], global_var['name'], global_var['initializer']))
        else:
            content.append("%s %s;" % (global_var['type'], global_var['name']))
    content.append("")
    return "\n".join(content)

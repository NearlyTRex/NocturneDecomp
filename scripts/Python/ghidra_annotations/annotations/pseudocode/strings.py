# String handling utilities for pseudocode export
# Provides string escaping, formatting, and symbol replacement functions

import re
from ghidra_annotations.util.string import is_string_data_type_obj, extract_string_value


def get_safe_str(val):
    """Convert a value to a safe ASCII string."""
    if val is None:
        return ""
    try:
        if hasattr(val, "toString"):
            val = val.toString()
        if hasattr(val, 'encode'):
            return val.encode("ascii", "ignore").decode("ascii")
        else:
            return str(val)
    except Exception:
        try:
            return str(val)
        except Exception:
            return "[conversion_error]"


def escape_c_string(s):
    """Escape a string for use in C code."""
    if not s:
        return s

    escape_map = {
        '\\': '\\\\',
        '"': '\\"',
        '\n': '\\n',
        '\r': '\\r',
        '\t': '\\t',
        '\b': '\\b',
        '\f': '\\f',
        '\v': '\\v',
        '\a': '\\a',
        '\0': '\\0',
    }

    result = []
    for char in s:
        if char in escape_map:
            result.append(escape_map[char])
        elif ord(char) < 32 or ord(char) > 126:
            result.append('\\%03o' % ord(char))
        else:
            result.append(char)
    return ''.join(result)


def escape_for_c_string(s):
    """Escape special characters in a string for C string literal.

    Similar to escape_c_string but with slightly different handling.
    """
    if not s:
        return ""

    result = []
    for char in s:
        code = ord(char)
        if char == '"':
            result.append('\\"')
        elif char == '\\':
            result.append('\\\\')
        elif char == '\n':
            result.append('\\n')
        elif char == '\r':
            result.append('\\r')
        elif char == '\t':
            result.append('\\t')
        elif 32 <= code <= 126:
            result.append(char)
        else:
            result.append('\\x%02x' % code)
    return ''.join(result)


def sanitize_for_ascii(text):
    """Convert text to ASCII-safe representation, escaping non-ASCII characters.

    Note: This function escapes newlines to \\n for use in C string literals.
    For file content that should preserve newlines, use sanitize_file_content instead.
    """
    if not text:
        return ""

    # Fast path: check if already clean ASCII without special chars
    try:
        text.encode('ascii')
        # Check for chars that need escaping
        if '"' not in text and '\\' not in text and '\n' not in text and '\r' not in text and '\t' not in text:
            # Check for control characters
            has_control = False
            for c in text:
                if ord(c) < 32:
                    has_control = True
                    break
            if not has_control:
                return text
    except UnicodeEncodeError:
        pass  # Has non-ASCII, fall through to slow path

    # Slow path: character-by-character processing
    result = []
    for char in text:
        code = ord(char)
        if 32 <= code <= 126:
            if char == '"':
                result.append('\\"')
            elif char == '\\':
                result.append('\\\\')
            else:
                result.append(char)
        elif char == '\n':
            result.append('\\n')
        elif char == '\r':
            result.append('\\r')
        elif char == '\t':
            result.append('\\t')
        elif code < 128:
            result.append('\\x%02x' % code)
        else:
            result.append('\\u%04x' % code)
    return ''.join(result)


# Pre-compiled regex for control character detection (excluding tab, newline, carriage return)
_CONTROL_CHAR_PATTERN = re.compile(r'[\x00-\x08\x0b\x0c\x0e-\x1f\x7f-\xff]')


def sanitize_file_content(text):
    """Convert text to ASCII-safe representation for file output, preserving newlines.

    Unlike sanitize_for_ascii, this function preserves newlines, tabs, and other
    whitespace characters that are valid in file content. Non-printable and
    non-ASCII characters are escaped as hex codes to preserve their values.
    """
    if not text:
        return ""

    # Fast path: check if text is already clean ASCII (common case)
    # Use regex search which is much faster than character-by-character iteration
    try:
        text.encode('ascii')
        # If we get here, it's all ASCII - just check for control chars using regex
        if not _CONTROL_CHAR_PATTERN.search(text):
            return text
    except UnicodeEncodeError:
        pass  # Has non-ASCII, fall through to slow path

    # Slow path: character-by-character processing
    result = []
    for char in text:
        code = ord(char)
        if 32 <= code <= 126:
            # Printable ASCII - keep as-is (don't escape quotes or backslashes)
            result.append(char)
        elif char in '\n\r\t':
            # Preserve whitespace characters
            result.append(char)
        elif code < 128:
            # Other ASCII control characters - escape as hex
            result.append('\\x%02x' % code)
        else:
            # Non-ASCII - escape as hex or unicode
            if code <= 0xFF:
                result.append('\\x%02x' % code)
            else:
                result.append('\\u%04x' % code)
    return ''.join(result)


def format_char_array_as_c_strings(currentProgram, raw_bytes, type_name):
    """Format a char array as C string literals."""
    if not raw_bytes or len(raw_bytes) < 4:
        return None

    if "[" in type_name and "]" in type_name:
        string_array = []
        ptr_size = 4
        num_ptrs = len(raw_bytes) // ptr_size
        successful_strings = 0

        for i in range(num_ptrs):
            ptr_bytes = raw_bytes[i * ptr_size:(i + 1) * ptr_size]
            if len(ptr_bytes) == 4:
                ptr_val = (ptr_bytes[3] << 24) | (ptr_bytes[2] << 16) | (ptr_bytes[1] << 8) | ptr_bytes[0]
                if ptr_val != 0:
                    string_found = False
                    try:
                        ptr_addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(ptr_val)
                        pointed_data = currentProgram.getListing().getDefinedDataAt(ptr_addr)
                        if pointed_data and is_string_data_type_obj(pointed_data.getDataType()):
                            pointed_value = extract_string_value(pointed_data)
                            if pointed_value:
                                safe_str = get_safe_str(pointed_value)
                                escaped = escape_c_string(safe_str)
                                string_array.append('"%s"' % escaped)
                                successful_strings += 1
                                string_found = True

                        if not string_found:
                            try:
                                memory = currentProgram.getMemory()
                                string_chars = []
                                for j in range(128):
                                    char_addr = ptr_addr.add(j)
                                    if not memory.contains(char_addr):
                                        break
                                    byte_val = memory.getByte(char_addr) & 0xFF
                                    if byte_val == 0:
                                        break
                                    if 32 <= byte_val <= 126:
                                        string_chars.append(chr(byte_val))
                                    elif byte_val in [9, 10, 13]:
                                        string_chars.append(chr(byte_val))
                                    else:
                                        if len(string_chars) > 0:
                                            break

                                if string_chars and len(string_chars) >= 1:
                                    string_val = ''.join(string_chars)
                                    if string_val.strip():
                                        escaped = escape_c_string(string_val)
                                        string_array.append('"%s"' % escaped)
                                        successful_strings += 1
                                        string_found = True
                            except:
                                pass

                        if not string_found:
                            string_array.append("0x%08X" % ptr_val)
                    except Exception:
                        string_array.append("0x%08X" % ptr_val)
                else:
                    string_array.append("NULL")

        if string_array and successful_strings >= max(2, len(string_array) * 0.3):
            if len(string_array) <= 8:
                return "{%s}" % ", ".join(string_array)
            else:
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
    """Format a single char pointer as a C string literal."""
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
    """Detect if data represents a char array or 2D char array."""
    if not type_name or not raw_bytes:
        return False, False

    type_lower = type_name.lower()
    is_char_array = "char" in type_lower and "[" in type_name
    is_2d_char_array = "char" in type_lower and type_name.count("[") >= 2

    has_string_pattern = False
    if len(raw_bytes) >= 4:
        null_count = raw_bytes.count(0)
        printable_count = sum(1 for b in raw_bytes if 32 <= b <= 126)
        has_string_pattern = null_count >= 2 and printable_count >= len(raw_bytes) * 0.6

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
    """Format a 2D char array as C string literals."""
    if not raw_bytes:
        return None

    rows = None
    cols = None
    is_2d_array = False
    if type_name:
        match = re.search(r'char\s*\[(\d+)\]\s*\[(\d+)\]', type_name)
        if match:
            rows = int(match.group(1))
            cols = int(match.group(2))
            is_2d_array = True

    printable_count = sum(1 for b in raw_bytes if 32 <= b <= 126)
    null_count = raw_bytes.count(0)
    total_bytes = len(raw_bytes)

    if printable_count < total_bytes * 0.5:
        return None
    if null_count == 0:
        return None

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

        if current_string and len(current_string) > 1:
            try:
                string_val = ''.join(chr(b) for b in current_string if 32 <= b <= 126)
                if string_val:
                    escaped = escape_c_string(string_val)
                    strings.append('"%s"' % escaped)
            except Exception:
                pass

    if strings and len(strings) >= 2:
        # Only return braced multi-string initializers for actual 2D arrays
        # For 1D arrays, {"str1", "str2"} is invalid C - return None
        if not is_2d_array:
            return None
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


def build_string_map(defined_data):
    """Build a map of string addresses to their values for symbol replacement."""
    string_map = {}
    for data in defined_data:
        try:
            if is_string_data_type_obj(data.getDataType()):
                addr = str(data.getAddress())
                addr_hex = addr.replace("0x", "").lower()
                value = extract_string_value(data)
                if value:
                    safe_value = get_safe_str(value)
                    escaped = escape_c_string(safe_value)
                    string_map[addr_hex] = escaped
        except Exception:
            pass
    return string_map


def replace_symbol(match, string_map):
    """Replace a symbol reference with its string literal value."""
    full_match = match.group(1)
    addr_part = match.group(2).lower()

    if addr_part in string_map:
        escaped = string_map[addr_part]
        return '"%s"' % escaped
    return full_match

# String handling utilities for pseudocode export
# Provides string escaping, formatting, and symbol replacement functions

import re
from ghidra.program.model.mem import MemoryAccessException
from ghidra_annotations.util.string import is_string_data_type_obj, extract_string_value


def format_array_initializer(values, vals_per_line=16):
    """Format a list of values as a C array initializer with line breaks.

    Args:
        values: List of string values (e.g., ["0x00", "0x01", ...])
        vals_per_line: How many values per line (default 16 for bytes, use 4 for larger types)

    Returns:
        Formatted string like "{0x00, 0x01}" or multi-line for larger arrays
    """
    if len(values) <= vals_per_line:
        return "{" + ", ".join(values) + "}"
    lines = ["    " + ", ".join(values[i:i + vals_per_line]) for i in range(0, len(values), vals_per_line)]
    return "{\n" + ",\n".join(lines) + "\n}"


def _braced_literals(items):
    """String literals as an initializer: one line up to 8, else 4 to a line."""
    if len(items) <= 8:
        return "{%s}" % ", ".join(items)
    return format_array_initializer(items, vals_per_line=4)


def get_safe_str(val):
    """A value (a Java object, a Python string or anything else) as ASCII text, non-ASCII dropped."""
    if val is None:
        return ""
    if hasattr(val, "toString"):
        val = val.toString()
    return str(val).encode("ascii", "ignore").decode("ascii")


_ESCAPES = {
    '\\': '\\\\', '"': '\\"', '\n': '\\n', '\r': '\\r', '\t': '\\t',
    '\b': '\\b', '\f': '\\f', '\v': '\\v', '\a': '\\a',
}


def escape_c_string(s):
    """Escape a string for use in a C string literal.

    Other control and non-printable characters become three-digit octal
    escapes, NUL included: a shorter "\\0" would swallow a digit after it.
    """
    if not s:
        return s
    result = []
    for char in s:
        if char in _ESCAPES:
            result.append(_ESCAPES[char])
        elif ord(char) < 32 or ord(char) > 126:
            result.append('\\%03o' % ord(char))
        else:
            result.append(char)
    return ''.join(result)


# What file content must escape: control characters but tab, newline and
# carriage return, and anything past printable ASCII
_CONTROL_CHAR_PATTERN = re.compile(r'[\x00-\x08\x0b\x0c\x0e-\x1f\x7f-\U0010ffff]')
# What single-line metadata must escape: every control character, anything
# past printable ASCII, and quotes and backslashes
_METADATA_ESCAPE_PATTERN = re.compile(r'[\x00-\x1f\x7f-\U0010ffff"\\]')
_METADATA_ESCAPES = {'"': '\\"', '\\': '\\\\', '\n': '\\n', '\r': '\\r', '\t': '\\t'}


def sanitize_string(text, preserve_newlines=False):
    """Convert text to ASCII-safe representation.

    Args:
        text: String to sanitize
        preserve_newlines: If True, preserve newlines/tabs and don't escape quotes/backslashes
                          (for multi-line file content like code blocks).
                          If False, escape them as \\n, \\t, etc. and escape quotes/backslashes
                          (for single-line metadata in C-style comments).

    Returns:
        ASCII-safe string representation
    """
    if not text:
        return ""
    pattern = _CONTROL_CHAR_PATTERN if preserve_newlines else _METADATA_ESCAPE_PATTERN
    if not pattern.search(text):
        return text

    result = []
    for char in text:
        code = ord(char)
        if not preserve_newlines and char in _METADATA_ESCAPES:
            result.append(_METADATA_ESCAPES[char])
        elif 32 <= code <= 126 or char in '\n\r\t':
            result.append(char)
        elif code <= 0xFF:
            result.append('\\x%02x' % code)
        else:
            result.append('\\u%04x' % code)
    return ''.join(result)


def _pointed_string(currentProgram, ptr_val):
    """The string value of the defined string data at ptr_val, or None."""
    ptr_addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(ptr_val)
    pointed_data = currentProgram.getListing().getDefinedDataAt(ptr_addr)
    if pointed_data and is_string_data_type_obj(pointed_data.getDataType()):
        return get_safe_str(extract_string_value(pointed_data)) or None
    return None


# The longest string read from undefined memory
MEMORY_STRING_LIMIT = 1024


def _memory_c_string(currentProgram, ptr_val):
    """The NUL-terminated printable string in memory at ptr_val, or None.

    Anything else is not taken as a string: a non-printable byte, memory that
    ends, or no terminator within MEMORY_STRING_LIMIT bytes, since a literal
    of only part of it would not hold what the pointer points at.
    """
    ptr_addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(ptr_val)
    memory = currentProgram.getMemory()
    chars = []
    for j in range(MEMORY_STRING_LIMIT):
        char_addr = ptr_addr.add(j)
        if not memory.contains(char_addr):
            return None
        try:
            byte_val = memory.getByte(char_addr) & 0xFF
        except MemoryAccessException:        # uninitialized, as in .bss
            return None
        if byte_val == 0:
            text = ''.join(chars)
            return text if text.strip() else None
        if not (32 <= byte_val <= 126 or byte_val in (9, 10, 13)):
            return None
        chars.append(chr(byte_val))
    return None


def format_char_array_as_c_strings(currentProgram, raw_bytes, type_name, string_map=None):
    """Format a char pointer array as C string literals.

    Args:
        currentProgram: The Ghidra program
        raw_bytes: List of raw byte values
        type_name: The type name (e.g., "char*[12]")
        string_map: Optional map of 8-digit address hex strings to escaped string values

    Returns:
        Formatted initializer string, or None when under 30% of the pointers
        lead to a string
    """
    if not raw_bytes or len(raw_bytes) < 4 or "[" not in type_name or "]" not in type_name:
        return None

    string_array = []
    successful_strings = 0
    for i in range(len(raw_bytes) // 4):
        b = raw_bytes[i * 4:(i + 1) * 4]
        ptr_val = (b[3] << 24) | (b[2] << 16) | (b[1] << 8) | b[0]
        if ptr_val == 0:
            string_array.append("nullptr")
            continue
        # The string map first, then the string data Ghidra defines there,
        # then a terminated string in undefined memory
        escaped = (string_map or {}).get("%08x" % ptr_val)
        if escaped is None:
            text = _pointed_string(currentProgram, ptr_val) or _memory_c_string(currentProgram, ptr_val)
            escaped = escape_c_string(text) if text else None
        if escaped is None:
            string_array.append("(char*)0x%08X" % ptr_val)
        else:
            string_array.append('"%s"' % escaped)
            successful_strings += 1

    if successful_strings >= max(1, len(string_array) * 0.3):
        return _braced_literals(string_array)
    return None


def format_single_char_pointer(currentProgram, ghidra_value, name):
    """Format a single char pointer as a C string literal.

    A value Ghidra shows as an address ("0x...") is taken from the string data
    defined there; anything else is None. name is not used.
    """
    str_val = get_safe_str(ghidra_value)
    if not str_val.startswith("0x"):
        return None
    pointed = _pointed_string(currentProgram, int(str_val, 16))
    return '"%s"' % escape_c_string(pointed) if pointed else None


def format_2d_char_array(raw_bytes, type_name=None):
    """Format a char[rows][cols] array as C string literals, one per row.

    Returns None unless the type gives both dimensions, the bytes are mostly
    printable and hold a NUL, there are at least two rows, and every row is
    printable text that ends in a NUL within the row: C++ does not take a
    literal that fills the row with no room for its NUL.
    """
    match = re.search(r'char\s*\[(\d+)\]\s*\[(\d+)\]', type_name or '')
    if not raw_bytes or not match:
        return None
    rows, cols = int(match.group(1)), int(match.group(2))

    printable_count = sum(1 for b in raw_bytes if 32 <= b <= 126)
    if printable_count < len(raw_bytes) * 0.5 or 0 not in raw_bytes:
        return None

    strings = []
    for row in range(rows):
        row_bytes = raw_bytes[row * cols:(row + 1) * cols]
        if len(row_bytes) < cols:
            break
        if 0 not in row_bytes:
            return None
        text = row_bytes[:row_bytes.index(0)]
        if any(not 32 <= b <= 126 for b in text):
            return None
        strings.append('"%s"' % escape_c_string(''.join(chr(b) for b in text)))

    if len(strings) < 2:
        return None
    return _braced_literals(strings)


def build_string_map(defined_data):
    """Map each defined string's 8-digit address to its escaped value, for symbol replacement."""
    string_map = {}
    for data in defined_data:
        if is_string_data_type_obj(data.getDataType()):
            value = extract_string_value(data)
            if value:
                string_map[str(data.getAddress()).lower()] = escape_c_string(get_safe_str(value))
    return string_map


def replace_symbol(match, string_map):
    """Replace a symbol reference with its string literal value."""
    full_match = match.group(1)
    addr_part = match.group(2).lower()

    if addr_part in string_map:
        escaped = string_map[addr_part]
        return '"%s"' % escaped
    return full_match

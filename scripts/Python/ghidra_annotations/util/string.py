import re
from ghidra_annotations.util.log import log_error
from ghidra_annotations.util.log import log_info
from ghidra_annotations.util.namespace import get_or_create_namespace
from ghidra.program.model.data import CharsetSettingsDefinition
from ghidra.program.model.data import DataUtilities
from ghidra.program.model.data import PascalString255DataType
from ghidra.program.model.data import PascalStringDataType
from ghidra.program.model.data import PascalUnicodeDataType
from ghidra.program.model.data import StringDataType
from ghidra.program.model.data import StringUTF8DataType
from ghidra.program.model.data import TerminatedStringDataType
from ghidra.program.model.data import TerminatedUnicode32DataType
from ghidra.program.model.data import TerminatedUnicodeDataType
from ghidra.program.model.data import Unicode32DataType
from ghidra.program.model.data import UnicodeDataType
from ghidra.program.model.mem import MemoryAccessException
from ghidra.program.model.symbol import SourceType

def get_string_types():
    return {
        "StringDataType": {
            "type": StringDataType,
            "name": "string"
        },
        "StringUTF8DataType": {
            "type": StringUTF8DataType,
            "name": "string-utf8"
        },
        "TerminatedStringDataType": {
            "type": TerminatedStringDataType,
            "name": "TerminatedCString"
        },
        "TerminatedUnicodeDataType": {
            "type": TerminatedUnicodeDataType,
            "name": "TerminatedUnicode"
        },
        "TerminatedUnicode32DataType": {
            "type": TerminatedUnicode32DataType,
            "name": "TerminatedUnicode32"
        },
        "PascalString255DataType": {
            "type": PascalString255DataType,
            "name": "PascalString255"
        },
        "PascalStringDataType": {
            "type": PascalStringDataType,
            "name": "PascalString"
        },
        "PascalUnicodeDataType": {
            "type": PascalUnicodeDataType,
            "name": "PascalUnicode"
        },
        "UnicodeDataType": {
            "type": UnicodeDataType,
            "name": "Unicode"
        },
        "Unicode32DataType": {
            "type": Unicode32DataType,
            "name": "Unicode32"
        }
    }

def get_string_data_type_classes():
    return [entry["type"] for entry in get_string_types().values()]

def get_string_data_type_names():
    return {entry["name"]: entry["type"] for entry in get_string_types().values()}

def is_string_data_type_obj(type_obj):
    return isinstance(type_obj, tuple(get_string_data_type_classes()))

def get_string_data_type_obj(type_name):
    type_class = get_string_data_type_names().get(type_name)
    return type_class() if type_class else None

def normalize_string_name(string_name, max_length = 32):
    string_name = re.sub(r'[^0-9a-zA-Z]', '_', string_name)
    string_name = re.sub(r'_+', '_', string_name).strip('_')
    if not string_name:
        string_name = "anon"
    if string_name[0].isdigit():
        string_name = "s_" + string_name
    return string_name[:max_length]

# C++ reserved keywords that cannot be used as identifiers
CPP_KEYWORDS = {
    'this', 'class', 'struct', 'union', 'enum', 'virtual', 'public', 'private',
    'protected', 'friend', 'operator', 'new', 'delete', 'template', 'typename',
    'namespace', 'using', 'try', 'catch', 'throw', 'const', 'volatile', 'mutable',
    'static', 'extern', 'register', 'auto', 'inline', 'explicit', 'export',
    'true', 'false', 'nullptr', 'bool', 'char', 'short', 'int', 'long', 'float',
    'double', 'void', 'signed', 'unsigned', 'wchar_t', 'char16_t', 'char32_t',
    'if', 'else', 'switch', 'case', 'default', 'for', 'while', 'do', 'break',
    'continue', 'return', 'goto', 'sizeof', 'alignof', 'decltype', 'typeid',
    'static_cast', 'dynamic_cast', 'const_cast', 'reinterpret_cast',
    'and', 'and_eq', 'bitand', 'bitor', 'compl', 'not', 'not_eq', 'or', 'or_eq',
    'xor', 'xor_eq', 'asm', 'constexpr', 'noexcept', 'static_assert', 'thread_local',
}

def sanitize_c_identifier(name):
    if not name:
        return "unnamed"
    # Replace any character that's not alphanumeric or underscore with underscore
    sanitized = re.sub(r'[^a-zA-Z0-9_]', '_', name)
    # Collapse multiple underscores from sanitization, but preserve leading underscores
    leading = len(sanitized) - len(sanitized.lstrip('_'))
    sanitized = sanitized[:leading] + re.sub(r'_+', '_', sanitized[leading:])
    # Strip only trailing underscores (leading underscores are valid C identifiers)
    sanitized = sanitized.rstrip('_')
    # If empty after sanitization, use a placeholder
    if not sanitized:
        return "unnamed"
    # If starts with digit, prepend underscore
    if sanitized[0].isdigit():
        sanitized = "_" + sanitized
    # If it's a C++ keyword, prefix with underscore
    if sanitized in CPP_KEYWORDS:
        sanitized = "_" + sanitized
    return sanitized

# Memory.getByte returns a signed Java byte; the readers work in 0-255
def read_ascii_string(memory, string_addr, max_len = 256):
    try:
        chars = bytearray()
        for i in range(max_len):
            b = memory.getByte(string_addr.add(i)) & 0xff
            if b == 0:
                break
            if b < 0x20 and b not in (0x09, 0x0a, 0x0c, 0x0d):
                return None
            if b > 0x7e:
                return None
            chars.append(b)
        return chars.decode("ascii") if chars else None
    except MemoryAccessException:
        return None

def read_utf16le_string(memory, string_addr, max_len = 256):
    try:
        chars = bytearray()
        for i in range(max_len):
            lo = memory.getByte(string_addr.add(i * 2)) & 0xff
            hi = memory.getByte(string_addr.add(i * 2 + 1)) & 0xff
            if lo == 0 and hi == 0:
                break
            chars.extend([lo, hi])
        return chars.decode("utf-16le") if chars else None
    except MemoryAccessException:
        return None

def read_likely_string(memory, string_addr):
    s = read_ascii_string(memory, string_addr)
    if s:
        return s
    s = read_utf16le_string(memory, string_addr)
    if s:
        return s
    return None

def create_or_replace_string(currentProgram, string_addr):
    try:

        # Get current program data
        memory = currentProgram.getMemory()
        listing = currentProgram.getListing()
        symbol_table = currentProgram.getSymbolTable()

        # Get string value at that address if it exists already
        string_value = None
        string_data = listing.getDefinedDataAt(string_addr)
        if string_data:
            string_value = string_data.getValue()
        if not string_value:
            string_value = read_likely_string(memory, string_addr)
        if not string_value:
            log_info("No valid string found at %s" % string_addr)
            return False

        # Get string length
        string_length = len(string_value) + 1

        # Clear any existing string at that location
        listing.clearCodeUnits(string_addr, string_addr.add(string_length - 1), False)
        for sym in symbol_table.getSymbols(string_addr):
            symbol_table.removeSymbolSpecial(sym)

        # Get string info
        string_type = TerminatedStringDataType()
        string_name = normalize_string_name(string_value, max_length = 24)
        string_label = "s_%s_%s" % (string_name, string_addr.toString().replace("0x", ""))
        string_label = sanitize_c_identifier(string_label)
        string_namespace = get_or_create_namespace(currentProgram, "Global")

        # Create new string
        log_info("Creating string at %s" % string_addr)
        DataUtilities.createData(currentProgram, string_addr, string_type, string_length, False,
            DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA)

        # Create new string label
        log_info("Creating string label '%s::%s' at %s" % (string_namespace.getName(), string_label, string_addr))
        symbol_table.createLabel(string_addr, string_label, string_namespace, SourceType.USER_DEFINED)
        return True
    except Exception as e:
        log_error("Failed to create TerminatedCString at %s: %s" % (string_addr, e))

def extract_string_value(string_data):
    try:
        string_value = string_data.getValue()
        if string_value is not None:
            return str(string_value)
        return None
    except Exception as e:
        log_error("Failed to extract string value: %s" % e)

# Every string type the export records is an AbstractStringDataType, which
# reports the charset in effect for this item ("US-ASCII", "UTF-16", ...). The
# item itself is the settings to ask: its own charset if one was set, else the
# type's default.
def detect_string_charset(currentProgram, string_data, string_type):
    try:
        return string_type.getCharsetName(string_data)
    except Exception as e:
        log_error("Failed to detect charset: %s" % e)

# Sets the item's charset, which detect_string_charset reads back
def apply_string_charset(string_data, string_type, charset_name):
    try:
        CharsetSettingsDefinition.CHARSET.setCharset(string_data, charset_name)
        return True
    except Exception as e:
        log_error("Failed to apply charset '%s': %s" % (charset_name, e))

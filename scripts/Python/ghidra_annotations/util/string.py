import os
import re
from ghidra_annotations.util import *
from ghidra_annotations.util.log import *
from ghidra_annotations.util.data_type import *
from ghidra_annotations.util.namespace import *
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

def is_string_data_type_name(type_name):
    return type_name in get_string_data_type_names()

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

def read_ascii_string(memory, string_addr, max_len = 256):
    try:
        chars = bytearray()
        for i in range(max_len):
            b = memory.getByte(string_addr.add(i))
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
            lo = memory.getByte(string_addr.add(i * 2))
            hi = memory.getByte(string_addr.add(i * 2 + 1))
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
        return False

def extract_string_value(string_data):
    try:
        string_value = string_data.getValue()
        if string_value is not None:
            return str(string_value)
        return None
    except Exception as e:
        log_error("Failed to extract string value: %s" % e)
        return None

def detect_string_charset(currentProgram, string_data, string_type):
    try:

        # Check settings for charset information
        settings = string_data.getDefaultSettings()
        if settings:
            charset_keys = ["charsetName", "charset", "encoding", "characterEncoding"]
            for key in charset_keys:
                try:
                    charset = settings.getString(key, None)
                    if charset and charset.strip():
                        return charset.strip()
                except:
                    continue

        # Try data type specific methods
        if hasattr(string_type, "getCharsetName"):
            try:
                charset = string_type.getCharsetName(settings) if settings else string_type.getCharsetName()
                if charset and charset.strip():
                    return charset.strip()
            except:
                pass
        if hasattr(string_type, "getCharset"):
            try:
                charset = string_type.getCharset()
                if charset:
                    return str(charset).strip()
            except:
                pass

        # Try type-based detection using class name patterns
        type_name = string_type.__class__.__name__ if hasattr(string_type, '__class__') else str(type(string_type))

        # Try specific Ghidra string types
        charset_mapping = {

            # UTF variants
            "StringUTF8DataType": "UTF-8",
            "StringUTF16DataType": "UTF-16",
            "StringUTF32DataType": "UTF-32",
            "UnicodeDataType": "UTF-16",
            "WideCharDataType": "UTF-16",
            "WideChar16DataType": "UTF-16",
            "WideChar32DataType": "UTF-32",

            # ASCII variants
            "StringDataType": "ASCII",
            "TerminatedStringDataType": "ASCII",
            "CStringDataType": "ASCII",

            # Other encodings
            "PascalStringDataType": "ASCII",
            "PascalString255DataType": "ASCII",
        }
        for type_pattern, charset in charset_mapping.items():
            if type_pattern in type_name:
                return charset

        # Analyze actual string content
        if hasattr(string_data, "getValue") or hasattr(string_data, "getStringValue"):
            try:
                string_value = None
                if hasattr(string_data, "getStringValue"):
                    string_value = string_data.getStringValue()
                elif hasattr(string_data, "getValue"):
                    string_value = string_data.getValue()
                if string_value:
                    if any(ord(c) > 127 for c in str(string_value) if isinstance(c, str)):
                        return "UTF-8"
            except:
                pass

        # Check data type toString for encoding hints
        try:
            type_str = str(string_type).lower()
            if "utf8" in type_str or "utf-8" in type_str:
                return "UTF-8"
            elif "utf16" in type_str or "utf-16" in type_str:
                return "UTF-16"
            elif "unicode" in type_str:
                return "UTF-16"
            elif "wide" in type_str:
                return "UTF-16"
            elif "ascii" in type_str:
                return "ASCII"
        except:
            pass

        # Fall back to program architecture defaults
        try:
            language = currentProgram.getLanguage()
            if language:
                if language.getLanguageDescription().getProcessor().toString().lower() in ["x86", "arm", "mips"]:
                    return "UTF-8"
        except:
            pass

        # Default fallback
        return "ASCII"
    except Exception as e:
        log_error("Failed to detect charset: %s" % e)
        return None

def apply_string_charset(string_data, string_type, charset_name):
    try:
        if hasattr(string_data, "getSettings"):
            settings = string_data.getSettings()
            if settings and hasattr(settings, "setString"):
                for key in ["charsetName", "charset", "encoding"]:
                    try:
                        settings.setString(key, charset_name)
                        return True
                    except Exception:
                        continue
        return True
    except Exception as e:
        log_error("Failed to apply charset '%s': %s" % (charset_name, e))
        return False

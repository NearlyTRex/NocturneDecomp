# Globals and constants extraction for pseudocode export
# Provides extraction of global variables and constants from the program

import os
import re
from ghidra_annotations.util import resolve_data_type_name, load_json_files
from ghidra_annotations.util.string import is_string_data_type_obj
from ghidra_annotations.util.log import log_info
from ghidra_annotations.annotations.pseudocode.basetypes import (
    get_types_needing_basetypes, is_primitive_type, bytes_to_int_le, format_int_by_size
)
from ghidra_annotations.util.string import sanitize_c_identifier, CPP_KEYWORDS
from ghidra_annotations.annotations.pseudocode.strings import (
    get_safe_str, escape_c_string, format_char_array_as_c_strings,
    format_single_char_pointer, format_2d_char_array, format_array_initializer
)
from ghidra_annotations.annotations.pseudocode.headers import strip_type_prefix
from ghidra_annotations.annotations.pseudocode.functions import _detect_format_attribute


def build_write_xref_addresses(annotations_path):
    """Build a set of addresses that have WRITE cross-references to them.

    Args:
        annotations_path: Path to the annotations directory containing cross_references/

    Returns:
        Set of address strings (lowercase hex) that have write xrefs
    """
    write_addrs = set()
    try:
        xrefs = load_json_files(annotations_path, "cross_references")
        if xrefs:
            for xref in xrefs:
                if xref.get("type") == "WRITE" or xref.get("type") == "READ_WRITE":
                    to_addr = xref.get("to", "")
                    # Normalize address to lowercase for consistent comparison
                    if to_addr and not to_addr.startswith("Stack["):
                        write_addrs.add(to_addr.lower())
            log_info("Found %d addresses with write xrefs" % len(write_addrs))
    except Exception as e:
        log_info("Warning: Could not load cross references: %s" % str(e))
    return write_addrs


def is_signed_int_type(type_name):
    """Check if a type name represents a signed integer type.

    Args:
        type_name: The type name string

    Returns:
        True if the type is a signed integer (not unsigned)
    """
    if not type_name:
        return False
    name_lower = type_name.lower()
    # Unsigned types
    if 'unsigned' in name_lower or name_lower.startswith('u') and name_lower[1:] in ('int', 'short', 'long', 'char'):
        return False
    if name_lower in ('uint', 'uint8', 'uint16', 'uint32', 'uint64', 'uchar', 'ushort', 'ulong', 'ulonglong',
                      'dword', 'word', 'byte', 'qword', 'size_t'):
        return False
    if 'undefined' in name_lower:
        return False
    # Signed types
    if name_lower in ('int', 'short', 'long', 'longlong', 'int8', 'int16', 'int32', 'int64', 'char'):
        return True
    if 'int' in name_lower and 'unsigned' not in name_lower and 'uint' not in name_lower:
        return True
    return False


def format_signed_int(val, num_bytes, type_name=None):
    """Format an integer value, handling signed types properly.

    Args:
        val: Integer value (unsigned representation)
        num_bytes: Number of bytes
        type_name: Optional type name to check for signed-ness

    Returns:
        Formatted string (negative decimal for signed negatives, hex otherwise)
    """
    is_signed = is_signed_int_type(type_name) if type_name else False

    if is_signed:
        # Check if high bit is set (negative value)
        max_val = (1 << (num_bytes * 8))
        sign_bit = max_val >> 1
        if val >= sign_bit:
            # Convert to negative
            signed_val = val - max_val
            return str(signed_val)

    # Use standard hex formatting
    return format_int_by_size(val, num_bytes)


# Known pointer typedef names (Windows API types that are pointers internally)
POINTER_TYPEDEF_NAMES = frozenset([
    'HANDLE', 'HWND', 'HINSTANCE', 'HMODULE', 'HDC', 'HBITMAP',
    'HBRUSH', 'HFONT', 'HICON', 'HCURSOR', 'HMENU', 'HRGN',
    'LPVOID', 'PVOID', 'LPCVOID', 'HRESULT', 'HGLOBAL', 'HLOCAL',
    'HKEY', 'HMETAFILE', 'HENHMETAFILE', 'HCOLORSPACE', 'HPALETTE',
    'HPEN', 'HGDIOBJ', 'HACCEL', 'HDWP', 'HDESK', 'HWINSTA',
    'HKL', 'HMONITOR', 'HWINEVENTHOOK', 'HUMPD'
])


def is_pointer_typedef(data_type, type_name):
    """Check if a type is a typedef to a pointer (like HANDLE -> void*).

    Args:
        data_type: The Ghidra data type object
        type_name: The type name string

    Returns:
        True if the type is a pointer typedef, False otherwise
    """
    # Check by introspecting the typedef chain
    if data_type and hasattr(data_type, 'getBaseDataType'):
        base_dt = data_type
        while base_dt and hasattr(base_dt, 'getBaseDataType'):
            base_dt = base_dt.getBaseDataType()
        if base_dt and "Pointer" in base_dt.__class__.__name__:
            return True

    # Also check for known pointer typedef names
    if type_name and type_name.upper() in POINTER_TYPEDEF_NAMES:
        return True

    return False


def resolve_pointer_to_symbol(currentProgram, address_int):
    """Try to resolve a pointer address to a symbol name.

    Returns both a usable symbol (for code) and any symbol (for comments).
    Usable symbols are those that can be referenced in global scope.
    Comment symbols include local labels, switch cases, etc.

    Args:
        currentProgram: The Ghidra program
        address_int: Integer address value

    Returns:
        Tuple of (usable_symbol, comment_symbol) where:
        - usable_symbol: Symbol name usable in global scope, or None
        - comment_symbol: Any symbol at this address for commenting, or None
    """
    if address_int == 0:
        return (None, None)

    # Prefixes for local/internal symbols that can't be used in global scope
    LOCAL_PREFIXES = (
        'caseD_', 'switchD_', 'switchdataD_',  # Switch case labels
        'LAB_',                                  # Local labels
        'DAT_',                                  # Auto-generated data labels
        'PTR_',                                  # Pointer labels
        'ADDR_',                                 # Address labels
        'IMAGE_',                                # PE image headers (not exported)
    )

    usable_symbol = None
    comment_symbol = None

    try:
        from ghidra.program.model.address import AddressFactory
        addr_factory = currentProgram.getAddressFactory()
        addr = addr_factory.getDefaultAddressSpace().getAddress(address_int)

        # First check if it's a function - functions are always usable
        func_manager = currentProgram.getFunctionManager()
        func = func_manager.getFunctionAt(addr)
        if func:
            func_name = func.getName()
            comment_symbol = func_name
            # Skip thunks, auto-generated names, and keywords for usable
            if not func_name.startswith("FUN_") and not func_name.startswith("thunk_") and func_name not in CPP_KEYWORDS:
                # Replace dots with underscores for valid C identifier
                usable_symbol = func_name.replace('.', '_')
            return (usable_symbol, comment_symbol)

        # Check symbol table for symbols
        symbol_table = currentProgram.getSymbolTable()
        symbols = list(symbol_table.getSymbols(addr))

        # Find best symbol for commenting (prefer non-DAT names)
        for sym in symbols:
            sym_name = sym.getName()
            if not sym_name.startswith("DAT_"):
                comment_symbol = sym_name
                break
        if not comment_symbol and symbols:
            comment_symbol = symbols[0].getName()

        # Find usable symbol (skip local/internal symbols and keywords)
        for sym in symbols:
            sym_name = sym.getName()
            # Skip local/internal symbols
            if any(sym_name.startswith(prefix) for prefix in LOCAL_PREFIXES):
                continue
            # Skip C/C++ keywords
            if sym_name in CPP_KEYWORDS:
                continue
            # Skip symbol labels that look like functions but have no actual function
            # (e.g., engine_palette.cpp_FUN_00545454 where no function exists at that address)
            # We already checked func_manager.getFunctionAt above and it returned None,
            # so if this symbol looks like a function reference, it's invalid
            if '_FUN_' in sym_name or sym_name.startswith('FUN_'):
                continue

            # Check if this is a string constant (s_*, STR_*)
            # String constants are arrays, so the name decays to a pointer - no & needed
            is_string_constant = sym_name.startswith('s_') or sym_name.startswith('STR_')

            # Check if this is an array/member access expression (needs & prefix)
            # vs a namespace-style name (needs . replaced with _)
            needs_address_of = '[' in sym_name
            is_namespace_pattern = '.cpp_' in sym_name or '.c_' in sym_name or \
                                   sym_name.endswith('.cpp') or sym_name.endswith('.c')

            if is_string_constant:
                # String constants are arrays - name decays to pointer, no & needed
                # Must sanitize the name to match how it was declared in constants
                usable_symbol = sanitize_c_identifier(sym_name)
                break
            elif needs_address_of or ('.' in sym_name and not is_namespace_pattern):
                # Array element or member access - use & to take address
                # Replace namespace dots with _ but keep member access dots
                c_name = sym_name
                # Replace .cpp_ and .c_ patterns with _cpp_ and _c_
                c_name = c_name.replace('.cpp_', '_cpp_').replace('.c_', '_c_')
                # Check if there's an arithmetic offset (e.g., +1, -2)
                # If so, we need to cast through char* for valid pointer arithmetic
                offset_match = re.search(r'([+-]\d+)$', c_name)
                if offset_match:
                    base_name = c_name[:offset_match.start()]
                    offset = offset_match.group(1)
                    usable_symbol = '(char*)(&%s)%s' % (base_name, offset)
                else:
                    usable_symbol = '&' + c_name
                break
            elif is_namespace_pattern:
                # Namespace-style name - replace . with _
                c_name = sym_name.replace('.', '_')
                if c_name in CPP_KEYWORDS:
                    continue
                usable_symbol = c_name
                break
            else:
                # Simple identifier - this is a global variable, use & to take address
                if sym_name in CPP_KEYWORDS:
                    continue
                usable_symbol = '&' + sym_name
                break

    except Exception:
        pass

    return (usable_symbol, comment_symbol)


def parse_array_dimensions(type_name):
    """Parse array dimensions from a type name like 'int[2][3][15]'.

    Args:
        type_name: The type name string

    Returns:
        Tuple of (base_type, dimensions_list) e.g., ('int', [2, 3, 15])
    """
    import re
    # Find all [N] patterns
    dims = re.findall(r'\[(\d+)\]', type_name)
    if not dims:
        return type_name, []
    # Get base type (everything before first [)
    base_type = type_name[:type_name.index('[')].strip()
    return base_type, [int(d) for d in dims]


def format_multidim_array(raw_bytes, type_name, elem_size, elem_type_name=None,
                          currentProgram=None, string_map=None):
    """Format a multi-dimensional array with proper nested braces.

    Args:
        raw_bytes: List of byte values
        type_name: The full type name like 'int[2][3][15]'
        elem_size: Size of each element in bytes
        elem_type_name: Name of element type for signed-ness detection
        currentProgram: Optional Ghidra program for resolving char* pointers to strings
        string_map: Optional map of address hex strings to escaped string values

    Returns:
        Formatted C initializer string with nested braces
    """
    import struct

    base_type, dims = parse_array_dimensions(type_name)
    if not dims:
        return None

    # Check if element type is float, double, or pointer
    elem_name_lower = (elem_type_name or "").lower()
    is_float = elem_name_lower == "float" or (elem_size == 4 and "float" in base_type.lower())
    is_double = elem_name_lower == "double" or elem_name_lower == "float10" or \
                (elem_size == 8 and "double" in base_type.lower())
    is_pointer = '*' in base_type or 'pointer' in elem_name_lower

    def format_element(elem_bytes):
        """Format a single element value."""
        if is_double and len(elem_bytes) == 8:
            # Convert bytes to double
            try:
                double_val = struct.unpack('<d', bytes(elem_bytes))[0]
                formatted = "%.17g" % double_val
                # Ensure there's always a decimal point for valid C++ literal
                if '.' not in formatted and 'e' not in formatted.lower():
                    formatted += ".0"
                return formatted
            except:
                return "0.0"
        elif is_float and len(elem_bytes) == 4:
            # Convert bytes to float
            try:
                float_val = struct.unpack('<f', bytes(elem_bytes))[0]
                formatted = "%.9g" % float_val
                # Ensure there's always a decimal point for valid C++ literal
                if '.' not in formatted and 'e' not in formatted.lower():
                    formatted += ".0"
                return formatted + "f"
            except:
                return "0.0f"
        elif is_pointer:
            # Pointer type - format as hex address with cast
            int_val = bytes_to_int_le(elem_bytes)
            if int_val == 0:
                return "nullptr"
            else:
                # For char* pointers, try to resolve to string literals
                if "char" in base_type.lower() and currentProgram:
                    string_val = resolve_pointer_to_string(currentProgram, int_val, string_map)
                    if string_val:
                        return '"%s"' % string_val
                return "(%s)0x%08X" % (base_type.rstrip('[]0123456789 '), int_val)
        else:
            # Integer type
            int_val = bytes_to_int_le(elem_bytes)
            return format_signed_int(int_val, elem_size, elem_type_name)

    def format_recursive(data, dimensions, depth=0):
        """Recursively format nested array dimensions."""
        if len(dimensions) == 1:
            # Base case: innermost dimension - format as list of values
            count = dimensions[0]
            values = []
            for i in range(count):
                offset = i * elem_size
                if offset + elem_size <= len(data):
                    elem_bytes = data[offset:offset + elem_size]
                    values.append(format_element(elem_bytes))
                else:
                    if is_double:
                        values.append("0.0")
                    elif is_float:
                        values.append("0.0f")
                    else:
                        values.append("0")
            return "{" + ", ".join(values) + "}"
        else:
            # Recursive case: format sub-arrays
            outer_count = dimensions[0]
            inner_dims = dimensions[1:]
            # Calculate size of each sub-array
            inner_total = 1
            for d in inner_dims:
                inner_total *= d
            sub_array_size = inner_total * elem_size

            sub_arrays = []
            for i in range(outer_count):
                offset = i * sub_array_size
                sub_data = data[offset:offset + sub_array_size] if offset < len(data) else []
                sub_arrays.append(format_recursive(sub_data, inner_dims, depth + 1))

            # Format with line breaks for readability at outer levels
            if depth == 0 and len(sub_arrays) > 1:
                indent = "    "
                inner = (",\n" + indent).join(sub_arrays)
                return "{\n" + indent + inner + "\n}"
            else:
                return "{" + ", ".join(sub_arrays) + "}"

    return format_recursive(list(raw_bytes), dims)


def resolve_pointer_to_string(currentProgram, address_int, string_map=None):
    """Try to resolve a pointer address to a string value.

    Uses multiple strategies:
    1. Fast O(1) lookup in string_map if provided
    2. Ghidra API lookup for defined string data
    3. Memory scan for null-terminated string

    Args:
        currentProgram: The Ghidra program
        address_int: Integer address value to resolve
        string_map: Optional map of address hex strings to escaped string values

    Returns:
        Escaped string value or None if not resolvable
    """
    if address_int == 0:
        return None

    # Strategy 1: Fast O(1) lookup in string_map
    if string_map:
        addr_hex = "%08x" % address_int
        if addr_hex in string_map:
            return string_map[addr_hex]
        # Try without leading zeros
        addr_hex_short = "%x" % address_int
        if addr_hex_short in string_map:
            return string_map[addr_hex_short]

    try:
        from ghidra.program.model.address import AddressFactory
        addr_factory = currentProgram.getAddressFactory()
        addr = addr_factory.getDefaultAddressSpace().getAddress(address_int)

        # Strategy 2: Ghidra API lookup for defined string data
        program_listing = currentProgram.getListing()
        pointed_data = program_listing.getDefinedDataAt(addr)
        if pointed_data:
            from ghidra_annotations.util.string import is_string_data_type_obj, extract_string_value
            if is_string_data_type_obj(pointed_data.getDataType()):
                pointed_value = extract_string_value(pointed_data)
                if pointed_value:
                    safe_str = get_safe_str(pointed_value)
                    return escape_c_string(safe_str)

        # Strategy 3: Memory scan for null-terminated string
        memory = currentProgram.getMemory()
        string_chars = []
        for j in range(256):  # Max string length to scan
            char_addr = addr.add(j)
            if not memory.contains(char_addr):
                break
            byte_val = memory.getByte(char_addr) & 0xFF
            if byte_val == 0:
                break
            if 32 <= byte_val <= 126:
                string_chars.append(chr(byte_val))
            elif byte_val in (9, 10, 13):  # Tab, newline, carriage return
                string_chars.append(chr(byte_val))
            else:
                # Non-printable character - give up
                string_chars = []
                break

        if string_chars and len(string_chars) >= 1:
            string_val = ''.join(string_chars)
            if string_val.strip():
                return escape_c_string(string_val)

    except Exception:
        pass

    return None


def format_char_pointer_array(currentProgram, raw_bytes, type_name, string_map=None):
    """Format a char*[] array as C string literals.

    Args:
        currentProgram: The Ghidra program
        raw_bytes: List of raw byte values
        type_name: The type name (e.g., "char*[12]")
        string_map: Optional map of address hex strings to escaped string values

    Returns:
        Formatted initializer string or None if resolution failed
    """
    if not raw_bytes or len(raw_bytes) < 4:
        return None

    ptr_size = 4  # 32-bit pointers
    num_ptrs = len(raw_bytes) // ptr_size
    string_array = []
    successful_strings = 0

    for i in range(num_ptrs):
        ptr_bytes = raw_bytes[i * ptr_size:(i + 1) * ptr_size]
        if len(ptr_bytes) == 4:
            ptr_val = bytes_to_int_le(ptr_bytes)
            if ptr_val == 0:
                string_array.append("nullptr")
            else:
                # Try to resolve pointer to string
                string_val = resolve_pointer_to_string(currentProgram, ptr_val, string_map)
                if string_val:
                    string_array.append('"%s"' % string_val)
                    successful_strings += 1
                else:
                    # Fallback to hex address
                    string_array.append("(char*)0x%08X" % ptr_val)

    # Only return if we resolved at least 30% of non-null pointers
    non_null_count = sum(1 for s in string_array if s != "nullptr")
    if string_array and non_null_count > 0 and successful_strings >= max(1, non_null_count * 0.3):
        return format_array_initializer(string_array, vals_per_line=4)

    return None


def format_1d_char_array_as_string(raw_bytes):
    """Format a 1D char array as a C string literal.

    Args:
        raw_bytes: List of raw byte values

    Returns:
        Formatted string literal or None if not a valid string
    """
    if not raw_bytes:
        return None

    # Find null terminator
    null_pos = -1
    for i, b in enumerate(raw_bytes):
        if b == 0:
            null_pos = i
            break

    # If no null found, use all bytes
    if null_pos == -1:
        string_bytes = raw_bytes
    else:
        string_bytes = raw_bytes[:null_pos]

    # Check if all bytes are printable
    string_chars = []
    for b in string_bytes:
        if 32 <= b <= 126:
            string_chars.append(chr(b))
        elif b in (9, 10, 13):  # Tab, newline, carriage return
            string_chars.append(chr(b))
        else:
            # Non-printable character
            return None

    # Need at least one character for a valid string
    if not string_chars:
        return '""'

    string_val = ''.join(string_chars)
    escaped = escape_c_string(string_val)
    return '"%s"' % escaped


def format_guid_initializer(raw_bytes):
    """Format a GUID struct initializer from raw bytes.

    GUID structure:
        DWORD Data1 (bytes 0-3, little-endian)
        WORD  Data2 (bytes 4-5, little-endian)
        WORD  Data3 (bytes 6-7, little-endian)
        BYTE  Data4[8] (bytes 8-15)

    Args:
        raw_bytes: List of 16 byte values

    Returns:
        Formatted GUID initializer like "{0x12345678, 0x1234, 0x5678, {0x12, ...}}"
        or None if not exactly 16 bytes
    """
    if len(raw_bytes) != 16:
        return None

    # Data1: DWORD (little-endian)
    data1 = raw_bytes[0] | (raw_bytes[1] << 8) | (raw_bytes[2] << 16) | (raw_bytes[3] << 24)
    # Data2: WORD (little-endian)
    data2 = raw_bytes[4] | (raw_bytes[5] << 8)
    # Data3: WORD (little-endian)
    data3 = raw_bytes[6] | (raw_bytes[7] << 8)
    # Data4: BYTE[8]
    data4 = raw_bytes[8:16]

    data4_str = ", ".join("0x%02X" % b for b in data4)
    return "{0x%08X, 0x%04X, 0x%04X, {%s}}" % (data1, data2, data3, data4_str)


def format_pointer_initializer(currentProgram, int_val, type_name):
    """Format a pointer initializer, resolving to symbol if possible.

    Args:
        currentProgram: The Ghidra program
        int_val: Integer pointer value
        type_name: The pointer type name (e.g., "void*", "int (*)()")

    Returns:
        Tuple of (initializer_string, comment_or_none)
        - initializer_string: The formatted initializer value
        - comment_or_none: Symbol name for comment if different from usable, else None
    """
    if int_val == 0:
        return ("nullptr", None)

    # Try to resolve to a symbol
    usable_symbol, comment_symbol = resolve_pointer_to_symbol(currentProgram, int_val)

    if usable_symbol:
        # Use the symbol directly
        if "(*)" in type_name or "(**)" in type_name:
            initializer = "(%s)%s" % (type_name.rstrip(), usable_symbol)
        else:
            initializer = "(%s)%s" % (type_name.rstrip(), usable_symbol)
        return (initializer, None)  # No comment needed, symbol is in code
    else:
        # No usable symbol - use address with cast
        if "(*)" in type_name or "(**)" in type_name:
            initializer = "(%s)0x%08X" % (type_name.rstrip(), int_val)
        else:
            initializer = "(%s)0x%08X" % (type_name.rstrip(), int_val)
        # Include comment symbol if we found one
        return (initializer, comment_symbol)


def format_struct_initializer(data_type, raw_bytes, currentProgram=None, use_designated=True, indent_level=1):
    """Build a proper struct initializer by introspecting the struct's field layout.

    Args:
        data_type: The Ghidra Structure data type
        raw_bytes: List of raw byte values
        currentProgram: Optional Ghidra program for symbol resolution
        use_designated: If True, use C++20 designated initializers (.field = value)
        indent_level: Indentation level for multi-line formatting (1 = 4 spaces, 2 = 8 spaces, etc.)

    Returns:
        A C initializer string like "{.field1 = 0x03, .field2 = 0x30}" or None if can't introspect
    """
    try:
        # Check if this is actually a Structure type (not a Union)
        if not hasattr(data_type, 'getComponents'):
            return None
        if "Union" in data_type.__class__.__name__:
            # For unions, initialize via the first member only (C union initializer rule)
            components = data_type.getComponents() if hasattr(data_type, 'getComponents') else None
            if components and len(components) > 0:
                first_comp = components[0]
                first_comp_size = first_comp.getLength()
                # Pad or truncate raw bytes to match first component's size
                if len(raw_bytes) >= first_comp_size:
                    init_bytes = raw_bytes[:first_comp_size]
                else:
                    init_bytes = raw_bytes + [0] * (first_comp_size - len(raw_bytes))
                int_val = bytes_to_int_le(init_bytes)
                hex_str = format_int_by_size(int_val, first_comp_size)
                if first_comp_size == 8:
                    hex_str += "ULL"
                return "{%s}" % hex_str
            return None

        # For variable-length structs, we'll still initialize the defined fields
        # The trailing data beyond the struct definition will be noted in a comment
        struct_length = data_type.getLength() if hasattr(data_type, 'getLength') else 0
        is_variable_length = struct_length > 0 and len(raw_bytes) > struct_length
        trailing_bytes = len(raw_bytes) - struct_length if is_variable_length else 0

        components = data_type.getComponents()
        if not components:
            return None

        # Check for overlapping fields (indicates union-like structure) - skip these
        offsets_seen = set()
        for comp in components:
            offset = comp.getOffset()
            if offset in offsets_seen:
                # Overlapping fields - this is union-like, can't format properly
                return None
            offsets_seen.add(offset)

        field_values = []  # List of tuples: (field_name, value_string)
        for comp in components:
            offset = comp.getOffset()
            length = comp.getLength()
            comp_type = comp.getDataType()
            comp_type_name = comp_type.getName() if comp_type else ""

            # Get field name for designated initializers
            field_name = None
            if use_designated:
                try:
                    field_name = comp.getFieldName()
                    # Try alternative methods if getFieldName returns None
                    if not field_name:
                        # Some Ghidra versions use getName() instead
                        if hasattr(comp, 'getName'):
                            field_name = comp.getName()
                    # Generate placeholder name based on offset if still no name
                    if not field_name:
                        field_name = "field_0x%X" % offset
                    # Sanitize field name if needed
                    if field_name and not field_name.replace('_', '').isalnum():
                        field_name = "field_0x%X" % offset
                except:
                    field_name = "field_0x%X" % offset

            # Extract bytes for this field
            if offset + length > len(raw_bytes):
                # Not enough bytes, use 0
                field_bytes = [0] * length
            else:
                field_bytes = raw_bytes[offset:offset + length]

            # Check if this field is a pointer type
            is_pointer = (comp_type and "Pointer" in comp_type.__class__.__name__) or \
                         '*' in comp_type_name or \
                         comp_type_name.lower() in ('pointer', 'void*', 'char*')

            # Check if this field is a wide char array (WCHAR or wchar_t) or unicode string
            # Need to check both array type name AND drill down to element type
            # Also handle Ghidra's "unicode" type which may not be an Array class
            is_wchar_array = False
            wchar_elem_size = 0

            # First check if this is a unicode string type (not necessarily an array)
            if comp_type and 'unicode' in comp_type_name.lower() and length >= 2 and length % 2 == 0:
                is_wchar_array = True
                wchar_elem_size = 2

            if not is_wchar_array and comp_type and "Array" in comp_type.__class__.__name__:
                # First check the array type name (including display name)
                type_names_to_check = [comp_type_name]
                if hasattr(comp_type, 'getDisplayName'):
                    type_names_to_check.append(comp_type.getDisplayName())

                for name_to_check in type_names_to_check:
                    if name_to_check:
                        name_lower = name_to_check.lower()
                        if ('wchar' in name_lower or 'WCHAR' in name_to_check or 'unicode' in name_lower):
                            is_wchar_array = True
                            wchar_elem_size = 2
                            break

                if not is_wchar_array:
                    # Drill down to element type and check its name and size
                    try:
                        elem_type = comp_type
                        while hasattr(elem_type, 'getDataType'):
                            elem_type = elem_type.getDataType()
                        if elem_type:
                            elem_name = elem_type.getName() if hasattr(elem_type, 'getName') else ""
                            elem_display = elem_type.getDisplayName() if hasattr(elem_type, 'getDisplayName') else ""
                            elem_size = elem_type.getLength() if hasattr(elem_type, 'getLength') else 0
                            # Check for wchar_t, WCHAR, wchar16, unicode
                            for en in [elem_name, elem_display]:
                                if en:
                                    en_lower = en.lower()
                                    if ('wchar' in en_lower or 'WCHAR' in en or 'unicode' in en_lower):
                                        is_wchar_array = True
                                        wchar_elem_size = elem_size if elem_size else 2
                                        break
                            # Also check for 2-byte types like ushort/word/short that might be WCHAR
                            if not is_wchar_array and elem_size == 2:
                                if elem_name.lower() in ('ushort', 'word', 'short', 'undefined2', 'wchar16', 'unicode'):
                                    is_wchar_array = True
                                    wchar_elem_size = 2
                    except:
                        pass

            # Check if this field is a char array (string) - but NOT wchar
            is_char_array = (comp_type and "Array" in comp_type.__class__.__name__ and
                           'char' in comp_type_name.lower() and not is_wchar_array)
            # Detect if it's an unsigned char array (uchar, unsigned char, uint8_t, byte, etc.)
            is_unsigned_char_array = (is_char_array and
                                     ('uchar' in comp_type_name.lower() or
                                      'unsigned' in comp_type_name.lower() or
                                      'uint8' in comp_type_name.lower() or
                                      'byte' in comp_type_name.lower()))

            # Check if this field is a nested struct (but NOT a union - unions need different handling)
            # Unions in Ghidra have class name containing "Union"
            is_union = comp_type and "Union" in comp_type.__class__.__name__
            is_nested_struct = (comp_type and hasattr(comp_type, 'getComponents') and
                               not is_char_array and not is_pointer and not is_union)

            # Check if this field is an array (primitive or struct)
            is_primitive_array = False
            is_struct_array = False
            array_elem_type = None
            array_elem_size = 0
            primitive_elem_signed = True
            if comp_type and "Array" in comp_type.__class__.__name__ and not is_char_array:
                try:
                    elem_type = comp_type
                    while hasattr(elem_type, 'getDataType'):
                        elem_type = elem_type.getDataType()
                    elem_name = elem_type.getName().lower() if elem_type else ""
                    array_elem_size = elem_type.getLength() if hasattr(elem_type, 'getLength') else 0
                    # Check for int/short/long array types
                    if elem_name in ('int', 'uint', 'long', 'ulong', 'dword', 'short', 'ushort', 'word'):
                        is_primitive_array = True
                        primitive_elem_signed = 'u' not in elem_name and elem_name not in ('dword', 'word')
                    # Check for struct array types
                    elif elem_type and hasattr(elem_type, 'getComponents') and "Union" not in elem_type.__class__.__name__:
                        is_struct_array = True
                        array_elem_type = elem_type
                except:
                    pass

            # Check if this field is a float or double
            comp_type_lower = comp_type_name.lower()
            is_float = (length == 4 and comp_type_lower in ('float', 'd3dvalue'))
            is_double = (length == 8 and comp_type_lower in ('double', 'float10'))

            # Get the actual pointer type for casting (use void* as fallback)
            pointer_cast_type = "void*"
            if is_pointer and comp_type:
                # Try to get the actual type name from the component
                try:
                    actual_type = comp_type.getDisplayName() if hasattr(comp_type, 'getDisplayName') else comp_type_name
                    if actual_type and '*' in actual_type:
                        pointer_cast_type = actual_type
                except:
                    pass

            # Helper to append field with optional name
            def append_field(value):
                field_values.append((field_name, value))

            # Handle different field types
            if is_wchar_array:
                # Format WCHAR/wchar_t array as array of WORD values
                # Each WCHAR is 2 bytes (little-endian)
                word_values = []
                for i in range(0, len(field_bytes), 2):
                    if i + 2 <= len(field_bytes):
                        word_val = field_bytes[i] | (field_bytes[i + 1] << 8)
                        word_values.append("0x%04X" % word_val)
                    elif i < len(field_bytes):
                        # Odd byte at the end
                        word_values.append("0x%04X" % field_bytes[i])
                append_field("{%s}" % ", ".join(word_values))
            elif is_unsigned_char_array:
                # Unsigned char array - always use hex values (0x00-0xFF), never string literals
                byte_vals = ["0x%02X" % b for b in field_bytes]
                append_field("{%s}" % ", ".join(byte_vals))
            elif is_char_array:
                # Signed char array - try string literal first
                string_val = format_char_bytes_as_string(field_bytes)
                if string_val:
                    append_field(string_val)
                else:
                    # Fallback: convert values > 127 to signed to avoid narrowing
                    byte_vals = []
                    for b in field_bytes:
                        if b > 127:
                            byte_vals.append(str(b - 256))  # Convert to signed char equivalent
                        else:
                            byte_vals.append("0x%02X" % b)
                    append_field("{%s}" % ", ".join(byte_vals))
            elif is_nested_struct:
                # Recursively format nested struct with increased indentation
                nested_init = format_struct_initializer(comp_type, field_bytes, currentProgram, use_designated, indent_level + 1)
                if nested_init:
                    append_field(nested_init)
                else:
                    # Fallback to byte array
                    byte_vals = ["0x%02X" % b for b in field_bytes]
                    append_field("{%s}" % ", ".join(byte_vals))
            elif is_primitive_array and array_elem_size > 0:
                # Format primitive array (int[4], short[8], etc.) as proper array
                elem_values = []
                for i in range(0, len(field_bytes), array_elem_size):
                    if i + array_elem_size <= len(field_bytes):
                        elem_bytes = field_bytes[i:i + array_elem_size]
                        elem_val = bytes_to_int_le(elem_bytes)
                        if primitive_elem_signed:
                            elem_values.append(format_signed_int(elem_val, array_elem_size, "int"))
                        else:
                            elem_values.append(format_int_by_size(elem_val, array_elem_size))
                append_field("{%s}" % ", ".join(elem_values))
            elif is_struct_array and array_elem_size > 0 and array_elem_type:
                # Format struct array (SMRGLVertex[4], etc.) by recursively formatting each element
                struct_values = []
                for i in range(0, len(field_bytes), array_elem_size):
                    if i + array_elem_size <= len(field_bytes):
                        elem_bytes = field_bytes[i:i + array_elem_size]
                        struct_init = format_struct_initializer(array_elem_type, elem_bytes, currentProgram, use_designated, indent_level + 1)
                        if struct_init:
                            struct_values.append(struct_init)
                        else:
                            # Fallback to byte array for this element
                            byte_vals = ["0x%02X" % b for b in elem_bytes]
                            struct_values.append("{%s}" % ", ".join(byte_vals))
                append_field("{%s}" % ", ".join(struct_values))
            elif is_float:
                # Convert bytes to float literal
                import struct
                try:
                    float_val = struct.unpack('<f', bytes(field_bytes))[0]
                    import math
                    if math.isinf(float_val):
                        formatted = "INFINITY" if float_val > 0 else "(-INFINITY)"
                    elif math.isnan(float_val):
                        formatted = "NAN"
                    else:
                        formatted = "%.8g" % float_val
                        if '.' not in formatted and 'e' not in formatted and 'E' not in formatted:
                            formatted += ".0"
                        formatted += "f"
                    append_field(formatted)
                except:
                    append_field(format_int_by_size(bytes_to_int_le(field_bytes), length))
            elif is_double:
                # Convert bytes to double literal
                import struct
                try:
                    double_val = struct.unpack('<d', bytes(field_bytes))[0]
                    import math
                    if math.isinf(double_val):
                        formatted = "INFINITY" if double_val > 0 else "(-INFINITY)"
                    elif math.isnan(double_val):
                        formatted = "NAN"
                    else:
                        formatted = "%.17g" % double_val
                    append_field(formatted)
                except:
                    append_field(format_int_by_size(bytes_to_int_le(field_bytes), length))
            elif length <= 8:
                val = bytes_to_int_le(field_bytes)
                if is_pointer:
                    # For pointer fields, use nullptr for 0 or try to resolve symbol
                    if val == 0:
                        append_field("nullptr")
                    else:
                        # Try to resolve pointer to a symbol (function or global)
                        usable_sym = None
                        if currentProgram:
                            usable_sym, _ = resolve_pointer_to_symbol(currentProgram, val)
                        if usable_sym:
                            append_field("(%s)%s" % (pointer_cast_type, usable_sym))
                        else:
                            append_field("(%s)%s" % (pointer_cast_type, format_int_by_size(val, length)))
                else:
                    # Use signed-aware formatting to avoid narrowing conversion errors
                    append_field(format_signed_int(val, length, comp_type_name))
            else:
                # For other large fields, output as byte array
                byte_vals = ["0x%02X" % b for b in field_bytes]
                append_field("{%s}" % ", ".join(byte_vals))

        # Format the final initializer string
        # Use multi-line format if we have 3+ fields or any nested structs
        has_nested = any('{' in value for _, value in field_values)
        use_multiline = len(field_values) >= 3 or has_nested

        # Calculate indentation strings
        indent = "    " * indent_level
        prev_indent = "    " * (indent_level - 1) if indent_level > 0 else ""

        # Use designated initializers (all fields now have names - either from Ghidra or generated)
        if use_designated:
            # Use designated initializer syntax: {.field1 = val1, .field2 = val2}
            formatted_fields = []
            for name, value in field_values:
                formatted_fields.append(".%s = %s" % (name, value))

            if use_multiline:
                result = "{\n" + indent + (",\n" + indent).join(formatted_fields) + "\n" + prev_indent + "}"
            else:
                result = "{" + ", ".join(formatted_fields) + "}"
        else:
            # Use positional syntax: {val1, val2}
            values = [value for _, value in field_values]
            if use_multiline:
                result = "{\n" + indent + (",\n" + indent).join(values) + "\n" + prev_indent + "}"
            else:
                result = "{" + ", ".join(values) + "}"

        # Add comment for variable-length structs
        if is_variable_length and trailing_bytes > 0:
            result += " /* +%d trailing bytes */" % trailing_bytes

        return result
    except Exception:
        return None


def format_char_bytes_as_string(field_bytes):
    """Format a char array's bytes as a C string literal.

    Args:
        field_bytes: List of byte values

    Returns:
        A quoted string like '"hello"' or None if not a valid string
    """
    # Find null terminator
    null_pos = -1
    for i, b in enumerate(field_bytes):
        if b == 0:
            null_pos = i
            break

    # Extract string bytes (up to null or all if no null)
    if null_pos == -1:
        string_bytes = field_bytes
    else:
        string_bytes = field_bytes[:null_pos]

    # Check if printable
    string_chars = []
    for b in string_bytes:
        if 32 <= b <= 126:
            string_chars.append(chr(b))
        elif b in (9, 10, 13):  # Tab, newline, carriage return
            string_chars.append(chr(b))
        else:
            # Non-printable - not a valid string
            return None

    string_val = ''.join(string_chars)
    escaped = escape_c_string(string_val)
    return '"%s"' % escaped


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


def extract_globals_and_constants(currentProgram, string_map=None, write_xref_addrs=None):
    """Extract global variables and constants from the program.

    Args:
        currentProgram: The Ghidra program
        string_map: Optional map of address hex strings to escaped string values
        write_xref_addrs: Optional set of addresses (lowercase hex) that have write xrefs.
                          If provided, addresses with write xrefs are classified as globals.

    Returns:
        Tuple of (globals_list, constants_list)
    """
    if write_xref_addrs is None:
        write_xref_addrs = set()
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

        # Raw resource types - these are just byte blobs, output as BYTE arrays
        RAW_RESOURCE_TYPES = (
            'IconResource', 'MenuResource', 'GroupIconResource',
        )
        # Variable-length PE types with struct fields (use designated initializers)
        VARIABLE_LENGTH_PE_TYPES = (
            'VS_VERSION_INFO', 'StringFileInfo', 'StringInfo', 'StringTable',
            'Var', 'VarFileInfo',
        )
        # Complex PE header types with nested arrays
        COMPLEX_PE_HEADER_TYPES = (
            'IMAGE_NT_HEADERS32', 'IMAGE_NT_HEADERS64', 'IMAGE_OPTIONAL_HEADER32',
            'IMAGE_OPTIONAL_HEADER64',
        )
        base_type_for_check = type_name.split('[')[0].strip()
        is_raw_resource_type = base_type_for_check in RAW_RESOURCE_TYPES
        is_variable_length_type = base_type_for_check in VARIABLE_LENGTH_PE_TYPES
        is_complex_pe_header = base_type_for_check in COMPLEX_PE_HEADER_TYPES
        is_guid_type = base_type_for_check in ('GUID', 'IID', 'CLSID')

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
        comment_value = None  # For symbol comments on pointer values
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

        # Handle GUID types with proper formatting
        if is_guid_type and raw_bytes is not None and len(raw_bytes) == 16:
            is_initialized = True
            guid_init = format_guid_initializer(raw_bytes)
            if guid_init:
                initializer_value = guid_init
            else:
                initializer_value = "{}"

        # Handle raw resource types - convert to BYTE arrays
        elif is_raw_resource_type and has_nonzero_bytes and raw_bytes is not None:
            is_initialized = True
            # Change type to BYTE array
            type_name = "BYTE[%d]" % len(raw_bytes)
            # Format as byte array initializer
            hex_values = ["0x%02X" % b for b in raw_bytes]
            if len(hex_values) <= 16:
                initializer_value = "{%s}" % ", ".join(hex_values)
            else:
                # Multi-line for larger arrays
                lines = []
                for i in range(0, len(hex_values), 16):
                    chunk = hex_values[i:i+16]
                    lines.append(", ".join(chunk))
                initializer_value = "{\n    " + ",\n    ".join(lines) + "\n}"

        # Handle variable-length types - try struct initializer first, then fallback to empty
        elif is_variable_length_type and has_nonzero_bytes and raw_bytes is not None:
            is_initialized = True
            # Try to build proper struct initializer (now handles variable-length structs)
            struct_init = format_struct_initializer(data_type, raw_bytes, currentProgram)
            if struct_init:
                initializer_value = struct_init
            else:
                initializer_value = "{}"
        elif ghidra_value is not None:
            is_initialized = True
        elif has_nonzero_bytes and raw_bytes is not None:
            is_initialized = True
            # Check if this is a struct type (not array, not primitive, not pointer/pointer typedef)
            # For struct types, byte-by-byte initializers cause "excess elements" warnings
            is_ptr_typedef = is_pointer_typedef(data_type, type_name)
            is_struct_type = (not is_array_type and
                              not is_primitive_type(type_name) and
                              not type_name.endswith('*') and
                              not is_ptr_typedef)
            if is_struct_type:
                # Try to build proper struct initializer by introspecting fields
                struct_init = format_struct_initializer(data_type, raw_bytes, currentProgram)
                if struct_init:
                    initializer_value = struct_init
                else:
                    # Fallback: try to generate DWORD-based initializers for structs
                    # that are multiples of 4 bytes (common for PE structs)
                    if len(raw_bytes) > 0 and len(raw_bytes) % 4 == 0:
                        dword_values = []
                        for i in range(0, len(raw_bytes), 4):
                            dword_val = bytes_to_int_le(raw_bytes[i:i+4])
                            dword_values.append("0x%08X" % dword_val)
                        initializer_value = "{%s}" % ", ".join(dword_values)
                    else:
                        # Last resort: output as byte array comment
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

                    # Check for char array types - handle these BEFORE falling back to byte arrays
                    is_2d_char_array = "char" in type_name.lower() and type_name.count("[") >= 2 and "*" not in type_name
                    is_1d_char_array = "char" in type_name.lower() and type_name.count("[") == 1 and not is_pointer_array
                    is_char_pointer_array = is_pointer_array and "char" in type_name.lower()

                    if is_2d_char_array:
                        # 2D char array (e.g., char[12][4]) - format as array of string literals
                        embedded_content = format_2d_char_array(raw_bytes, type_name)
                        if embedded_content:
                            initializer_value = embedded_content
                        else:
                            # Fallback to bytes if not valid strings
                            hex_values = ["0x%02X" % b for b in raw_bytes]
                            initializer_value = format_array_initializer(hex_values, vals_per_line=16)

                    elif is_1d_char_array:
                        # 1D char array (e.g., char[17]) - format as string literal
                        string_content = format_1d_char_array_as_string(raw_bytes)
                        if string_content:
                            initializer_value = string_content
                        else:
                            # Fallback to bytes if not valid string
                            hex_values = ["0x%02X" % b for b in raw_bytes]
                            initializer_value = format_array_initializer(hex_values, vals_per_line=16)

                    elif is_char_pointer_array:
                        # char*[] array - resolve pointers to string literals
                        string_content = format_char_pointer_array(currentProgram, raw_bytes, type_name, string_map)
                        if string_content:
                            initializer_value = string_content
                        else:
                            # Fallback to pointer array format
                            element_type = type_name
                            if '[' in element_type:
                                element_type = element_type[:element_type.index('[')].strip()
                            ptr_size = 4
                            ptr_values = []
                            for i in range(0, len(raw_bytes), ptr_size):
                                if i + ptr_size <= len(raw_bytes):
                                    ptr_bytes = raw_bytes[i:i+ptr_size]
                                    ptr_val = bytes_to_int_le(ptr_bytes)
                                    if ptr_val == 0:
                                        ptr_values.append("nullptr")
                                    else:
                                        ptr_values.append("(%s)0x%08X" % (element_type, ptr_val))
                            initializer_value = format_array_initializer(ptr_values, vals_per_line=4)

                    elif type_name.count("[") >= 2:
                        # Multi-dimensional array (not char) - format with nested braces
                        # Get the innermost element type and size
                        # Traverse array types but stop at non-array types (like pointers)
                        innermost_type = elem_type
                        while innermost_type and hasattr(innermost_type, 'getDataType'):
                            # Stop if this is not an array type (e.g., it's a pointer)
                            if "Array" not in innermost_type.__class__.__name__:
                                break
                            inner = innermost_type.getDataType()
                            if inner:
                                innermost_type = inner
                            else:
                                break
                        if innermost_type and hasattr(innermost_type, 'getLength'):
                            inner_size = innermost_type.getLength()
                            inner_name = innermost_type.getName() if hasattr(innermost_type, 'getName') else ""
                            multidim_init = format_multidim_array(raw_bytes, type_name, inner_size, inner_name,
                                                                  currentProgram=currentProgram, string_map=string_map)
                            if multidim_init:
                                initializer_value = multidim_init
                            else:
                                hex_values = ["0x%02X" % b for b in raw_bytes]
                                initializer_value = format_array_initializer(hex_values, vals_per_line=16)
                        else:
                            hex_values = ["0x%02X" % b for b in raw_bytes]
                            initializer_value = format_array_initializer(hex_values, vals_per_line=16)

                    elif is_double_array:
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
                        # Extract element type from array type (e.g., "void*[10]" -> "void*")
                        element_type = type_name
                        if '[' in element_type:
                            element_type = element_type[:element_type.index('[')].strip()
                        ptr_size = 4
                        ptr_values = []
                        for i in range(0, len(raw_bytes), ptr_size):
                            if i + ptr_size <= len(raw_bytes):
                                ptr_bytes = raw_bytes[i:i+ptr_size]
                                ptr_val = bytes_to_int_le(ptr_bytes)
                                if ptr_val == 0:
                                    ptr_values.append("nullptr")
                                else:
                                    # Try to resolve to a symbol
                                    usable_sym, comment_sym = resolve_pointer_to_symbol(currentProgram, ptr_val)
                                    if usable_sym:
                                        ptr_values.append("(%s)%s" % (element_type, usable_sym))
                                    else:
                                        ptr_values.append("(%s)0x%08X" % (element_type, ptr_val))
                        initializer_value = format_array_initializer(ptr_values, vals_per_line=4)

                    elif elem_type and hasattr(elem_type, 'getComponents'):
                        # Struct array - format each element as a struct initializer
                        elem_size = elem_type.getLength() if hasattr(elem_type, 'getLength') else 0
                        if elem_size > 0:
                            struct_values = []
                            for i in range(0, len(raw_bytes), elem_size):
                                if i + elem_size <= len(raw_bytes):
                                    elem_bytes = raw_bytes[i:i + elem_size]
                                    # Use indent_level=2 since array elements are nested inside the array
                                    struct_init = format_struct_initializer(elem_type, elem_bytes, currentProgram, True, 2)
                                    if struct_init:
                                        struct_values.append(struct_init)
                                    else:
                                        # Fallback to byte array for this element
                                        byte_vals = ["0x%02X" % b for b in elem_bytes]
                                        struct_values.append("{%s}" % ", ".join(byte_vals))
                            if struct_values:
                                initializer_value = format_array_initializer(struct_values, vals_per_line=1)
                            else:
                                # Fallback to byte array
                                hex_values = ["0x%02X" % b for b in raw_bytes]
                                initializer_value = format_array_initializer(hex_values, vals_per_line=16)
                        else:
                            # Unknown element size, fallback to bytes
                            hex_values = ["0x%02X" % b for b in raw_bytes]
                            initializer_value = format_array_initializer(hex_values, vals_per_line=16)

                    elif elem_type and hasattr(elem_type, 'getLength'):
                        # Integer/scalar array - group bytes by element size
                        elem_size = elem_type.getLength()
                        # Try to resolve typedef to base type for signed-ness check
                        base_elem_type = elem_type
                        while base_elem_type and hasattr(base_elem_type, 'getBaseDataType'):
                            base_elem_type = base_elem_type.getBaseDataType()
                        elem_type_name_for_sign = base_elem_type.getName() if base_elem_type and hasattr(base_elem_type, 'getName') else ""
                        if not elem_type_name_for_sign:
                            elem_type_name_for_sign = elem_type.getName() if hasattr(elem_type, 'getName') else ""
                        if elem_size > 1 and elem_size <= 8:
                            int_values = []
                            for i in range(0, len(raw_bytes), elem_size):
                                if i + elem_size <= len(raw_bytes):
                                    elem_bytes = raw_bytes[i:i + elem_size]
                                    int_val = bytes_to_int_le(elem_bytes)
                                    int_values.append(format_signed_int(int_val, elem_size, elem_type_name_for_sign))
                            if int_values:
                                initializer_value = format_array_initializer(int_values, vals_per_line=8)
                            else:
                                hex_values = ["0x%02X" % b for b in raw_bytes]
                                initializer_value = format_array_initializer(hex_values, vals_per_line=16)
                        else:
                            # Single byte elements or unknown - output as bytes
                            hex_values = ["0x%02X" % b for b in raw_bytes]
                            initializer_value = format_array_initializer(hex_values, vals_per_line=16)

                    else:
                        # Regular array - byte values
                        hex_values = ["0x%02X" % b for b in raw_bytes]
                        initializer_value = format_array_initializer(hex_values, vals_per_line=16)
                elif is_pointer_typedef:
                    # Pointer typedef (HANDLE, HWND, etc.) - format as pointer value with cast
                    int_val = bytes_to_int_le(raw_bytes)
                    if int_val == 0:
                        initializer_value = "nullptr"
                    else:
                        initializer_value = "(%s)0x%X" % (type_name, int_val)
                else:
                    # Other scalar types - try to convert to single value
                    int_val = bytes_to_int_le(raw_bytes)
                    initializer_value = "0x%X" % int_val
        elif is_array_type and data_length > 0:
            is_initialized = True
            initializer_value = "{}"

        if ghidra_value is not None:
            # Handle raw resource types first - convert to BYTE arrays
            if is_raw_resource_type:
                # Extract bytes from ghidra_value string representation
                str_val = get_str(ghidra_value)
                if str_val:
                    byte_values = [ord(c) & 0xFF for c in str_val[:data_length]]
                    # Pad if needed
                    while len(byte_values) < data_length:
                        byte_values.append(0)
                elif raw_bytes:
                    byte_values = raw_bytes
                else:
                    byte_values = []

                if byte_values:
                    type_name = "BYTE[%d]" % len(byte_values)
                    hex_values = ["0x%02X" % b for b in byte_values]
                    if len(hex_values) <= 16:
                        initializer_value = "{%s}" % ", ".join(hex_values)
                    else:
                        lines = []
                        for i in range(0, len(hex_values), 16):
                            chunk = hex_values[i:i+16]
                            lines.append(", ".join(chunk))
                        initializer_value = "{\n    " + ",\n    ".join(lines) + "\n}"

            elif "char" in type_name.lower() and data_length == 1:
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

            elif "float" in type_name.lower() and "[" not in type_name:
                # Single float value (not an array)
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

            elif "double" in type_name.lower() and "[" not in type_name:
                # Single double value (not an array)
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
                    # Use L"" prefix for wide string types (TerminatedUnicode, wchar_t*, etc.)
                    is_wide_string = 'unicode' in type_name.lower() or 'wchar' in type_name.lower()
                    if is_wide_string:
                        initializer_value = 'L"%s"' % escaped
                    else:
                        initializer_value = '"%s"' % escaped
                else:
                    is_wide_string = 'unicode' in type_name.lower() or 'wchar' in type_name.lower()
                    initializer_value = 'L""' if is_wide_string else '""'

            elif (type_name.startswith("char*[") or
                  type_name.startswith("char *[") or
                  "char*[" in type_name or
                  "char *[" in type_name or
                  re.match(r'.*char\s*\*\s*\[', type_name)):
                embedded_content = None
                if has_nonzero_bytes and raw_bytes:
                    # Try new helper with string_map first for better resolution
                    embedded_content = format_char_pointer_array(currentProgram, raw_bytes, type_name, string_map)
                    # Fall back to original function if needed
                    if not embedded_content:
                        embedded_content = format_char_array_as_c_strings(currentProgram, raw_bytes, type_name, string_map)
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
                            initializer_value, comment_value = format_pointer_initializer(currentProgram, int_val, type_name)
                        except ValueError:
                            initializer_value = str_val
                    else:
                        initializer_value = "nullptr"

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
                elif has_nonzero_bytes and raw_bytes:
                    # Non-printable char array (e.g., XOR-encoded data) - output as hex bytes
                    # Check if unsigned char - no cast needed for uchar/unsigned char
                    type_lower = type_name.lower()
                    is_unsigned = 'uchar' in type_lower or 'unsigned' in type_lower
                    if is_unsigned:
                        # Unsigned char - no cast needed, values 0-255 are valid
                        byte_vals = ["0x%02X" % b for b in raw_bytes]
                        initializer_value = format_array_initializer(byte_vals, vals_per_line=16)
                    else:
                        # Signed char - use cast to avoid narrowing for values > 127
                        byte_vals = ["(char)0x%02X" % b for b in raw_bytes]
                        initializer_value = format_array_initializer(byte_vals, vals_per_line=12)
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
                        initializer_value, comment_value = format_pointer_initializer(currentProgram, int_val, type_name)
                    except ValueError:
                        initializer_value = str_val
                else:
                    initializer_value = "nullptr"

            elif is_pointer_typedef(data_type, type_name):
                # Pointer typedef (HANDLE, HWND, etc.) - format as single pointer value
                if has_nonzero_bytes and raw_bytes:
                    int_val = bytes_to_int_le(raw_bytes)
                    if int_val == 0:
                        initializer_value = "nullptr"
                    else:
                        initializer_value = "(%s)0x%X" % (type_name, int_val)
                else:
                    initializer_value = "nullptr"

            elif data_length <= 8 and any(t in type_name.lower() for t in ["int", "word", "dword", "qword", "byte", "short", "long"]):
                int_val = get_int(ghidra_value, default_val=None)
                if int_val is not None:
                    if int_val >= 0x100:
                        initializer_value = "0x%X" % int_val
                    elif int_val == 0:
                        initializer_value = "0"
                    else:
                        initializer_value = str(int_val)
                else:
                    # Try to get integer from raw string representation
                    str_val = get_safe_str(ghidra_value)
                    if str_val:
                        # Check if it's a single character (Ghidra sometimes returns byte as char)
                        if len(str_val) == 1:
                            initializer_value = "0x%02X" % ord(str_val)
                        elif str_val.startswith("0x") or str_val.startswith("0X"):
                            initializer_value = str_val
                        else:
                            try:
                                initializer_value = str(int(str_val))
                            except ValueError:
                                initializer_value = "0x%02X" % ord(str_val[0]) if str_val else "0"
                    else:
                        initializer_value = "0"

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
                # Check for multi-dimensional arrays first
                if type_name.count("[") >= 2 and "char" not in type_name.lower() and has_nonzero_bytes and raw_bytes:
                    # Multi-dimensional array - format with nested braces
                    # Get the innermost element type and size
                    # Traverse array types but stop at non-array types (like pointers)
                    elem_type = data_type.getDataType() if hasattr(data_type, 'getDataType') else None
                    innermost_type = elem_type
                    while innermost_type and hasattr(innermost_type, 'getDataType'):
                        # Stop if this is not an array type (e.g., it's a pointer)
                        if "Array" not in innermost_type.__class__.__name__:
                            break
                        inner = innermost_type.getDataType()
                        if inner:
                            innermost_type = inner
                        else:
                            break
                    if innermost_type and hasattr(innermost_type, 'getLength'):
                        inner_size = innermost_type.getLength()
                        inner_name = innermost_type.getName() if hasattr(innermost_type, 'getName') else ""
                        multidim_init = format_multidim_array(raw_bytes, type_name, inner_size, inner_name)
                        if multidim_init:
                            initializer_value = multidim_init

                if not initializer_value:
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
            elif not is_primitive_type(type_name) and not type_name.endswith('*'):
                # Non-primitive, non-pointer types (structs/classes) - use empty initializer
                initializer_value = "{}"
            elif type_name.endswith('*'):
                # Pointer types - use nullptr
                initializer_value = "nullptr"
            else:
                # Primitive types (int, char, etc.) - use 0
                initializer_value = "0"

        entry = {
            'name': name,
            'type': type_name,
            'address': str(addr),
            'size': data_type.getLength(),
            'is_initialized': is_initialized,
            'initializer': initializer_value,
            'comment': comment_value
        }

        is_constant = False
        # Check if this address has write xrefs - if so, it's definitely mutable (global)
        addr_hex = str(addr).lower()
        has_write_xref = addr_hex in write_xref_addrs

        if has_write_xref:
            # Address is written to, so it must be a mutable global
            is_constant = False
        # Name-based classification (strong indicators for string literals)
        elif name.startswith("STR_") or name.startswith("s_") or name.startswith("CONST_"):
            is_constant = True
        # Content-based classification - only treat as constant if there's actual non-zero data
        # Zero-initialized data is likely a mutable buffer/table that gets filled at runtime
        elif has_nonzero_bytes:
            if is_initialized and data_type.getLength() <= 8 and name.startswith("DAT_"):
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


def generate_constants_file(constants_list, type_to_path_map=None, needed_prototype_ranges=None):
    """Generate a header file with constant definitions.

    Args:
        constants_list: List of constant entries
        type_to_path_map: Optional map of type names to header paths for includes
        needed_prototype_ranges: Optional set of prototype range keys to include

    Returns:
        Header file content as a string
    """
    content = []
    content.append("#pragma once")

    # Collect type dependencies from constants
    needed_includes = set()
    basetypes = get_types_needing_basetypes()
    needs_math_h = False
    needs_globals_h = False
    needs_constants_h = False

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
                # Check if initializer references a global variable (& prefix or g_ prefix)
                if init_val.startswith('&') or 'g_' in init_val:
                    needs_globals_h = True
                # Check if initializer references a string constant (s_ or STR_ prefix)
                if 's_' in init_val or 'STR_' in init_val:
                    needs_constants_h = True

    if needed_includes or needs_math_h or needs_globals_h or needs_constants_h or needed_prototype_ranges:
        content.append("")
        content.append("// Dependencies")
        # Put math.h first if needed (for INFINITY/NAN macros)
        if needs_math_h:
            content.append('#include <math.h>')
        # Put basetypes.h next if present
        if "system/basetypes.h" in needed_includes:
            content.append('#include "system/basetypes.h"')
            needed_includes.remove("system/basetypes.h")
        # Include globals.h if any initializer references global variables
        if needs_globals_h:
            content.append('#include "globals.h"')
        # Include constants.h if any initializer references string constants from other files
        if needs_constants_h:
            content.append('#include "constants.h"')
        # Include prototype headers for referenced functions
        if needed_prototype_ranges:
            for range_key in sorted(needed_prototype_ranges):
                range_filename = "prototypes_%s.h" % range_key.replace("0x", "")
                content.append('#include "prototypes/%s"' % range_filename)
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
                initializer = const['initializer']
                # Skip jump table entries with switch case label references
                if re.search(r'&case_\d+', initializer):
                    content.append("// %s %s = %s; // jump table entry (not exportable)" % (base_type, full_var_name, initializer))
                    continue
                # Fix void* arithmetic: (void*)(char*)(...)+N -> (void*)((char*)(...)+N)
                # Clang treats void* arithmetic as a hard error in C++ mode
                initializer = re.sub(
                    r'\(void\s*\*\)\s*(\(char\s*\*\)\([^)]*\))\s*([+\-]\s*\d+)',
                    r'(void *)(\1\2)',
                    initializer
                )
                # For char arrays initialized with string literals, omit array size
                # to let compiler determine correct size (including null terminator)
                if ('char' in base_type.lower() and '[' in full_var_name and
                    (initializer.startswith('"') or initializer.startswith('L"'))):
                    # Remove array dimensions from variable name
                    var_name_no_dims = full_var_name.split('[')[0] + '[]'
                    line = "static %s %s = %s;" % (base_type, var_name_no_dims, initializer)
                else:
                    line = "static %s %s = %s;" % (base_type, full_var_name, initializer)
                if const.get('comment'):
                    line += " // %s" % const['comment']
                content.append(line)
            else:
                content.append("// extern %s %s; // No initializer found" % (base_type, full_var_name))
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

    # Group globals by type for better organization
    type_groups = {}
    for global_var in globals_list:
        type_name = global_var['type']
        if type_name not in type_groups:
            type_groups[type_name] = []
        type_groups[type_name].append(global_var)

    # Output each type group with a comment header
    for type_name in sorted(type_groups.keys()):
        content.append("// %s" % type_name)
        for global_var in type_groups[type_name]:
            # Format the declaration correctly (handles array types)
            base_type, full_var_name = format_variable_declaration(global_var['type'], global_var['name'])
            content.append("extern %s %s;" % (base_type, full_var_name))
        content.append("")  # Blank line after each type group

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
    content.append('#include "nocturne.h"')
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

    # Group globals by type for better organization
    type_groups = {}
    for global_var in globals_list:
        type_name = global_var['type']
        if type_name not in type_groups:
            type_groups[type_name] = []
        type_groups[type_name].append(global_var)

    # Output each type group with a comment header
    for type_name in sorted(type_groups.keys()):
        content.append("// %s" % type_name)
        for global_var in type_groups[type_name]:
            # Format the declaration correctly (handles array types)
            base_type, full_var_name = format_variable_declaration(global_var['type'], global_var['name'])

            # DLL import function pointers: initialize to nullptr instead of
            # raw import table addresses. These are wired up at runtime by
            # shim_init (shims/shim_init.cpp).
            if _is_import_function_pointer(base_type, global_var.get('initializer', '')):
                comment = global_var.get('comment', '')
                line = "%s %s = nullptr;" % (base_type, full_var_name)
                if comment:
                    line += " // %s" % comment
                content.append(line)
            elif global_var['is_initialized'] and global_var['initializer']:
                initializer = global_var['initializer']
                # For char arrays initialized with string literals, omit array size
                # to let compiler determine correct size (including null terminator)
                if ('char' in base_type.lower() and '[' in full_var_name and
                    (initializer.startswith('"') or initializer.startswith('L"'))):
                    # Remove array dimensions from variable name
                    var_name_no_dims = full_var_name.split('[')[0] + '[]'
                    line = "%s %s = %s;" % (base_type, var_name_no_dims, initializer)
                else:
                    line = "%s %s = %s;" % (base_type, full_var_name, initializer)
                if global_var.get('comment'):
                    line += " // %s" % global_var['comment']
                content.append(line)
            else:
                # Add explicit zero-initialization for uninitialized globals
                content.append("%s %s = {};" % (base_type, full_var_name))
        content.append("")  # Blank line after each type group
    return "\n".join(content)


def _is_import_function_pointer(base_type, initializer):
    """Check if a global variable is a DLL import function pointer.

    These are function pointer globals from the binary's import table,
    initialized to raw addresses like (SLEEP_FUNC*)0x00212228.
    They should be nullptr-initialized and wired up by shim_init at runtime.

    Args:
        base_type: The formatted base type (e.g., "SLEEP_FUNC*")
        initializer: The initializer string (e.g., "(SLEEP_FUNC*)0x00212228")

    Returns:
        True if this is a DLL import function pointer
    """
    if not base_type or not initializer:
        return False
    # Match types ending in _FUNC* (the naming convention for all DLL import
    # function pointer typedefs: SLEEP_FUNC*, CREATE_FILE_A_FUNC*,
    # GET_TEXT_EXTENT_POINT32_A_FUNC*, etc.)
    if not base_type.rstrip().endswith('_FUNC*'):
        return False
    # Verify the initializer is a raw address cast, not a real symbol reference
    # Import table addresses look like (TYPE*)0xADDRESS
    if ')0x' in initializer or ')0X' in initializer:
        return True
    return False


def extract_all_function_prototypes(currentProgram):
    """Extract all function prototypes from the program.

    Args:
        currentProgram: The Ghidra program

    Returns:
        List of function entries with name, address, signature, c_name, convention
    """
    from ghidra_annotations.annotations import is_function_external

    # Iterate through all the functions to build prototype list
    functions_list = []
    function_manager = currentProgram.getFunctionManager()
    for func in function_manager.getFunctions(True):

        # Skip external/imported functions
        if is_function_external(currentProgram, func):
            continue

        # Get function info
        func_name = func.getName()
        func_addr = str(func.getEntryPoint())
        func_signature = func.getPrototypeString(True, False)

        # Get calling convention (skip "unknown" as it's not a valid C convention)
        calling_convention = func.getCallingConventionName()
        if calling_convention and calling_convention.lower() == "unknown":
            calling_convention = None
        elif calling_convention and not calling_convention.startswith("__"):
            calling_convention = "__" + calling_convention

        # Generate the C-compatible name (dots replaced with underscores)
        c_name = func_name.replace('.', '_')

        # Also fix the signature to use the C-compatible name
        if func_signature:
            c_signature = func_signature.replace(func_name, c_name)
        else:
            c_signature = "void %s(void)" % c_name

        # Normalize prototype for C compatibility:
        # 1. Remove "__unknown" calling convention (not valid C)
        # 2. Change empty params "()" to "(void)" for proper C declaration
        # Note: Keep "undefined" return type as-is - it means unknown, not void
        if c_signature:
            # Remove __unknown calling convention if present
            c_signature = c_signature.replace('__unknown ', '')
            # Normalize empty parameter list to (void) for proper C declaration
            # Match funcname() but not funcname(void) or funcname(params)
            c_signature = re.sub(r'(\w+)\(\)$', r'\1(void)', c_signature)
            c_signature = re.sub(r'(\w+)\(\);$', r'\1(void);', c_signature)

        # Insert calling convention into signature after return type
        # Signature format: "return_type function_name(params)"
        # Target format: "return_type __convention function_name(params)"
        if calling_convention and c_signature:
            c_signature = insert_calling_convention(c_signature, calling_convention)

        # Add extracted function
        functions_list.append({
            'name': func_name,
            'c_name': c_name,
            'address': func_addr,
            'signature': c_signature,
            'convention': calling_convention
        })
    log_info("Extracted %d function prototypes" % len(functions_list))
    return functions_list


def insert_calling_convention(signature, convention):
    """Insert calling convention into a function signature.

    Takes a signature like "void funcname(int x)" and returns
    "void __convention funcname(int x)".

    Args:
        signature: The function signature string
        convention: The calling convention name (e.g., "__watcallRegister")

    Returns:
        Signature with calling convention inserted after return type
    """
    if not convention or not signature:
        return signature

    # The signature format is: "return_type [modifiers] func_name(params)"
    # We need to find where the function name starts (last word before '(')
    # and insert the convention before it

    # Find the opening parenthesis
    paren_idx = signature.find('(')
    if paren_idx == -1:
        return signature

    # Get the part before the parenthesis
    prefix = signature[:paren_idx].rstrip()
    params = signature[paren_idx:]

    # Find the last space - the function name is after it
    last_space_idx = prefix.rfind(' ')
    if last_space_idx == -1:
        # No space found, signature might just be "funcname()"
        return convention + " " + signature

    # Split into return type part and function name
    return_type_part = prefix[:last_space_idx + 1]  # Include trailing space
    func_name = prefix[last_space_idx + 1:]

    # Check if calling convention is already in the signature
    # (some signatures may already include it)
    if convention in return_type_part:
        return signature

    # Insert calling convention between return type and function name
    return return_type_part + convention + " " + func_name + params


def extract_types_from_signature(signature):
    """Extract type names from a function signature.

    Args:
        signature: Function signature string

    Returns:
        Set of type names found in the signature
    """
    types_found = set()

    # Remove the function name and get just the types
    # Signature format: "return_type func_name(param_type1 param1, param_type2 param2, ...)"

    # Common primitive types and modifiers to skip
    primitives = {
        'void', 'int', 'char', 'short', 'long', 'float', 'double',
        'signed', 'unsigned', 'const', 'volatile', 'static', 'extern',
        'bool', 'size_t', 'ssize_t', 'ptrdiff_t', 'wchar_t',
    }

    # Extract all potential type identifiers (words that aren't primitives)
    # Match word boundaries but handle pointer/reference markers
    words = re.findall(r'\b([A-Za-z_][A-Za-z0-9_]*)\b', signature)

    for word in words:
        # Skip primitives and common modifiers
        if word.lower() in primitives or word in primitives:
            continue
        # Skip calling conventions (anything starting with double underscore)
        if word.startswith('__'):
            continue
        # Skip parameter names (heuristic: lowercase single words after type)
        # Skip function names (contain FUN_ or are the declared name)
        if 'FUN_' in word or word.startswith('param') or word.startswith('local'):
            continue
        # Skip common C types
        if word in {'NULL', 'TRUE', 'FALSE', 'nullptr'}:
            continue
        # This might be a custom type
        types_found.add(word)

    return types_found


def _find_funcdef_params(signature, funcdef_types, funcptr_typedefs):
    """Find parameter indices that use function definition types.

    Detects parameters whose type is a funcdef (function typedef) so they
    can be replaced with template type parameters. This allows callers to
    pass function pointers with compatible-but-not-identical signatures
    (e.g., a factory returning CAmmo* where CDemonActor_FactoryFunc* = void*(*)(void)
    is expected).

    Args:
        signature: Function signature string (without trailing semicolon)
        funcdef_types: Set of type names from types/funcdefs/ directory
        funcptr_typedefs: Set of additional known function-pointer typedef names

    Returns:
        List of parameter indices (0-based) that have funcdef types
    """
    paren_start = signature.find('(')
    paren_end = signature.rfind(')')
    if paren_start == -1 or paren_end == -1:
        return []

    params_str = signature[paren_start + 1:paren_end].strip()
    if not params_str or params_str == 'void':
        return []

    params = params_str.split(',')

    result = []
    for i, param in enumerate(params):
        words = re.findall(r'\b([A-Za-z_][A-Za-z0-9_]*)\b', param.strip())
        # Check type words only (exclude last word which is the param name)
        type_words = words[:-1] if len(words) > 1 else []
        for word in type_words:
            if word in funcdef_types or word in funcptr_typedefs:
                result.append(i)
                break

    return result


def _generate_template_prototype(signature, funcdef_param_indices):
    """Generate a template inline function from a signature with funcdef params.

    Replaces funcdef-typed parameters with template type parameters so the
    function accepts any function pointer type. The body is a no-op stub
    (returns a zero/null value) since these are only used for -fsyntax-only
    compilation checking.

    Args:
        signature: Function signature string (without trailing semicolon)
        funcdef_param_indices: List of parameter indices to template-ize

    Returns:
        Multi-line string with the template function definition
    """
    paren_start = signature.find('(')
    paren_end = signature.rfind(')')

    before_paren = signature[:paren_start].strip()
    params_str = signature[paren_start + 1:paren_end].strip()

    # Parse before_paren: "ReturnType [*] [__convention] func_name"
    parts = before_paren.split()
    func_name = parts[-1]
    return_and_conv = parts[:-1]

    # Remove calling convention for inline template function
    calling_conventions = {'__cdecl', '__stdcall', '__watcallStack',
                           '__fastcall', '__thiscall'}
    return_parts = [p for p in return_and_conv if p not in calling_conventions]
    return_type = " ".join(return_parts) if return_parts else "void"

    # Split and process params
    params = params_str.split(',')
    funcdef_set = set(funcdef_param_indices)

    template_params = []
    new_params = []
    all_param_names = []

    for i, param in enumerate(params):
        param = param.strip()
        words = re.findall(r'\b([A-Za-z_][A-Za-z0-9_]*)\b', param)
        param_name = words[-1] if words else "p%d" % i
        all_param_names.append(param_name)

        if i in funcdef_set:
            t_name = "T_func%d" % len(template_params)
            template_params.append(t_name)
            new_params.append("%s %s" % (t_name, param_name))
        else:
            new_params.append(param)

    # Build template function
    lines = []
    lines.append("template<%s>" % ", ".join("typename %s" % tp
                                             for tp in template_params))

    lines.append("inline %s %s(%s) {" % (
        return_type, func_name, ",".join(new_params)))

    void_casts = " ".join("(void)%s;" % name for name in all_param_names)
    if return_type.strip() == "void":
        lines.append("    %s" % void_casts)
    else:
        lines.append("    %s return (%s)0;" % (void_casts, return_type))

    lines.append("}")
    return "\n".join(lines)


def generate_prototypes_header_file(functions_list, range_key="", type_to_path_map=None):
    """Generate a header file with function prototype declarations.

    For functions whose parameters use funcdef types (function definition
    typedefs), generates template inline stubs instead of extern declarations.
    This allows callers to pass function pointers with compatible but
    not-identical signatures, which C++ would otherwise reject (e.g.,
    CAmmo*(*)(void) passed where void*(*)(void) is expected).

    Args:
        functions_list: List of function entries for this range
        range_key: Optional range key for organization
        type_to_path_map: Optional map of type names to header paths for includes

    Returns:
        Header file content as a string
    """
    content = []
    content.append("#pragma once")

    # Collect type dependencies from function signatures
    needed_includes = set()
    basetypes = get_types_needing_basetypes()

    if functions_list and type_to_path_map:
        all_types = set()
        for func in functions_list:
            sig_types = extract_types_from_signature(func['signature'])
            all_types.update(sig_types)

        for type_name in all_types:
            # Check if base type needs basetypes.h
            if type_name in basetypes:
                needed_includes.add("system/basetypes.h")
            # Check if we have a mapping to a specific header
            if type_to_path_map and type_name in type_to_path_map:
                needed_includes.add(type_to_path_map[type_name])

    if needed_includes:
        content.append("")
        content.append("// Dependencies")
        # Put basetypes.h first if present
        if "system/basetypes.h" in needed_includes:
            content.append('#include "system/basetypes.h"')
            needed_includes.remove("system/basetypes.h")
        for inc_path in sorted(needed_includes):
            content.append('#include "%s"' % inc_path)

    content.append("")
    content.append("// =============================================================================")
    if range_key:
        content.append("// FUNCTION PROTOTYPES - Range %s" % range_key)
    else:
        content.append("// FUNCTION PROTOTYPES")
    content.append("// =============================================================================")
    content.append("")

    if not functions_list:
        content.append("// No functions in this range")
        content.append("")
        return "\n".join(content)

    # Build set of funcdef type names from type_to_path_map
    # Types whose header path contains 'funcdefs/' are function definition types
    funcdef_types = set()
    # Additional known function-pointer typedefs that are pointer-to-funcdef
    # types but defined outside types/funcdefs/ (e.g., in system/ headers)
    funcptr_typedefs = {'QSORT_COMPARATOR'}

    if type_to_path_map:
        for type_name, type_path in type_to_path_map.items():
            if 'funcdefs/' in type_path:
                funcdef_types.add(type_name)

    # Sort by address for consistent output
    sorted_funcs = sorted(functions_list, key=lambda f: f['address'])

    for func in sorted_funcs:
        # The signature already includes the return type and parameters
        sig = func['signature'].strip()
        if sig.endswith(';'):
            sig = sig[:-1].strip()

        # Check for funcdef-typed parameters
        funcdef_param_indices = _find_funcdef_params(
            sig, funcdef_types, funcptr_typedefs)

        if funcdef_param_indices:
            # Generate template inline function that accepts any function
            # pointer type for the funcdef-typed parameters
            content.append(_generate_template_prototype(
                sig, funcdef_param_indices))
        else:
            # Detect printf/scanf format attribute for variadic functions
            format_attr = ''
            paren_pos = sig.find('(')
            if paren_pos != -1:
                params_end = sig.rfind(')')
                if params_end != -1:
                    params_str = sig[paren_pos + 1:params_end].strip()
                    func_name = sig[:paren_pos].split()[-1] if sig[:paren_pos].split() else ''
                    format_attr = _detect_format_attribute(params_str, func_name)
            # Regular extern declaration
            content.append(sig + format_attr + ';')

    content.append("")
    return "\n".join(content)


def extract_function_references_from_constants(constants_list):
    """Extract function names referenced in constant initializers.

    Args:
        constants_list: List of constant entries

    Returns:
        Set of function names (C-compatible, with underscores) referenced
    """
    referenced_funcs = set()

    # Pattern to match function references in initializers
    # Functions are referenced directly (not with & prefix) and typically have
    # patterns like: module_file_cpp_FUN_XXXXXXXX or module_file_c_FUN_XXXXXXXX
    # or module_file_cpp_ClassName_method_FUN_XXXXXXXX (class methods)
    func_pattern = re.compile(r'\b([a-zA-Z_][a-zA-Z0-9_]*(?:_cpp_|_c_)[a-zA-Z0-9_]*FUN_[0-9a-fA-F]+)\b')

    for const in constants_list:
        initializer = const.get('initializer', '')
        if initializer:
            matches = func_pattern.findall(str(initializer))
            for match in matches:
                referenced_funcs.add(match)

    return referenced_funcs


def get_function_address_ranges(functions_list, referenced_funcs):
    """Get the address ranges that contain the referenced functions.

    Args:
        functions_list: List of all function entries
        referenced_funcs: Set of function names (C-compatible) that are referenced

    Returns:
        Set of range keys (e.g., "0x5B0000") that need to be included
    """
    needed_ranges = set()

    # Build a map of c_name -> address for quick lookup
    func_addr_map = {}
    for func in functions_list:
        func_addr_map[func['c_name']] = func['address']

    for func_name in referenced_funcs:
        addr_str = func_addr_map.get(func_name)
        if addr_str:
            # Parse address and compute range
            addr_str_clean = addr_str.replace("0x", "").replace("0X", "")
            try:
                addr_val = int(addr_str_clean, 16)
                range_start = (addr_val // 0x10000) * 0x10000
                range_key = "0x%06X" % range_start
                needed_ranges.add(range_key)
            except ValueError:
                pass

    return needed_ranges


# =============================================================================
# CRT HEADER GENERATION
# =============================================================================

# Mapping of CRT categories to standard C/C++ headers
CRT_CATEGORY_HEADERS = {
    'stdio': '<cstdio>',
    'stdlib': '<cstdlib>',
    'string': '<cstring>',
    'memory': '<cstring>',  # memory.h functions are typically in string.h
    'math': '<cmath>',
    'ctype': '<cctype>',
    'time': '<ctime>',
    'io': '<cstdio>',  # Most io.h functions have stdio equivalents
}


def generate_crt_header(functions_to_process):
    """Generate system/crt.h with appropriate C library includes.

    Analyzes the CRT functions in the program to determine which standard
    C library headers are needed, then generates a header that includes them.

    Args:
        functions_to_process: List of Ghidra Function objects to analyze

    Returns:
        String content of the system/crt.h header
    """
    # Collect CRT categories used in the program
    categories_used = set()

    for func in functions_to_process:
        func_name = func.getName()
        # Pattern: crt_{category}_c_{funcname}_FUN_{addr}
        if func_name.startswith('crt_'):
            parts = func_name.split('_')
            if len(parts) >= 4:
                category = parts[1]  # e.g., 'stdio', 'string', etc.
                categories_used.add(category)

    # Generate header content
    lines = []
    lines.append("#pragma once")
    lines.append("")
    lines.append("// =============================================================================")
    lines.append("// C RUNTIME LIBRARY HEADERS")
    lines.append("// =============================================================================")
    lines.append("//")
    lines.append("// Auto-generated header that includes standard C library headers based on")
    lines.append("// which CRT functions are used in the decompiled code.")
    lines.append("//")
    lines.append("// The CRT function transform in transforms.py converts CRT wrapper calls")
    lines.append("// like crt_stdio_c_fread_FUN_005fd990() to standard calls like fread().")
    lines.append("// This header provides the declarations for those standard functions.")
    lines.append("//")
    lines.append("// Implementations are in shims/crt.cpp.")
    lines.append("//")
    lines.append("// =============================================================================")
    lines.append("")

    # Determine which headers to include based on categories used
    headers_to_include = set()
    for category in categories_used:
        if category in CRT_CATEGORY_HEADERS:
            headers_to_include.add(CRT_CATEGORY_HEADERS[category])

    # Always include these common headers that most programs need
    common_headers = {
        '<cstdarg>',
        '<cstdio>',
        '<cstdlib>',
        '<cstring>',
        '<cmath>',
        '<cctype>',
        '<ctime>',
        '<cerrno>',
    }
    headers_to_include.update(common_headers)

    # Sort and add includes
    lines.append("// Standard C library headers (C++ style)")
    for header in sorted(headers_to_include):
        lines.append("#include %s" % header)

    # Add string comparison wrapper declarations
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// String Comparison")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("extern int _strcmp(char* s1, char* s2);")
    lines.append("extern int _stricmp(char* s1, char* s2);")
    lines.append("extern int _strnicmp(char* s1, char* s2, size_t n);")
    lines.append("")
    lines.append("#ifndef _MSC_VER")
    lines.append("#define stricmp _stricmp")
    lines.append("#define strnicmp _strnicmp")
    lines.append("#endif // _MSC_VER")
    lines.append("")

    # Ghidra compiler builtins for string functions
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Compiler Builtins")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("#define builtin_strncpy(dst, src, n) strncpy(dst, src, n)")
    lines.append("")

    # Add string conversion wrapper declarations
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// String Conversion")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("extern char* strupr(char* s);")
    lines.append("extern char* strlwr(char* s);")
    lines.append("extern double _strtod(const char* str);")
    lines.append("")
    lines.append("#ifndef _MSC_VER")
    lines.append("#define _strupr strupr")
    lines.append("#define _strlwr strlwr")
    lines.append("#endif // _MSC_VER")
    lines.append("")

    # Add path manipulation wrapper declarations
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Path Manipulation")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("extern void splitpath(const char* path, char* drive, char* dir, char* fname, char* ext);")
    lines.append("extern void makepath(char* path, const char* drive, const char* dir, const char* fname, const char* ext);")
    lines.append("")
    lines.append("#ifndef _MSC_VER")
    lines.append("#define _splitpath splitpath")
    lines.append("#define _makepath makepath")
    lines.append("#endif // _MSC_VER")
    lines.append("")

    # Add file manipulation wrapper declarations
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// File Manipulation")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("struct _FILE;  // Forward declaration (defined in system/stdio.h)")
    lines.append("")
    lines.append("extern FILE* _FILE_to_FILE(_FILE* f);")
    lines.append("")
    lines.append("extern _FILE* _fopen(const char* filename, const char* mode);")
    lines.append("extern int _fclose(_FILE* f);")
    lines.append("extern int _fflush(_FILE* f);")
    lines.append("extern int _feof(_FILE* f);")
    lines.append("extern int _ferror(_FILE* f);")
    lines.append("extern long _ftell(_FILE* f);")
    lines.append("extern void _rewind(_FILE* f);")
    lines.append("extern int _fgetc(_FILE* f);")
    lines.append("extern int _fputc(int c, _FILE* f);")
    lines.append("extern int _ungetc(int c, _FILE* f);")
    lines.append("extern char* _fgets(char* s, int n, _FILE* f);")
    lines.append("extern int _fputs(const char* s, _FILE* f);")
    lines.append("extern size_t _fread(void* ptr, size_t size, size_t count, _FILE* f);")
    lines.append("extern size_t _fwrite(const void* ptr, size_t size, size_t count, _FILE* f);")
    lines.append("extern int _fseek(_FILE* f, long offset, int whence);")
    lines.append("extern int _fsetpos(_FILE* f, const fpos_t* pos);")
    lines.append("extern int _fgetpos(_FILE* f, fpos_t* pos);")
    lines.append("extern int _setvbuf(_FILE* f, char* buf, int mode, size_t size);")
    lines.append("extern void _setbuf(_FILE* f, char* buf);")
    lines.append("__attribute__((format(printf, 2, 3)))")
    lines.append("extern int _fprintf(_FILE* f, const char* format, ...);")
    lines.append("__attribute__((format(scanf, 2, 3)))")
    lines.append("extern int _fscanf(_FILE* f, const char* format, ...);")
    lines.append("extern _FILE* _freopen(const char* filename, const char* mode, _FILE* stream);")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Printf/Scanf Type Bridges")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("//")
    lines.append("// Ghidra uses va_list_t (struct { char* args; }) instead of va_list,")
    lines.append("// and some callers pass undefined1* (unsigned char*) buffers.")
    lines.append("// These wrappers bridge the Ghidra types to standard C types.")
    lines.append("//")
    lines.append("")
    lines.append('#include "system/stdarg.h"  // For va_list_t')
    lines.append("")
    lines.append("extern int _vsprintf(char* buffer, const char* format, va_list_t args);")
    lines.append("__attribute__((format(printf, 2, 3)))")
    lines.append("extern int _sprintf(void* buffer, const char* format, ...);")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// String Type Bridges")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("extern char* _strncpy(void* dest, const void* src, size_t count);")
    lines.append("")

    # Add time manipulation wrapper declarations
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Time Manipulation")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("struct _tm;  // Forward declaration")
    lines.append("")
    lines.append("extern time_t _mktime(_tm* t);")
    lines.append("extern _tm* _localtime(const void* timer);")
    lines.append("extern time_t _time(time_t* timer);")
    lines.append("extern char* _asctime(_tm* timeptr);")
    lines.append("extern size_t _strftime(char* dest_buffer, size_t buffer_size, const char* format_string, _tm* time_ptr);")
    lines.append("")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// Sorting")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("//")
    lines.append("// Templated to accept any comparator function pointer type, since Ghidra")
    lines.append("// types comparators with specific param types (e.g., int(SFace**, SFace**))")
    lines.append("// instead of the generic int(void*, void*) that qsort expects.")
    lines.append("//")
    lines.append("")
    lines.append("template<typename CompFunc>")
    lines.append("inline void _qsort(void* base, size_t num, size_t size, CompFunc compar) {")
    lines.append("    (void)base; (void)num; (void)size; (void)compar;")
    lines.append("}")
    lines.append("")

    # Add stat/utime headers (functions use _stat/_utime names from Watcom CRT)
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("// File Status / Timestamps")
    lines.append("// ---------------------------------------------------------------------------")
    lines.append("")
    lines.append("#include <sys/stat.h>")
    lines.append("#include <sys/types.h>")
    lines.append("#include <utime.h>")
    lines.append("")
    lines.append("extern int getFileStat(const char* path, struct _stat* buf);")
    lines.append("extern int _utime(const char* path, void* times);")
    lines.append("")

    log_info("Generated CRT header with %d includes for %d categories" % (
        len(headers_to_include), len(categories_used)))

    return "\n".join(lines)

# Basetypes definitions for pseudocode export
# Defines which types require basetypes.h include
# This module is the SINGLE SOURCE OF TRUTH for basetype definitions


def get_all_basetypes():
    """Complete set of types defined in system/basetypes.h.

    This is the SINGLE SOURCE OF TRUTH for basetypes.
    Used by headers.py (get_basetypes_defined_types) and globals.py (is_primitive_type).
    """
    return {
        # Ghidra primitive types
        'byte', 'uchar', 'ushort', 'uint', 'ulong', 'longlong', 'ulonglong',
        'dword', 'word', 'bool',
        'undefined', 'undefined1', 'undefined2', 'undefined4', 'undefined8',
        'unkbyte10',  # 10-byte unknown type (often x87 80-bit float returns)
        'pointer',
        # Ghidra string types
        'TerminatedCString', 'TerminatedUnicode', 'string', 'unicode', 'PascalUnicode',
        # Extended float
        'float10',
        # Windows primitive types
        'BOOL', 'BYTE', 'CHAR', 'WORD', 'DWORD', 'SHORT', 'LONG',
        'UINT', 'USHORT', 'ULONG', 'UCHAR', 'FLOAT', 'DOUBLE', 'WCHAR',
        'LONGLONG', 'ULONGLONG', 'QWORD', 'INT',
        # Pointer-sized types
        'LONG_PTR', 'ULONG_PTR', 'DWORD_PTR', 'SIZE_T', 'UINT_PTR', 'INT_PTR',
        # Handle types
        'HANDLE', 'PVOID', 'LPVOID', 'LPCVOID',
        # String pointer types
        'LPSTR', 'LPCSTR', 'LPWSTR', 'LPCWSTR', 'LPBYTE', 'LPDWORD',
        # Common typedefs
        'COLORREF', 'WPARAM', 'LPARAM', 'LRESULT', 'HRESULT', 'ATOM',
        # PE resource placeholders (Ghidra has no layout — kept hand-written
        # in basetypes.h because decompiled winMain references them as opaque
        # variable-size BYTE blobs).
        'IconResource', 'MenuResource', 'GroupIconResource',
        # 32-bit Image Base Offset typedef (Ghidra built-in, hand-written)
        'ImageBaseOffset32',
        # NOTE: IMAGE_FILE_HEADER, VS_VERSION_INFO, StringFileInfo, etc. used
        # to live here but now flow through Ghidra's /PE category into
        # system/pe.h — they are no longer basetypes.
    }


def get_types_needing_basetypes():
    """Return set of type names that require basetypes.h.

    This is an alias to get_all_basetypes() for backwards compatibility.
    """
    return get_all_basetypes()


def get_primitive_types():
    """Return set of scalar/primitive types that can be initialized with a single value.

    This excludes struct types defined in basetypes.h - those need proper struct initializers.
    """
    return {
        # Ghidra primitive types
        'byte', 'uchar', 'ushort', 'uint', 'ulong', 'longlong', 'ulonglong',
        'dword', 'word', 'bool',
        'undefined', 'undefined1', 'undefined2', 'undefined4', 'undefined8',
        'unkbyte10',  # 10-byte unknown type (often x87 80-bit float returns)
        'pointer',
        # Ghidra string types
        'TerminatedCString', 'TerminatedUnicode', 'string', 'unicode', 'PascalUnicode',
        # Extended float
        'float10',
        # Windows primitive types
        'BOOL', 'BYTE', 'CHAR', 'WORD', 'DWORD', 'SHORT', 'LONG',
        'UINT', 'USHORT', 'ULONG', 'UCHAR', 'FLOAT', 'DOUBLE', 'WCHAR',
        'LONGLONG', 'ULONGLONG', 'QWORD', 'INT',
        # Pointer-sized types
        'LONG_PTR', 'ULONG_PTR', 'DWORD_PTR', 'SIZE_T', 'UINT_PTR', 'INT_PTR',
        # Handle types
        'HANDLE', 'PVOID', 'LPVOID', 'LPCVOID',
        # String pointer types
        'LPSTR', 'LPCSTR', 'LPWSTR', 'LPCWSTR', 'LPBYTE', 'LPDWORD',
        # Common typedefs
        'COLORREF', 'WPARAM', 'LPARAM', 'LRESULT', 'HRESULT', 'ATOM',
        # NOTE: PE structures and resource types are NOT included here
        # because they need struct initializers, not scalar values
    }


def is_primitive_type(type_name):
    """Check if a type name is a primitive that can be initialized with a scalar value.

    Args:
        type_name: The type name to check (may include array dimensions or pointers)

    Returns:
        True if the base type is a scalar primitive, False otherwise
    """
    # Extract base type (strip array dimensions and pointers)
    base = type_name.split('[')[0].rstrip('*').strip()
    primitives = get_primitive_types()
    return base.lower() in {t.lower() for t in primitives}


def bytes_to_int_le(raw_bytes):
    """Convert raw bytes to integer (little-endian).

    Args:
        raw_bytes: List of byte values

    Returns:
        Integer value
    """
    int_val = 0
    for i, b in enumerate(raw_bytes):
        int_val |= (b << (8 * i))
    return int_val


def format_int_by_size(int_val, num_bytes):
    """Format integer as hex string with appropriate width.

    Args:
        int_val: Integer value to format
        num_bytes: Number of bytes (determines hex width)

    Returns:
        Hex string with appropriate formatting
    """
    if num_bytes == 1:
        return "0x%02X" % (int_val & 0xFF)
    elif num_bytes == 2:
        return "0x%04X" % (int_val & 0xFFFF)
    elif num_bytes == 4:
        return "0x%08X" % (int_val & 0xFFFFFFFF)
    elif num_bytes == 8:
        return "0x%016X" % int_val
    else:
        return "0x%X" % int_val

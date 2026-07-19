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


def get_libc_provided_types():
    """Standard C types the host toolchain defines; never emit a typedef for these.

    Ghidra's type manager carries these names when a program's CRT headers were
    imported (tridx7.dll does; nocedit.exe does not), and the exporter would
    otherwise write them out with the width it observed in the 32-bit binary:

        typedef int  intptr_t;      // system/basetsd.h
        typedef uint uintptr_t;     // system/vadefs.h
        typedef uint size_t;        // system/crtdefs.h
        typedef char* va_list;      // system/vadefs.h

    At 32-bit those agree with the real definitions, so the collision is silent.
    At 64-bit every one of them is half the required width and clang rejects the
    translation unit outright ("typedef redefinition with different types").

    Skipping them is correct rather than a workaround: unlike DWORD/LONG — which
    are pinned to 32 bits on purpose because the binary's struct layouts depend
    on it — these types are *supposed* to follow the target. basetypes.h already
    includes <stddef.h>, <stdint.h> and <stdarg.h>, so the names stay in scope
    everywhere and simply resolve to the toolchain's target-correct definitions.

    NOT included here, deliberately:
      time_t   — emitted as `typedef long time_t`, which is already correct on
                 both lanes (4 bytes at -m32, 8 at LP64) and does not collide.
                 Skipping it would require pulling in <time.h>, so leave it.
    """
    return {
        # Pointer-width integers — <stdint.h>
        'intptr_t', 'uintptr_t',
        # Object sizes and differences — <stddef.h>
        'size_t', 'ssize_t', 'ptrdiff_t',
        # Variadic argument list — <stdarg.h>. On x86-64 SysV this is a 24-byte
        # __va_list_tag[1], not a char*, so the 32-bit typedef is badly wrong.
        'va_list',
        # A builtin keyword in C++; any typedef of it is an error at every width.
        'wchar_t',
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

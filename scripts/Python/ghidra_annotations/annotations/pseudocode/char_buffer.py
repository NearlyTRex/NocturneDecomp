# Whether an initialised char array is a buffer the program writes, not a literal.
#
# Ghidra marks a store through an address as a WRITE only when the address is
# the instruction's operand. A buffer filled by a call -- an fscanf or strcpy
# target, say -- has its address pushed, which Ghidra records as a DATA
# reference, so the export sees no write and would emit the array as a static
# constant: a separate copy in every unit that includes the header, the
# writer's change never reaching the readers. The compiler sizes a literal to
# its own text, at most padded to the next four bytes, so an array with more
# room than that past its string is a buffer.

# Literals are laid out at most this many bytes apart.
_LITERAL_ALIGNMENT = 4


def _is_one_dimensional_char_array(type_name):
    compact = type_name.replace(" ", "")
    return compact.startswith("char[") and compact.count("[") == 1


def is_char_buffer(type_name, raw_bytes):
    """True when `type_name` is char[N] whose `raw_bytes` hold one string with
    more zeros after its terminator than padding to four bytes explains."""
    if not raw_bytes or not _is_one_dimensional_char_array(type_name):
        return False
    try:
        end = raw_bytes.index(0)
    except ValueError:
        return False
    if any(raw_bytes[end:]):
        return False
    literal_size = -(-(end + 1) // _LITERAL_ALIGNMENT) * _LITERAL_ALIGNMENT
    return len(raw_bytes) > literal_size

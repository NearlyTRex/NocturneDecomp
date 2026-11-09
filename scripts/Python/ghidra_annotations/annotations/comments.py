from ghidra.program.model.listing import CodeUnit

from ghidra_annotations.annotations.tracked import TrackedKind, delete_tracked, export_tracked, import_tracked
from ghidra_annotations.util import create_address_set, get_addr_obj, parallel_scan_ranges

# Each kind of comment a code unit holds, by its key in the record
COMMENT_TYPES = {
    "plate": CodeUnit.PLATE_COMMENT,
    "pre": CodeUnit.PRE_COMMENT,
    "post": CodeUnit.POST_COMMENT,
    "eol": CodeUnit.EOL_COMMENT,
    "repeatable": CodeUnit.REPEATABLE_COMMENT,
}


def scan_comments_worker(start_addr, end_addr, listing):
    """The code units in an address range that hold a comment."""
    return [cu for cu in listing.getCodeUnits(create_address_set(start_addr, end_addr), True)
            if any(cu.getComment(kind) and str(cu.getComment(kind)).strip() for kind in COMMENT_TYPES.values())]


def items(program):
    code_units = parallel_scan_ranges(program, scan_comments_worker, extra_args=(program.getListing(),))
    return sorted(code_units, key = lambda cu: cu.getMinAddress().getOffset())


def record(program, code_unit):
    return dict({name: code_unit.getComment(kind) for name, kind in COMMENT_TYPES.items()},
                addr = str(code_unit.getMinAddress()))


def apply(program, entry):
    address = get_addr_obj(program, entry.get("addr"))
    code_unit = program.getListing().getCodeUnitAt(address) if address else None
    if code_unit is None:
        return False
    for name, kind in COMMENT_TYPES.items():
        if entry.get(name):
            code_unit.setComment(kind, entry[name])
    return True


def remove(program, code_unit):
    for kind in COMMENT_TYPES.values():
        if code_unit.getComment(kind):
            code_unit.setComment(kind, None)


KIND = TrackedKind("comments", "comments", items, record, lambda entry: entry.get("addr"), apply, remove)


def delete_comments(currentProgram, path):
    delete_tracked(KIND, currentProgram, path)


def import_comments(currentProgram, path):
    import_tracked(KIND, currentProgram, path)


def export_comments(currentProgram, path):
    export_tracked(KIND, currentProgram, path)

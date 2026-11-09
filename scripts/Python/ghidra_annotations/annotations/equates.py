import hashlib

from ghidra_annotations.annotations.tracked import TrackedKind, delete_tracked, export_tracked, import_tracked
from ghidra_annotations.util import get_addr_obj


# An equate and the operands it is applied to, as Ghidra records them
def record(program, equate):
    refs = sorted((str(ref.getAddress()), ref.getOpIndex()) for ref in equate.getReferences())
    return {"name": equate.getName(), "value": equate.getValue(),
            "refs": [{"addr": addr, "opIndex": op_index} for addr, op_index in refs]}


def apply(program, entry):
    if not entry.get("name") or entry.get("value") is None:
        return False
    table = program.getEquateTable()
    equate = table.getEquate(entry["name"]) or table.createEquate(entry["name"], entry["value"])
    for ref in entry.get("refs", []):
        address = get_addr_obj(program, ref.get("addr"))
        if address:
            equate.addReference(address, ref.get("opIndex", 0))
    return True


KIND = TrackedKind("equates", "equates",
                   lambda program: sorted(program.getEquateTable().getEquates(), key = lambda e: e.getName()),
                   record, lambda entry: entry.get("name"), apply,
                   lambda program, equate: program.getEquateTable().removeEquate(equate.getName()),
                   bucket = lambda entry: hashlib.md5(entry["name"].encode()).hexdigest()[:8])


def delete_equates(currentProgram, path):
    delete_tracked(KIND, currentProgram, path)


def import_equates(currentProgram, path):
    import_tracked(KIND, currentProgram, path)


def export_equates(currentProgram, path):
    export_tracked(KIND, currentProgram, path)

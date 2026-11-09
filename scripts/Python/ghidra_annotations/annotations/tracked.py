# The categories whose records the user can mark: each record carries an
# `importable` flag that the export keeps from the previous export, a new
# record starts importable, and only importable records are re-applied on
# import or removed on delete.
#
# A TrackedKind says which program objects a category covers, what it records
# about one, the key that identifies a record across exports, and how to apply
# or remove one.

from ghidra.program.model.data import Array, DataUtilities, DefaultDataType, Pointer

from ghidra_annotations.util import (
    clean_data, get_addr_obj, load_json_files, log_info, resolve_data_type_obj, save_json_files)


class TrackedKind:
    def __init__(self, base, noun, items, record, key, apply, remove, bucket = None):
        # The category, e.g. "symbols_class", and how the log names its records
        self.base = base
        self.noun = noun
        # (program) -> the objects the category covers
        self.items = items
        # (program, object) -> its record, without the importable flag
        self.record = record
        # (record) -> the key that identifies it across exports, or None for no key
        self.key = key
        # (program, record) -> applies an importable record; returns False to skip it
        self.apply = apply
        # (program, object) -> removes it from the program; None for a kind the import replaces in place
        self.remove = remove
        # (record) -> the text the bucket is chosen by; the key by default
        self.bucket = bucket or key


def importable_keys(kind, path):
    return {kind.key(record) for record in load_json_files(path, kind.base)
            if record.get("importable", False) and kind.key(record)}


def delete_tracked(kind, currentProgram, path):
    """Remove the objects that importable records describe; a kind with no remove keeps them."""
    if kind.remove is None:
        log_info("The import replaces %s in place, so none are deleted" % kind.noun)
        return
    importable = importable_keys(kind, path)
    log_info("Found %d importable %s to delete" % (len(importable), kind.noun))
    if not importable:
        return
    tx_id = currentProgram.startTransaction("Delete %s" % kind.noun.title())
    try:
        doomed = [item for item in kind.items(currentProgram)
                  if kind.key(kind.record(currentProgram, item)) in importable]
        for item in doomed:
            kind.remove(currentProgram, item)
        log_info("Deleted %d %s" % (len(doomed), kind.noun))
    finally:
        currentProgram.endTransaction(tx_id, True)


def import_tracked(kind, currentProgram, path):
    """Apply each importable record."""
    log_info("Importing %s" % kind.noun)
    applied = 0
    tx_id = currentProgram.startTransaction("Import %s" % kind.noun.title())
    try:
        for record in load_json_files(path, kind.base):
            if record.get("importable", False) and kind.apply(currentProgram, record) is not False:
                applied += 1
    finally:
        currentProgram.endTransaction(tx_id, True)
    log_info("Imported %d %s" % (applied, kind.noun))


def export_tracked(kind, currentProgram, path):
    """Record each object, keeping the importable flags of the previous export."""
    importable = {kind.key(record): record.get("importable", False)
                  for record in load_json_files(path, kind.base) if kind.key(record)}
    records = []
    for item in kind.items(currentProgram):
        record = kind.record(currentProgram, item)
        records.append(dict(record, importable = importable.get(kind.key(record), True)))
    log_info("Exporting %s %s" % (len(records), kind.noun))
    save_json_files(
        path = path,
        filename_base = kind.base,
        items = clean_data(records),
        addr_func = kind.bucket,
        bucket_bits = 4)
    log_info("Export complete")


# --- symbols_namespace and symbols_class: namespaces, which have no address ----------------------

def namespace_kind(base, noun, symbol_type, create):
    """A category of namespace symbols of one type, recorded by name and parent.

    create: (program, name, parent name or None) -> makes the namespace if it is missing
    """
    def items(program):
        return [symbol for symbol in program.getSymbolTable().getAllSymbols(True)
                if not symbol.isExternal() and symbol.getSymbolType() == symbol_type]

    def record(program, symbol):
        namespace = symbol.getObject()
        parent = namespace.getParentNamespace()
        return {"name": namespace.getName(), "parent": parent.getName() if parent is not None else None}

    def key(entry):
        return "%s|%s" % (entry["name"], entry.get("parent") or "Global") if entry.get("name") else None

    def apply(program, entry):
        if not entry.get("name"):
            return False
        create(program, entry["name"], entry.get("parent"))
        return True

    def remove(program, symbol):
        program.getSymbolTable().removeSymbolSpecial(symbol)

    return TrackedKind(base, noun, items, record, key, apply, remove, bucket = lambda entry: entry.get("name", ""))


# --- the applied_* categories: the data types applied at addresses in the listing ---------------

def known_type(program, name):
    """The named type, or None when the program has no such type.

    resolve_data_type_obj never fails: an unknown name comes back as
    DefaultDataType, or a pointer or array of it, which createData would apply
    as undefined bytes.
    """
    if not name:
        return None
    data_type = resolve_data_type_obj(program, name)
    inner = data_type
    while isinstance(inner, (Pointer, Array)):
        inner = inner.getDataType()
    return None if isinstance(inner, DefaultDataType) else data_type


def applied_kind(noun, tracks, record, rebuild = None, after_create = None):
    """The applied_<noun> category.

    tracks: (data type) -> whether the category records data of that type
    record: (program, data, its type) -> the record's fields besides addr and len
    rebuild: (program, record) -> the type to apply, or None; by default the type named "name"
    after_create: (created data, its type, record), for what createData cannot set
    """
    rebuild = rebuild or (lambda program, entry: known_type(program, entry.get("name")))

    def items(program):
        return [data for data in program.getListing().getDefinedData(True)
                if data.getDataType() is not None and tracks(data.getDataType())]

    def full_record(program, data):
        return dict(record(program, data, data.getDataType()),
                    addr = str(data.getMinAddress()), len = data.getLength())

    def apply(program, entry):
        address = get_addr_obj(program, entry.get("addr"))
        data_type = rebuild(program, entry) if address else None
        if data_type is None:
            log_info("Could not apply the applied %s record at %s" % (noun, entry.get("addr")))
            return False
        # Data the record already describes is left alone: re-creating it would drop the
        # references Ghidra attached to it, an import table pointer's external one among them.
        # It is compared as a record, since a record names its type but two types can share a name.
        existing = program.getListing().getDefinedDataAt(address)
        if existing is not None and tracks(existing.getDataType()):
            current = full_record(program, existing)
            if all(current[k] == entry.get(k) for k in current if k != "value"):
                return True
        data = DataUtilities.createData(program, address, data_type, entry.get("len", 1), False,
            DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA)
        if after_create is not None:
            after_create(data, data_type, entry)
        return True

    # No remove: createData replaces what is there, so an import needs no delete first
    return TrackedKind("applied_" + noun.replace(" ", "_"), "applied " + noun, items, full_record,
                       lambda entry: entry.get("addr"), apply, None)

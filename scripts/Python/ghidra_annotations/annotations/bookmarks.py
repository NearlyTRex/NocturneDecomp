from ghidra_annotations.annotations.tracked import TrackedKind, delete_tracked, export_tracked, import_tracked
from ghidra_annotations.util import get_addr_obj


def record(program, bookmark):
    return {"addr": str(bookmark.getAddress()), "cat": bookmark.getCategory(),
            "type": bookmark.getTypeString(), "comment": bookmark.getComment()}


# A bookmark is its address, type and category: an address can hold one of each
def key(entry):
    if not (entry.get("addr") and entry.get("cat") and entry.get("type")):
        return None
    return "%s|%s|%s" % (entry["addr"], entry["type"], entry["cat"])


def apply(program, entry):
    address = get_addr_obj(program, entry.get("addr"))
    if not address or key(entry) is None:
        return False
    program.getBookmarkManager().setBookmark(address, entry["type"], entry["cat"], entry.get("comment") or "")
    return True


KIND = TrackedKind("bookmarks", "bookmarks",
                   lambda program: list(program.getBookmarkManager().getBookmarksIterator()),
                   record, key, apply,
                   lambda program, bookmark: program.getBookmarkManager().removeBookmark(bookmark),
                   bucket = lambda entry: entry["addr"])


def delete_bookmarks(currentProgram, path):
    delete_tracked(KIND, currentProgram, path)


def import_bookmarks(currentProgram, path):
    import_tracked(KIND, currentProgram, path)


def export_bookmarks(currentProgram, path):
    export_tracked(KIND, currentProgram, path)

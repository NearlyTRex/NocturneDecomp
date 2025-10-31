import os
from ghidra_annotations.util import *

def delete_bookmarks(currentProgram, path):

    # Load bookmarks to get importable markings
    log_info("Loading bookmarks to determine which are importable")
    bookmarks_data = load_json_files(path, "bookmarks")
    if bookmarks_data is None:
        log_info("No existing bookmarks file found - nothing to delete")
        return

    # Get list of importable bookmark addresses
    importable_bookmarks = set()
    for bm_data in bookmarks_data:
        if bm_data.get("importable", False):
            bm_addr = bm_data.get("addr")
            bm_category = bm_data.get("cat")
            bm_type = bm_data.get("type")
            if bm_addr and bm_category and bm_type:
                bm_key = "%s|%s|%s" % (bm_addr, bm_type, bm_category)
                importable_bookmarks.add(bm_key)
    log_info("Found %d importable bookmarks to delete" % len(importable_bookmarks))
    if not importable_bookmarks:
        log_info("No importable bookmarks found - nothing to delete")
        return

    # Delete only importable bookmarks
    bmm = currentProgram.getBookmarkManager()
    tx_id = currentProgram.startTransaction("Delete Bookmarks")
    try:
        address_set = currentProgram.getMemory().getAllInitializedAddressSet()
        addresses = address_set.getAddresses(True)
        while addresses.hasNext():
            addr = addresses.next()
            for bmark in list(bmm.getBookmarks(addr)):
                bm_key = "%s|%s|%s" % (str(addr), bmark.getTypeString(), bmark.getCategory())
                if bm_key in importable_bookmarks:
                    bmm.removeBookmark(bmark)
        log_info("Deleted %d bookmarks" % len(importable_bookmarks))
    finally:
        currentProgram.endTransaction(tx_id, True)

def import_bookmarks(currentProgram, path):

    # Load bookmarks
    log_info("Loading bookmarks")
    bookmarks = load_json_files(path, "bookmarks")
    if bookmarks is None:
        log_error("Unable to load bookmarks")

    # Get managers
    bmm = currentProgram.getBookmarkManager()

    # Start importing bookmarks
    log_info("Importing bookmarks")
    tx_id = currentProgram.startTransaction("Import Bookmarks")
    try:
        for bm in bookmarks:
            bm_addr = get_addr_obj(currentProgram, bm.get("addr"))
            bm_category = bm.get("cat")
            bm_type = bm.get("type")
            bm_comment = bm.get("comment")
            bm_importable = bm.get("importable", False)
            if not bm_addr or not bm_category or not bm_type or not bm_importable:
                continue

            # Create bookmark
            log_info("Creating bookmark at %s [%s::%s]" % (bm_addr, bm_type, bm_category))
            bmm.setBookmark(bm_addr, bm_type, bm_category, bm_comment or "")
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")

def export_bookmarks(currentProgram, path):

    # Load existing bookmarks to preserve importable markings
    existing_importable = {}
    try:
        existing_bookmarks = load_json_files(path, "bookmarks")
        if existing_bookmarks:
            log_info("Loading existing importable markings")
            for bm_data in existing_bookmarks:
                bm_addr = bm_data.get("addr")
                bm_category = bm_data.get("cat")
                bm_type = bm_data.get("type")
                if bm_addr and bm_category and bm_type:
                    bm_key = "%s|%s|%s" % (bm_addr, bm_type, bm_category)
                    existing_importable[bm_key] = bm_data.get("importable", False)
                    log_info("Preserving importable marking for bookmark at: %s" % bm_addr)
    except:
        log_info("No existing bookmarks file found, all bookmarks will default to non-importable")

    # Gather bookmarks
    log_info("Gathering bookmarks")
    bookmarks = []
    bm_mgr = currentProgram.getBookmarkManager()
    it = bm_mgr.getBookmarksIterator()
    while it.hasNext():
        bm = it.next()
        bm_addr = str(bm.getAddress())
        bm_category = bm.getCategory()
        bm_type = bm.getTypeString()
        bm_comment = bm.getComment()
        bm_key = "%s|%s|%s" % (bm_addr, bm_type, bm_category)
        bm_importable = existing_importable.get(bm_key, True)

        # Record bookmark
        log_info("Recording bookmark at %s" % bm_addr)
        bookmarks.append({
            "addr": bm_addr,
            "cat": bm_category,
            "type": bm_type,
            "comment": bm_comment,
            "importable": bm_importable
        })

    # Export bookmarks
    log_info("Exporting %s bookmarks" % len(bookmarks))
    save_json_files(
        path = path,
        filename_base = "bookmarks",
        items = clean_data(bookmarks),
        addr_func = lambda x: x["addr"],
        bucket_bits = 4)
    log_info("Export complete")

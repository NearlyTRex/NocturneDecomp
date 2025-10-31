import os
from ghidra_annotations.util import *
from ghidra.program.model.listing import CodeUnit

def delete_comments(currentProgram, path):

    # Load comments to get importable markings
    log_info("Loading comments to determine which are importable")
    comments_data = load_json_files(path, "comments")
    if comments_data is None:
        log_info("No existing comments file found - nothing to delete")
        return

    # Get list of importable comment addresses
    importable_comments = set()
    for cmt_data in comments_data:
        if cmt_data.get("importable", False):
            cmt_addr = cmt_data.get("addr")
            if cmt_addr:
                importable_comments.add(cmt_addr)
    log_info("Found %d importable comments to delete" % len(importable_comments))
    if not importable_comments:
        log_info("No importable comments found - nothing to delete")
        return

    # Delete only importable comments
    listing = currentProgram.getListing()
    tx_id = currentProgram.startTransaction("Delete Comments")
    try:
        for code_unit in listing.getCodeUnits(True):
            cmt_addr_str = str(code_unit.getAddress())
            if cmt_addr_str in importable_comments:
                for comment_type in [
                    CodeUnit.PLATE_COMMENT,
                    CodeUnit.PRE_COMMENT,
                    CodeUnit.POST_COMMENT,
                    CodeUnit.EOL_COMMENT,
                    CodeUnit.REPEATABLE_COMMENT,
                ]:
                    if code_unit.getComment(comment_type):
                        code_unit.setComment(comment_type, None)
        log_info("Deleted %d comments" % len(importable_comments))
    finally:
        currentProgram.endTransaction(tx_id, True)

def import_comments(currentProgram, path):

    # Load comments
    log_info("Loading comments")
    comments = load_json_files(path, "comments")
    if comments is None:
        log_error("Unable to load comments")

    # Start importing comments
    log_info("Importing comments")
    tx_id = currentProgram.startTransaction("Import Comments")
    try:
        for cmt in comments:
            cmt_addr = get_addr_obj(currentProgram, cmt.get("addr"))
            cmt_importable = cmt.get("importable", False)
            if not cmt_addr or not cmt_importable:
                continue

            # Get code unit
            listing = currentProgram.getListing()
            code_unit = listing.getCodeUnitAt(cmt_addr)
            if not code_unit:
                log_info("No code unit at address: %s" % cmt_addr)
                continue

            # Create comments
            log_info("Creating comment at %s" % cmt_addr)
            if cmt.get("plate"):
                code_unit.setComment(CodeUnit.PLATE_COMMENT, cmt.get("plate"))
            if cmt.get("pre"):
                code_unit.setComment(CodeUnit.PRE_COMMENT, cmt.get("pre"))
            if cmt.get("post"):
                code_unit.setComment(CodeUnit.POST_COMMENT, cmt.get("post"))
            if cmt.get("eol"):
                code_unit.setComment(CodeUnit.EOL_COMMENT, cmt.get("eol"))
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")

def export_comments(currentProgram, path):

    # Load existing comments to preserve importable markings
    existing_importable = {}
    try:
        existing_comments = load_json_files(path, "comments")
        if existing_comments:
            log_info("Loading existing importable markings")
            for cmt_data in existing_comments:
                cmt_addr = cmt_data.get("addr")
                if cmt_addr:
                    existing_importable[cmt_addr] = cmt_data.get("importable", False)
                    log_info("Preserving importable marking for comment at: %s" % cmt_addr)
    except:
        log_info("No existing comments file found, all comments will default to non-importable")

    # Gather comments
    log_info("Gathering comments")
    comments = []
    listing = currentProgram.getListing()
    for cu in listing.getCodeUnits(True):
        cmt_addr = str(cu.getMinAddress())
        cmt_plate = cu.getComment(CodeUnit.PLATE_COMMENT)
        cmt_pre = cu.getComment(CodeUnit.PRE_COMMENT)
        cmt_post = cu.getComment(CodeUnit.POST_COMMENT)
        cmt_eol = cu.getComment(CodeUnit.EOL_COMMENT)
        cmt_importable = existing_importable.get(cmt_addr, True)

        # Record comment
        obj = {
            "addr": cmt_addr,
            "plate": cmt_plate,
            "pre": cmt_pre,
            "post": cmt_post,
            "eol": cmt_eol,
            "importable": cmt_importable
        }
        if any(obj[k] and str(obj[k]).strip() for k in ("plate", "pre", "post", "eol")):
            log_info("Recording comment at %s" % cmt_addr)
            comments.append(obj)

    # Export comments
    log_info("Exporting %s comments" % len(comments))
    save_json_files(
        path = path,
        filename_base = "comments",
        items = clean_data(comments),
        addr_func = lambda x: x["addr"],
        bucket_bits = 4)
    log_info("Export complete")

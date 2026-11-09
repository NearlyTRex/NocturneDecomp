import json
import os
import re

from ghidra.program.model.listing import CodeUnit

from ghidra_annotations.util import create_address_set, log_info, parallel_scan_ranges


# Marker prefix set by CreateCodeCave.java
MARKER_PREFIX = "CODE_CAVE"

# Pattern: CODE_CAVE <name> <total_size> [<free_offset>]
MARKER_PATTERN = re.compile(
    r'^CODE_CAVE\s+(\S+)\s+(\d+)(?:\s+(\d+))?$'
)


def scan_code_caves_worker(start_addr, end_addr, listing):
    """The CODE_CAVE plate comment markers in an address range."""
    caves = []
    for cu in listing.getCodeUnits(create_address_set(start_addr, end_addr), True):
        plate = cu.getComment(CodeUnit.PLATE_COMMENT)
        m = MARKER_PATTERN.match(str(plate).strip()) if plate else None
        if not m:
            continue
        caves.append({
            "name": m.group(1),
            "start": str(cu.getMinAddress()),
            "total_size": int(m.group(2)),
            "free_offset": int(m.group(3)) if m.group(3) else 0,
            "allocations": [],
        })
    return caves


def export_code_caves(currentProgram, path):
    """Export code cave markers to code_caves.json.

    The markers are authoritative for each cave's name, start, size and free
    offset. Its allocations come from the existing file, which the patching
    scripts write, so an unreadable file stops the export rather than lose
    them. With no markers left, the file is removed.
    """
    existing_caves = {}
    json_path = os.path.join(path, "code_caves.json")
    if os.path.isfile(json_path):
        with open(json_path, 'r') as f:
            existing_data = json.load(f)
        for cave in existing_data.get("caves", []):
            existing_caves[cave["start"]] = cave
        log_info("Loaded %d existing cave records" % len(existing_caves))

    log_info("Scanning for CODE_CAVE markers")
    caves = parallel_scan_ranges(
        currentProgram, scan_code_caves_worker, extra_args=(currentProgram.getListing(),))
    log_info("Found %d code cave markers" % len(caves))

    if not caves:
        if os.path.isfile(json_path):
            os.remove(json_path)
            log_info("No code caves left, removed code_caves.json")
        else:
            log_info("No code caves found, skipping export")
        return

    for cave in caves:
        existing = existing_caves.get(cave["start"])
        if existing:
            cave["allocations"] = existing.get("allocations", [])

    # Addresses are fixed-width hex, so they sort as text
    caves.sort(key=lambda c: c["start"])

    os.makedirs(path, exist_ok=True)
    with open(json_path, 'w') as f:
        json.dump({"caves": caves}, f, indent=2)
    log_info("Exported %d code caves to code_caves.json" % len(caves))

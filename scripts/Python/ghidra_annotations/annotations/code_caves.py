import os
import re
from ghidra_annotations.util import *
from ghidra.program.model.listing import CodeUnit


# Marker prefix set by CreateCodeCave.java
MARKER_PREFIX = "CODE_CAVE"

# Pattern: CODE_CAVE <name> <total_size> [<free_offset>]
MARKER_PATTERN = re.compile(
    r'^CODE_CAVE\s+(\S+)\s+(\d+)(?:\s+(\d+))?$'
)


def scan_code_caves_worker(start_addr, end_addr, listing):
    """Worker to scan for CODE_CAVE plate comment markers in an address range."""
    caves = []
    try:
        addr_set = create_address_set(start_addr, end_addr)
        code_units = listing.getCodeUnits(addr_set, True)

        while code_units.hasNext():
            cu = code_units.next()
            plate = cu.getComment(CodeUnit.PLATE_COMMENT)
            if not plate or not str(plate).startswith(MARKER_PREFIX):
                continue

            plate_str = str(plate).strip()
            m = MARKER_PATTERN.match(plate_str)
            if not m:
                continue

            cave_name = m.group(1)
            total_size = int(m.group(2))
            free_offset = int(m.group(3)) if m.group(3) else 0
            start = str(cu.getMinAddress())

            caves.append({
                "name": cave_name,
                "start": start,
                "total_size": total_size,
                "free_offset": free_offset,
                "allocations": [],
            })
    except Exception:
        pass
    return caves


def export_code_caves(currentProgram, path):
    """Export code cave markers to code_caves.json."""

    # Load existing cave data to preserve allocation details
    existing_caves = {}
    json_path = os.path.join(path, "code_caves.json")
    if os.path.isfile(json_path):
        try:
            with open(json_path, 'r') as f:
                import json
                existing_data = json.load(f)
            for cave in existing_data.get("caves", []):
                existing_caves[cave["start"]] = cave
            log_info("Loaded %d existing cave records" % len(existing_caves))
        except Exception as e:
            log_info("Could not load existing code_caves.json: %s" % e)

    # Scan for markers
    log_info("Scanning for CODE_CAVE markers")
    listing = currentProgram.getListing()
    caves = parallel_scan_ranges(
        currentProgram, scan_code_caves_worker, extra_args=(listing,))
    log_info("Found %d code cave markers" % len(caves))

    if not caves:
        log_info("No code caves found, skipping export")
        return

    # Merge: marker is authoritative for name, start, total_size, free_offset.
    # Allocations come from the existing JSON (populated by patching scripts).
    for cave in caves:
        existing = existing_caves.get(cave["start"])
        if existing:
            cave["allocations"] = existing.get("allocations", [])

    # Sort by address
    caves.sort(key=lambda c: c["start"])

    # Write single JSON file
    import json
    output = {"caves": caves}
    os.makedirs(path, exist_ok=True)
    with open(json_path, 'w') as f:
        json.dump(output, f, indent=2)
    log_info("Exported %d code caves to code_caves.json" % len(caves))

#!/usr/bin/env python3
"""List or extract files from a POD2 archive (hero.pod, enemy.pod, ...).

The layout is taken from the game's own loader, CPodFile::mountFromFile in
engine/pod.cpp, plus the SPod2Header / SPodDirEntryOnDisk struct definitions:

    0x00  char  magic[4]        "POD2"
    0x04  uint  checksum
    0x08  char  description[80]
    0x58  int   file_count
    0x5c  int   audit_count
    0x60  SPodDirEntryOnDisk[file_count]  -- 20 bytes each:
              uint name_offset   relative to the name table
              uint size
              uint offset        absolute, into the archive
              uint timestamp
              uint checksum
          name table            -- NUL-terminated names, running from the end
                                   of the directory to the first entry's data.
                                   The loader sizes it exactly that way:
                                   entries[0].offset - 0x60 - count * 0x14

Only POD2 is implemented. The loader also handles POD1, POD3 and EPD; add them
here if an archive turns up that needs them.

Most of what is inside is text — .DFM models and .SKL skeletons are both
human-readable, which makes this useful for answering questions the decompiled
code alone cannot, e.g. which heroes own a motion of a given name, or whether
two skeletons agree bone for bone.

    extract_pod.py hero.pod                    # list everything
    extract_pod.py hero.pod .skl               # list matching entries
    extract_pod.py hero.pod .skl /tmp/out      # ...and extract them there
"""

import os
import struct
import sys

POD2_HEADER_SIZE = 0x60
POD2_DIR_ENTRY_SIZE = 0x14


def read_pod(path):
    """Return (description, audit_count, entries, blob) for a POD2 archive.

    Each entry is a dict with name, size and offset.
    """
    with open(path, "rb") as handle:
        blob = handle.read()

    if blob[:4] != b"POD2":
        raise SystemExit("%s: not a POD2 archive (magic %r)" % (path, blob[:4]))

    description = blob[8:0x58].split(b"\0")[0].decode("latin-1")
    file_count, audit_count = struct.unpack_from("<ii", blob, 0x58)

    entries = []
    for i in range(file_count):
        name_offset, size, offset, _timestamp, _checksum = struct.unpack_from(
            "<IIIII", blob, POD2_HEADER_SIZE + i * POD2_DIR_ENTRY_SIZE)
        entries.append({"name_offset": name_offset, "size": size, "offset": offset})

    name_table = POD2_HEADER_SIZE + file_count * POD2_DIR_ENTRY_SIZE
    for entry in entries:
        start = name_table + entry["name_offset"]
        entry["name"] = blob[start:blob.index(b"\0", start)].decode("latin-1")

    return description, audit_count, entries, blob


def main(argv):
    if len(argv) < 2:
        raise SystemExit(__doc__)

    path = argv[1]
    pattern = argv[2] if len(argv) > 2 else None
    out_dir = argv[3] if len(argv) > 3 else None

    description, audit_count, entries, blob = read_pod(path)
    print("%s: %r  files=%d audit=%d"
          % (os.path.basename(path), description, len(entries), audit_count))

    selected = [e for e in entries
                if pattern is None or pattern.lower() in e["name"].lower()]

    for entry in selected:
        print("  %-40s %9d bytes @ 0x%08x"
              % (entry["name"], entry["size"], entry["offset"]))
        if out_dir:
            os.makedirs(out_dir, exist_ok=True)
            # Archive names are Windows paths; keep only the leaf.
            leaf = os.path.basename(entry["name"].replace("\\", "/"))
            with open(os.path.join(out_dir, leaf), "wb") as handle:
                handle.write(blob[entry["offset"]:entry["offset"] + entry["size"]])

    if pattern is not None:
        print("  (%d of %d shown)" % (len(selected), len(entries)))


if __name__ == "__main__":
    main(sys.argv)

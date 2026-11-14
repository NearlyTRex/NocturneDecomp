# POD archives

The archive formats the Nocturne engine reads its data from, in all five builds (nocedit,
retail nocturne, bw1, blairwitch2, bw3): their layouts, how they are mounted and searched, the
editor that builds them, and the shipped files measured against all of it.

| Page | Contents |
|---|---|
| [formats.md](formats.md) | EPD, POD1, POD2 and both POD3 layouts; the in-memory directory; CRC-32/MPEG-2 and what each checksum covers; audit and dependency records |
| [mounting.md](mounting.md) | The mount table, `pod.ini`, priority and dependency ordering, lookup precedence per build, reading a file's bytes, when checksums are checked, errors, oddities |
| [editor.md](editor.md) | nocedit's POD tools: the POD2 builder, `level.lst` and the response files, the audit trail, `pod.ini` management, the menu |
| [measurements.md](measurements.md) | Every shipped POD of the four games, checked |
| [later_versions.md](later_versions.md) | POD4 to POD6 and the later engines, from outside sources only |

`scripts/Python/extract_pod.py` lists and extracts POD2 archives.

## Key facts

- **POD2 is the format of every shipped archive but one**, in all four games, and every one is
  exactly what nocedit's builder writes: CRCs valid, names sorted and upper-cased, audit records
  after the data. Nocturne's `tground.pod` is the one POD1.
- **There are two POD3s.** nocedit's header has the file count at `0xfc`; the Blair Witch
  builds' keeps POD2's prefix (count `0x58`, audits `0x5c`) and moves everything else. Neither
  ships, nothing writes either, and a file for one misreads in the other.
- **Retail Nocturne reads only POD2 and POD1.** EPD and POD3 are editor and Blair Witch only.
- **bw1 and bw3 cannot read POD1**: a read-size check compares `0x54` bytes with 4.
- **The checksum is CRC-32/MPEG-2 in every build**, and **no build checks it when mounting**.
  Only the editor's tools verify CRCs.
- **Mount priority and dependency records do nothing outside the editor.** Retail lacks the
  sort; the BW builds link it and never call it. Mount order is `pod.ini`'s, else the
  directory's.
- **The first mounted POD with a name wins, and a POD beats a loose file**, except in bw3, which
  looks on disk first.
- **There is no compression, encryption or hashing** in any POD format or path here.

## Recreation

`recreation/engine/pod/` reads POD1 and POD2, the retail set. POD3 (the BW layout, version 300)
and EPD are the candidates for Blair Witch support. `crc32UpdateByte` and `crc32UpdateBuffer`
are recreated in `engine/pod/pod_functions.*` and checked against nocedit's own machine code.

## Corrections to Ghidra

These field names are wrong in the current types, from the read and write sites:

| Type | Field | Is |
|---|---|---|
| `SPod3Header` | `data_start_offset` (`0x100`) | the directory's absolute offset |
| `SPod3Header` | `total_file_size` (`0x10c`) | the name table's size |
| `SPod3Header` (BW) | whole layout | the BW column of [formats.md](formats.md#pod3-two-incompatible-layouts) |
| `CPodAuditRecord` | `file_offset` (`0x130`) | the file's new timestamp |
| `CPodAuditRecord` | `compressed_size` (`0x134`) | the file's new size |
| `SPod1Header` | `description` | 76 bytes, then the CRC at `0x50` |

Also: bw3's `FUN_004e44e0` is its `initializeGameSystems` (it registers the file-lookup hooks);
`CPod_resolveDependenciesAndSort.keep.cpp` tests `is_required` (`+0x104`) where its third phase
should test the ordering field (`+0x100`, asm `00551539`, `005516ef`).

## Open

- What reads `CPodFile +0x40c` (1000 by default).
- The meaning of nocedit POD3 `0x104`, `0x114`, `0x11c`, BW POD3 `0x60`, `0x10c`, `0x118`,
  `0x11c`, EPD `0x00` and `0x108`, and EPD entry `+0x48`. Nothing reads them.
- Who calls `remount` in any build; the call is through the vtable.
- How widely the BW loaders use `CInStreamFile` rather than `FILE *`.
- bw3's bare `"POD"` string.

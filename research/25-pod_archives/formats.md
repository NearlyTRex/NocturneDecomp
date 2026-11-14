# POD archive formats

Every on-disk layout the five engine builds read, with the read sites that establish each field.
All integers are little-endian 32-bit. Offsets are into the file unless stated. Addresses are
nocedit's unless a build is named. Measurements over the shipped files are in
[measurements.md](measurements.md).

## Which build reads what

| Format | How it is chosen | nocedit | retail | bw1 / bw3 | bw2 |
|---|---|---|---|---|---|
| EPD | extension `epd` or `.epd`, no magic check | yes | no | yes | yes |
| POD3 | magic `POD3` | nocedit layout | no | BW layout | BW layout |
| POD2 | magic `POD2` | yes | yes | yes | yes |
| POD1 | anything else (no magic) | yes | yes | broken, see below | yes |

`CPodFile::mountFromFile` is the reader in every build: nocedit `0054f650`, retail `004f7ae0`,
bw1 `0053b250`, bw2 `00519f00`, bw3 `00512fb0`. bw1 and bw3 are the same code (normalized asm
identical; bw3 = bw1 − `0x282a0`). bw2 is nocedit's `FILE *` version without the debug allocator.

The version the reader stores in `CPodFile.pod_format_version` (`+0x0`):

| Format | nocedit | retail | bw1 / bw2 / bw3 |
|---|---:|---:|---:|
| EPD | 0 (not written; cleanup zeroes it) | — | 0 |
| POD1 | 1 (`0054fe6c`) | 1 (`004f7ec0`) | 1 |
| POD2 | 200 (`0054fb31`) | 2 (`004f7bfb`) | 200 |
| POD3 | 200 (`0054fc91`) | — | 300 (bw1 `0053b9bb`, bw2 `0051a506`) |

nocedit gives POD2 and POD3 the same 200, so nothing after mounting can tell them apart. No code
in any build compares against 300; the only readers of the version are the CRC functions and
nocedit's editor (see [mounting.md](mounting.md#checksums)). No build sets 100, though the CRC
functions accept it and skip it.

## Common in-memory directory

Every format is converted on load into the same 20-byte `CPodDirectoryEntry`: name pointer, size,
absolute offset, timestamp, CRC (`populateFileInfo` `005501f6`–`00550221`). After every branch
the reader closes the file, checks each name offset against the name block's size, turns the
offsets into pointers and sorts the directory case-insensitively by name (nocedit `qsort`
`0054fa6a`; retail uses an inline bubble sort, `004f7e26`). The sort is what makes the binary
search in `findFileIndex` valid; the file's own order does not matter to the reader.

No format has a compression, encryption or flags field. File data is stored raw at absolute
offsets, and nothing in any build's POD path decompresses.

## POD1

No magic: a file that is not `.epd` and does not start `POD2`/`POD3` is read as POD1.

Header, `0x54` bytes (`0054fe72`):

| Offset | Type | Meaning |
|---|---|---|
| `0x00` | int | file count. nocedit and bw2 require 1..99999 (`0054fe8a`); retail has no check |
| `0x04` | char[76] | description |
| `0x50` | uint | whole-file CRC, over `[0x54, EOF)` |

The reader `strcpy`s an 80-byte description from `0x04`, so the CRC's bytes are inside the
string it copies. The CRC position comes from `verifyChecksum` (reads `hdr − 4`, `005502b4`) and
`computeAndStoreCRC` (writes there, `005511dd`), with `hdr = 0x54` for version 1.

Directory entries follow the header, `0x28` bytes each (`0054ff2f`):

| Offset | Type | Meaning |
|---|---|---|
| `0x00` | char[32] | name, inline, NUL-terminated (not checked) |
| `0x20` | uint | size |
| `0x24` | uint | absolute offset |

POD1 has no per-file CRC (set to 0, `0055003a`) and no per-file timestamp: every entry takes the
POD file's own timestamp. No audit or dependency records.

**bw1 and bw3 cannot read POD1.** They read the `0x54`-byte header and then compare the byte
count with 4 (`CMP EAX,0x4` at bw1 `0053bbac`), so every real POD1 fails with "I/O Error
accessing file, or file is corrupt". The code past that check, never reached, adds entry checks:
size 0..999,999,999, size ≤ file size, offset ≥ `0x54`, offset + size ≤ file size.

## POD2

The format of every shipped Nocturne and Blair Witch archive but one.

Header, `0x60` bytes (`0054fb23`):

| Offset | Type | Meaning |
|---|---|---|
| `0x00` | char[4] | `POD2` |
| `0x04` | uint | whole-file CRC, over `[0x08, EOF)` |
| `0x08` | char[80] | description (the editor's "volume name") |
| `0x58` | int | file count |
| `0x5c` | int | audit record count |

Then, with no seek:

1. **Directory**, `count × 0x14` bytes, read in one `fread` (`0054fba9`):

   | Offset | Type | Meaning |
   |---|---|---|
   | `0x00` | uint | name offset, relative to the start of the name table |
   | `0x04` | uint | size |
   | `0x08` | uint | absolute offset |
   | `0x0c` | uint | timestamp, `time_t` (the source file's mtime when built) |
   | `0x10` | uint | CRC of the file's bytes |

2. **Name table**: NUL-terminated names, packed. Its size is not stored: the reader takes it as
   `entries[0].offset − 0x60 − count × 0x14` (`0054fbba`–`0054fbcc`), so the table must end where
   the first entry in file order starts its data. The size must lie in `[count, count × 256]` or
   the mount fails. Names are stored as written: case and `\` separators are not normalized.
3. **File data**, at the entries' absolute offsets.
4. **Audit records**, `audit_count × 0x138` bytes, starting at the last entry's
   `offset + size` in file order (`0054fc58`–`0054fc61`). See [Audit records](#audit-records).

Retail reads the same layout but stores version 2. bw1/bw3 add a count check (0..9,999,999,
`0053b87b`) and check every read's byte count.

## POD3: two incompatible layouts

Both are `0x120`-byte headers that start `POD3`, a CRC and an 80-byte description, and both
seek to a directory offset and read POD2-style `0x14`-byte entries and a name table from there.
Past `0x58` they disagree. A POD3 written for one would mount with garbage counts and offsets in
the other. No POD3 file ships with any of the four games.

Offsets below come from each reader's stack arithmetic: the header buffer is at `ESP + 0x214`
in nocedit (fread at `0054fc83`) and `ESP + 0x414` in bw1 (read at `0053b99b`).

| Field | nocedit | bw1 / bw2 / bw3 |
|---|---|---|
| `POD3` | `0x00` | `0x00` |
| whole-file CRC | `0x04` | `0x04` |
| description | `0x08`, char[84] | `0x08`, char[80] |
| file count | `0xfc` | `0x58` |
| audit count | `0x118` | `0x5c` |
| not read | — | `0x60` |
| mount priority | `0x108` | `0x64` |
| author | `0x5c`, char[80] | `0x68`, char[80] |
| copyright | `0xac`, char[80] | `0xb8`, char[80] |
| directory offset (absolute) | `0x100` | `0x108` |
| not read | `0x104`, `0x114`, `0x11c` | `0x10c`, `0x118`, `0x11c` |
| name table size | `0x10c` | `0x110` |
| dependency count | `0x110` | `0x114` |

The BW layout keeps POD2's prefix (`count` at `0x58`, `audits` at `0x5c`), so a POD2-only tool
reads a BW POD3's counts correctly. Ghidra's `SPod3Header` is nocedit's layout; its
`data_start_offset` (`0x100`) is the directory offset and its `total_file_size` (`0x10c`) is the
name table size.

From the directory offset, in both:

1. directory, `count × 0x14`, then an `ferror` check;
2. name table, `names_size` bytes, which must lie in `[count, count × 256]`;
3. dependency records, `dependency_count × 0x108`, starting at the `ftell` after the names
   (`CPodFile +0x428`, `0054fe27`);
4. audit records, `audit_count × 0x138`, straight after them (`CPodFile +0x420`, `0054fe3a`).

File data is wherever the entries' absolute offsets say; the header does not locate it.

## EPD

Chosen by extension alone in nocedit and all three BW builds; retail has no EPD branch. A
`.epd` file is mounted only when `pod.ini` names it, since the fallback scan is `*.pod`.

Header, `0x110` bytes (`0054f79d`):

| Offset | Type | Meaning |
|---|---|---|
| `0x000` | 4 bytes | read, never used (no magic check) |
| `0x004` | char[256] | description |
| `0x104` | int | file count, no range check (bw1/bw3: 0..9,999,999) |
| `0x108` | 8 bytes | read, never used |

Directory entries follow, `0x50` bytes each, read one at a time (`0054f845`):

| Offset | Type | Meaning |
|---|---|---|
| `0x00` | char[64] | name, inline |
| `0x40` | uint | size |
| `0x44` | uint | absolute offset |
| `0x48` | 4 bytes | read, never used |
| `0x4c` | uint | CRC, stored but never checked |

Entries take the EPD file's own timestamp. No audit or dependency records. EPD mounts with
version 0, which `verifyChecksum` rejects (returns 0) and `computeAndStoreCRC` treats as fatal
("Invalid pod version for %s: 0", `00551249`), so an EPD's CRCs are never used.

## Checksums

**The algorithm is CRC-32/MPEG-2 in all five builds**: poly `0x04C11DB7`, MSB first, not
reflected, init `0xFFFFFFFF`, no final XOR; check value `0x0376E6E7` for `"123456789"`.
`crc32UpdateByte` computes it bitwise with no table (nocedit `0054f2e0`, retail `004f77d0`, bw1
`0053b000`, bw2 `00519cb0`, bw3 `00512d60`): `crc ^= byte << 24`, then eight rounds of
`crc = (crc << 1) ^ (msb ? 0x04C11DB7 : 0)`. nocedit feeds it 64 KiB blocks through
`g_FileIOBuffer`; BW feeds it one `fgetc` at a time. `crc32UpdateBuffer`,
`crc32ComputeFromFile` and `crc32ComputeFileRange` have no callers; the users inline their own
loops.

| Checksum | Where stored | Covers |
|---|---|---|
| POD1 whole file | `0x50` | `[0x54, EOF)` |
| POD2 whole file | `0x04` | `[0x08, EOF)` |
| POD3 whole file | `0x04` | `[0x08, EOF)` (version 200 in nocedit; BW's 300 is rejected) |
| per file (POD2, POD3, EPD) | directory entry | the file's own `size` bytes |

The whole-file ranges include the directory, the names and the audit records. Every shipped POD2
matches its stored CRC (see [measurements.md](measurements.md)). When they are checked is in
[mounting.md](mounting.md#checksums): never on mount.

## Audit records

`0x138` bytes each, after the file data in POD2 and after the dependency records in POD3.
`getAuditRecord` (`00550590`) seeks to `CPodFile +0x420 + i × 0x138`. Only nocedit reads or
writes them. Layout from the editor's write sites (`rebuildLastPod`):

| Offset | Type | Meaning |
|---|---|---|
| `0x000` | char[32] | user name |
| `0x020` | `time_t` | time of the build; every record from one build shares it |
| `0x024` | int | operation: 0 add, 1 remove, 2 change |
| `0x028` | char[256] | file name |
| `0x128` | `time_t` | the file's previous timestamp (0 for add) |
| `0x12c` | uint | the file's previous size (0 for add) |
| `0x130` | `time_t` | the file's new timestamp (0 for remove) |
| `0x134` | uint | the file's new size (0 for remove) |

Ghidra's `CPodAuditRecord` names `0x130` and `0x134` `file_offset` and `compressed_size`; the
write sites (`004b6655`–`004b6668`) store the new timestamp and size there.

## Dependency records

POD3 only, `0x108` bytes each. `getDependencyRecord` (`005506c0`) seeks to
`CPodFile +0x428 + i × 0x108`. Fields from the reads in `resolveDependenciesAndSort`:

| Offset | Type | Meaning |
|---|---|---|
| `0x000` | char[256] | another POD's name; matched by file stem only |
| `0x100` | int | ordering rule: 0 none, > 0 the named POD mounts before this one, < 0 after |
| `0x104` | int | non-zero: this POD is dismounted when the named one is not mounted |

What they do at mount time, and that only nocedit acts on them, is in
[mounting.md](mounting.md#priority-and-dependencies). No build writes them.

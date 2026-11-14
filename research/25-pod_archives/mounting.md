# Mounting PODs and reading from them

What each build does with its PODs after the reader in [formats.md](formats.md) has parsed
them: which are mounted and in what order, how a file name is found, how its bytes are read, and
when the checksums are looked at. Addresses are nocedit's unless a build is named.

## The mount table

`CPod` (nocedit's `g_DemonPod`, a `CDemonPod`) holds a count at `+0` and `CPodFile *[100]` at
`+4`. Its vtable has the same six slots in every build: dtor, `load`, `findFile`, `mount`,
`dismount`, `remount` (nocedit `0x6623b4`, retail `0x5a1484`, bw1 `0x604a34`, bw2 `0x5fad64`,
bw3 `0x5e3424`). The base `CPod::load` is an empty `ret` everywhere; `CDemonPod::load` is the
real one. `CPod::init` (`00550c30`) calls `load` only when nothing is mounted, and a null `CPod`
is the fatal "CPod::init - No .POD to init!".

| | nocedit, retail, bw2 | bw1, bw3 |
|---|---|---|
| `mount` | nocedit `00550a10`, retail `004f88a0`, bw2 `0051b110` | bw1 `0053c650`, bw3 `005143b0` |
| 101st POD | fatal "Too many .POD files at once!" | "Too many PODs already mounted", returns 0 |
| parse failure | fatal "Can't mount %s" | returns 0 with the reader's reason |
| same path mounted twice | two entries | the old one is dismounted first (`0053c6e6`), the new one appended |

The new `CPodFile` is always appended. `dismountPod` deletes one and closes the gap; `remount`
re-reads every mounted POD from its own path ("Can't re-mount %s", bw1 adds the reason).

## What gets mounted: `pod.ini`

`CDemonPod::load` (nocedit `005519c0`, retail `004f92b0`, bw1 `0053d580`, bw2 `0051c000`, bw3
`005152e0`) opens `pod.ini` from the current directory, text mode:

```
<count>
<name>
<name>
...
```

`fscanf("%d\n")`, then `count` × `fscanf("%s\n")` into an 80-byte buffer: one name per line, no
spaces, no comments, no length check. Each is mounted in file order; BW makes a failure fatal
("Can't mount %s: %s", bw1 `0053d64c`). Without `pod.ini`, a `CFileFinder` over `*.pod` mounts
every match in the order the OS lists them (alphabetical on NTFS, not guaranteed elsewhere). An
EPD is mounted only if `pod.ini` names it. The editor's tools for writing `pod.ini` are in
[editor.md](editor.md#podini).

## Priority and dependencies

Only nocedit's `CDemonPod::load` goes on to call `resolveDependenciesAndSort` (`005513d0`).
Retail does not have the function. bw1/bw2/bw3 link an identical copy (bw1 `0053cfa0`) that
nothing calls. **So mount priority and dependency records have no effect outside the editor**,
and in retail and the Blair Witch games the mount order is `pod.ini`'s, or the directory's.

In nocedit, in order:

1. **Prune.** A POD with a dependency record whose `+0x104` is set, naming a POD that is not
   mounted, is dismounted. Repeated until a pass removes nothing, so a chain collapses.
2. **Sort by priority**, ascending, stable (a bubble sort, `0055148b`). Only POD3 carries a
   priority; every other format keeps the default of 1000.
3. **Collect ordering rules** from every dependency record with a non-zero `+0x100` whose named
   POD is mounted. 200 rules is the fatal "Too many POD dependency ordering rules".
4. **Order.** Each position takes the first remaining POD whose every "must come after" rule is
   already satisfied by the PODs placed before it. If none qualifies: fatal "Circular POD mount
   order dependency detected." (`0055161d`).

`getPodIndexByFilename` (`00551820`) compares file stems only, so a rule naming `foo.pod` is
satisfied by a mounted `foo.epd`.

## Finding a file

`CPod::findFile` (`00551380`, the same in every build) walks the table from index 0 and
binary-searches each POD's sorted directory with `_stricmp`. **The first POD that has the name
wins**, so a POD earlier in `pod.ini` overrides a later one. Matching ignores case but not the
separator: the stored names use `\`, and `/` does not match it.

The engine's file lookup (`dosio findFile`, `00481760`) tries up to five hooks in the order they
were added (`addGetFileInfoHook`, `00481710`). `initializeGameSystems` adds them in this order:

| Build | First | Second | So |
|---|---|---|---|
| nocedit `00507b60` | `findFileInPod` | `findFileNormally` | a POD's copy beats a loose file |
| retail `004c86da` | `findFileInPod` | `findFileNormally` | the same |
| bw1 `00503321`, bw2 `004e4741` | `findFileInPod` | `findFileNormally` | the same |
| bw3 `004e4561` | `findFileNormally` | `findFileInPod` | **a loose file beats a POD** |

bw3 is the only build where a loose file overrides a POD's. Its new message "Unable to open VGA
palette (probably need to mount startup.pod or delete pod.ini)" (`004015fb`) fits that.

A POD's own location is found by `findFileNormally` only, so a POD cannot live inside another.

## Reading a file's bytes

`populateFileInfo` (`005501b0`) hands back the POD's path, the entry's absolute offset and
size, the entry's timestamp and `is_archive = 1`. There are no flags: the bytes are raw.

- **`FILE *` path, every build:** `dosio getFile` (nocedit `00481a50`, bw1 `00479180`) opens
  the POD and seeks to the offset. Nothing bounds the read to the entry's size; the caller reads
  only what it expects. The iostream path does the same with `seekg`.
- **`CInStreamFile`, bw1/bw2/bw3 only** (`support/trstream.cpp`): a Win32
  `CreateFileA`/`ReadFile` reader with a 4 KiB page cache. `openInDirectory` (bw1 `005a0fd0`)
  calls `findFile`, opens the POD, and keeps the handle open with a window of
  `[offset, offset + size)`: reads are clamped to the entry and return −1 past its end. Texture,
  font, sound and palette loaders use it. bw1 and bw3 also parse the POD header through one
  (a stack local in `mountFromFile`, closed before it returns; `CPodFile` keeps no handle).

## Search

`initSearch`/`getNextSearchResult` (`00550ea0`/`00550ef0`) walk every POD's every entry through
`wildcardStringMatch`, reporting duplicates as often as they occur. `findFilesByExtension`
(`00550ce0`) lets an earlier POD shadow a later one's copy, but upper-cases the extension and then
compares case-sensitively, so it finds only names stored with an upper-case extension (all the
shipped ones are). Its two 12-byte buffers overflow on a longer extension.

## Checksums

**No build verifies a checksum when it mounts or reads.** The whole-file and per-file CRCs
([formats.md](formats.md#checksums)) are checked only through `CPod::verifyIntegrity`
(`00551280`) → `CPodFile::verifyChecksum` (`00550230`), and only nocedit's editor calls them (menu
V, check-in, extract; [editor.md](editor.md)). For version 200, `verifyChecksum` checks every
per-file CRC first and lists failures ("!!!CRC CHECK FAILED!! on these files:"), then the
whole-file CRC ("CRC check is valid" / "WARNING! CRC is invalid. This may be an old .POD").

In retail and BW, `verifyIntegrity`, `computeAndStoreCRC`, `getAuditRecord`, `locateFile` and
`findFilesByExtension` have no references. BW's copies of the CRC functions accept versions
1, 100 and 200, so a BW POD3 (version 300) would be the fatal "Invalid pod version for %s: %d";
being dead code, it never is. Retail's accept 1 and 2.

## Error reporting

nocedit, retail and bw2 fail a mount silently: the reader returns 0 and `mount` makes it fatal.
bw1 and bw3 return a reason through an extra argument, localized: "File not found", "Unable to
open file '%s'", "Out of memory", "File is corrupt" (a bounds check), "I/O Error accessing file,
or file is corrupt" (a short read; this is the one every POD1 hits, see
[formats.md](formats.md#pod1)). Only the final shrinking `realloc` of the name block is still fatal.

## Oddities in the original

- A name-offset failure after the file is closed jumps to the failure path, which closes it
  again (`0054fa2d` → `0054f6fe`).
- POD2 with a file count of 0 reads `entries[0].offset` from an empty allocation; POD2 and POD3
  have no lower bound on the count, EPD and POD3 no upper bound (nocedit, bw2).
- POD1 and EPD names are `strlen`'d with no check that the fixed field holds a NUL.
- `CPodFile +0x420` (the audit start) is never reset for POD1 or EPD; harmless only because
  their audit count is 0.
- `pod.ini` names longer than 79 characters overrun the stack buffer.
- `CPodFile +0x40c` is set to 1000 by cleanup (and by the BW constructors); nothing reads it.

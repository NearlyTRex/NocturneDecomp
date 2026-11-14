# The shipped PODs, measured

Every `.pod` in an installed copy of each game, parsed with the layouts in
[formats.md](formats.md) and checked with CRC-32/MPEG-2.

| Game | PODs | POD2 | POD1 | Files | Audit records | Newest file timestamp |
|---|---:|---:|---:|---:|---:|---|
| Nocturne | 41 | 40 | 1 | 11,903 (+480) | 38,978 | 1999-12-02 |
| Blair Witch Vol. 1 | 41 | 41 | 0 | 11,654 | 37,209 | 2000-09-11 |
| Blair Witch Vol. 2 | 29 | 29 | 0 | 6,862 | 21,600 | 2000-10-17 |
| Blair Witch Vol. 3 | 8 | 8 | 0 | 7,953 | 8,221 | 2000-11-02 |

No game ships a POD3 or an EPD. Every POD2, in all four games:

- **matches its whole-file CRC** over `[0x08, EOF)`, and **every file matches its own CRC**;
- has its directory in case-insensitive name order, and its data in the same order;
- has its name table end exactly where the first file's data starts, as the reader assumes;
- has **audit records filling the file after the data exactly**: the bytes past the last file are
  `audit_count × 0x138` in every one, and every POD has some;
- stores every name in upper case with `\` separators, none longer than 36 characters.

That is the editor's `rebuildLastPod` output in every respect ([editor.md](editor.md)): the Blair
Witch teams built their PODs with the same tool. Most descriptions are empty in the Blair Witch
PODs; Nocturne's are the POD's own name (`ACT1`, `ACT1SND`).

**`tground.pod` is the only POD1**: 480 files under `ART\`, an empty description, the directory
ending where the data starts, no bytes after the data. Its CRC slot at `0x50` is 0, which does not
match the `[0x54, EOF)` CRC (`0xd88e8bee`); POD1's CRC was never written here. It mounts in
nocedit, retail and bw2, and would fail in bw1 and bw3 ([formats.md](formats.md#pod1)).

The commonest extensions, by file count, are `.raw`, `.act`, `.sfx`, `.mp3`, `.fog`, `.wav`,
`.opa` and `.kfm` in every game.

# The editor's POD tools

nocedit's file manager builds, inspects and maintains PODs. Only nocedit has it. Its menu is
`CDemonFileManager_showEditorMenu` (`core/fileman.cpp`), reached from the developer tools menu
([08-developer_mode_and_cheats/developer_tools_menu.md](../08-developer_mode_and_cheats/developer_tools_menu.md)).
The workers are in `engine/fileio.cpp`. Addresses are nocedit's.

## What it writes

**POD2 only.** There is no writer for POD1, POD3 or EPD, for author, copyright, priority or
dependency records. The one builder is `CFileManager::rebuildLastPod` (`004b5a50`). Rebuilding a
POD3 under its own name produces a POD2 and loses everything POD3 had beyond it.

The build, in order:

1. Zero a `0x60` header (`004b5a98`).
2. Lay out the directory: the first file's data starts at `0x60 + 20 × count + names`, and each
   next file starts where the last ended (`004b60ae`–`004b61c5`). No alignment, no padding.
3. Copy each file's bytes in, updating its CRC-32/MPEG-2 as it goes (`004b65a6`–`004b65bb`).
4. Write the audit records at the end of the data (`004b6902`).
5. Seek to 0 and write `POD2`, the header, the directory and the name table (`004b6910`–`004b69a9`).
6. Close, then `CPod::computeAndStoreCRC` (`00551000`) reopens the file and writes the
   whole-file CRC over `[8, EOF)` at offset 4.
7. Remount every POD.

Header fields written: `description` from the "Enter volume name" prompt (80 bytes), `file_count`,
`audit_count`. Directory entries: name offset, size and timestamp from `stat` (`st_size`,
`st_mtime`), absolute offset, CRC.

**Names** are the lines of `level.lst`, upper-cased (`toupper`, `004b6c6d`), relative to the
working directory with `\` separators (`MODELS\FOO.SET`). `CFileManager::load` (`004b6c00`) sorts
them case-insensitively before the build, so directory order, data order and name order are the
same. A file missing from disk aborts the build ("Couldn't build %s because the following files
don't exist", `004b63e8`); mounted PODs are not consulted. More than 10,000 files is "Too many
files - get Mark" (`004b5787`).

`registerFiles` (`004b5640`) adds `ART\<stem>.OPA` beside any `ART\*.RAW` that has one, and
requires the two to be the same size ("%s is not the same size as %s", `004b58ac`).

## Inputs

**`level.lst`**: one path per line; leading blanks and empty lines are skipped; no comments.
Lines are de-duplicated on the text before the first comma (upper-cased), but the whole line is
kept as the name.

**Old-school response file** (menu 4, `buildPodFromResponseFile` `004b7ac0`): copied verbatim
into `level.lst`, then built. Same format.

**Extended response file** (menu A, `CDemonFileManager_createPodFromDirectory` `004bda20`,
`*.vox`): `//` starts a comment; each line is `tag:value` (no spaces in the value), and a line
with no tag is a `file:`. Tags, case-insensitive:

| Tag | Adds to `level.lst` |
|---|---|
| `file` | the path |
| `msn` | `WORLD\<msn>`, its `.scr` and `.txt` if present, and every file the mission's actors load (`CDemonMission_addFilesToExtract`) |
| `kfm` | the model and its dependencies (`writeModelDependencies`) |
| `cth` | `models\<f>` and the cloth's files |
| `dfm` | `models\<f>` and the deformable model's files |
| `set` | `models\<f>` and the set's files |
| `sounds` | after syncing `*.wav/*.mp3/*.klp/*.vol/*.sfx` into `sound\` |

Any other tag is "Invalid tag \"%s\"" and stops. It asks for a volume name and then discards it
(`rebuildLastPod` is called with 0, `004be049`), so the name is asked for again.

## Audit trail

Each build compares the new file list with the POD of the same name before it is overwritten,
and appends a record per change to the old POD's own records (layout in
[formats.md](formats.md#audit-records)): add for a new name, remove for a name gone, change for a
CRC that differs. An unchanged file adds nothing. Every record from one build carries the same
`time(NULL)` and the user name (the version-control login, else `USERNAME`, else a prompt). A
version-1 POD gets its per-file CRCs computed first ("Upgrading version 1 Pod...", `004b5d30`).

Menu T (`viewPodAuditTrail` `004b7f50`) lists them grouped by user and time.

`removeAuditRecords` (`004bd190`) keeps records on or after an entered date, rewrites
`audit_count` at `+0x5c` and the records at the old position, and recomputes the CRC. It never
truncates the file. On a POD that is not version 200 it shows "Can't remove audit records on POD
of this version." and carries on. On a POD3 it writes `+0x5c`, which is inside nocedit's POD3
author field. Nothing references the function.

## `pod.ini`

`parsePodConfigFile` (`004ba4f0`) and `writePodConfigFile` (`004ba620`) read and write the format
in [mounting.md](mounting.md#what-gets-mounted-podini). A negative count or an empty name is the
fatal "Error parsing POD.INI".

- **`createPodConfigWizard`** (`004bccf0`), when there is no `pod.ini`: write one with every
  `*.pod` in the directory, one with none, or cancel.
- **Menu C, `managePodMounts`** (`004bcec0`): every `*.pod` in the directory plus anything
  `pod.ini` lists, each shown Mounted or Not mounted; choosing one toggles it, a newly mounted
  one going to the end. Closing writes `pod.ini` and remounts.

## Menu

| Key | Action | Function |
|---|---|---|
| 1 | Rebuild the last POD from `level.lst` | `rebuildLastPod(0, 0)` |
| 2 | Extract every file | `extractPodFile` `004b6e10` |
| 4 | Build from an old-school response file | `buildPodFromResponseFile` |
| 5 | Catalog: dir, name, ext, size, date | `catalogPodFile` `004b7460` |
| 7 | Move a set and its files into a POD | `moveSetIntoPod` `004bd930` |
| 9 | Extract chosen files | `extractFilesToDirectory` `004b76d0` |
| A | Build from an extended response file | `createPodFromDirectory` |
| C | Mount or dismount | `managePodMounts` |
| L | Compare loose files with a POD (size, mtime) | `compareLocalVsPod` `004b82a0` |
| T | View the audit trail | `viewPodAuditTrail` |
| V | Verify the CRCs | `verifyPodCRC` `004b7c90` |
| X | Every name in more than one POD, with POD and CRC | `crossReferencePodDuplicates` `004b9f40` |
| S | Search the mounted PODs | `searchMountedPods` |

Extraction (`extractFileWithTimestamp` `004b7d50`) sets each file's mtime to its directory
timestamp, and makes only the first directory of its path. Extracting from a mounted POD offers to
dismount it, which rewrites `pod.ini`. A build is followed by a choice of Catalog, View audit
trail or Verify CRC.

The version-control commands (check-in, check-out, undo, `managePodFiles`) copy whole PODs to and
from a network share and never change their contents; check-in refuses a POD that fails
`verifyIntegrity` ("%s fails CRC check. File not checked in"). None of them is referenced in this
build.

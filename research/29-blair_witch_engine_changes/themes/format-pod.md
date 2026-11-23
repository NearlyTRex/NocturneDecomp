# format-pod

[All themes](../README.md)

## `version`

| Function | nocedit | Builds | Root | Difference | Port | Evidence |
|---|---|---|---|---|---|---|
| `CPodFile::mountFromFile` | 0x0054f650 | bw1, bw3 | pod3-epd-formats | Rewritten on CInStreamFile with an out_error_message parameter ('File not found', 'Unable to open file', 'File is corrupt', 'I/O Error...', 'Out of memory', localized). It adds short-read checks on every read, a file_count sanity range 0..9999999, and POD1 per-entry bounds (size 0..999999999, offset >= 0x54, within file_size). Name offsets are checked against the name block. The format paths are NOT new: nocedit also has EPD (by extension, 0x110 header, 0x50 entries), POD3 and POD2. The one format difference is that POD3 sets pod_format_version 300 (nocedit 200), as in BW2. The recreation reads only POD1/POD2. | Add POD3 (magic 'POD3': 0x120 header, directory at an offset, name table size, dependency records) and EPD (.epd extension) readers to CPodFile, selected by magic and extension. POD1/POD2 stay as they are. The recreation already has the sanity and short-read checks and error reporting (superset). | bw1 CPodFile_mountFromFile_FUN_0053b250.cpp: EPD branch, POD3 branch with pod_format_version = 300, POD2, POD1 bounds checks, LAB_0053b2de error copy. nocedit 0054f650 lines 79/158 epd, 164-168 POD3 with version 200. |
| `CPodFile::mountFromFile` | 0x0054f650 | bw2 | pod3-epd-formats | BW2 keeps nocedit's FILE*-based structure, and its POD3 name-table handling is the same as nocedit's (bounds file_count <= size <= file_count*0x100, read, dependency/audit offsets). The only format difference is that POD3 sets pod_format_version 300 instead of nocedit's 200. An empty directory loop was added, which does nothing. | Gate on the POD3 magic: port the POD3 reader and record it as version 3/300. The recreation reads no POD3 today, so Nocturne's POD1/POD2 are untouched. | bw2 CPodFile_mountFromFile_FUN_00519f00.cpp lines 165-231 against nocedit lines 164-230; line 169 'pod_format_version = 300' vs nocedit 168 '= 200'. |

## `manifest`

| Function | nocedit | Builds | Root | Difference | Port | Evidence |
|---|---|---|---|---|---|---|
| `CPod::mount` | 0x00550a10 | bw1, bw3 | bw-pod-mount-errors | BW1/BW3 return success plus an error string (localized 'Out of memory', 'Too many PODs already mounted', or mountFromFile's reason) instead of quitting, and free the CPodFile on failure. The 100-pod limit is checked after mounting rather than before. The real behaviour change: after a successful mount it calls the vtable dismount(pod_filename) first, so a pod of the same name already mounted is dropped. The new one then goes at the end of the search order, and the dismount handler (texture-cache clear) runs whenever the file exists. | The error reporting is already in mountIfValid (superset). For replace-on-remount, add a manifest flag that runs dismount(name) before appending. Nocturne leaves it off, because re-mounting a name would reorder its search priority and clear the texture cache. | bw1 CPod_mount_FUN_0053c650.cpp: '(*this_ptr->vtable->dismount)(this_ptr,pod_filename)' after mountFromFile succeeds; bw3 005143b0 the same. nocedit 00550a10 quits on failure, no dismount. Recreation pod.cpp mount/mountIfValid already return the error. |

## `superset`

| Function | nocedit | Builds | Root | Difference | Port | Evidence |
|---|---|---|---|---|---|---|
| `CPod::remount` | 0x00550af0 | bw1, bw3 | bw-pod-mount-errors | mountFromFile takes a 512-byte error buffer, and the fatal text becomes 'Can't re-mount %s: %s' with the reason. Control flow is the same. | Have CPodFile::mountFromFile return its failure reason (std::expected) and add it to the remount fatal message for every game. Only the wording of an already-fatal error changes, so Nocturne's data and play cannot tell the difference. | bw1 CPod_remount_FUN_0053c750.cpp: acStack_310[512] passed to mountFromFile, message 'Can't re-mount %s: %s'. |

## `noop`

| Function | nocedit | Builds | Root | Difference | Port | Evidence |
|---|---|---|---|---|---|---|
| `CDemonPod::load` | 0x005519c0 | bw2 |  | BW2 drops the resolveDependenciesAndSort call after mounting. Mounting itself is the same as nocedit's. | Nothing to port: the package manifests and loadorder.txt set the mount order. | bw2 CDemonPod_load_FUN_0051c000.cpp has no resolveDependenciesAndSort call. |
| `CPodFile::CPodFile` (refuted) | 0x0054f5a0 | bw1, bw2, bw3 |  | The ctor sets format_flags to 1000 instead of 0. Every mountFromFile calls cleanup() first, which sets format_flags=1000 in nocedit too, and nothing reads the field before a mount. So no observable difference. | Nothing to port: the recreation does not model format_flags, and cleanup sets the same value before any use. | bw1 CPodFile_ctor_FUN_0053b1a0 'format_flags = 1000'. nocedit CPodFile_cleanup_FUN_00550090.cpp:30 format_flags = 1000, called at the top of mountFromFile. |
| `CDemonPod::load` | 0x005519c0 | bw1, bw3 | bw-pod-mount-errors | The mount return value is checked, and a failure is fatal ('Can't mount %s: %s', podmain.cpp lines 57/69). The resolveDependenciesAndSort call after mounting is gone (pod.ini list and *.pod search both). | Nothing to port: the recreation's package loader (demonpod.cpp loadPackages) replaces pod.ini, the search and the dependency sort, and reports mount failures itself. | bw1 CDemonPod_load_FUN_0053d580.cpp; nocedit 005519c0 calls CPod_resolveDependenciesAndSort_FUN_005513d0. |


# format-other

[All themes](../README.md)

## `version`

| Function | nocedit | Builds | Root | Difference | Port | Evidence |
|---|---|---|---|---|---|---|
| `CDemonSet::load` | 0x00569410 | bw1, bw3 | set-format-v29-31 | Three new set-file version gates, none of which nocedit has (its highest gate is <0x19). v29 (<0x1d defaults to 0) reads altitude_reference_y as %f. v30 (<0x1e defaults the direction to normalised (-1,-1,-1) with intensity 0) reads directional_light_dir plus intensity as %f,%f,%f,%f. v31 (<0x1f defaults the water globals to 0x2000, 0, 0, 0.25) reads a line plus %f,%d,%f,%f of water parameters. The rest of the parse matches. | In loadHeader/loadEnvironment, gate on set_file_version_: >=29 reads altitude_reference_y, >=30 reads the directional light (else the normalised (-1,-1,-1) direction with intensity 0), >=31 reads the water line (else 0x2000/0/0/0.25). Add the fields to CDemonSet and test v28 against v29/v30/v31 set texts. | bw1 CDemonSet_load_FUN_0054d3c0.cpp lines 62-84 (v30), 105-115 (v31), 179-184 (v29); bw3 FUN_00532b80 has the same gates at lines 62/105/179; nocedit FUN_00569410 has none |
| `CDemonSet::load` | 0x00569410 | bw2 | set-format-v29-31 | Same three version gates as BW1/BW3: v29 altitude_reference_y, v30 directional light (dir plus intensity, default normalised -1,-1,-1 with intensity 0), v31 water parameters (default 0x2000, 0, 0, 0.25). | The same set_file_version_ gates as BW1/BW3, with no BW2-specific code. | blairwitch2 CDemonSet_load_FUN_0052c0e0.cpp lines 62 (<0x1e), 105 (<0x1f), 179 (<0x1d) |

## `noop`

| Function | nocedit | Builds | Root | Difference | Port | Evidence |
|---|---|---|---|---|---|---|
| `CLZWDecompress::init` | 0x0043f4d0 | bw1, bw2, bw3 |  | Also sets pending_sequence_index=-1. BW's finalize uses it to resume a code sequence that did not fit in the output stream (resumeCodeSequence, return 2). nocedit has no resumable output. | Nothing. The recreation's processBuffer writes into a growable std::vector, so the output never runs short and BW's resume state can never be used. | bw1 CLZWDecompress_init_FUN_004436f0.cpp; bw1 CLZWDecompress_finalize_FUN_00443790.cpp (pending_sequence_index and resumeCodeSequence) |
| `readMessageFile` (refuted) | 0x00543e40 | bw1, bw2, bw3 |  | There is no extra header integer. All three BW builds read exactly nocedit's header: fgets, '%d' version, fgets, '%d' into g_UseOSFonts, the version check, fgets, the quoted font name. The fscanf count is 11 in every build. The only change is storage: BW mallocs each tag and text with 'Out of memory' errors, where nocedit copied into fixed 128- and 256-byte slots. The recreation already keeps std::string with no fixed slots. | Nothing. The format is identical and the recreation's unbounded strings already cover BW's heap storage. | bw1 .asm 00530c74 '%d\n', 00530c9d '%d\n' into g_UseOSFonts, 00530cd4 font name. blairwitch2 .asm 0050fa64 and 0050fa8d match, as does bw3 .asm 00508544/0050856d. grep -c fscanf = 11 in nocedit, bw1 and bw3. The bw1 pseudocode shows malloc(~len). |


// Name: core_setcolid.cpp_CDemonSet_FUN_00574560
// Address: 00574560
// Address Range: [[00574560, 00574571]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_FUN_00574560(CDemonSet * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_FUN_00523f50 (00523f50) at 00523f9c [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 0056a17b [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70
//   core_path.cpp_GlobalPathmapListCorruption_FUN_00548590

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_FUN_00574560(CDemonSet *this_ptr)

{
  core_dtrace_cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70(&g_CDemonRaytraceInstance);
  core_path_cpp_GlobalPathmapListCorruption_FUN_00548590();
  return;
}


// Assembly code:
// 00574560: PUSH 0x3277d14
//   Label: core_setcolid.cpp_CDemonSet_FUN_00574560
//   XREF to: 03277d14 (DATA)
// 00574565: CALL core_dtrace.cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70
//   XREF to: 00499e70 (UNCONDITIONAL_CALL)
// 0057456a: ADD ESP,0x4
// 0057456d: JMP 0x00548590
//   XREF to: 00548590 (UNCONDITIONAL_CALL)

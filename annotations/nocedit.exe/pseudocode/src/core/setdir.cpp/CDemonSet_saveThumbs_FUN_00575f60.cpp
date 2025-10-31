// Name: core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60
// Address: 00575f60
// Address Range: [[00575f60, 00575f6f]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60(CDemonSet * this_ptr)
// Cross-references:
//   core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40 (00575b40) at 00575b64 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 (00576da0) at 0057702e [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579421 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 (0057a2a0) at 0057a8a1 [UNCONDITIONAL_CALL]
// Function calls:
//   core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575f60(CDemonSet *this_ptr)

{
  core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575bc0(this_ptr,(FILE *)0x0);
  return;
}


// Assembly code:
// 00575f60: PUSH 0x0
//   Label: core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60
// 00575f62: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00575f66: PUSH EDX
// 00575f67: CALL core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0
//   XREF to: 00575bc0 (UNCONDITIONAL_CALL)
// 00575f6c: ADD ESP,0x8
// 00575f6f: RET

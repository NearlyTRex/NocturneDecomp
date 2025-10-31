// Name: core_set.cpp_CDemonSet_clear_FUN_005693c0
// Address: 005693c0
// Address Range: [[005693c0, 0056940f]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_clear_FUN_005693c0(CDemonSet * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_dtor_FUN_00569350 (00569350) at 00569356 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 00569448 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579a9d [UNCONDITIONAL_CALL]
// Globals:
//   CTerrain* g_CTerrainPtr = 03f8749c
//   CKeyFramedModel g_CKeyFramedModelInstance
//   CTerrain g_CTerrainInstance
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0
//   core_setutil.cpp_C3DSCamera_free_FUN_00585360
//   core_terrain.cpp_CTerrain_dtor_FUN_005e1f30

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_clear_FUN_005693c0(CDemonSet *this_ptr)

{
  C3DSCamera *this_ptr_00;
  int in_stack_00000008;
  CDemonSet *in_stack_00000010;
  
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&g_CKeyFramedModelInstance);
  this_ptr_00 = (C3DSCamera *)(in_stack_00000008 + 4);
  do {
    core_setutil_cpp_C3DSCamera_free_FUN_00585360(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (C3DSCamera *)(in_stack_00000008 + 0x19a2c));
  core_terrain_cpp_CTerrain_dtor_FUN_005e1f30(g_CTerrainPtr);
  core_setdir_cpp_CDemonSet_freeThumbs_FUN_00575df0(in_stack_00000010);
  return;
}


// Assembly code:
// 005693c0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_clear_FUN_005693c0
// 005693c1: PUSH ESI
// 005693c2: PUSH 0x32780a4
//   XREF to: 032780a4 (DATA)
// 005693c7: CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   XREF to: 00477690 (UNCONDITIONAL_CALL)
// 005693cc: ADD ESP,0x4
// 005693cf: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005693d3: ADD ESI,0x4
// 005693d6: MOV EBX,ESI
// 005693d8: ADD ESI,0x19a28
// 005693de: PUSH EBX
//   Label: LAB_005693de
// 005693df: CALL core_setutil.cpp_C3DSCamera_free_FUN_00585360
//   XREF to: 00585360 (UNCONDITIONAL_CALL)
// 005693e4: ADD EBX,0x1a4
// 005693ea: ADD ESP,0x4
// 005693ed: CMP EBX,ESI
// 005693ef: JNZ 0x005693de
//   XREF to: 005693de (CONDITIONAL_JUMP)
// 005693f1: MOV EDX,dword ptr [0x006843f8]
//   XREF to: 03f8749c (PARAM)
//   XREF to: 006843f8 (READ)
// 005693f7: PUSH EDX
//   XREF to: 03f8749c (DATA)
// 005693f8: CALL core_terrain.cpp_CTerrain_dtor_FUN_005e1f30
//   XREF to: 005e1f30 (UNCONDITIONAL_CALL)
// 005693fd: ADD ESP,0x4
// 00569400: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00569404: PUSH ECX
// 00569405: CALL core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0
//   XREF to: 00575df0 (UNCONDITIONAL_CALL)
// 0056940a: ADD ESP,0x4
// 0056940d: POP ESI
// 0056940e: POP EBX
// 0056940f: RET

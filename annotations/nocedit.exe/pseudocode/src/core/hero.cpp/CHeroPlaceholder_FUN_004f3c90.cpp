// Name: core_hero.cpp_CHeroPlaceholder_FUN_004f3c90
// Address: 004f3c90
// Address Range: [[004f3c90, 004f3d19]]
// Convention: __cdecl
// Signature: int core_hero.cpp_CHeroPlaceholder_FUN_004f3c90(CHeroPlaceholder * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_actor.cpp_FUN_0040dec0
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

int __cdecl core_hero_cpp_CHeroPlaceholder_FUN_004f3c90(CHeroPlaceholder *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  BADSPACEBASE *in_ESP;
  
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
      this_ptr_00 = (*((this_ptr->base_actor).metadata.vtable)->getBoundingBox)
                              (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffec);
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
      if (iVar1 != 0) {
        core_actor_cpp_FUN_0040dec0(&this_ptr->base_actor);
      }
      return iVar1;
    }
  }
  return 0;
}


// Assembly code:
// 004f3c90: PUSH EBX
//   Label: core_hero.cpp_CHeroPlaceholder_FUN_004f3c90
// 004f3c91: SUB ESP,0x18
// 004f3c94: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004f3c98: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004f3c9d: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 004f3ca1: JNZ 0x004f3caa
//   XREF to: 004f3caa (CONDITIONAL_JUMP)
// 004f3ca3: XOR EAX,EAX
//   Label: LAB_004f3ca3
// 004f3ca5: ADD ESP,0x18
// 004f3ca8: POP EBX
// 004f3ca9: RET
// 004f3caa: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_004f3caa
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004f3cb0: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004f3cb1: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004f3cb6: ADD ESP,0x4
// 004f3cb9: TEST EAX,EAX
// 004f3cbb: JNZ 0x004f3ca3
//   XREF to: 004f3ca3 (CONDITIONAL_JUMP)
// 004f3cbd: PUSH EDI
// 004f3cbe: PUSH ESI
// 004f3cbf: PUSH EBX
// 004f3cc0: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004f3cc5: ADD ESP,0x4
// 004f3cc8: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 004f3ccc: PUSH ESI
// 004f3ccd: MOV EAX,dword ptr [EBX + 0x154]
// 004f3cd3: PUSH EBX
// 004f3cd4: CALL dword ptr [EAX + 0x14]
// 004f3cd7: ADD ESP,0x8
// 004f3cda: PUSH EAX
// 004f3cdb: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004f3ce0: ADD ESP,0x4
// 004f3ce3: PUSH EBX
// 004f3ce4: MOV ESI,EAX
// 004f3ce6: MOV EDI,EAX
// 004f3ce8: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004f3ced: ADD ESP,0x4
// 004f3cf0: TEST ESI,ESI
// 004f3cf2: JZ 0x004f3d11
//   XREF to: 004f3d11 (CONDITIONAL_JUMP)
// 004f3cf4: PUSH 0x80
// 004f3cf9: PUSH 0xff
// 004f3cfe: PUSH 0xff
// 004f3d03: PUSH 0xff
// 004f3d08: PUSH EBX
// 004f3d09: CALL core_actor.cpp_FUN_0040dec0
//   XREF to: 0040dec0 (UNCONDITIONAL_CALL)
// 004f3d0e: ADD ESP,0x14
// 004f3d11: MOV EAX,EDI
//   Label: LAB_004f3d11
// 004f3d13: POP ESI
// 004f3d14: POP EDI
// 004f3d15: ADD ESP,0x18
// 004f3d18: POP EBX
// 004f3d19: RET

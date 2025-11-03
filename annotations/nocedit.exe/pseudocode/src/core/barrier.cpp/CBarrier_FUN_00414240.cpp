// Name: core_barrier.cpp_CBarrier_FUN_00414240
// Address: 00414240
// Address Range: [[00414240, 004142d6]]
// Convention: __cdecl
// Signature: int core_barrier.cpp_CBarrier_FUN_00414240(CBarrier * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
//   undefined4 DAT_02f33768
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_0040dec0
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

int __cdecl core_barrier_cpp_CBarrier_FUN_00414240(CBarrier *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  BADSPACEBASE *in_ESP;
  
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar1 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                            (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe8);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    if (iVar1 != 0) {
      core_actor_cpp_CDemonActor_FUN_0040dec0(&this_ptr->base_actor);
    }
    return iVar1;
  }
  return 0;
}


// Assembly code:
// 00414240: PUSH EBX
//   Label: core_barrier.cpp_CBarrier_FUN_00414240
// 00414241: PUSH EBP
// 00414242: SUB ESP,0x18
// 00414245: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00414249: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 0041424e: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 00414252: JNZ 0x0041425c
//   XREF to: 0041425c (CONDITIONAL_JUMP)
// 00414254: XOR EAX,EAX
//   Label: LAB_00414254
// 00414256: ADD ESP,0x18
// 00414259: POP EBP
// 0041425a: POP EBX
// 0041425b: RET
// 0041425c: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_0041425c
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00414262: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00414263: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00414268: ADD ESP,0x4
// 0041426b: TEST EAX,EAX
// 0041426d: JNZ 0x00414254
//   XREF to: 00414254 (CONDITIONAL_JUMP)
// 0041426f: PUSH EDI
// 00414270: PUSH ESI
// 00414271: PUSH EBX
// 00414272: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00414277: ADD ESP,0x4
// 0041427a: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x20] (DATA)
// 0041427e: PUSH ESI
// 0041427f: MOV EAX,dword ptr [EBX + 0x154]
// 00414285: PUSH EBX
// 00414286: CALL dword ptr [EAX + 0x14]
// 00414289: ADD ESP,0x8
// 0041428c: PUSH EAX
// 0041428d: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00414292: ADD ESP,0x4
// 00414295: PUSH EBX
// 00414296: MOV ESI,EAX
// 00414298: MOV EDI,EAX
// 0041429a: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0041429f: ADD ESP,0x4
// 004142a2: TEST ESI,ESI
// 004142a4: JZ 0x004142cd
//   XREF to: 004142cd (CONDITIONAL_JUMP)
// 004142a6: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004142ac: MOV EBP,dword ptr [ESI + 0x28]
//   XREF to: 02f33768 (READ)
// 004142af: MOV EAX,0x40
// 004142b4: CMP EBX,EBP
// 004142b6: JNZ 0x004142bd
//   XREF to: 004142bd (CONDITIONAL_JUMP)
// 004142b8: MOV EAX,0x80
// 004142bd: PUSH EAX
//   Label: LAB_004142bd
// 004142be: PUSH 0x0
// 004142c0: PUSH 0x0
// 004142c2: PUSH 0x40
// 004142c4: PUSH EBX
// 004142c5: CALL core_actor.cpp_CDemonActor_FUN_0040dec0
//   XREF to: 0040dec0 (UNCONDITIONAL_CALL)
// 004142ca: ADD ESP,0x14
// 004142cd: MOV EAX,EDI
//   Label: LAB_004142cd
// 004142cf: POP ESI
// 004142d0: POP EDI
// 004142d1: ADD ESP,0x18
// 004142d4: POP EBP
// 004142d5: POP EBX
// 004142d6: RET

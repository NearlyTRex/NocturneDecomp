// Name: core_boneguy.cpp_FUN_0041d1b0
// Address: 0041d1b0
// Address Range: [[0041d1b0, 0041d263]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041d1b0()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_charactr.cpp_CCharacter_FUN_00429aa0
//   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_boneguy.cpp_FUN_0041d1b0(undefined4 param_1) */

int core_boneguy_cpp_FUN_0041d1b0(void)

{
  CDemonSet *pCVar1;
  CDemonRenderer *pCVar2;
  CBoundingBox3D *this_ptr;
  int iVar3;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  float fStack_18;
  
  if (*(int *)in_stack_00000004->field2_0x240c != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&in_stack_00000004->base_actor);
  this_ptr = (*((in_stack_00000004->base_actor).metadata.vtable)->getBoundingBox)
                       (&in_stack_00000004->base_actor,(CBoundingBox3D *)&stack0xffffffe4);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar3 != 0) {
    fStack_18 = 6.044647e-39;
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr,0);
    pCVar2 = g_CDemonRendererPtr;
    pCVar1 = g_CDemonSetPtr;
    pCVar1->field22_0x15ac80[8] = '\x01';
    pCVar1->field22_0x15ac80[9] = '\0';
    pCVar1->field22_0x15ac80[10] = '\0';
    pCVar1->field22_0x15ac80[0xb] = '\0';
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(pCVar2,0xffff);
    core_charactr_cpp_CCharacter_FUN_00429aa0(in_stack_00000004);
    pCVar2 = g_CDemonRendererPtr;
    pCVar1 = g_CDemonSetPtr;
    pCVar1->field22_0x15ac80[8] = '\0';
    pCVar1->field22_0x15ac80[9] = '\0';
    pCVar1->field22_0x15ac80[10] = '\0';
    pCVar1->field22_0x15ac80[0xb] = '\0';
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(pCVar2);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&in_stack_00000004->base_actor);
  return iVar3;
}


// Assembly code:
// 0041d1b0: PUSH EBX
//   Label: core_boneguy.cpp_FUN_0041d1b0
// 0041d1b1: PUSH EBP
// 0041d1b2: SUB ESP,0x18
// 0041d1b5: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0041d1b9: CMP dword ptr [EBX + 0x240c],0x0
// 0041d1c0: JZ 0x0041d1ca
//   XREF to: 0041d1ca (CONDITIONAL_JUMP)
// 0041d1c2: XOR EAX,EAX
// 0041d1c4: ADD ESP,0x18
// 0041d1c7: POP EBP
// 0041d1c8: POP EBX
// 0041d1c9: RET
// 0041d1ca: PUSH ESI
//   Label: LAB_0041d1ca
// 0041d1cb: PUSH EBX
// 0041d1cc: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0041d1d1: ADD ESP,0x4
// 0041d1d4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x20] (DATA)
// 0041d1d8: PUSH EAX
// 0041d1d9: MOV EDX,dword ptr [EBX + 0x154]
// 0041d1df: PUSH EBX
// 0041d1e0: CALL dword ptr [EDX + 0x14]
// 0041d1e3: ADD ESP,0x8
// 0041d1e6: PUSH EAX
// 0041d1e7: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0041d1ec: ADD ESP,0x4
// 0041d1ef: MOV ESI,EAX
// 0041d1f1: TEST EAX,EAX
// 0041d1f3: JZ 0x0041d252
//   XREF to: 0041d252 (CONDITIONAL_JUMP)
// 0041d1f5: PUSH EDI
// 0041d1f6: PUSH 0x0
// 0041d1f8: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0041d1fe: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0041d1ff: CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
//   XREF to: 0048d6c0 (UNCONDITIONAL_CALL)
// 0041d204: ADD ESP,0x8
// 0041d207: PUSH 0xffff
// 0041d20c: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0041d212: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0041d217: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0041d218: MOV dword ptr [EAX + 0x15ac88],0x1
//   XREF to: 0326ef00 (WRITE)
// 0041d222: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0041d227: ADD ESP,0x8
// 0041d22a: PUSH EBX
// 0041d22b: CALL core_charactr.cpp_CCharacter_FUN_00429aa0
//   XREF to: 00429aa0 (UNCONDITIONAL_CALL)
// 0041d230: ADD ESP,0x4
// 0041d233: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0041d239: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0041d23e: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 0041d23f: MOV dword ptr [EAX + 0x15ac88],0x0
//   XREF to: 0326ef00 (WRITE)
// 0041d249: CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
//   XREF to: 0048da80 (UNCONDITIONAL_CALL)
// 0041d24e: ADD ESP,0x4
// 0041d251: POP EDI
// 0041d252: PUSH EBX
//   Label: LAB_0041d252
// 0041d253: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0041d258: ADD ESP,0x4
// 0041d25b: MOV EAX,ESI
// 0041d25d: POP ESI
// 0041d25e: ADD ESP,0x18
// 0041d261: POP EBP
// 0041d262: POP EBX
// 0041d263: RET

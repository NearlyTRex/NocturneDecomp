// Name: core_charactr.cpp_CCharacter_FUN_0042a2c0
// Address: 0042a2c0
// Address Range: [[0042a2c0, 0042a38b]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042a2c0(CCharacter * this_ptr)
// Cross-references:
//   core_boneguy.cpp_FUN_0041d180 (0041d180) at 0041d199 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_004404a0 (004404a0) at 004404a5 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6140 (004d6140) at 004d614a [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk5_FUN_004e53f0 (004e53f0) at 004e5443 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f1b60 (004f1b60) at 004f1b65 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f4b40 (004f4b40) at 004f4b86 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f95a0 (004f95a0) at 004f95a5 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00557df0 (00557df0) at 00557df9 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c3166 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d9bc0 (005d9bc0) at 005d9bf4 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_FUN_005db840 (005db840) at 005db86d [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fbe20 (005fbe20) at 005fbe53 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02f43978
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_charactr.cpp_CCharacter_FUN_00429aa0
//   core_motion.cpp_CMotionController_FUN_0052e700
//   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042a2c0(CCharacter *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 uStack00000008;
  float fStack_14;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr);
  if (iVar1 == 0) {
    this_ptr->field13_0x2620[0] = '\0';
    this_ptr->field13_0x2620[1] = '\0';
    this_ptr->field13_0x2620[2] = '\0';
    this_ptr->field13_0x2620[3] = '\0';
  }
  if (*(int *)this_ptr->field2_0x240c == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    this_ptr_00 = (*((this_ptr->base_actor).metadata.vtable)->getBoundingBox)
                            (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe8);
    fStack_14 = 6.119639e-39;
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar1 != 0) {
      this_ptr->field13_0x2620[0] = '\x01';
      this_ptr->field13_0x2620[1] = '\0';
      this_ptr->field13_0x2620[2] = '\0';
      this_ptr->field13_0x2620[3] = '\0';
      core_charactr_cpp_CCharacter_FUN_00429aa0(this_ptr);
      if (DAT_02f43978 != 0) {
        iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_FUN_0052e700();
          (*((this_ptr->base_actor).metadata.vtable)->renderTargetPoints)(&this_ptr->base_actor);
        }
      }
    }
    uStack00000008 = 0x42a36c;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    return iVar1;
  }
  return 0;
}


// Assembly code:
// 0042a2c0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042a2c0
// 0042a2c1: PUSH EBP
// 0042a2c2: SUB ESP,0x18
// 0042a2c5: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0042a2c9: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042a2cf: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0042a2d0: CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
//   XREF to: 0048ce00 (UNCONDITIONAL_CALL)
// 0042a2d5: ADD ESP,0x4
// 0042a2d8: TEST EAX,EAX
// 0042a2da: JZ 0x0042a379
//   XREF to: 0042a379 (CONDITIONAL_JUMP)
// 0042a2e0: CMP dword ptr [EBX + 0x240c],0x0
//   Label: LAB_0042a2e0
// 0042a2e7: JNZ 0x0042a384
//   XREF to: 0042a384 (CONDITIONAL_JUMP)
// 0042a2ed: PUSH EDI
// 0042a2ee: PUSH ESI
// 0042a2ef: PUSH EBX
// 0042a2f0: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0042a2f5: ADD ESP,0x4
// 0042a2f8: LEA EDX,[ESP + 0x8]
//   XREF to: Stack[-0x20] (DATA)
// 0042a2fc: PUSH EDX
// 0042a2fd: MOV EAX,dword ptr [EBX + 0x154]
// 0042a303: PUSH EBX
// 0042a304: CALL dword ptr [EAX + 0x14]
// 0042a307: ADD ESP,0x8
// 0042a30a: PUSH EAX
// 0042a30b: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0042a310: ADD ESP,0x4
// 0042a313: MOV ESI,EAX
// 0042a315: TEST EAX,EAX
// 0042a317: JZ 0x0042a366
//   XREF to: 0042a366 (CONDITIONAL_JUMP)
// 0042a319: PUSH EBX
// 0042a31a: MOV dword ptr [EBX + 0x2620],0x1
// 0042a324: CALL core_charactr.cpp_CCharacter_FUN_00429aa0
//   XREF to: 00429aa0 (UNCONDITIONAL_CALL)
// 0042a329: MOV EDI,dword ptr [0x02f43978]
//   XREF to: 02f43978 (READ)
// 0042a32f: ADD ESP,0x4
// 0042a332: TEST EDI,EDI
// 0042a334: JZ 0x0042a366
//   XREF to: 0042a366 (CONDITIONAL_JUMP)
// 0042a336: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0042a33c: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 0042a33d: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0042a342: ADD ESP,0x4
// 0042a345: TEST EAX,EAX
// 0042a347: JNZ 0x0042a366
//   XREF to: 0042a366 (CONDITIONAL_JUMP)
// 0042a349: PUSH EBX
// 0042a34a: LEA EAX,[EBX + 0x158]
// 0042a350: PUSH EAX
// 0042a351: CALL core_motion.cpp_CMotionController_FUN_0052e700
//   XREF to: 0052e700 (UNCONDITIONAL_CALL)
// 0042a356: ADD ESP,0x8
// 0042a359: MOV EAX,dword ptr [EBX + 0x154]
// 0042a35f: PUSH EBX
// 0042a360: CALL dword ptr [EAX + 0x50]
// 0042a363: ADD ESP,0x4
// 0042a366: PUSH EBX
//   Label: LAB_0042a366
// 0042a367: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0042a36c: ADD ESP,0x4
// 0042a36f: MOV EAX,ESI
// 0042a371: POP ESI
// 0042a372: POP EDI
// 0042a373: ADD ESP,0x18
// 0042a376: POP EBP
// 0042a377: POP EBX
// 0042a378: RET
// 0042a379: MOV dword ptr [EBX + 0x2620],EAX
//   Label: LAB_0042a379
// 0042a37f: JMP 0x0042a2e0
//   XREF to: 0042a2e0 (UNCONDITIONAL_JUMP)
// 0042a384: XOR EAX,EAX
//   Label: LAB_0042a384
// 0042a386: ADD ESP,0x18
// 0042a389: POP EBP
// 0042a38a: POP EBX
// 0042a38b: RET

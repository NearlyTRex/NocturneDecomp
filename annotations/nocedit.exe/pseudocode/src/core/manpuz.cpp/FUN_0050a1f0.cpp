// Name: core_manpuz.cpp_FUN_0050a1f0
// Address: 0050a1f0
// Address Range: [[0050a1f0, 0050a281]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050a1f0()
// Cross-references:
//   core_manpuz.cpp_FUN_005090d0 (005090d0) at 00509184 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02f33744
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050a1f0(undefined4 param_1, undefined4
   param_2) */

void core_manpuz_cpp_FUN_0050a1f0(void)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  int unaff_EBP;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = in_stack_00000004 + 0x1340 + in_stack_00000008 * 0x60;
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) && (*(float *)(iVar2 + 0x18) <= 0.0)) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(iVar2 + 0x28),(CVector3i *)(iVar2 + 0x1c));
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x450));
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x450),
             (float)(pCVar1->frame_count + -1) * *(float *)(iVar2 + 0x18),unaff_EBP);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}


// Assembly code:
// 0050a1f0: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050a1f0
// 0050a1f1: PUSH ESI
// 0050a1f2: PUSH EBP
// 0050a1f3: MOV EBP,ESP
// 0050a1f5: SUB ESP,0x4
// 0050a1f8: MOV ESI,dword ptr [EBP + 0x10]
// 0050a1fb: MOV EBX,dword ptr [EBP + 0x14]
// 0050a1fe: LEA EAX,[EBX*0x4 + 0x0]
// 0050a205: SUB EAX,EBX
// 0050a207: SHL EAX,0x5
// 0050a20a: LEA EBX,[ESI + 0x1340]
// 0050a210: ADD EBX,EAX
// 0050a212: MOV EAX,[0x0067d550]
//   XREF to: 0067d550 (READ)
// 0050a217: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 0050a21b: JNZ 0x0050a22f
//   XREF to: 0050a22f (CONDITIONAL_JUMP)
// 0050a21d: FLD float ptr [EBX + 0x18]
// 0050a220: FLDZ
// 0050a222: FCOMPP
// 0050a224: FNSTSW AX
// 0050a226: SAHF
// 0050a227: JC 0x0050a22f
//   XREF to: 0050a22f (CONDITIONAL_JUMP)
// 0050a229: MOV ESP,EBP
// 0050a22b: POP EBP
// 0050a22c: POP ESI
// 0050a22d: POP EBX
// 0050a22e: RET
// 0050a22f: LEA EAX,[EBX + 0x1c]
//   Label: LAB_0050a22f
// 0050a232: PUSH EAX
// 0050a233: LEA EAX,[EBX + 0x28]
// 0050a236: PUSH EAX
// 0050a237: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0050a23d: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0050a23e: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 0050a243: ADD ESP,0xc
// 0050a246: PUSH -0x1
// 0050a248: ADD ESI,0x450
// 0050a24e: PUSH ESI
// 0050a24f: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0050a254: MOV EAX,dword ptr [EAX + 0x100]
// 0050a25a: DEC EAX
// 0050a25b: MOV dword ptr [EBP + -0x4],EAX
// 0050a25e: ADD ESP,0x4
// 0050a261: FILD dword ptr [EBP + -0x4]
// 0050a264: FMUL float ptr [EBX + 0x18]
// 0050a267: SUB ESP,0x4
// 0050a26a: FSTP float ptr [ESP]
// 0050a26d: PUSH ESI
// 0050a26e: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 0050a273: ADD ESP,0xc
// 0050a276: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0050a27c: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0050a27d: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)

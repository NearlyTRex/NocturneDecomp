// Name: core_charactr.cpp_CCharacter_FUN_0042a420
// Address: 0042a420
// Address Range: [[0042a420, 0042a50b]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042a420(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_00429aa0 (00429aa0) at 00429aec [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_FUN_005205f0 (005205f0) at 00520803 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005e6da0 (005e6da0) at 005e6e37 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CKeyFramedModelInstance DAT_00823a98
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042a420(CCharacter *this_ptr)

{
  int iVar1;
  char *pcVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  CKeyFramedModelInstance *in_stack_ffffff74;
  undefined4 local_5c;
  CVector3f CStack_58;
  float fStack_48;
  CMatrix3x4f *pCStack_38;
  CVector3i CStack_24;
  float local_18;
  CMatrix3x4f *local_14;
  
  bVar6 = 0;
  iVar3 = 0;
  if (0 < *(int *)(this_ptr->cloth_data + 0x35c)) {
    local_14 = (this_ptr->model).bone_transform.bone_world_matrices;
    pcVar2 = this_ptr->cloth_data + 0x360;
    do {
      if ((this_ptr->model).part_visibility_flags[*(int *)pcVar2] != 0) {
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)(pcVar2 + 8),local_14 + *(int *)(pcVar2 + 4),
                   (CMatrix3x4f *)in_stack_ffffff74);
        puVar4 = (undefined4 *)&stack0xffffff78;
        puVar5 = &local_5c;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&CStack_58,(CMatrix3x3f *)&stack0xffffffd8);
        local_18 = fStack_48;
        local_14 = pCStack_38;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,&CStack_24,(CVector3i *)&local_18);
        in_stack_ffffff74 = &DAT_00823a98;
        core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                  (&DAT_00823a98,0.0,-1);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      }
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 0x38;
    } while (iVar3 < *(int *)(this_ptr->cloth_data + 0x35c));
  }
  return;
}


// Assembly code:
// 0042a420: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042a420
// 0042a421: PUSH ESI
// 0042a422: PUSH EDI
// 0042a423: PUSH EBP
// 0042a424: SUB ESP,0x7c
// 0042a427: MOV EAX,dword ptr [ESP + 0x90]
// 0042a42e: MOV EDX,dword ptr [EAX + 0x2df4]
// 0042a434: XOR EBP,EBP
// 0042a436: TEST EDX,EDX
// 0042a438: JLE 0x0042a47c
//   XREF to: 0042a47c (CONDITIONAL_JUMP)
// 0042a43a: ADD EAX,0xfd8
// 0042a43f: MOV EBX,dword ptr [ESP + 0x90]
// 0042a446: MOV dword ptr [ESP + 0x78],EAX
// 0042a44a: ADD EBX,0x2df8
// 0042a450: MOV EAX,dword ptr [EBX]
//   Label: LAB_0042a450
// 0042a452: MOV ESI,dword ptr [ESP + 0x90]
// 0042a459: SHL EAX,0x2
// 0042a45c: ADD EAX,ESI
// 0042a45e: CMP dword ptr [EAX + 0x2298],0x0
// 0042a465: JNZ 0x0042a484
//   XREF to: 0042a484 (CONDITIONAL_JUMP)
// 0042a467: MOV EAX,dword ptr [ESP + 0x90]
//   Label: LAB_0042a467
// 0042a46e: INC EBP
// 0042a46f: MOV ECX,dword ptr [EAX + 0x2df4]
// 0042a475: ADD EBX,0x38
// 0042a478: CMP EBP,ECX
// 0042a47a: JL 0x0042a450
//   XREF to: 0042a450 (CONDITIONAL_JUMP)
// 0042a47c: ADD ESP,0x7c
//   Label: LAB_0042a47c
// 0042a47f: POP EBP
// 0042a480: POP EDI
// 0042a481: POP ESI
// 0042a482: POP EBX
// 0042a483: RET
// 0042a484: IMUL EAX,dword ptr [EBX + 0x4],0x30
//   Label: LAB_0042a484
// 0042a488: ADD EAX,dword ptr [ESP + 0x78]
// 0042a48c: PUSH EAX
// 0042a48d: LEA EAX,[EBX + 0x8]
// 0042a490: PUSH EAX
// 0042a491: LEA ESI,[ESP + 0x8]
// 0042a495: LEA EDI,[ESP + 0x38]
// 0042a499: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0042a49e: ADD ESP,0x8
// 0042a4a1: LEA EAX,[ESP + 0x60]
// 0042a4a5: MOV ECX,0xc
// 0042a4aa: PUSH EAX
// 0042a4ab: LEA EAX,[ESP + 0x34]
// 0042a4af: LEA ESI,[ESP + 0x4]
// 0042a4b3: PUSH EAX
// 0042a4b4: MOVSD.REP ES:EDI,ESI
// 0042a4b6: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 0042a4bb: ADD ESP,0x8
// 0042a4be: MOV EAX,dword ptr [ESP + 0x3c]
// 0042a4c2: MOV dword ptr [ESP + 0x6c],EAX
// 0042a4c6: MOV EAX,dword ptr [ESP + 0x4c]
// 0042a4ca: MOV dword ptr [ESP + 0x70],EAX
// 0042a4ce: MOV EAX,dword ptr [ESP + 0x5c]
// 0042a4d2: MOV dword ptr [ESP + 0x74],EAX
// 0042a4d6: LEA EAX,[ESP + 0x6c]
// 0042a4da: PUSH EAX
// 0042a4db: LEA EAX,[ESP + 0x64]
// 0042a4df: PUSH EAX
// 0042a4e0: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0042a4e6: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0042a4e7: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 0042a4ec: ADD ESP,0xc
// 0042a4ef: PUSH -0x1
// 0042a4f1: PUSH 0x0
// 0042a4f3: PUSH 0x823a98
//   XREF to: 00823a98 (DATA)
// 0042a4f8: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 0042a4fd: ADD ESP,0xc
// 0042a500: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0042a506: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0042a507: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)

// Name: core_grave.cpp_FUN_004ee8f0
// Address: 004ee8f0
// Address Range: [[004ee8f0, 004ee9c4]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004ee8f0()
// Globals:
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* Signature: undefined1 actors_other_grave.cpp_FUN_004ee8f0(undefined4 param_1, undefined4 param_2)
    */

CVector3f *
core_grave_cpp_FUN_004ee8f0
          (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,int param_5,
          CVector3f *param_6)

{
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  double dVar3;
  
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) {
    dVar3 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44(g_CDemonMissionPtr,
                                        (CKeyFramedModelInstance *)(param_5 + 0x158)));
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(SUB84(dVar3,0));
    pCVar2 = pCVar1->frame_bounds + unaff_EBX * 2;
    if (param_6 != pCVar2) {
      param_6->x = pCVar2->x;
      param_6->y = pCVar2->y;
      param_6->z = pCVar2->z;
    }
    if (param_6 + 1 != pCVar2 + 1) {
      param_6[1].x = pCVar2[1].x;
      param_6[1].y = pCVar2[1].y;
      param_6[1].z = pCVar2[1].z;
      return param_6;
    }
  }
  else {
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)(param_5 + 0x158));
    if (param_6 != &pCVar1->bounds_min) {
      param_6->x = (pCVar1->bounds_min).x;
      param_6->y = (pCVar1->bounds_min).y;
      param_6->z = (pCVar1->bounds_min).z;
    }
    if (param_6 + 1 != &pCVar1->bounds_max) {
      param_6[1].x = (pCVar1->bounds_max).x;
      param_6[1].y = (pCVar1->bounds_max).y;
      param_6[1].z = (pCVar1->bounds_max).z;
    }
  }
  return param_6;
}


// Assembly code:
// 004ee8f0: PUSH EBX
//   Label: core_grave.cpp_FUN_004ee8f0
// 004ee8f1: PUSH ESI
// 004ee8f2: SUB ESP,0x4
// 004ee8f5: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004ee8f9: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004ee8fd: MOV EDX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004ee903: MOV ESI,dword ptr [EDX + 0x4]
//   XREF to: 02f33744 (READ)
// 004ee906: LEA EAX,[ECX + 0x158]
// 004ee90c: TEST ESI,ESI
// 004ee90e: JZ 0x004ee95a
//   XREF to: 004ee95a (CONDITIONAL_JUMP)
// 004ee910: PUSH EAX
// 004ee911: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004ee916: ADD ESP,0x4
// 004ee919: ADD EAX,0x5678
// 004ee91e: MOV EDX,EBX
// 004ee920: MOV ECX,EAX
// 004ee922: CMP EBX,EAX
// 004ee924: JZ 0x004ee936
//   XREF to: 004ee936 (CONDITIONAL_JUMP)
// 004ee926: MOV ESI,dword ptr [EAX]
// 004ee928: MOV dword ptr [EBX],ESI
// 004ee92a: MOV ESI,dword ptr [EAX + 0x4]
// 004ee92d: MOV dword ptr [EBX + 0x4],ESI
// 004ee930: MOV ESI,dword ptr [EAX + 0x8]
// 004ee933: MOV dword ptr [EBX + 0x8],ESI
// 004ee936: LEA EAX,[EDX + 0xc]
//   Label: LAB_004ee936
// 004ee939: LEA EDX,[ECX + 0xc]
// 004ee93c: CMP EAX,EDX
// 004ee93e: JNZ 0x004ee948
//   XREF to: 004ee948 (CONDITIONAL_JUMP)
// 004ee940: MOV EAX,EBX
//   Label: LAB_004ee940
// 004ee942: ADD ESP,0x4
// 004ee945: POP ESI
// 004ee946: POP EBX
// 004ee947: RET
// 004ee948: MOV ECX,dword ptr [EDX]
//   Label: LAB_004ee948
// 004ee94a: MOV dword ptr [EAX],ECX
// 004ee94c: MOV ECX,dword ptr [EDX + 0x4]
// 004ee94f: MOV dword ptr [EAX + 0x4],ECX
// 004ee952: MOV ECX,dword ptr [EDX + 0x8]
// 004ee955: MOV dword ptr [EAX + 0x8],ECX
// 004ee958: JMP 0x004ee940
//   XREF to: 004ee940 (UNCONDITIONAL_JUMP)
// 004ee95a: FLD float ptr [ECX + 0x2d4]
//   Label: LAB_004ee95a
// 004ee960: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004ee965: PUSH EAX
// 004ee966: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 004ee96a: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004ee96f: ADD ESP,0x4
// 004ee972: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 004ee975: MOV ECX,EAX
// 004ee977: LEA EAX,[EDX*0x4 + 0x0]
// 004ee97e: SUB EAX,EDX
// 004ee980: SHL EAX,0x3
// 004ee983: MOV EDX,dword ptr [ECX + 0x5690]
// 004ee989: ADD EAX,EDX
// 004ee98b: MOV EDX,EBX
// 004ee98d: MOV ECX,EAX
// 004ee98f: CMP EBX,EAX
// 004ee991: JZ 0x004ee9a3
//   XREF to: 004ee9a3 (CONDITIONAL_JUMP)
// 004ee993: MOV ESI,dword ptr [EAX]
// 004ee995: MOV dword ptr [EBX],ESI
// 004ee997: MOV ESI,dword ptr [EAX + 0x4]
// 004ee99a: MOV dword ptr [EBX + 0x4],ESI
// 004ee99d: MOV ESI,dword ptr [EAX + 0x8]
// 004ee9a0: MOV dword ptr [EBX + 0x8],ESI
// 004ee9a3: LEA EAX,[EDX + 0xc]
//   Label: LAB_004ee9a3
// 004ee9a6: LEA EDX,[ECX + 0xc]
// 004ee9a9: CMP EAX,EDX
// 004ee9ab: JZ 0x004ee940
//   XREF to: 004ee940 (CONDITIONAL_JUMP)
// 004ee9ad: MOV ECX,dword ptr [EDX]
// 004ee9af: MOV dword ptr [EAX],ECX
// 004ee9b1: MOV ECX,dword ptr [EDX + 0x4]
// 004ee9b4: MOV dword ptr [EAX + 0x4],ECX
// 004ee9b7: MOV ECX,dword ptr [EDX + 0x8]
// 004ee9ba: MOV dword ptr [EAX + 0x8],ECX
// 004ee9bd: MOV EAX,EBX
// 004ee9bf: ADD ESP,0x4
// 004ee9c2: POP ESI
// 004ee9c3: POP EBX
// 004ee9c4: RET

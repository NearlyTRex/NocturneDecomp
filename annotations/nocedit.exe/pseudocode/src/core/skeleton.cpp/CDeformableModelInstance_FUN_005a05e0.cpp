// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_005a05e0
// Address: 005a05e0
// Address Range: [[005a05e0, 005a0797]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModelInstance_FUN_005a05e0()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0480 (005a0480) at 005a0590 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0064eeec
//   undefined4 DAT_00662ea0
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e070
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_skeleton.cpp_CDeformableModelInstance_FUN_005a05e0(undefined4 param_1)
    */

void core_skeleton_cpp_CDeformableModelInstance_FUN_005a05e0(void)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  float *pfVar8;
  int *piVar9;
  int *piVar10;
  byte bVar11;
  int in_stack_00000004;
  int aiStack_101c [1022];
  int local_24;
  int local_20;
  
  bVar11 = 0;
  aiStack_101c[0x3fc] = 0x7fffffff;
  aiStack_101c[0x3fb] = 0x7fffffff;
  iVar6 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
  iVar6 = *(int *)(iVar6 + 0x2c);
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e070();
  core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0();
  if (0 < iVar6) {
    iVar7 = 0;
    do {
      piVar9 = (int *)(*(int *)(in_stack_00000004 + 0x2234) + iVar7);
      piVar10 = piVar9 + (uint)bVar11 * -2 + 1;
      iVar2 = *piVar9;
      aiStack_101c[(uint)bVar11 * -2 + 0x3fb] = *piVar10;
      aiStack_101c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3fc] = piVar10[(uint)bVar11 * -2 + 1];
      if (iVar2 < aiStack_101c[0x3fd]) {
        aiStack_101c[0x3fd] = iVar2;
      }
      if (aiStack_101c[0x3f7] < iVar2) {
        aiStack_101c[0x3f7] = iVar2;
      }
      if (aiStack_101c[0x3fb] < local_24) {
        local_24 = aiStack_101c[0x3fb];
      }
      if (aiStack_101c[0x3f8] < aiStack_101c[0x3fb]) {
        aiStack_101c[0x3f8] = aiStack_101c[0x3fb];
      }
      if (aiStack_101c[0x3fc] < local_20) {
        local_20 = aiStack_101c[0x3fc];
      }
      if (aiStack_101c[0x3f9] < aiStack_101c[0x3fc]) {
        aiStack_101c[0x3f9] = aiStack_101c[0x3fc];
      }
      iVar7 = iVar7 + 0xc;
    } while (iVar7 < iVar6 * 0xc);
  }
  pfVar1 = (float *)(in_stack_00000004 + 0x2238);
  *pfVar1 = (float)aiStack_101c[0x3fd] * _DAT_00662ea0;
  *(float *)(in_stack_00000004 + 0x223c) = (float)local_24 * _DAT_00662ea0;
  *(float *)(in_stack_00000004 + 0x2240) = (float)local_20 * _DAT_00662ea0;
  pfVar8 = (float *)(in_stack_00000004 + 0x2244);
  *pfVar8 = (float)aiStack_101c[0x3f7] * _DAT_00662ea0;
  *(float *)(in_stack_00000004 + 0x2248) = (float)aiStack_101c[0x3f8] * _DAT_00662ea0;
  *(float *)(in_stack_00000004 + 0x224c) = (float)aiStack_101c[0x3f9] * _DAT_00662ea0;
  fVar3 = (*pfVar8 - *pfVar1) * _DAT_0064eeec;
  fVar4 = (*(float *)(in_stack_00000004 + 0x2248) - *(float *)(in_stack_00000004 + 0x223c)) *
          _DAT_0064eeec;
  fVar5 = (*(float *)(in_stack_00000004 + 0x224c) - *(float *)(in_stack_00000004 + 0x2240)) *
          _DAT_0064eeec;
  *pfVar1 = *pfVar1 - fVar3;
  *(float *)(in_stack_00000004 + 0x223c) = *(float *)(in_stack_00000004 + 0x223c) - fVar4;
  *(float *)(in_stack_00000004 + 0x2240) = *(float *)(in_stack_00000004 + 0x2240) - fVar5;
  *pfVar8 = *pfVar8 + fVar3;
  *(float *)(in_stack_00000004 + 0x2248) = *(float *)(in_stack_00000004 + 0x2248) + fVar4;
  *(float *)(in_stack_00000004 + 0x224c) = *(float *)(in_stack_00000004 + 0x224c) + fVar5;
  return;
}


// Assembly code:
// 005a05e0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_005a05e0
// 005a05e1: PUSH ESI
// 005a05e2: PUSH EDI
// 005a05e3: PUSH EBP
// 005a05e4: SUB ESP,0x3c
// 005a05e7: MOV EBP,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 005a05eb: MOV EDX,0x7fffffff
// 005a05f0: MOV ESI,0x80000001
// 005a05f5: PUSH EBP
// 005a05f6: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 005a05fa: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005a05fe: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 005a0602: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x44] (WRITE)
// 005a0606: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 005a060a: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x4c] (WRITE)
// 005a060e: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a0613: ADD ESP,0x4
// 005a0616: PUSH 0x0
// 005a0618: PUSH 0x0
// 005a061a: PUSH EBP
// 005a061b: MOV ESI,dword ptr [EAX + 0x2c]
// 005a061e: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e070
//   XREF to: 0059e070 (UNCONDITIONAL_CALL)
// 005a0623: ADD ESP,0xc
// 005a0626: PUSH 0x0
// 005a0628: PUSH EBP
// 005a0629: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 005a062e: ADD ESP,0x8
// 005a0631: TEST ESI,ESI
// 005a0633: JLE 0x005a06b1
//   XREF to: 005a06b1 (CONDITIONAL_JUMP)
// 005a0639: LEA ECX,[ESI*0x4 + 0x0]
// 005a0640: SUB ECX,ESI
// 005a0642: XOR EDX,EDX
// 005a0644: SHL ECX,0x2
// 005a0647: MOV ESI,dword ptr [EBP + 0x2234]
//   Label: LAB_005a0647
// 005a064d: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 005a0651: ADD ESI,EDX
// 005a0653: MOVSD ES:EDI,ESI
// 005a0654: MOVSD ES:EDI,ESI
// 005a0655: MOVSD ES:EDI,ESI
// 005a0656: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x34] (READ)
// 005a065a: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x40] (READ)
// 005a065e: CMP EAX,EBX
// 005a0660: JGE 0x005a0666
//   XREF to: 005a0666 (CONDITIONAL_JUMP)
// 005a0662: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005a0666: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_005a0666
//   XREF to: Stack[-0x40] (READ)
// 005a066a: CMP EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4c] (DATA)
// 005a066d: JLE 0x005a0672
//   XREF to: 005a0672 (CONDITIONAL_JUMP)
// 005a066f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x4c] (DATA)
// 005a0672: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_005a0672
//   XREF to: Stack[-0x3c] (READ)
// 005a0676: CMP EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (READ)
// 005a067a: JGE 0x005a0680
//   XREF to: 005a0680 (CONDITIONAL_JUMP)
// 005a067c: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005a0680: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_005a0680
//   XREF to: Stack[-0x3c] (READ)
// 005a0684: CMP EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x48] (READ)
// 005a0688: JLE 0x005a068e
//   XREF to: 005a068e (CONDITIONAL_JUMP)
// 005a068a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005a068e: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_005a068e
//   XREF to: Stack[-0x38] (READ)
// 005a0692: CMP EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (READ)
// 005a0696: JGE 0x005a069c
//   XREF to: 005a069c (CONDITIONAL_JUMP)
// 005a0698: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005a069c: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_005a069c
//   XREF to: Stack[-0x38] (READ)
// 005a06a0: CMP EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x44] (READ)
// 005a06a4: JLE 0x005a06aa
//   XREF to: 005a06aa (CONDITIONAL_JUMP)
// 005a06a6: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005a06aa: ADD EDX,0xc
//   Label: LAB_005a06aa
// 005a06ad: CMP EDX,ECX
// 005a06af: JL 0x005a0647
//   XREF to: 005a0647 (CONDITIONAL_JUMP)
// 005a06b1: LEA EDX,[EBP + 0x2238]
//   Label: LAB_005a06b1
// 005a06b7: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x34] (DATA)
// 005a06bb: MOV EBX,EDX
// 005a06bd: FILD dword ptr [EAX]
//   XREF to: Stack[-0x34] (DATA)
// 005a06bf: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 005a06c5: FSTP float ptr [EBX]
// 005a06c7: FILD dword ptr [EAX + 0x4]
//   XREF to: Stack[-0x30] (READ)
// 005a06ca: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 005a06d0: FSTP float ptr [EBX + 0x4]
// 005a06d3: FILD dword ptr [EAX + 0x8]
//   XREF to: Stack[-0x2c] (READ)
// 005a06d6: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 005a06dc: FSTP float ptr [EBX + 0x8]
// 005a06df: ADD EBP,0x2244
// 005a06e5: MOV EAX,ESP
// 005a06e7: MOV EBX,EBP
// 005a06e9: FILD dword ptr [EAX]
//   XREF to: Stack[-0x4c] (DATA)
// 005a06eb: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 005a06f1: FSTP float ptr [EBX]
// 005a06f3: FILD dword ptr [EAX + 0x4]
//   XREF to: Stack[-0x48] (READ)
// 005a06f6: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 005a06fc: FSTP float ptr [EBX + 0x4]
// 005a06ff: FILD dword ptr [EAX + 0x8]
//   XREF to: Stack[-0x44] (READ)
// 005a0702: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 005a0708: FSTP float ptr [EBX + 0x8]
// 005a070b: FLD float ptr [EBP]
// 005a070e: FSUB float ptr [EDX]
// 005a0710: FST float ptr [ESP + 0x30]
//   XREF to: Stack[-0x1c] (WRITE)
// 005a0714: FLD float ptr [EBP + 0x4]
// 005a0717: FSUB float ptr [EDX + 0x4]
// 005a071a: FXCH
// 005a071c: FLD float ptr [0x0064eeec]
//   XREF to: 0064eeec (READ)
// 005a0722: FXCH
// 005a0724: FMUL ST1
// 005a0726: FXCH ST2
// 005a0728: FST float ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (WRITE)
// 005a072c: FLD float ptr [EBP + 0x8]
// 005a072f: FSUB float ptr [EDX + 0x8]
// 005a0732: FXCH
// 005a0734: FMUL ST2
// 005a0736: FXCH
// 005a0738: FST float ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (WRITE)
// 005a073c: FMULP ST2
// 005a073e: FXCH ST2
// 005a0740: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (WRITE)
// 005a0744: FXCH
// 005a0746: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (WRITE)
// 005a074a: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x20] (WRITE)
// 005a074e: FLD float ptr [EDX]
// 005a0750: FSUB float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 005a0754: FLD float ptr [EDX + 0x4]
// 005a0757: FXCH
// 005a0759: FSTP float ptr [EDX]
// 005a075b: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (READ)
// 005a075f: FLD float ptr [EDX + 0x8]
// 005a0762: FXCH
// 005a0764: FSTP float ptr [EDX + 0x4]
// 005a0767: FSUB float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x20] (READ)
// 005a076b: FSTP float ptr [EDX + 0x8]
// 005a076e: FLD float ptr [EBP]
// 005a0771: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 005a0775: FLD float ptr [EBP + 0x4]
// 005a0778: FXCH
// 005a077a: FSTP float ptr [EBP]
// 005a077d: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (READ)
// 005a0781: FLD float ptr [EBP + 0x8]
// 005a0784: FXCH
// 005a0786: FSTP float ptr [EBP + 0x4]
// 005a0789: FADD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x20] (READ)
// 005a078d: FSTP float ptr [EBP + 0x8]
// 005a0790: ADD ESP,0x3c
// 005a0793: POP EBP
// 005a0794: POP EDI
// 005a0795: POP ESI
// 005a0796: POP EBX
// 005a0797: RET

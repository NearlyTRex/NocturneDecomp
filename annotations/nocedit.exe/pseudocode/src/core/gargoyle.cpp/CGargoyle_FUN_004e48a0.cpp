// Name: core_gargoyle.cpp_CGargoyle_FUN_004e48a0
// Address: 004e48a0
// Address Range: [[004e48a0, 004e49e7]]
// Convention: unknown
// Signature: undefined core_gargoyle.cpp_CGargoyle_FUN_004e48a0()
// Cross-references:
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4df6 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0062d92f
//   undefined4 DAT_0062d937
// Function calls:
//   core_actor.cpp_FUN_0040cd70
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_gargoyle.cpp_CGargoyle_FUN_004e48a0(CGargoyle* param_1) */

undefined4 core_gargoyle_cpp_CGargoyle_FUN_004e48a0(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  float fVar5;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  undefined1 local_24 [8];
  float local_1c;
  CVector3f local_18;
  
  iVar1 = *(int *)(in_stack_00000004 + 0xbe3c);
  *(undefined4 *)(in_stack_00000004 + 0xbf10) = 0;
  if (iVar1 != 0) {
    local_24._0_4_ = *(float *)(in_stack_00000004 + 0x20) - *(float *)(iVar1 + 0x20);
    local_24._4_4_ = *(float *)(in_stack_00000004 + 0x24) - *(float *)(iVar1 + 0x24);
    local_1c = *(float *)(in_stack_00000004 + 0x28) - *(float *)(iVar1 + 0x28);
    if (SQRT(local_1c * local_1c +
             (float)local_24._0_4_ * (float)local_24._0_4_ +
             (float)local_24._4_4_ * (float)local_24._4_4_) <=
        *(float *)(in_stack_00000004 + 0xbe34)) {
      pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         (&local_18,(CVector3f *)local_24);
      if ((CVector3f *)(local_24 + 4) != pCVar4) {
        local_24._4_4_ = pCVar4->x;
        local_1c = pCVar4->y;
        local_18.x = pCVar4->z;
      }
      fVar5 = core_actor_cpp_FUN_0040cd70
                        (*(float *)(*(int *)(in_stack_00000004 + 0xbe3c) + 0x34) - local_1c);
      if ((fVar5 < (float)_DAT_0062d92f) || ((float)_DAT_0062d937 < fVar5)) {
        return 1;
      }
    }
    else {
      iVar1 = *(int *)(in_stack_00000004 + 0xbef8);
      if (iVar1 != 0) {
        fVar5 = *(float *)(iVar1 + 0x20) - *(float *)(in_stack_00000004 + 0x20);
        fVar2 = *(float *)(iVar1 + 0x24) - *(float *)(in_stack_00000004 + 0x24);
        fVar3 = *(float *)(iVar1 + 0x28) - *(float *)(in_stack_00000004 + 0x28);
        if (1.0 <= SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2)) {
          *(undefined4 *)(in_stack_00000004 + 0xbf10) = 1;
          return 1;
        }
      }
    }
  }
  return 0;
}


// Assembly code:
// 004e48a0: PUSH EBX
//   Label: core_gargoyle.cpp_CGargoyle_FUN_004e48a0
// 004e48a1: PUSH EBP
// 004e48a2: MOV EBP,ESP
// 004e48a4: SUB ESP,0x30
// 004e48a7: AND ESP,0xfffffff8
// 004e48aa: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004e48ad: MOV EDX,dword ptr [EBX + 0xbe3c]
// 004e48b3: MOV dword ptr [EBX + 0xbf10],0x0
// 004e48bd: TEST EDX,EDX
// 004e48bf: JZ 0x004e4950
//   XREF to: 004e4950 (CONDITIONAL_JUMP)
// 004e48c5: MOV EAX,EDX
// 004e48c7: LEA EDX,[EBX + 0x20]
// 004e48ca: FLD float ptr [EDX]
// 004e48cc: FSUB float ptr [EAX + 0x20]
// 004e48cf: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 004e48d3: FLD float ptr [EDX + 0x4]
// 004e48d6: FSUB float ptr [EAX + 0x24]
// 004e48d9: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (WRITE)
// 004e48dd: FMUL float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 004e48e1: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 004e48e5: FMUL ST0
// 004e48e7: FLD float ptr [EDX + 0x8]
// 004e48ea: FSUB float ptr [EAX + 0x28]
// 004e48ed: FXCH
// 004e48ef: FADDP ST2,ST0
// 004e48f1: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (WRITE)
// 004e48f5: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 004e48f9: FADDP
// 004e48fb: FSQRT
// 004e48fd: FCOMP float ptr [EBX + 0xbe34]
// 004e4903: FNSTSW AX
// 004e4905: SAHF
// 004e4906: JBE 0x004e496b
//   XREF to: 004e496b (CONDITIONAL_JUMP)
// 004e4908: MOV ECX,dword ptr [EBX + 0xbef8]
// 004e490e: TEST ECX,ECX
// 004e4910: JZ 0x004e4950
//   XREF to: 004e4950 (CONDITIONAL_JUMP)
// 004e4912: MOV EAX,ECX
// 004e4914: FLD float ptr [EAX + 0x20]
// 004e4917: FSUB float ptr [EDX]
// 004e4919: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 004e491d: FLD float ptr [EAX + 0x24]
// 004e4920: FSUB float ptr [EDX + 0x4]
// 004e4923: FST float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (WRITE)
// 004e4927: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 004e492b: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 004e492f: FMUL ST0
// 004e4931: FLD float ptr [EAX + 0x28]
// 004e4934: FSUB float ptr [EDX + 0x8]
// 004e4937: FXCH
// 004e4939: FADDP ST2,ST0
// 004e493b: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 004e493f: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 004e4943: FADDP
// 004e4945: FSQRT
// 004e4947: FLD1
// 004e4949: FCOMPP
// 004e494b: FNSTSW AX
// 004e494d: SAHF
// 004e494e: JBE 0x004e4957
//   XREF to: 004e4957 (CONDITIONAL_JUMP)
// 004e4950: XOR EAX,EAX
//   Label: LAB_004e4950
// 004e4952: MOV ESP,EBP
// 004e4954: POP EBP
// 004e4955: POP EBX
// 004e4956: RET
// 004e4957: MOV EAX,0x1
//   Label: LAB_004e4957
// 004e495c: MOV dword ptr [EBX + 0xbf10],0x1
// 004e4966: MOV ESP,EBP
// 004e4968: POP EBP
// 004e4969: POP EBX
// 004e496a: RET
// 004e496b: LEA EAX,[ESP + 0x14]
//   Label: LAB_004e496b
//   XREF to: Stack[-0x24] (DATA)
// 004e496f: PUSH EAX
// 004e4970: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x18] (DATA)
// 004e4974: PUSH EAX
// 004e4975: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004e497a: MOV EDX,EAX
// 004e497c: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x24] (DATA)
// 004e4980: ADD ESP,0x8
// 004e4983: CMP EAX,EDX
// 004e4985: JZ 0x004e499b
//   XREF to: 004e499b (CONDITIONAL_JUMP)
// 004e4987: MOV EAX,dword ptr [EDX]
// 004e4989: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004e498d: MOV EAX,dword ptr [EDX + 0x4]
// 004e4990: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004e4994: MOV EAX,dword ptr [EDX + 0x8]
// 004e4997: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004e499b: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_004e499b
// 004e49a1: FLD float ptr [EAX + 0x34]
// 004e49a4: FSUB float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 004e49a8: SUB ESP,0x4
// 004e49ab: FSTP float ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 004e49ae: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004e49b3: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004e49b7: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0xc] (READ)
// 004e49bb: ADD ESP,0x4
// 004e49be: FST double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 004e49c1: FCOMP double ptr [0x0062d92f]
//   XREF to: 0062d92f (READ)
// 004e49c7: FNSTSW AX
// 004e49c9: SAHF
// 004e49ca: JC 0x004e49de
//   XREF to: 004e49de (CONDITIONAL_JUMP)
// 004e49cc: FLD double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 004e49cf: FCOMP double ptr [0x0062d937]
//   XREF to: 0062d937 (READ)
// 004e49d5: FNSTSW AX
// 004e49d7: SAHF
// 004e49d8: JBE 0x004e4950
//   XREF to: 004e4950 (CONDITIONAL_JUMP)
// 004e49de: MOV EAX,0x1
//   Label: LAB_004e49de
// 004e49e3: MOV ESP,EBP
// 004e49e5: POP EBP
// 004e49e6: POP EBX
// 004e49e7: RET

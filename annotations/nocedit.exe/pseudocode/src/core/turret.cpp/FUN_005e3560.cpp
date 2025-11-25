// Name: core_turret.cpp_FUN_005e3560
// Address: 005e3560
// Address Range: [[005e3560, 005e3610]]
// Convention: unknown
// Signature: undefined core_turret.cpp_FUN_005e3560()
// Cross-references:
//   core_turret.cpp_CTurret_process_FUN_005e2430 (005e2430) at 005e26e3 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e2d50 (005e2d50) at 005e3261 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00656798 = 0.333333333333333
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_turret.cpp_FUN_005e3280

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_turret.cpp_FUN_005e3560(undefined4 param_1, undefined4
   param_2) */

void core_turret_cpp_FUN_005e3560(void)

{
  CVector3f *input_local_point;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  CVector3f *pCVar8;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float fStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_14;
  
  if (*(float *)(in_stack_00000004 + 0x86c) <= 0.0) {
    if (*(int *)(in_stack_00000004 + 0x780) != 0) {
      input_local_point = (CVector3f *)(in_stack_00000004 + 0x84c);
      iVar7 = core_turret_cpp_FUN_005e3280();
      if (iVar7 != 0) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x780) + 0x154) + 0x14))();
        fVar1 = input_local_point->x;
        fVar2 = *(float *)(in_stack_00000004 + 0x850);
        iVar7 = 0;
        fVar3 = *(float *)(in_stack_00000004 + 0x854);
        while( true ) {
          fStack_24 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,0.9);
          *(float *)(in_stack_00000004 + 0x84c) =
               fStack_54 * fStack_24 + (1.0 - fStack_24) * fStack_48;
          fStack_14 = fStack_24;
          fStack_24 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,0.9);
          *(float *)(in_stack_00000004 + 0x854) =
               fStack_4c * fStack_24 + (1.0 - fStack_24) * fStack_40;
          *(undefined4 *)(in_stack_00000004 + 0x850) = uStack_50;
          fStack_14 = fStack_24;
          pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (*(CDemonActor **)(in_stack_00000004 + 0x780),&CStack_30,
                              input_local_point);
          if (input_local_point != pCVar8) {
            input_local_point->x = pCVar8->x;
            *(float *)(in_stack_00000004 + 0x850) = pCVar8->y;
            *(float *)(in_stack_00000004 + 0x854) = pCVar8->z;
          }
          fVar4 = input_local_point->x - fVar1;
          fVar6 = *(float *)(in_stack_00000004 + 0x850) - fVar2;
          fVar5 = *(float *)(in_stack_00000004 + 0x854) - fVar3;
          if (FLOAT_006567a0 < fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) break;
          iVar7 = iVar7 + 1;
          if (4 < iVar7) {
            return;
          }
        }
      }
    }
  }
  else if (*(float *)(in_stack_00000004 + 0x300) <= 0.0) {
    (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0xf8))();
  }
  return;
}


// Assembly code:
// 005e3560: PUSH EBX
//   Label: core_turret.cpp_FUN_005e3560
// 005e3561: PUSH ESI
// 005e3562: PUSH EDI
// 005e3563: PUSH EBP
// 005e3564: SUB ESP,0x44
// 005e3567: MOV ESI,dword ptr [ESP + 0x58]
// 005e356b: FLD float ptr [ESI + 0x86c]
// 005e3571: FLDZ
// 005e3573: FCOMPP
// 005e3575: FNSTSW AX
// 005e3577: SAHF
// 005e3578: JNC 0x005e35a3
//   XREF to: 005e35a3 (CONDITIONAL_JUMP)
// 005e357a: FLD float ptr [ESI + 0x300]
// 005e3580: FLDZ
// 005e3582: FCOMPP
// 005e3584: FNSTSW AX
// 005e3586: SAHF
// 005e3587: JNC 0x005e3591
//   XREF to: 005e3591 (CONDITIONAL_JUMP)
// 005e3589: ADD ESP,0x44
//   Label: LAB_005e3589
// 005e358c: POP EBP
// 005e358d: POP EDI
// 005e358e: POP ESI
// 005e358f: POP EBX
// 005e3590: RET
// 005e3591: PUSH ESI
//   Label: LAB_005e3591
// 005e3592: MOV EAX,dword ptr [ESI + 0x154]
// 005e3598: CALL dword ptr [EAX + 0xf8]
// 005e359e: ADD ESP,0x4
// 005e35a1: JMP 0x005e3589
//   XREF to: 005e3589 (UNCONDITIONAL_JUMP)
// 005e35a3: CMP dword ptr [ESI + 0x780],0x0
//   Label: LAB_005e35a3
// 005e35aa: JZ 0x005e3589
//   XREF to: 005e3589 (CONDITIONAL_JUMP)
// 005e35ac: FLD float ptr [ESP + 0x5c]
// 005e35b0: FMUL double ptr [0x00656798]
//   XREF to: 00656798 (READ)
// 005e35b6: SUB ESP,0x4
// 005e35b9: LEA EBX,[ESI + 0x84c]
// 005e35bf: FSTP float ptr [ESP]
// 005e35c2: PUSH EBX
// 005e35c3: PUSH ESI
// 005e35c4: CALL core_turret.cpp_FUN_005e3280
//   XREF to: 005e3280 (UNCONDITIONAL_CALL)
// 005e35c9: ADD ESP,0xc
// 005e35cc: TEST EAX,EAX
// 005e35ce: JZ 0x005e3589
//   XREF to: 005e3589 (CONDITIONAL_JUMP)
// 005e35d0: MOV EBP,ESP
// 005e35d2: MOV EAX,dword ptr [ESI + 0x780]
// 005e35d8: PUSH EBP
// 005e35d9: MOV EDI,dword ptr [EAX + 0x154]
// 005e35df: PUSH EAX
// 005e35e0: CALL dword ptr [EDI + 0x14]
// 005e35e3: ADD ESP,0x8
// 005e35e6: MOV EAX,dword ptr [EBX]
// 005e35e8: MOV dword ptr [ESP + 0x18],EAX
// 005e35ec: LEA EAX,[EBX + 0x4]
// 005e35ef: MOV EAX,dword ptr [EAX]
// 005e35f1: MOV dword ptr [ESP + 0x1c],EAX
// 005e35f5: LEA EAX,[EBX + 0x8]
// 005e35f8: XOR EBP,EBP
// 005e35fa: MOV EAX,dword ptr [EAX]
// 005e35fc: MOV EDI,EBX
// 005e35fe: MOV dword ptr [ESP + 0x20],EAX
// 005e3602: PUSH 0x3f666666
//   Label: LAB_005e3602
// 005e3607: PUSH 0x3dcccccd
// 005e360c: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)

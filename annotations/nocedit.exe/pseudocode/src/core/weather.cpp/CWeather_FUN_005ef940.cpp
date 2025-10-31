// Name: core_weather.cpp_CWeather_FUN_005ef940
// Address: 005ef940
// Address Range: [[005ef940, 005ef99b] [005efb24, 005efb3f]]
// Convention: unknown
// Signature: undefined core_weather.cpp_CWeather_FUN_005ef940()
// Cross-references:
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b171 [UNCONDITIONAL_CALL]
// Globals:
//   CVector3f[200] DAT_03f95df8
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_weather.cpp_CWeather_FUN_005ef940(CWeather* param_1, undefined4
   param_2, undefined4 param_3) */

void core_weather_cpp_CWeather_FUN_005ef940(void)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  undefined4 unaff_ESI;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  int *in_stack_00000004;
  float *in_stack_00000008;
  int *in_stack_0000000c;
  float local_3c;
  float local_38;
  CVector3f local_34;
  float fStack_28;
  CVector3f CStack_20;
  float local_14;
  
  if ((float *)(in_stack_00000004 + 2) != in_stack_00000008) {
    in_stack_00000004[2] = (int)*in_stack_00000008;
    in_stack_00000004[3] = (int)in_stack_00000008[1];
    in_stack_00000004[4] = (int)in_stack_00000008[2];
  }
  if (in_stack_00000004 + 5 != in_stack_0000000c) {
    in_stack_00000004[5] = *in_stack_0000000c;
    in_stack_00000004[6] = in_stack_0000000c[1];
    in_stack_00000004[7] = in_stack_0000000c[2];
  }
  if (*in_stack_00000004 != 0) {
    pCVar3 = DAT_03f95df8;
    iVar4 = 0;
    do {
      fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,50.0);
      local_14 = fVar1;
      fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                        ((float)in_stack_0000000c[1] + (float)_DAT_00657c24,
                         (float)in_stack_0000000c[1] + (float)_DAT_00657c1c);
      fVar5 = (float10)fsin((float10)fVar2);
      fVar6 = (float10)fcos((float10)fVar2);
      local_34.y = (float)(fVar5 * (float10)fVar1 + (float10)*in_stack_00000008);
      local_34.z = in_stack_00000008[1];
      fStack_28 = (float)(fVar6 * (float10)fVar1 + (float10)in_stack_00000008[2]);
      if (&local_3c != &local_34.y) {
        local_3c = local_34.y;
        local_38 = local_34.z;
        local_34.x = fStack_28;
      }
      local_38 = local_38 + _DAT_00657c30;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
      fVar1 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                        (g_CDemonSetPtr,(CVector3f *)&stack0xffffffc0,&local_34);
      fVar1 = (local_34.z - local_38) * fVar1 + local_38;
      *(float *)((int)&DAT_03f96758 + iVar4) = fVar1;
      fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      CStack_20.y = fVar2 * (float)_DAT_00657c14 +
                    (float)(double)CONCAT44(unaff_ESI,(int)((ulonglong)(double)fVar1 >> 0x20));
      if (pCVar3 != &CStack_20) {
        pCVar3->x = CStack_20.x;
        pCVar3->y = CStack_20.y;
        pCVar3->z = CStack_20.z;
      }
      iVar4 = iVar4 + 4;
      pCVar3 = pCVar3 + 1;
    } while (iVar4 != 800);
    *(undefined4 *)((int)fVar2 + 0x28) = 0;
    *(undefined4 *)((int)fVar2 + 0x24) = 0;
  }
  return;
}


// Assembly code:
// 005ef940: PUSH EBX
//   Label: core_weather.cpp_CWeather_FUN_005ef940
// 005ef941: PUSH ESI
// 005ef942: PUSH EDI
// 005ef943: PUSH EBP
// 005ef944: MOV EBP,ESP
// 005ef946: SUB ESP,0x40
// 005ef949: AND ESP,0xfffffff8
// 005ef94c: MOV EDI,dword ptr [EBP + 0x18]
// 005ef94f: MOV EAX,dword ptr [EBP + 0x14]
// 005ef952: ADD EAX,0x8
// 005ef955: CMP EAX,EDI
// 005ef957: JNZ 0x005efb2b
//   XREF to: 005efb2b (CONDITIONAL_JUMP)
// 005ef95d: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005ef95d
// 005ef960: MOV EDX,dword ptr [EBP + 0x1c]
// 005ef963: ADD EAX,0x14
// 005ef966: CMP EAX,EDX
// 005ef968: JZ 0x005ef97a
//   XREF to: 005ef97a (CONDITIONAL_JUMP)
// 005ef96a: MOV ECX,dword ptr [EDX]
// 005ef96c: MOV dword ptr [EAX],ECX
// 005ef96e: MOV ECX,dword ptr [EDX + 0x4]
// 005ef971: MOV dword ptr [EAX + 0x4],ECX
// 005ef974: MOV ECX,dword ptr [EDX + 0x8]
// 005ef977: MOV dword ptr [EAX + 0x8],ECX
// 005ef97a: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005ef97a
// 005ef97d: CMP dword ptr [EAX],0x0
// 005ef980: JZ 0x005efb24
//   XREF to: 005efb24 (CONDITIONAL_JUMP)
// 005ef986: MOV EBX,0x3f95df8
//   XREF to: 03f95df8 (PARAM)
// 005ef98b: XOR ESI,ESI
// 005ef98d: PUSH 0x42480000
//   Label: LAB_005ef98d
// 005ef992: PUSH 0x40a00000
// 005ef997: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005efb24: MOV ESP,EBP
//   Label: LAB_005efb24
// 005efb26: POP EBP
// 005efb27: POP EDI
// 005efb28: POP ESI
// 005efb29: POP EBX
// 005efb2a: RET
// 005efb2b: MOV EDX,dword ptr [EDI]
//   Label: LAB_005efb2b
// 005efb2d: MOV dword ptr [EAX],EDX
// 005efb2f: MOV EDX,dword ptr [EDI + 0x4]
// 005efb32: MOV dword ptr [EAX + 0x4],EDX
// 005efb35: MOV EDX,dword ptr [EDI + 0x8]
// 005efb38: MOV dword ptr [EAX + 0x8],EDX
// 005efb3b: JMP 0x005ef95d
//   XREF to: 005ef95d (UNCONDITIONAL_JUMP)

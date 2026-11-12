// Name: core_doc.cpp_FUN_00459555
// Address: 00459555
// Address Range: [[00459555, 0045979a]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_00459555(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_doc_cpp_FUN_00459555(void)

{
  float fVar1;
  char cVar2;
  char *in_EAX;
  char *pcVar3;
  CDemonActor *pCVar4;
  int unaff_EBX;
  byte bVar5;
  int iVar6;
  float in_stack_0000006c;
  float in_stack_00000070;
  float in_stack_00000074;
  float in_stack_00000088;
  float in_stack_0000008c;
  float in_stack_000000c0;
  float in_stack_000000c4;
  float in_stack_000000c8;
  float in_stack_000000d8;
  float in_stack_000000dc;
  float in_stack_000000e0;
  float in_stack_000000fc;
  float in_stack_00000108;
  float in_stack_0000010c;
  float in_stack_00000110;
  float in_stack_00000160;
  int in_stack_0000017c;
  int in_stack_00000188;
  float in_stack_00000194;
  uint auStack_f64 [15];
  uint auStack_f28 [6];
  uint auStack_f10 [9];
  uint auStack_eec [951];
  
  bVar5 = 0;
  cVar2 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar2;
  pcVar3 = (char *)(CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(0x24,cVar2)) >>
                                   8),cVar2) | 1);
  *pcVar3 = *pcVar3 + (char)pcVar3;
  in_stack_00000194 =
       (float)core_setcolid_cpp_FUN_00537030
                        (g_CDemonSetPtr,in_stack_0000006c,in_stack_00000074,in_stack_00000108);
  if (in_stack_00000194 < 1.0) {
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    return 0;
  }
  in_stack_000000c0 = in_stack_0000006c + in_stack_00000108;
  in_stack_000000c4 = in_stack_00000070 + in_stack_0000010c;
  in_stack_000000c8 = in_stack_00000074 + in_stack_00000110;
  in_stack_000000fc = in_stack_000000c0;
  *(float *)(&stack0x00000100 + (uint)bVar5 * -8) = (&stack0x000000c4)[(uint)bVar5 * -2];
  *(float *)(&stack0x00000104 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       (&stack0x000000c8)[(uint)bVar5 * -2 + (uint)bVar5 * -2];
  in_stack_00000160 = (float)core_setcolid_cpp_FUN_00534ea0();
  in_stack_00000194 = in_stack_00000160;
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  if (ABS(in_stack_00000160 - *(float *)(unaff_EBX + 0x24)) <= 1.0) {
    in_stack_0000017c = 0;
    in_stack_00000188 = 0;
    do {
      if (g_CDemonSetPtr->actor_count <= in_stack_0000017c) {
        *(uint *)(unaff_EBX + 0x256a4) = 6;
        if ((*(int *)(unaff_EBX + 0x2698) == 0) ||
           (iVar6 = (**(code **)(*(int *)(*(int *)(unaff_EBX + 0x2698) + 0x2b0) + 0x8c))(),
           iVar6 != 4)) {
          iVar6 = 0x14;
        }
        else {
          iVar6 = 0x19;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)(unaff_EBX + 0x2b4),iVar6,1);
        return 1;
      }
      pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + in_stack_00000188),
                          g_CCrateClassInfo.name_hash);
      if (pCVar4 != (CDemonActor *)0x0) {
        fVar1 = (pCVar4->location).position.x - in_stack_0000006c;
        in_stack_000000d8 = fVar1;
        in_stack_000000dc = (pCVar4->location).position.y - in_stack_00000070;
        in_stack_000000e0 = (pCVar4->location).position.z - in_stack_00000074;
        (&stack0x00000088)[(uint)bVar5 * -2] = (&stack0x000000dc)[(uint)bVar5 * -2];
        (&stack0x0000008c)[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
             (&stack0x000000e0)[(uint)bVar5 * -2 + (uint)bVar5 * -2];
        if (SQRT(in_stack_0000008c * in_stack_0000008c +
                 fVar1 * fVar1 + in_stack_00000088 * in_stack_00000088) < (float)_DAT_005d0417) {
          return 0;
        }
      }
      in_stack_0000017c = in_stack_0000017c + 1;
      in_stack_00000188 = in_stack_00000188 + 4;
    } while( true );
  }
  return 0;
}

// Name: core_enemy.cpp_FUN_00488450
// Address: 00488450
// Address Range: [[00488450, 0048884c]]
// Convention: unknown
// Signature: void core_enemy_cpp_FUN_00488450(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_enemy_cpp_FUN_00488450(int param_1,float param_2)

{
  int iVar1;
  CPathMap *this_ptr;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1044 [1013];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  CVector3f CStack_44;
  float fStack_38;
  float *pfStack_34;
  int iStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  CVector3f *pCStack_18;
  uint uStack_14;
  
  bVar5 = 0;
  fStack_60 = *(float *)(param_1 + 0x10aec);
  iVar1 = *(int *)(param_1 + 0x10af0);
  if (iVar1 == 0) {
    if (((*(int *)&g_CGamePtr->field_0x1f0 != 0) || (*(int *)&g_CGamePtr->field_0x24c == 0)) ||
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                          (0x01C38BC0,"?Capture" + 1), iVar1 != 0)) {
      *(uint *)(param_1 + 0x10a6c) = 0;
      *(uint *)(param_1 + 0x10a7c) = 0;
      *(uint *)(param_1 + 0x10a78) = 0;
      return;
    }
    param_2 = *(float *)(param_1 + 0x10a7c) - param_2;
    *(float *)(param_1 + 0x10a7c) = param_2;
    if (param_2 <= 0.0) {
      *(uint *)(param_1 + 0x10a6c) = 0;
      uStack_14 = core_actor_cpp_FUN_0040cf60(0x3f000000,0x3fc00000);
      fStack_2c = *(float *)(param_1 + 0x10a80) * *(float *)(param_1 + 0x10a80);
      iStack_20 = 0;
      iStack_24 = 0;
      pfStack_34 = (float *)(param_1 + 0x20);
      iStack_30 = 0;
      iStack_28 = 0;
      *(uint *)(param_1 + 0x10a7c) = uStack_14;
      for (; iStack_24 < *(int *)&g_CDemonSetPtr->field_0x14f0a8; iStack_24 = iStack_24 + 1) {
        iVar1 = *(int *)(&g_CDemonSetPtr->field_0x14f0ac + iStack_30);
        iVar4 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0xec))(iVar1,param_1);
        if (((iVar4 != 0) &&
            (iVar4 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1), iVar4 == 0)) &&
           ((iVar4 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x78))(iVar1), iVar4 == 0 &&
            (*(float *)(iVar1 + 0x2820) <= 0.0)))) {
          fStack_5c = *(float *)(iVar1 + 0x20) - *pfStack_34;
          fStack_58 = *(float *)(iVar1 + 0x24) - pfStack_34[1];
          fStack_54 = *(float *)(iVar1 + 0x28) - pfStack_34[2];
          fStack_50 = fStack_5c;
          *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8) =
               *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          if (ABS(fStack_4c) <= fStack_60) {
            if (*(int *)(param_1 + 0x2814) == 0) {
              fStack_4c = fStack_4c * _DAT_005d2df5;
            }
            fStack_38 = fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c;
            if (fStack_38 <= fStack_2c) {
              *(int *)(&DAT_01c264e4 + iStack_28) = iVar1;
              *(float *)(&DAT_01c28424 + iStack_28) = fStack_38;
              iStack_28 = iStack_28 + 4;
              iStack_20 = iStack_20 + 1;
            }
          }
        }
        iStack_30 = iStack_30 + 4;
      }
      pCStack_18 = (CVector3f *)(param_1 + 0x20);
      iVar1 = *(int *)(param_1 + 0x10a78);
      *(uint *)(param_1 + 0x10a78) = 0;
      while( true ) {
        iVar3 = 0;
        fStack_1c = 1e+20;
        iVar4 = -1;
        if (0 < iStack_20) {
          iVar2 = 0;
          do {
            if (*(float *)(&DAT_01c28424 + iVar2) < fStack_1c) {
              fStack_1c = *(float *)(&DAT_01c28424 + iVar2);
              iVar4 = iVar3;
            }
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + 4;
          } while (iVar3 < iStack_20);
        }
        if (iVar4 < 0) break;
        iVar3 = *(int *)(&DAT_01c264e4 + iVar4 * 4);
        iVar2 = core_enemy_cpp_FUN_00488320(param_1,iVar3);
        if (iVar2 != 0) {
          *(int *)(param_1 + 0x10a78) = iVar3;
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s can see hero\n",param_1);
          return;
        }
        if (((*(int *)(param_1 + 0x10af4) != 0) || (iVar3 == iVar1)) &&
           ((this_ptr = (CPathMap *)(**(code **)(*(int *)(iVar3 + 0x2b0) + 0xcc))(iVar3),
            this_ptr != (CPathMap *)0x0 &&
            (iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                               (this_ptr,pCStack_18,&CStack_44,*(int *)(param_1 + 0x6c)), iVar2 == 1
            )))) {
          *(int *)(param_1 + 0x10a78) = iVar3;
          return;
        }
        *(uint *)(&DAT_01c28424 + iVar4 * 4) = 0x7149f2ca;
        if (iVar3 == iVar1) {
          *(int *)(param_1 + 0x10a78) = iVar1;
        }
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x10a78);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x10a7c) = 0;
        return;
      }
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1);
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0x10a7c) = 0;
        *(uint *)(param_1 + 0x10a6c) = 0;
        *(uint *)(param_1 + 0x10a78) = 0;
        return;
      }
    }
  }
  else {
    if (iVar1 == 0xFFFFFFFF) {
      *(uint *)(param_1 + 0x10a78) = 0;
    }
    else {
      *(int *)(param_1 + 0x10a78) = iVar1;
    }
    *(uint *)(param_1 + 0x10a6c) = 0;
    *(uint *)(param_1 + 0x10a7c) = 0;
  }
  return;
}

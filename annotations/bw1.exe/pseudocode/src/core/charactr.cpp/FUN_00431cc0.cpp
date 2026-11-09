// Name: core_charactr.cpp_FUN_00431cc0
// Address: 00431cc0
// Address Range: [[00431cc0, 0043204c]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00431cc0(CCharacter *param_1,int param_2,float param_3,float param_4,int *param_5)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00431cc0(CCharacter *param_1,int param_2,float param_3,float param_4,int *param_5)

{
  CPathMap *path_map;
  int iVar1;
  byte bVar2;
  float afStackY_1060 [1012];
  CVector3f *direction;
  float fVar3;
  float fVar4;
  uint local_78;
  float local_6c;
  float local_68;
  float local_64;
  uint local_60;
  uint local_54;
  uint local_50;
  float local_48;
  float local_44;
  float local_40;
  uint local_3c;
  float local_30;
  float local_28;
  float local_20;
  uint local_1c;
  
  bVar2 = 0;
  if (param_2 == 0) {
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s tried to follow NULL actor!\n",param_1);
    *param_5 = 3;
    return;
  }
  local_6c = *(float *)(param_2 + 0x20) - *(float *)&param_1->field_0x20;
  local_44 = *(float *)(param_2 + 0x24) - *(float *)&param_1->field_0x24;
  local_64 = *(float *)(param_2 + 0x28) - *(float *)&param_1->field_0x28;
  local_48 = local_6c;
  local_40 = local_64;
  if (0.0 <= param_3) {
    if ((*(int *)&param_1->field_0x27a8 == 0) &&
       ((((float)_DAT_005d5b1f < ABS(local_44) || ((float)_DAT_005d5b27 < ABS(local_6c))) ||
        ((float)_DAT_005d5b27 < ABS(local_64))))) {
      local_68 = local_44;
      engine_console_cpp_FUN_00445430
                (g_CConsolePtr,"%s confused while following %s\n",param_1,param_2);
      *param_5 = 3;
      return;
    }
    local_68 = 0.0;
    local_30 = SQRT(local_64 * local_64 + local_6c * local_6c);
    if (param_4 < 0.0) {
      param_4 = 1e+30;
    }
    local_20 = param_3 * (float)_DAT_005d5b2f;
    iVar1 = *param_5;
    if (iVar1 == 0) {
      param_3 = param_3 + local_20;
    }
    else if (iVar1 == 1) {
      param_4 = param_4 + local_20;
      param_3 = param_3 - local_20;
    }
    else if (iVar1 == 2) {
      param_4 = param_4 - local_20;
    }
    if (param_3 < (float)_DAT_005d5b37) {
      param_3 = 0.01;
    }
    if (param_3 <= local_30) {
      fVar4 = 0.0;
      fVar3 = 0.0;
      direction = (CVector3f *)&DAT_02c8af28;
      path_map = (CPathMap *)(**(code **)(*(int *)(param_2 + 0x154) + 0xc4))(param_2);
      iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        (param_1,(CVector3f *)(param_2 + 0x20),path_map,direction,fVar3,fVar4);
      if (iVar1 < 0) {
        engine_console_cpp_FUN_00445430
                  (g_CConsolePtr,"%s confused after pathmap call while following %s\n",param_1,param_2);
        *param_5 = 3;
        return;
      }
      if (local_30 <= param_4) {
        *param_5 = 1;
        return;
      }
      *param_5 = 2;
      return;
    }
    *param_5 = 0;
    return;
  }
  local_68 = 0.0;
  core_actor_cpp_FUN_00408b00(param_1,&stack0xffffff94);
  local_3c = local_78;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff8c + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffff90 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_vecdir_cpp_FUN_005a7520(&stack0xffffffc4);
  local_54 = local_60;
  *(uint *)((int)&stack0xffffffb0 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffa4 + (uint)bVar2 * 0xfffffffe * 4);
  *(uint *)(&stack0xffffffb4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffa8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  *(uint *)&param_1->field_0x2508 = local_50;
  if (*param_5 == 0) {
    if ((float)_DAT_005d5b47 < ABS(*(float *)&param_1->field_0x2508)) goto LAB_00431e84;
    if (*param_5 != 1) goto LAB_00431f2b;
  }
  else {
    if (ABS(*(float *)&param_1->field_0x2508) < (float)_DAT_005d5b3f) {
      *param_5 = 0;
LAB_00431f2b:
      *(uint *)&param_1->field_0x2508 = 0;
      goto LAB_00431ee2;
    }
LAB_00431e84:
    *param_5 = 1;
  }
  local_1c = *(uint *)&param_1->field_0x2508;
  local_28 = *(float *)&param_1->field_0x2528;
  fVar4 = (float)core_actor_cpp_FUN_0040cd60(local_1c);
  fVar3 = -local_28;
  if ((fVar3 <= fVar4) && (fVar3 = fVar4, local_28 < fVar4)) {
    fVar3 = local_28;
  }
  *(float *)&param_1->field_0x2508 = fVar3;
LAB_00431ee2:
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  return;
}

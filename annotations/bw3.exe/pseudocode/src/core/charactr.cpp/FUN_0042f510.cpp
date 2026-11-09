// Name: core_charactr.cpp_FUN_0042f510
// Address: 0042f510
// Address Range: [[0042f510, 0042f6ef]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_0042f510(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_charactr_cpp_FUN_0042f510(CCharacter *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  uint local_74 [6];
  uint local_5c [6];
  byte local_44 [4];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  
  bVar5 = 0;
  if ((DAT_007e2b30 & 1) == 0) {
    DAT_007e2b30 = DAT_007e2b30 | 1;
  }
  bVar1 = false;
  if ((*(int *)&param_1->field_0x27a8 != 0) && (*(int *)&param_1->field_0x30cc == 0)) {
    fVar6 = (float10)_DAT_007e2cb0 + (float10)_DAT_005b837a;
    _DAT_007e2cb0 = (float)fVar6;
    fVar7 = (float10)fsin(fVar6);
    fVar6 = (float10)fcos(fVar6);
    local_40 = 3.0;
    local_14 = (float)fVar7;
    local_18 = (float)fVar6;
    local_38 = local_14 + *(float *)&param_1->field_0x20;
    local_30 = local_18 + *(float *)&param_1->field_0x28;
    local_34 = *(float *)&param_1->field_0x24 + _DAT_005b837e;
    local_44 = (byte  [4])local_14;
    local_3c = local_18;
    if ((float *)local_44 != &local_38) {
      local_44 = (byte  [4])local_38;
      local_40 = local_34;
      local_3c = local_30;
    }
    local_2c = local_38;
    local_28 = local_34;
    local_24 = local_30;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0
              ((CDemonGlobe *)&DAT_007e2af0,(CVector3f *)local_44);
    _DAT_007e2b2c = 45000;
    DAT_007e2b0c = 0x2b;
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30((CDemonGlobe *)&DAT_007e2af0,3.0)
    ;
    _DAT_007e2b10 = 0;
    bVar1 = true;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(g_CDemonSetPtr,(CDemonGlobe *)&DAT_007e2af0);
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
  puVar3 = local_74;
  puVar4 = local_5c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041daf0(local_5c);
  if (iVar2 != 0) {
    *(uint *)&param_1->field_0x27bc = 1;
    core_charactr_cpp_FUN_0042d8e0(param_1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)param_1);
  if (bVar1) {
    core_set_cpp_FUN_00537320(g_CDemonSetPtr,&DAT_007e2af0);
  }
  if ((0 < *(int *)&param_1->field_0x33a0) && (*(int *)&param_1->field_0x27bc != 0)) {
    core_charactr_cpp_FUN_0042f6f0(param_1);
    return *(uint *)&param_1->field_0x27bc;
  }
  return *(uint *)&param_1->field_0x27bc;
}

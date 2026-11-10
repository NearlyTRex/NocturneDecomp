// Name: core_door.cpp_FUN_00463d80
// Address: 00463d80
// Address Range: [[00463d80, 004642d6]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_00463d80(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_door_cpp_FUN_00463d80(CDemonActor *param_1)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  double *pdVar6;
  byte bVar7;
  float afStackY_10f4 [996];
  CBoundingBox3D *in_stack_fffffea0;
  float *pfVar8;
  double local_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  uint auStack_130 [6];
  float afStack_118 [4];
  float afStack_108 [4];
  float fStack_f8;
  float afStack_f4 [3];
  float fStack_e8;
  float afStack_e4 [4];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float afStack_b8 [4];
  float afStack_a8 [4];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float afStack_64 [4];
  float afStack_54 [5];
  float fStack_40;
  float fStack_34;
  float fStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  (*((param_1->vtable)._ub)->getBoundingBox)(param_1,in_stack_fffffea0);
  puVar5 = auStack_130;
  pdVar6 = &local_150;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pdVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    pdVar6 = (double *)((int)pdVar6 + (uint)bVar7 * -8 + 4);
  }
  switch(param_1[2].location.position.z) {
  case 0.0:
    (param_1->orient).vec.x = 0.0;
    (param_1->orient).vec.z = 0.0;
    (param_1->location).position.x = (float)param_1[7].location.area_id;
    (param_1->location).position.y = param_1[7].orient.vec.x;
    (param_1->location).position.z = param_1[7].orient.vec.y;
    if (param_1[2].orient.vec.y == 0.0) {
      fVar2 = param_1[7].orient_matrix.m[0].z * (float)_DAT_005bbd73 +
              param_1[7].orient_matrix.m[0].x;
    }
    else {
      fVar2 = param_1[7].orient_matrix.m[0].x -
              param_1[7].orient_matrix.m[0].z * (float)_DAT_005bbd73;
    }
    (param_1->orient).vec.y = fVar2;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(param_1);
    local_150 = (double)fStack_13c;
    if (ABS(fStack_148) <= ABS(fStack_13c)) {
      fStack_148 = fStack_13c + (float)_DAT_005bbd83;
    }
    else {
      fStack_148 = fStack_148 + (float)_DAT_005bbd8b;
    }
    param_1[7].orient_matrix.m[2].x = fStack_148;
    pCVar1 = param_1[7].orient_matrix.m + 2;
    param_1[7].orient_matrix.m[2].y = 3.5;
    param_1[7].orient_matrix.m[2].z = 0.0;
    core_actor_cpp_FUN_00408b80(param_1,pCVar1);
    fStack_7c = fStack_40;
    afStack_a8[(uint)bVar7 * -2 + 0xc] = afStack_54[(uint)bVar7 * -2 + 6];
    afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
         afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    if ((CVector3f *)(afStack_a8 + 0xb) != pCVar1) {
      pCVar1->x = fStack_7c;
      param_1[7].orient_matrix.m[2].y = fStack_78;
      param_1[7].orient_matrix.m[2].z = fStack_74;
    }
    break;
  case 1.4013e-45:
    (param_1->location).position.y = param_1[7].orient.vec.x + param_1[7].orient_matrix.m[0].z;
    afStack_b8[1] = 3.5;
    afStack_b8[0] = 0.0;
    afStack_b8[2] = 0.0;
    core_actor_cpp_FUN_00408b80(param_1,afStack_e4 + 0xb);
    pCVar1 = param_1[7].orient_matrix.m + 2;
    fStack_88 = fStack_28;
    afStack_a8[(uint)bVar7 * -2 + 9] = afStack_54[(uint)bVar7 * -2 + 0xc];
    afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    if (pCVar1 != (CVector3f *)(afStack_a8 + 8)) {
      pCVar1->x = fStack_88;
      param_1[7].orient_matrix.m[2].y = fStack_84;
      param_1[7].orient_matrix.m[2].z = fStack_80;
    }
    break;
  case 2.8026e-45:
    if (param_1[2].location.area_id == 1) {
      afStack_118[0] = param_1[7].orient_matrix.m[0].z;
    }
    else {
      afStack_118[0] = -param_1[7].orient_matrix.m[0].z;
    }
    afStack_118[1] = 0.0;
    afStack_118[2] = 0.0;
    core_dirmat_cpp_FUN_0045b800(&param_1->orient_matrix,afStack_118);
    afStack_108[2] = afStack_118[3];
    afStack_108[(uint)bVar7 * -2 + 3] = afStack_108[(uint)bVar7 * -2];
    afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    fStack_c4 = (float)param_1[7].location.area_id + afStack_108[2];
    fStack_c0 = param_1[7].orient.vec.x + afStack_108[3];
    fStack_bc = param_1[7].orient.vec.y + fStack_f8;
    afStack_b8[3] = fStack_c4;
    afStack_a8[(uint)bVar7 * -2] = afStack_e4[(uint)bVar7 * -2 + 9];
    afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    (param_1->location).position.x = afStack_b8[3];
    (param_1->location).position.y = afStack_a8[0];
    (param_1->location).position.z = afStack_a8[1];
    afStack_64[1] = 3.5;
    afStack_64[0] = 0.0;
    afStack_64[2] = 0.0;
    core_actor_cpp_FUN_00408b80(param_1,afStack_a8 + 0x11);
    pCVar1 = param_1[7].orient_matrix.m + 2;
    fStack_d0 = fStack_e8;
    afStack_e4[(uint)bVar7 * -2 + 6] = afStack_e4[(uint)bVar7 * -2];
    afStack_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         afStack_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    if (pCVar1 != (CVector3f *)(afStack_e4 + 5)) {
      pCVar1->x = fStack_d0;
      param_1[7].orient_matrix.m[2].y = fStack_cc;
      param_1[7].orient_matrix.m[2].z = fStack_c8;
    }
    break;
  case 4.2039e-45:
    (param_1->orient).vec.x = param_1[7].orient_matrix.m[0].z * (float)_DAT_005bbd73;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(param_1);
    fStack_94 = fStack_148 + fStack_13c;
    fStack_90 = fStack_144 + local_138;
    fStack_8c = fStack_140 + fStack_134;
    afStack_a8[2] = fStack_148 + fStack_13c;
    afStack_a8[(uint)bVar7 * -2 + 3] = afStack_a8[(uint)bVar7 * -2 + 6];
    afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    pfVar8 = afStack_a8 + 0x14;
    afStack_e4[2] = afStack_a8[2] * _DAT_005bbd7b;
    afStack_e4[3] = afStack_a8[3] * _DAT_005bbd7b;
    fStack_d4 = fStack_98 * _DAT_005bbd7b;
    afStack_64[3] = afStack_a8[2] * _DAT_005bbd7b;
    afStack_54[(uint)bVar7 * -2] = afStack_e4[(uint)bVar7 * -2 + 3];
    afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    core_actor_cpp_FUN_00408b80(param_1,pfVar8);
    pCVar1 = param_1[7].orient_matrix.m + 2;
    fStack_1c = afStack_54[2];
    afStack_54[(uint)bVar7 * -2 + 0xf] = afStack_54[(uint)bVar7 * -2 + 3];
    afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
         afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    if (pCVar1 != (CVector3f *)(afStack_54 + 0xe)) {
      pCVar1->x = fStack_1c;
      param_1[7].orient_matrix.m[2].y = fStack_18;
      param_1[7].orient_matrix.m[2].z = fStack_14;
    }
    break;
  default:
    _DAT_01d71de0 = "..\\core\\door.cpp";
    _DAT_01d71de4 = 0x117;
    core_main_c_FUN_004e4330("CDoor::reposition - Unknown type");
  }
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (0x01C6E360,param_1[7].create_event + 4);
  if (iVar4 != 0) {
    param_1[7].health = *(int *)param_1[7].create_event;
  }
  if (0.0 < (float)param_1[7].health) {
    afStack_f4[0] =
         core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                   (-(float)param_1[7].health,(float)param_1[7].health);
    afStack_f4[1] = 0.0;
    afStack_f4[2] =
         core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                   (-(float)param_1[7].health,(float)param_1[7].health);
    core_actor_cpp_FUN_00408b00(param_1,afStack_108 + 5);
    fStack_70 = fStack_34;
    afStack_a8[(uint)bVar7 * -2 + 0xf] = afStack_54[(uint)bVar7 * -2 + 9];
    afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
         afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    fVar2 = (param_1->location).position.y;
    fVar3 = (param_1->location).position.z;
    (param_1->location).position.x = (param_1->location).position.x + fStack_70;
    (param_1->location).position.y = fVar2 + fStack_6c;
    (param_1->location).position.z = fVar3 + fStack_68;
    param_1[7].health = 0;
    return;
  }
  return;
}

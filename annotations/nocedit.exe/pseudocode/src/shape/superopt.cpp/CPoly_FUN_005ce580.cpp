// Name: shape_superopt.cpp_CPoly_FUN_005ce580
// Address: 005ce580
// Address Range: [[005ce580, 005d0004]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CPoly_FUN_005ce580(CPoly * this_ptr)
// Globals:
//   double DOUBLE_006542e2 = 1.00000000000000E-8
//   double DOUBLE_006542ea = -1.00000000000000E-8
//   WatcomTypeInfo g_CP2DTypeInfo
//   WatcomTypeInfo g_CP3DTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_FUN_005ce580(CPoly *this_ptr)

{
  void *pvVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  double *pdVar9;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar10;
  double *pdVar11;
  undefined8 *puVar12;
  double *pdVar13;
  byte bVar14;
  int *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  int aiStackY_19c4 [1262];
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  double dStack_518;
  double dStack_510;
  double dStack_508;
  double dStack_500;
  double dStack_4f8;
  double dStack_4f0;
  double dStack_4e8;
  double dStack_4e0;
  double dStack_4d8;
  double dStack_4d0;
  double dStack_4c8;
  double dStack_4c0;
  double dStack_4b8;
  double dStack_4b0;
  double dStack_4a8;
  double dStack_4a0;
  double dStack_498;
  double dStack_490;
  double dStack_488;
  double dStack_480;
  double dStack_478;
  double dStack_470;
  double dStack_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  double dStack_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  double dStack_428;
  double dStack_420;
  double dStack_418;
  double dStack_3f8;
  double dStack_3f0;
  double dStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  double local_3c8;
  double dStack_3c0;
  double dStack_3b8;
  double dStack_3b0;
  double dStack_3a8;
  double dStack_3a0;
  double dStack_398;
  double dStack_390;
  double dStack_388;
  double dStack_380;
  double dStack_378;
  double dStack_370;
  double dStack_368;
  double dStack_360;
  double dStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  double dStack_338;
  double dStack_330;
  double dStack_328;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  double dStack_308;
  double dStack_300;
  double dStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  double dStack_290;
  double dStack_288;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  undefined8 uStack_1e8;
  double dStack_1e0;
  undefined8 uStack_1d8;
  double dStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  double dStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  double dStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  double dStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  double dStack_190;
  undefined8 uStack_188;
  double dStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  double dStack_170;
  undefined8 uStack_168;
  double dStack_160;
  undefined8 uStack_158;
  double dStack_150;
  undefined8 uStack_148;
  double dStack_140;
  undefined4 uStack_138;
  undefined4 auStack_134 [4];
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  double dStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  double dStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  undefined4 uStack_d8;
  int aiStack_d4 [4];
  undefined8 *puStack_c4;
  double *pdStack_c0;
  double *pdStack_bc;
  double *pdStack_b8;
  double *pdStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  double *pdStack_a0;
  double *pdStack_9c;
  double *pdStack_98;
  double *pdStack_94;
  int iStack_90;
  double *pdStack_8c;
  undefined8 *puStack_88;
  double *pdStack_84;
  double *pdStack_80;
  double *pdStack_7c;
  double *pdStack_78;
  double *pdStack_74;
  undefined8 *puStack_70;
  int iStack_6c;
  double *pdStack_68;
  double *pdStack_64;
  double *pdStack_60;
  double *pdStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  double *pdStack_48;
  double *pdStack_44;
  double *pdStack_40;
  double *pdStack_3c;
  double *pdStack_38;
  double *pdStack_34;
  double *pdStack_30;
  double *pdStack_2c;
  undefined8 *puStack_28;
  double *pdStack_24;
  double *pdStack_20;
  double *pdStack_1c;
  double *pdStack_18;
  
  bVar14 = 0;
  (**(code **)(in_stack_00000008[0x19] + 0x58))();
  (**(code **)((int)this_ptr->vtable + 0x58))();
  if (((((local_3c8 <= dStack_2f0) && (dStack_4d0 <= local_458)) && (dStack_3c0 <= dStack_2e8)) &&
      ((dStack_4c8 <= dStack_450 && (dStack_3b8 <= dStack_2e0)))) && (dStack_4c0 <= dStack_448)) {
    iVar3 = (**(code **)((int)this_ptr->vtable + 0x60))();
    if (iVar3 == 0) {
      iVar3 = (**(code **)((int)this_ptr->vtable + 0x60))();
      if (iVar3 == 0) {
        iVar3 = (**(code **)((int)this_ptr->vtable + 0x60))();
        if (iVar3 == 0) {
          iVar3 = (**(code **)(in_stack_00000008[0x19] + 0x60))();
          if (iVar3 == 0) {
            iVar3 = (**(code **)(in_stack_00000008[0x19] + 0x60))();
            if (iVar3 == 0) {
              iVar3 = (**(code **)(in_stack_00000008[0x19] + 0x60))();
              if (iVar3 == 0) {
                return 0;
              }
            }
          }
        }
      }
    }
    crt_memory_c_memset_FUN_005fde40(in_stack_0000000c,0,0x148);
    pvVar1 = this_ptr->parent_obj->vertex_data;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&uStack_5e0,5,&g_CP3DTypeInfo);
    puVar10 = (undefined4 *)((int)pvVar1 + this_ptr->vertex_idx_0 * 0x38);
    uStack_5e0._0_4_ = *puVar10;
    uStack_5e0._4_4_ = puVar10[1];
    uStack_5d8._0_4_ = puVar10[2];
    uStack_5d8._4_4_ = puVar10[3];
    uStack_5d0._0_4_ = puVar10[4];
    uStack_5d0._4_4_ = puVar10[5];
    puVar10 = (undefined4 *)((int)pvVar1 + this_ptr->vertex_idx_1 * 0x38);
    uStack_5c8 = *puVar10;
    uStack_5c4 = puVar10[1];
    uStack_5c0 = puVar10[2];
    uStack_5bc = puVar10[3];
    uStack_5b8 = puVar10[4];
    uStack_5b4 = puVar10[5];
    puVar10 = (undefined4 *)((int)pvVar1 + this_ptr->vertex_idx_2 * 0x38);
    uStack_5b0 = *puVar10;
    uStack_5ac = puVar10[1];
    uStack_5a8 = puVar10[2];
    uStack_5a4 = puVar10[3];
    uStack_5a0 = puVar10[4];
    uStack_59c = puVar10[5];
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&uStack_568,5,&g_CP2DTypeInfo);
    uStack_568._0_4_ = *(undefined4 *)&this_ptr->uv_coords[0].x;
    uStack_568._4_4_ = *(undefined4 *)((int)&this_ptr->uv_coords[0].x + 4);
    uStack_560._0_4_ = *(undefined4 *)&this_ptr->uv_coords[0].y;
    uStack_560._4_4_ = *(undefined4 *)((int)&this_ptr->uv_coords[0].y + 4);
    uStack_558 = *(undefined4 *)&this_ptr->uv_coords[1].x;
    uStack_554 = *(undefined4 *)((int)&this_ptr->uv_coords[1].x + 4);
    uStack_550 = *(undefined4 *)&this_ptr->uv_coords[1].y;
    uStack_54c = *(undefined4 *)((int)&this_ptr->uv_coords[1].y + 4);
    uStack_548 = *(undefined4 *)&this_ptr->uv_coords[2].x;
    uStack_544 = *(undefined4 *)((int)&this_ptr->uv_coords[2].x + 4);
    uStack_540 = *(undefined4 *)&this_ptr->uv_coords[2].y;
    uStack_53c = *(undefined4 *)((int)&this_ptr->uv_coords[2].y + 4);
    puVar10 = (undefined4 *)(in_stack_00000008[1] * 0x38 + *(int *)(*in_stack_00000008 + 4));
    pdVar11 = &dStack_320;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pdVar11 = *puVar10;
      puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
      pdVar11 = (double *)((int)pdVar11 + (uint)bVar14 * -8 + 4);
    }
    pdVar11 = (double *)(in_stack_00000008 + 0x10);
    iStack_218 = *(int *)pdVar11;
    iStack_214 = in_stack_00000008[0x11];
    pdVar13 = (double *)(in_stack_00000008 + 0x12);
    iStack_210 = *(int *)pdVar13;
    iStack_20c = in_stack_00000008[0x13];
    pdVar9 = (double *)(in_stack_00000008 + 0x14);
    dVar2 = *pdVar9;
    iStack_208 = *(int *)pdVar9;
    iStack_204 = in_stack_00000008[0x15];
    dStack_3b0 = dStack_320 * *pdVar11;
    dStack_3a8 = dStack_318 * *pdVar13;
    dStack_3a0 = dStack_310 * *pdVar9;
    dStack_4e8 = *pdVar11 * (double)CONCAT44(uStack_5e0._4_4_,(undefined4)uStack_5e0);
    dStack_4e0 = *pdVar13 * (double)CONCAT44(uStack_5d8._4_4_,(undefined4)uStack_5d8);
    dStack_4d8 = *pdVar9 * (double)CONCAT44(uStack_5d0._4_4_,(undefined4)uStack_5d0);
    dStack_2d8 = *pdVar11 * (double)CONCAT44(uStack_5c4,uStack_5c8);
    dStack_2d0 = *pdVar13 * (double)CONCAT44(uStack_5bc,uStack_5c0);
    dStack_2c8 = *pdVar9 * (double)CONCAT44(uStack_5b4,uStack_5b8);
    dStack_2c0 = *pdVar11 * (double)CONCAT44(uStack_5ac,uStack_5b0);
    dStack_2b8 = *pdVar13 * (double)CONCAT44(uStack_5a4,uStack_5a8);
    pdVar11 = &dStack_3b0;
    pdVar13 = &dStack_248;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pdVar13 = *(undefined4 *)pdVar11;
      pdVar11 = (double *)((int)pdVar11 + (uint)bVar14 * -8 + 4);
      pdVar13 = (double *)((int)pdVar13 + (uint)bVar14 * -8 + 4);
    }
    dStack_2b0 = dVar2 * (double)CONCAT44(uStack_59c,uStack_5a0);
    pdVar11 = &dStack_4e8;
    pdVar13 = &dStack_398;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pdVar13 = *(undefined4 *)pdVar11;
      pdVar11 = (double *)((int)pdVar11 + (uint)bVar14 * -8 + 4);
      pdVar13 = (double *)((int)pdVar13 + (uint)bVar14 * -8 + 4);
    }
    dVar2 = -(dStack_248 + dStack_240 + dStack_238);
    pdVar11 = &dStack_2d8;
    pdVar13 = &dStack_278;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pdVar13 = *(undefined4 *)pdVar11;
      pdVar11 = (double *)((int)pdVar11 + (uint)bVar14 * -8 + 4);
      pdVar13 = (double *)((int)pdVar13 + (uint)bVar14 * -8 + 4);
    }
    pdVar11 = &dStack_2c0;
    pdVar13 = &dStack_470;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pdVar13 = *(undefined4 *)pdVar11;
      pdVar11 = (double *)((int)pdVar11 + (uint)bVar14 * -8 + 4);
      pdVar13 = (double *)((int)pdVar13 + (uint)bVar14 * -8 + 4);
    }
    dStack_3f8 = dStack_398 + dStack_390 + dStack_388 + dVar2;
    dStack_3f0 = dStack_278 + dStack_270 + dStack_268 + dVar2;
    dStack_3e8 = dStack_470 + dStack_468 + dStack_460 + dVar2;
    if ((dStack_3f8 < DOUBLE_006542e2) && (DOUBLE_006542ea <= dStack_3f8)) {
      dStack_3f8 = 0.0;
    }
    if ((dStack_3f0 < DOUBLE_006542e2) && (DOUBLE_006542ea < dStack_3f0)) {
      dStack_3f0 = 0.0;
    }
    if ((dStack_3e8 < DOUBLE_006542e2) && (DOUBLE_006542ea <= dStack_3e8)) {
      dStack_3e8 = 0.0;
    }
    if ((((dStack_3f8 < 0.0) || (dStack_3f0 < 0.0)) || (dStack_3e8 < 0.0)) &&
       (((0.0 < dStack_3f8 || (0.0 < dStack_3f0)) || (0.0 < dStack_3e8)))) {
      if (((((ulonglong)dStack_3f8 & 0x7fffffff00000000) != 0) || (dStack_3f8._0_4_ != 0)) &&
         (((((ulonglong)dStack_3f0 & 0x7fffffff00000000) != 0 || (dStack_3f0._0_4_ != 0)) &&
          ((((ulonglong)dStack_3e8 & 0x7fffffff00000000) != 0 || (dStack_3e8._0_4_ != 0)))))) {
        iStack_ac = 3;
        iStack_b0 = 4;
        if (((0.0 <= dStack_3f0) && (0.0 <= dStack_3e8)) ||
           ((dStack_3f0 < 0.0 && (dStack_3e8 < 0.0)))) {
          aiStack_d4[3] = 1;
          iStack_58 = 2;
          iStack_50 = 0;
        }
        else if (((0.0 <= dStack_3f8) && (0.0 <= dStack_3e8)) ||
                ((dStack_3f8 < 0.0 && (dStack_3e8 < 0.0)))) {
          aiStack_d4[3] = 2;
          iStack_58 = 0;
          iStack_50 = 1;
        }
        else {
          aiStack_d4[3] = 0;
          iStack_58 = 1;
          iStack_50 = 2;
        }
        iVar3 = aiStack_d4[3];
        dVar2 = (&dStack_3f8)[aiStack_d4[3]] /
                ((&dStack_3f8)[aiStack_d4[3]] - (&dStack_3f8)[iStack_50]);
        iStack_a4 = iStack_50 * 8;
        pdStack_98 = (double *)(&uStack_5e0 + iStack_50 * 3);
        pdVar9 = (double *)(&uStack_5e0 + aiStack_d4[3] * 3);
        dStack_2a8 = *pdVar9 - (double)(&uStack_5e0)[iStack_50 * 3];
        dStack_2a0 = (double)(&uStack_5d8)[aiStack_d4[3] * 3] - (double)(&uStack_5d8)[iStack_50 * 3]
        ;
        dStack_298 = (double)(&uStack_5d0)[aiStack_d4[3] * 3] - (double)(&uStack_5d0)[iStack_50 * 3]
        ;
        pdVar11 = &dStack_2a8;
        pdVar13 = &dStack_488;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pdVar13 = *(undefined4 *)pdVar11;
          pdVar11 = (double *)((int)pdVar11 + (uint)bVar14 * -8 + 4);
          pdVar13 = (double *)((int)pdVar13 + (uint)bVar14 * -8 + 4);
        }
        dStack_338 = dStack_488 * dVar2;
        dStack_330 = dStack_480 * dVar2;
        dStack_328 = dStack_478 * dVar2;
        pdVar11 = &dStack_338;
        pdVar13 = &dStack_4a0;
        for (iVar8 = 6; iVar6 = iStack_ac, iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pdVar13 = *(undefined4 *)pdVar11;
          pdVar11 = (double *)((int)pdVar11 + (uint)bVar14 * -8 + 4);
          pdVar13 = (double *)((int)pdVar13 + (uint)bVar14 * -8 + 4);
        }
        pdStack_a0 = pdVar9;
        dStack_518 = *pdVar9 - dStack_4a0;
        dStack_510 = (double)(&uStack_5d8)[iVar3 * 3] - dStack_498;
        dStack_508 = (double)(&uStack_5d0)[iVar3 * 3] - dStack_490;
        iVar3 = iStack_ac * 0x18;
        pdVar11 = &dStack_518;
        puVar10 = &uStack_350;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar10 = *(undefined4 *)pdVar11;
          pdVar11 = (double *)((int)pdVar11 + (uint)bVar14 * -8 + 4);
          puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
        }
        pdVar9 = (double *)(&uStack_5e0 + iVar6 * 3);
        *(undefined4 *)pdVar9 = uStack_350;
        *(undefined4 *)((int)&uStack_5e0 + iVar3 + 4) = uStack_34c;
        *(undefined4 *)(&uStack_5d8 + iVar6 * 3) = uStack_348;
        *(undefined4 *)((int)&uStack_5d8 + iVar3 + 4) = uStack_344;
        *(undefined4 *)(&uStack_5d0 + iVar6 * 3) = uStack_340;
        *(undefined4 *)((int)&uStack_5d0 + iVar3 + 4) = uStack_33c;
        pdStack_24 = (double *)(&uStack_568 + iStack_50 * 2);
        pdVar11 = (double *)(&uStack_568 + aiStack_d4[3] * 2);
        uStack_188 = *pdVar11 - (double)(&uStack_568)[iStack_50 * 2];
        dStack_180 = (double)(&uStack_560)[aiStack_d4[3] * 2] - (double)(&uStack_560)[iStack_50 * 2]
        ;
        uStack_1b8 = (undefined4)uStack_188;
        (&uStack_1b4)[(uint)bVar14 * -2] = *(undefined4 *)((int)&uStack_188 + (uint)bVar14 * -8 + 4)
        ;
        *(undefined4 *)(&dStack_1b0 + (-(uint)bVar14 - (uint)bVar14)) =
             *(undefined4 *)(&dStack_180 + (-(uint)bVar14 - (uint)bVar14));
        *(undefined4 *)
         ((int)(&dStack_1b0 + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4) =
             *(undefined4 *)
              ((int)(&dStack_180 + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4);
        uStack_118 = (double)CONCAT44(uStack_1b4,uStack_1b8) * dVar2;
        pdStack_20 = pdVar11;
        dStack_110 = dStack_1b0 * dVar2;
        uStack_1c8 = (undefined4)uStack_118;
        (&uStack_1c4)[(uint)bVar14 * -2] = *(undefined4 *)((int)&uStack_118 + (uint)bVar14 * -8 + 4)
        ;
        *(undefined4 *)(&dStack_1c0 + (-(uint)bVar14 - (uint)bVar14)) =
             *(undefined4 *)(&dStack_110 + (-(uint)bVar14 - (uint)bVar14));
        *(undefined4 *)
         ((int)(&dStack_1c0 + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4) =
             *(undefined4 *)
              ((int)(&dStack_110 + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4);
        uStack_148 = *pdVar11 - (double)CONCAT44(uStack_1c4,uStack_1c8);
        dStack_140 = (double)(&uStack_560)[aiStack_d4[3] * 2] - dStack_1c0;
        pdStack_b4 = (double *)(&uStack_568 + iStack_ac * 2);
        auStack_134[3] = (undefined4)uStack_148;
        auStack_134[(uint)bVar14 * -2 + 4] =
             *(undefined4 *)((int)&uStack_148 + (uint)bVar14 * -8 + 4);
        pdVar11 = pdStack_b4;
        auStack_134[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 5] =
             *(undefined4 *)(&dStack_140 + (-(uint)bVar14 - (uint)bVar14));
        (auStack_134 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 5)[(uint)bVar14 * -2 + 1] =
             *(undefined4 *)
              ((int)(&dStack_140 + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4);
        *(undefined4 *)pdStack_b4 = auStack_134[3];
        *(undefined4 *)((int)pdVar11 + 4) = uStack_124;
        *(undefined4 *)(pdVar11 + 1) = uStack_120;
        *(undefined4 *)((int)pdVar11 + 0xc) = uStack_11c;
        dVar2 = (&dStack_3f8)[iStack_58] /
                ((&dStack_3f8)[iStack_58] - *(double *)((int)&dStack_3f8 + iStack_a4));
        pdStack_94 = (double *)(&uStack_5e0 + iStack_58 * 3);
        dStack_500 = (double)(&uStack_5e0)[iStack_58 * 3] - *pdStack_98;
        dStack_4f8 = (double)(&uStack_5d8)[iStack_58 * 3] - pdStack_98[1];
        dStack_4f0 = (double)(&uStack_5d0)[iStack_58 * 3] - pdStack_98[2];
        pdVar11 = &dStack_500;
        pdVar13 = &dStack_368;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pdVar13 = *(undefined4 *)pdVar11;
          pdVar11 = (double *)((int)pdVar11 + (uint)bVar14 * -8 + 4);
          pdVar13 = (double *)((int)pdVar13 + (uint)bVar14 * -8 + 4);
        }
        dStack_308 = dStack_368 * dVar2;
        dStack_300 = dStack_360 * dVar2;
        dStack_2f8 = dStack_358 * dVar2;
        pdVar11 = &dStack_308;
        pdVar13 = &dStack_200;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pdVar13 = *(undefined4 *)pdVar11;
          pdVar11 = (double *)((int)pdVar11 + (uint)bVar14 * -8 + 4);
          pdVar13 = (double *)((int)pdVar13 + (uint)bVar14 * -8 + 4);
        }
        dStack_380 = *pdStack_94 - dStack_200;
        dStack_378 = pdStack_94[1] - dStack_1f8;
        dStack_370 = pdStack_94[2] - dStack_1f0;
        pdVar11 = &dStack_380;
        puVar10 = &uStack_440;
        for (iVar8 = 6; iVar4 = iStack_b0, iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar10 = *(undefined4 *)pdVar11;
          pdVar11 = (double *)((int)pdVar11 + (uint)bVar14 * -8 + 4);
          puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
        }
        iVar8 = iStack_b0 * 0x18;
        pdVar13 = (double *)(&uStack_5e0 + iStack_b0 * 3);
        *(undefined4 *)pdVar13 = uStack_440;
        *(undefined4 *)((int)&uStack_5e0 + iVar8 + 4) = uStack_43c;
        *(undefined4 *)(&uStack_5d8 + iVar4 * 3) = uStack_438;
        *(undefined4 *)((int)&uStack_5d8 + iVar8 + 4) = uStack_434;
        *(undefined4 *)(&uStack_5d0 + iVar4 * 3) = uStack_430;
        *(undefined4 *)((int)&uStack_5d0 + iVar8 + 4) = uStack_42c;
        pdStack_b8 = (double *)(&uStack_568 + iStack_58 * 2);
        uStack_168 = (double)(&uStack_568)[iStack_58 * 2] - *pdStack_24;
        dStack_160 = (double)(&uStack_560)[iStack_58 * 2] - pdStack_24[1];
        uStack_178 = (undefined4)uStack_168;
        (&uStack_174)[(uint)bVar14 * -2] = *(undefined4 *)((int)&uStack_168 + (uint)bVar14 * -8 + 4)
        ;
        pdVar11 = pdStack_b8;
        *(undefined4 *)(&dStack_170 + (-(uint)bVar14 - (uint)bVar14)) =
             *(undefined4 *)(&dStack_160 + (-(uint)bVar14 - (uint)bVar14));
        *(undefined4 *)
         ((int)(&dStack_170 + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4) =
             *(undefined4 *)
              ((int)(&dStack_160 + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4);
        uStack_158 = (double)CONCAT44(uStack_174,uStack_178) * dVar2;
        dStack_150 = dStack_170 * dVar2;
        uStack_1a8 = (undefined4)uStack_158;
        (&uStack_1a4)[(uint)bVar14 * -2] = *(undefined4 *)((int)&uStack_158 + (uint)bVar14 * -8 + 4)
        ;
        *(undefined4 *)(&dStack_1a0 + (-(uint)bVar14 - (uint)bVar14)) =
             *(undefined4 *)(&dStack_150 + (-(uint)bVar14 - (uint)bVar14));
        *(undefined4 *)
         ((int)(&dStack_1a0 + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4) =
             *(undefined4 *)
              ((int)(&dStack_150 + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4);
        uStack_1e8 = *pdVar11 - (double)CONCAT44(uStack_1a4,uStack_1a8);
        dStack_1e0 = pdVar11[1] - dStack_1a0;
        uStack_d8 = (undefined4)uStack_1e8;
        aiStack_d4[(uint)bVar14 * -2] = *(int *)((int)&uStack_1e8 + (uint)bVar14 * -8 + 4);
        aiStack_d4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             *(int *)(&dStack_1e0 + (-(uint)bVar14 - (uint)bVar14));
        (aiStack_d4 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
             *(int *)((int)(&dStack_1e0 + (-(uint)bVar14 - (uint)bVar14)) +
                     ((uint)bVar14 * -2 + 1) * 4);
        iVar5 = iStack_b0 * 0x10;
        pdVar11 = (double *)(&uStack_568 + iStack_b0 * 2);
        *(undefined4 *)pdVar11 = uStack_d8;
        *(int *)((int)&uStack_568 + iVar5 + 4) = aiStack_d4[0];
        *(int *)(&uStack_560 + iStack_b0 * 2) = aiStack_d4[1];
        *(int *)((int)&uStack_560 + iVar5 + 4) = aiStack_d4[2];
        pdStack_78 = (double *)(in_stack_0000000c + 0x4a);
        pdStack_44 = (double *)(in_stack_0000000c + 0x36);
        pdStack_80 = (double *)(in_stack_0000000c + 0x46);
        pdStack_40 = (double *)(in_stack_0000000c + 0x30);
        pdStack_8c = (double *)(in_stack_0000000c + 0x42);
        pdStack_60 = (double *)(in_stack_0000000c + 0x21);
        pdStack_48 = (double *)(in_stack_0000000c + 0xd);
        pdStack_5c = (double *)(in_stack_0000000c + 0x1d);
        pdStack_30 = (double *)(in_stack_0000000c + 7);
        pdStack_64 = (double *)(in_stack_0000000c + 0x19);
        pdStack_c0 = (double *)(in_stack_0000000c + 1);
        if (0.0 < *(double *)((int)&dStack_3f8 + iStack_a4)) {
          *in_stack_0000000c = 3;
          *pdStack_c0 = *pdStack_98;
          *(double *)(in_stack_0000000c + 3) = pdStack_98[1];
          *(double *)(in_stack_0000000c + 5) = pdStack_98[2];
          *pdStack_64 = *pdStack_24;
          *(double *)(in_stack_0000000c + 0x1b) = pdStack_24[1];
          *pdStack_30 = *pdVar9;
          *(undefined8 *)(in_stack_0000000c + 9) = (&uStack_5d8)[iVar6 * 3];
          *(undefined8 *)(in_stack_0000000c + 0xb) = (&uStack_5d0)[iVar6 * 3];
          *pdStack_5c = *pdStack_b4;
          *(double *)(in_stack_0000000c + 0x1f) = pdStack_b4[1];
          *pdStack_48 = *pdVar13;
          *(undefined8 *)(in_stack_0000000c + 0xf) = (&uStack_5d8)[iVar4 * 3];
          *(undefined8 *)(in_stack_0000000c + 0x11) = (&uStack_5d0)[iVar4 * 3];
          *pdStack_60 = *pdVar11;
          *(undefined8 *)(in_stack_0000000c + 0x23) = (&uStack_560)[iStack_b0 * 2];
          in_stack_0000000c[0x29] = 4;
          *(double *)(in_stack_0000000c + 0x2a) = *pdVar9;
          *(undefined8 *)(in_stack_0000000c + 0x2c) = (&uStack_5d8)[iVar6 * 3];
          *(undefined8 *)(in_stack_0000000c + 0x2e) = (&uStack_5d0)[iVar6 * 3];
          *pdStack_8c = *pdStack_b4;
          *(double *)(in_stack_0000000c + 0x44) = pdStack_b4[1];
          *pdStack_40 = *pdStack_a0;
          *(double *)(in_stack_0000000c + 0x32) = pdStack_a0[1];
          *(double *)(in_stack_0000000c + 0x34) = pdStack_a0[2];
          *pdStack_80 = *pdStack_20;
          *(double *)(in_stack_0000000c + 0x48) = pdStack_20[1];
          *pdStack_44 = *pdStack_94;
          *(double *)(in_stack_0000000c + 0x38) = pdStack_94[1];
          *(double *)(in_stack_0000000c + 0x3a) = pdStack_94[2];
          *pdStack_78 = *pdStack_b8;
          *(double *)(in_stack_0000000c + 0x4c) = pdStack_b8[1];
          in_stack_0000000c[0x3c] = *(undefined4 *)pdVar13;
          in_stack_0000000c[0x3d] = *(undefined4 *)((int)&uStack_5e0 + iVar8 + 4);
          in_stack_0000000c[0x3e] = *(undefined4 *)(&uStack_5d8 + iVar4 * 3);
          in_stack_0000000c[0x3f] = *(undefined4 *)((int)&uStack_5d8 + iVar8 + 4);
          in_stack_0000000c[0x40] = *(undefined4 *)(&uStack_5d0 + iVar4 * 3);
          in_stack_0000000c[0x41] = *(undefined4 *)((int)&uStack_5d0 + iVar8 + 4);
          in_stack_0000000c[0x4e] = *(undefined4 *)pdVar11;
          in_stack_0000000c[0x4f] = *(undefined4 *)((int)&uStack_568 + iVar5 + 4);
          in_stack_0000000c[0x50] = *(undefined4 *)(&uStack_560 + iStack_b0 * 2);
          in_stack_0000000c[0x51] = *(undefined4 *)((int)&uStack_560 + iVar5 + 4);
          return 1;
        }
        *in_stack_0000000c = 4;
        *pdStack_c0 = *pdVar9;
        *(undefined8 *)(in_stack_0000000c + 3) = (&uStack_5d8)[iVar6 * 3];
        *(undefined8 *)(in_stack_0000000c + 5) = (&uStack_5d0)[iVar6 * 3];
        *pdStack_64 = *pdStack_b4;
        *(double *)(in_stack_0000000c + 0x1b) = pdStack_b4[1];
        *pdStack_30 = *pdStack_a0;
        *(double *)(in_stack_0000000c + 9) = pdStack_a0[1];
        *(double *)(in_stack_0000000c + 0xb) = pdStack_a0[2];
        *pdStack_5c = *pdStack_20;
        *(double *)(in_stack_0000000c + 0x1f) = pdStack_20[1];
        *pdStack_48 = *pdStack_94;
        *(double *)(in_stack_0000000c + 0xf) = pdStack_94[1];
        *(double *)(in_stack_0000000c + 0x11) = pdStack_94[2];
        *pdStack_60 = *pdStack_b8;
        *(double *)(in_stack_0000000c + 0x23) = pdStack_b8[1];
        *(double *)(in_stack_0000000c + 0x13) = *pdVar13;
        *(undefined8 *)(in_stack_0000000c + 0x15) = (&uStack_5d8)[iVar4 * 3];
        *(undefined8 *)(in_stack_0000000c + 0x17) = (&uStack_5d0)[iVar4 * 3];
        *(double *)(in_stack_0000000c + 0x25) = *pdVar11;
        *(undefined8 *)(in_stack_0000000c + 0x27) = (&uStack_560)[iStack_b0 * 2];
        in_stack_0000000c[0x29] = 3;
        in_stack_0000000c[0x2a] = *(undefined4 *)pdStack_98;
        in_stack_0000000c[0x2b] = *(undefined4 *)((int)pdStack_98 + 4);
        in_stack_0000000c[0x2c] = *(undefined4 *)(pdStack_98 + 1);
        in_stack_0000000c[0x2d] = *(undefined4 *)((int)pdStack_98 + 0xc);
        *(double *)(in_stack_0000000c + 0x2e) = pdStack_98[2];
        *pdStack_8c = *pdStack_24;
        *(double *)(in_stack_0000000c + 0x44) = pdStack_24[1];
        *(undefined4 *)pdStack_40 = *(undefined4 *)pdVar9;
        in_stack_0000000c[0x31] = *(undefined4 *)((int)&uStack_5e0 + iVar3 + 4);
        in_stack_0000000c[0x32] = *(undefined4 *)(&uStack_5d8 + iVar6 * 3);
        in_stack_0000000c[0x33] = *(undefined4 *)((int)&uStack_5d8 + iVar3 + 4);
        in_stack_0000000c[0x34] = *(undefined4 *)(&uStack_5d0 + iVar6 * 3);
        in_stack_0000000c[0x35] = *(undefined4 *)((int)&uStack_5d0 + iVar3 + 4);
        *pdStack_80 = *pdStack_b4;
        *(double *)(in_stack_0000000c + 0x48) = pdStack_b4[1];
        *(undefined4 *)pdStack_44 = *(undefined4 *)pdVar13;
        in_stack_0000000c[0x37] = *(undefined4 *)((int)&uStack_5e0 + iVar8 + 4);
        in_stack_0000000c[0x38] = *(undefined4 *)(&uStack_5d8 + iVar4 * 3);
        in_stack_0000000c[0x39] = *(undefined4 *)((int)&uStack_5d8 + iVar8 + 4);
        in_stack_0000000c[0x3a] = *(undefined4 *)(&uStack_5d0 + iVar4 * 3);
        in_stack_0000000c[0x3b] = *(undefined4 *)((int)&uStack_5d0 + iVar8 + 4);
        *(undefined4 *)pdStack_78 = *(undefined4 *)pdVar11;
        in_stack_0000000c[0x4b] = *(undefined4 *)((int)&uStack_568 + iVar5 + 4);
        in_stack_0000000c[0x4c] = *(undefined4 *)(&uStack_560 + iStack_b0 * 2);
        in_stack_0000000c[0x4d] = *(undefined4 *)((int)&uStack_560 + iVar5 + 4);
        return 1;
      }
      iStack_a8 = 3;
      if ((((ulonglong)dStack_3f8 & 0x7fffffff00000000) == 0) && (dStack_3f8._0_4_ == 0)) {
        iStack_4c = 1;
        iStack_54 = 2;
        iStack_6c = 0;
      }
      else if ((((ulonglong)dStack_3f0 & 0x7fffffff00000000) == 0) && (dStack_3f0._0_4_ == 0)) {
        iStack_4c = 2;
        iStack_54 = 0;
        iStack_6c = 1;
      }
      else {
        iStack_4c = 0;
        iStack_54 = 1;
        iStack_6c = 2;
      }
      iStack_90 = iStack_4c * 8;
      dVar2 = (&dStack_3f8)[iStack_4c] / ((&dStack_3f8)[iStack_4c] - (&dStack_3f8)[iStack_54]);
      pdStack_18 = (double *)(&uStack_5e0 + iStack_54 * 3);
      pdStack_9c = (double *)(&uStack_5e0 + iStack_4c * 3);
      dStack_230 = (double)(&uStack_5e0)[iStack_4c * 3] - (double)(&uStack_5e0)[iStack_54 * 3];
      dStack_228 = (double)(&uStack_5d8)[iStack_4c * 3] - (double)(&uStack_5d8)[iStack_54 * 3];
      dStack_220 = (double)(&uStack_5d0)[iStack_4c * 3] - (double)(&uStack_5d0)[iStack_54 * 3];
      pdVar11 = &dStack_230;
      pdVar13 = &dStack_4b8;
      for (iVar3 = 6; pdVar9 = pdStack_9c, iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pdVar13 = *(undefined4 *)pdVar11;
        pdVar11 = (double *)((int)pdVar11 + (uint)bVar14 * -8 + 4);
        pdVar13 = (double *)((int)pdVar13 + (uint)bVar14 * -8 + 4);
      }
      dStack_290 = dStack_4b8 * dVar2;
      dStack_288 = dStack_4b0 * dVar2;
      dStack_280 = dStack_4a8 * dVar2;
      pdVar11 = &dStack_290;
      pdVar13 = &dStack_260;
      for (iVar3 = 6; iVar8 = iStack_a8, iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pdVar13 = *(undefined4 *)pdVar11;
        pdVar11 = (double *)((int)pdVar11 + (uint)bVar14 * -8 + 4);
        pdVar13 = (double *)((int)pdVar13 + (uint)bVar14 * -8 + 4);
      }
      dStack_428 = *pdVar9 - dStack_260;
      dStack_420 = pdVar9[1] - dStack_258;
      dStack_418 = pdVar9[2] - dStack_250;
      iVar3 = iStack_a8 * 0x18;
      pdVar11 = &dStack_428;
      puVar10 = &uStack_3e0;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *(undefined4 *)pdVar11;
        pdVar11 = (double *)((int)pdVar11 + (uint)bVar14 * -8 + 4);
        puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
      }
      pdVar13 = (double *)(&uStack_5e0 + iVar8 * 3);
      *(undefined4 *)pdVar13 = uStack_3e0;
      *(undefined4 *)((int)&uStack_5e0 + iVar3 + 4) = uStack_3dc;
      *(undefined4 *)(&uStack_5d8 + iVar8 * 3) = uStack_3d8;
      *(undefined4 *)((int)&uStack_5d8 + iVar3 + 4) = uStack_3d4;
      *(undefined4 *)(&uStack_5d0 + iVar8 * 3) = uStack_3d0;
      *(undefined4 *)((int)&uStack_5d0 + iVar3 + 4) = uStack_3cc;
      pdStack_34 = (double *)(&uStack_568 + iStack_54 * 2);
      pdStack_1c = (double *)(&uStack_568 + iStack_4c * 2);
      uStack_1d8 = (double)(&uStack_568)[iStack_4c * 2] - (double)(&uStack_568)[iStack_54 * 2];
      dStack_1d0 = (double)(&uStack_560)[iStack_4c * 2] - (double)(&uStack_560)[iStack_54 * 2];
      uStack_108 = (undefined4)uStack_1d8;
      (&uStack_104)[(uint)bVar14 * -2] = *(undefined4 *)((int)&uStack_1d8 + (uint)bVar14 * -8 + 4);
      pdVar11 = pdStack_1c;
      *(undefined4 *)(&dStack_100 + (-(uint)bVar14 - (uint)bVar14)) =
           *(undefined4 *)(&dStack_1d0 + (-(uint)bVar14 - (uint)bVar14));
      *(undefined4 *)
       ((int)(&dStack_100 + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4) =
           *(undefined4 *)
            ((int)(&dStack_1d0 + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4);
      uStack_e8 = (double)CONCAT44(uStack_104,uStack_108) * dVar2;
      dStack_e0 = dStack_100 * dVar2;
      uStack_198 = (undefined4)uStack_e8;
      (&uStack_194)[(uint)bVar14 * -2] = *(undefined4 *)((int)&uStack_e8 + (uint)bVar14 * -8 + 4);
      *(undefined4 *)(&dStack_190 + (-(uint)bVar14 - (uint)bVar14)) =
           *(undefined4 *)(&dStack_e0 + (-(uint)bVar14 - (uint)bVar14));
      *(undefined4 *)
       ((int)(&dStack_190 + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4) =
           *(undefined4 *)
            ((int)(&dStack_e0 + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4);
      uStack_f8 = *pdVar11 - (double)CONCAT44(uStack_194,uStack_198);
      dStack_f0 = pdVar11[1] - dStack_190;
      uStack_138 = (undefined4)uStack_f8;
      auStack_134[(uint)bVar14 * -2] = *(undefined4 *)((int)&uStack_f8 + (uint)bVar14 * -8 + 4);
      auStack_134[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           *(undefined4 *)(&dStack_f0 + (-(uint)bVar14 - (uint)bVar14));
      (auStack_134 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
           *(undefined4 *)
            ((int)(&dStack_f0 + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4);
      iVar4 = iStack_a8 * 0x10;
      pdVar11 = (double *)(&uStack_568 + iStack_a8 * 2);
      *(undefined4 *)pdVar11 = uStack_138;
      *(undefined4 *)((int)&uStack_568 + iVar4 + 4) = auStack_134[0];
      *(undefined4 *)(&uStack_560 + iStack_a8 * 2) = auStack_134[1];
      *(undefined4 *)((int)&uStack_560 + iVar4 + 4) = auStack_134[2];
      pdStack_7c = (double *)(in_stack_0000000c + 0x4a);
      pdStack_2c = (double *)(in_stack_0000000c + 0x36);
      pdStack_68 = (double *)(in_stack_0000000c + 0x46);
      pdStack_bc = (double *)(in_stack_0000000c + 0x30);
      puStack_88 = (undefined8 *)(in_stack_0000000c + 0x42);
      puStack_28 = (undefined8 *)(in_stack_0000000c + 0x2a);
      pdStack_84 = (double *)(in_stack_0000000c + 0x21);
      pdStack_38 = (double *)(in_stack_0000000c + 0xd);
      pdStack_74 = (double *)(in_stack_0000000c + 0x1d);
      pdStack_3c = (double *)(in_stack_0000000c + 7);
      puStack_70 = (undefined8 *)(in_stack_0000000c + 0x19);
      puStack_c4 = (undefined8 *)(in_stack_0000000c + 1);
      iVar6 = iStack_6c * 0x18;
      iVar5 = iStack_6c * 0x10;
      puVar12 = &uStack_568 + iStack_6c * 2;
      puVar7 = &uStack_5e0 + iStack_6c * 3;
      if (0.0 < *(double *)((int)&dStack_3f8 + iStack_90)) {
        *in_stack_0000000c = 3;
        *puStack_c4 = *puVar7;
        *(undefined8 *)(in_stack_0000000c + 3) = (&uStack_5d8)[iStack_6c * 3];
        *(undefined8 *)(in_stack_0000000c + 5) = (&uStack_5d0)[iStack_6c * 3];
        *puStack_70 = *puVar12;
        *(undefined8 *)(in_stack_0000000c + 0x1b) = (&uStack_560)[iStack_6c * 2];
        *pdStack_3c = *pdStack_9c;
        *(double *)(in_stack_0000000c + 9) = pdStack_9c[1];
        *(double *)(in_stack_0000000c + 0xb) = pdStack_9c[2];
        *pdStack_74 = *pdStack_1c;
        *(double *)(in_stack_0000000c + 0x1f) = pdStack_1c[1];
        *pdStack_38 = *pdVar13;
        *(undefined8 *)(in_stack_0000000c + 0xf) = (&uStack_5d8)[iVar8 * 3];
        *(undefined8 *)(in_stack_0000000c + 0x11) = (&uStack_5d0)[iVar8 * 3];
        *pdStack_84 = *pdVar11;
        *(undefined8 *)(in_stack_0000000c + 0x23) = (&uStack_560)[iStack_a8 * 2];
        in_stack_0000000c[0x29] = 3;
        *(undefined4 *)puStack_28 = *(undefined4 *)puVar7;
        in_stack_0000000c[0x2b] = *(undefined4 *)((int)&uStack_5e0 + iVar6 + 4);
        in_stack_0000000c[0x2c] = *(undefined4 *)(&uStack_5d8 + iStack_6c * 3);
        in_stack_0000000c[0x2d] = *(undefined4 *)((int)&uStack_5d8 + iVar6 + 4);
        in_stack_0000000c[0x2e] = *(undefined4 *)(&uStack_5d0 + iStack_6c * 3);
        in_stack_0000000c[0x2f] = *(undefined4 *)((int)&uStack_5d0 + iVar6 + 4);
        *(undefined4 *)puStack_88 = *(undefined4 *)puVar12;
        in_stack_0000000c[0x43] = *(undefined4 *)((int)&uStack_568 + iVar5 + 4);
        in_stack_0000000c[0x44] = *(undefined4 *)(&uStack_560 + iStack_6c * 2);
        in_stack_0000000c[0x45] = *(undefined4 *)((int)&uStack_560 + iVar5 + 4);
        *(undefined4 *)pdStack_bc = *(undefined4 *)pdVar13;
        in_stack_0000000c[0x31] = *(undefined4 *)((int)&uStack_5e0 + iVar3 + 4);
        in_stack_0000000c[0x32] = *(undefined4 *)(&uStack_5d8 + iVar8 * 3);
        in_stack_0000000c[0x33] = *(undefined4 *)((int)&uStack_5d8 + iVar3 + 4);
        in_stack_0000000c[0x34] = *(undefined4 *)(&uStack_5d0 + iVar8 * 3);
        in_stack_0000000c[0x35] = *(undefined4 *)((int)&uStack_5d0 + iVar3 + 4);
        *(undefined4 *)pdStack_68 = *(undefined4 *)pdVar11;
        in_stack_0000000c[0x47] = *(undefined4 *)((int)&uStack_568 + iVar4 + 4);
        in_stack_0000000c[0x48] = *(undefined4 *)(&uStack_560 + iStack_a8 * 2);
        in_stack_0000000c[0x49] = *(undefined4 *)((int)&uStack_560 + iVar4 + 4);
        *pdStack_2c = *pdStack_18;
        *(double *)(in_stack_0000000c + 0x38) = pdStack_18[1];
        *(double *)(in_stack_0000000c + 0x3a) = pdStack_18[2];
        *pdStack_7c = *pdStack_34;
        *(double *)(in_stack_0000000c + 0x4c) = pdStack_34[1];
        return 1;
      }
      in_stack_0000000c[0x29] = 3;
      *puStack_28 = *puVar7;
      *(undefined8 *)(in_stack_0000000c + 0x2c) = (&uStack_5d8)[iStack_6c * 3];
      *(undefined8 *)(in_stack_0000000c + 0x2e) = (&uStack_5d0)[iStack_6c * 3];
      *puStack_88 = *puVar12;
      *(undefined8 *)(in_stack_0000000c + 0x44) = (&uStack_560)[iStack_6c * 2];
      *pdStack_bc = *pdStack_9c;
      *(double *)(in_stack_0000000c + 0x32) = pdStack_9c[1];
      *(double *)(in_stack_0000000c + 0x34) = pdStack_9c[2];
      *pdStack_68 = *pdStack_1c;
      *(double *)(in_stack_0000000c + 0x48) = pdStack_1c[1];
      *pdStack_2c = *pdVar13;
      *(undefined8 *)(in_stack_0000000c + 0x38) = (&uStack_5d8)[iVar8 * 3];
      *(undefined8 *)(in_stack_0000000c + 0x3a) = (&uStack_5d0)[iVar8 * 3];
      *pdStack_7c = *pdVar11;
      *(undefined8 *)(in_stack_0000000c + 0x4c) = (&uStack_560)[iStack_a8 * 2];
      *in_stack_0000000c = 3;
      *(undefined4 *)puStack_c4 = *(undefined4 *)puVar7;
      in_stack_0000000c[2] = *(undefined4 *)((int)&uStack_5e0 + iVar6 + 4);
      in_stack_0000000c[3] = *(undefined4 *)(&uStack_5d8 + iStack_6c * 3);
      in_stack_0000000c[4] = *(undefined4 *)((int)&uStack_5d8 + iVar6 + 4);
      in_stack_0000000c[5] = *(undefined4 *)(&uStack_5d0 + iStack_6c * 3);
      in_stack_0000000c[6] = *(undefined4 *)((int)&uStack_5d0 + iVar6 + 4);
      *(undefined4 *)puStack_70 = *(undefined4 *)puVar12;
      in_stack_0000000c[0x1a] = *(undefined4 *)((int)&uStack_568 + iVar5 + 4);
      in_stack_0000000c[0x1b] = *(undefined4 *)(&uStack_560 + iStack_6c * 2);
      in_stack_0000000c[0x1c] = *(undefined4 *)((int)&uStack_560 + iVar5 + 4);
      *(undefined4 *)pdStack_3c = *(undefined4 *)pdVar13;
      in_stack_0000000c[8] = *(undefined4 *)((int)&uStack_5e0 + iVar3 + 4);
      in_stack_0000000c[9] = *(undefined4 *)(&uStack_5d8 + iVar8 * 3);
      in_stack_0000000c[10] = *(undefined4 *)((int)&uStack_5d8 + iVar3 + 4);
      in_stack_0000000c[0xb] = *(undefined4 *)(&uStack_5d0 + iVar8 * 3);
      in_stack_0000000c[0xc] = *(undefined4 *)((int)&uStack_5d0 + iVar3 + 4);
      *(undefined4 *)pdStack_74 = *(undefined4 *)pdVar11;
      in_stack_0000000c[0x1e] = *(undefined4 *)((int)&uStack_568 + iVar4 + 4);
      in_stack_0000000c[0x1f] = *(undefined4 *)(&uStack_560 + iStack_a8 * 2);
      in_stack_0000000c[0x20] = *(undefined4 *)((int)&uStack_560 + iVar4 + 4);
      *pdStack_38 = *pdStack_18;
      *(double *)(in_stack_0000000c + 0xf) = pdStack_18[1];
      *(double *)(in_stack_0000000c + 0x11) = pdStack_18[2];
      *pdStack_84 = *pdStack_34;
      *(double *)(in_stack_0000000c + 0x23) = pdStack_34[1];
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 005ce580: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_FUN_005ce580
// 005ce581: PUSH ESI
// 005ce582: PUSH EDI
// 005ce583: PUSH EBP
// 005ce584: MOV EBP,ESP
// 005ce586: SUB ESP,0x5ec
// 005ce58c: AND ESP,0xfffffff8
// 005ce58f: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ce592: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005ce595: LEA EAX,[ESP + 0x1a8]
//   XREF to: Stack[-0x458] (DATA)
// 005ce59c: PUSH EAX
// 005ce59d: LEA EAX,[ESP + 0x23c]
//   XREF to: Stack[-0x3c8] (DATA)
// 005ce5a4: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ce5a7: PUSH EAX
// 005ce5a8: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ce5ab: MOV EDX,dword ptr [EDX + 0x64]
// 005ce5ae: PUSH ECX
// 005ce5af: CALL dword ptr [EDX + 0x58]
// 005ce5b2: ADD ESP,0xc
// 005ce5b5: LEA EAX,[ESP + 0x310]
// 005ce5bc: PUSH EAX
// 005ce5bd: LEA EAX,[ESP + 0x134]
// 005ce5c4: PUSH EAX
// 005ce5c5: MOV EDX,dword ptr [ESI + 0x64]
// 005ce5c8: PUSH ESI
// 005ce5c9: CALL dword ptr [EDX + 0x58]
// 005ce5cc: ADD ESP,0xc
// 005ce5cf: FLD double ptr [ESP + 0x238]
// 005ce5d6: FCOMP double ptr [ESP + 0x310]
// 005ce5dd: FNSTSW AX
// 005ce5df: SAHF
// 005ce5e0: JA 0x005ce641
//   XREF to: 005ce641 (CONDITIONAL_JUMP)
// 005ce5e2: FLD double ptr [ESP + 0x130]
// 005ce5e9: FCOMP double ptr [ESP + 0x1a8]
// 005ce5f0: FNSTSW AX
// 005ce5f2: SAHF
// 005ce5f3: JA 0x005ce641
//   XREF to: 005ce641 (CONDITIONAL_JUMP)
// 005ce5f5: FLD double ptr [ESP + 0x240]
// 005ce5fc: FCOMP double ptr [ESP + 0x318]
// 005ce603: FNSTSW AX
// 005ce605: SAHF
// 005ce606: JA 0x005ce641
//   XREF to: 005ce641 (CONDITIONAL_JUMP)
// 005ce608: FLD double ptr [ESP + 0x138]
// 005ce60f: FCOMP double ptr [ESP + 0x1b0]
// 005ce616: FNSTSW AX
// 005ce618: SAHF
// 005ce619: JA 0x005ce641
//   XREF to: 005ce641 (CONDITIONAL_JUMP)
// 005ce61b: FLD double ptr [ESP + 0x248]
// 005ce622: FCOMP double ptr [ESP + 0x320]
// 005ce629: FNSTSW AX
// 005ce62b: SAHF
// 005ce62c: JA 0x005ce641
//   XREF to: 005ce641 (CONDITIONAL_JUMP)
// 005ce62e: FLD double ptr [ESP + 0x140]
// 005ce635: FCOMP double ptr [ESP + 0x1b8]
// 005ce63c: FNSTSW AX
// 005ce63e: SAHF
// 005ce63f: JBE 0x005ce64a
//   XREF to: 005ce64a (CONDITIONAL_JUMP)
// 005ce641: XOR EAX,EAX
//   Label: LAB_005ce641
// 005ce643: MOV ESP,EBP
// 005ce645: POP EBP
// 005ce646: POP EDI
// 005ce647: POP ESI
// 005ce648: POP EBX
// 005ce649: RET
// 005ce64a: LEA EAX,[ESP + 0x1f0]
//   Label: LAB_005ce64a
// 005ce651: PUSH EAX
// 005ce652: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ce655: MOV EAX,dword ptr [EAX + 0x8]
// 005ce658: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ce65b: SHL EAX,0x3
// 005ce65e: MOV ECX,dword ptr [ECX]
// 005ce660: MOV EDX,EAX
// 005ce662: SHL EAX,0x3
// 005ce665: MOV ECX,dword ptr [ECX + 0x4]
// 005ce668: SUB EAX,EDX
// 005ce66a: ADD EAX,ECX
// 005ce66c: PUSH EAX
// 005ce66d: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ce670: MOV EAX,dword ptr [EAX + 0x4]
// 005ce673: SHL EAX,0x3
// 005ce676: MOV EDX,EAX
// 005ce678: SHL EAX,0x3
// 005ce67b: SUB EAX,EDX
// 005ce67d: ADD EAX,ECX
// 005ce67f: PUSH EAX
// 005ce680: MOV EDI,dword ptr [ESI + 0x64]
// 005ce683: PUSH ESI
// 005ce684: CALL dword ptr [EDI + 0x60]
// 005ce687: ADD ESP,0x10
// 005ce68a: TEST EAX,EAX
// 005ce68c: JNZ 0x005ce6d6
//   XREF to: 005ce6d6 (CONDITIONAL_JUMP)
// 005ce68e: LEA EAX,[ESP + 0x1f0]
// 005ce695: PUSH EAX
// 005ce696: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ce699: MOV EAX,dword ptr [EAX + 0xc]
// 005ce69c: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ce69f: SHL EAX,0x3
// 005ce6a2: MOV ECX,dword ptr [ECX]
// 005ce6a4: MOV EDX,EAX
// 005ce6a6: SHL EAX,0x3
// 005ce6a9: MOV ECX,dword ptr [ECX + 0x4]
// 005ce6ac: SUB EAX,EDX
// 005ce6ae: ADD EAX,ECX
// 005ce6b0: PUSH EAX
// 005ce6b1: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ce6b4: MOV EAX,dword ptr [EAX + 0x8]
// 005ce6b7: SHL EAX,0x3
// 005ce6ba: MOV EDX,EAX
// 005ce6bc: SHL EAX,0x3
// 005ce6bf: SUB EAX,EDX
// 005ce6c1: ADD ECX,EAX
// 005ce6c3: PUSH ECX
// 005ce6c4: MOV EDI,dword ptr [ESI + 0x64]
// 005ce6c7: PUSH ESI
// 005ce6c8: CALL dword ptr [EDI + 0x60]
// 005ce6cb: ADD ESP,0x10
// 005ce6ce: TEST EAX,EAX
// 005ce6d0: JZ 0x005cf169
//   XREF to: 005cf169 (CONDITIONAL_JUMP)
// 005ce6d6: PUSH 0x148
//   Label: LAB_005ce6d6
// 005ce6db: PUSH 0x0
// 005ce6dd: PUSH EBX
// 005ce6de: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005ce6e3: ADD ESP,0xc
// 005ce6e6: PUSH 0x663cc0
//   XREF to: 00663cc0 (DATA)
// 005ce6eb: PUSH 0x5
// 005ce6ed: LEA EAX,[ESP + 0x28]
// 005ce6f1: MOV EDI,dword ptr [ESI]
// 005ce6f3: PUSH EAX
// 005ce6f4: MOV EDI,dword ptr [EDI + 0x4]
// 005ce6f7: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005ce6fc: MOV EAX,dword ptr [ESI + 0x4]
// 005ce6ff: SHL EAX,0x3
// 005ce702: MOV EDX,EAX
// 005ce704: SHL EAX,0x3
// 005ce707: SUB EAX,EDX
// 005ce709: LEA EDX,[EDI + EAX*0x1]
// 005ce70c: ADD ESP,0xc
// 005ce70f: MOV EAX,dword ptr [EDX]
// 005ce711: MOV dword ptr [ESP + 0x20],EAX
// 005ce715: MOV EAX,dword ptr [EDX + 0x4]
// 005ce718: MOV dword ptr [ESP + 0x24],EAX
// 005ce71c: MOV EAX,dword ptr [EDX + 0x8]
// 005ce71f: MOV dword ptr [ESP + 0x28],EAX
// 005ce723: MOV EAX,dword ptr [EDX + 0xc]
// 005ce726: MOV dword ptr [ESP + 0x2c],EAX
// 005ce72a: MOV EAX,dword ptr [EDX + 0x10]
// 005ce72d: MOV dword ptr [ESP + 0x30],EAX
// 005ce731: MOV EAX,dword ptr [EDX + 0x14]
// 005ce734: MOV dword ptr [ESP + 0x34],EAX
// 005ce738: MOV EAX,dword ptr [ESI + 0x8]
// 005ce73b: SHL EAX,0x3
// 005ce73e: MOV EDX,EAX
// 005ce740: SHL EAX,0x3
// 005ce743: SUB EAX,EDX
// 005ce745: LEA EDX,[EDI + EAX*0x1]
// 005ce748: MOV EAX,dword ptr [EDX]
// 005ce74a: MOV dword ptr [ESP + 0x38],EAX
// 005ce74e: MOV EAX,dword ptr [EDX + 0x4]
// 005ce751: MOV dword ptr [ESP + 0x3c],EAX
// 005ce755: MOV EAX,dword ptr [EDX + 0x8]
// 005ce758: MOV dword ptr [ESP + 0x40],EAX
// 005ce75c: MOV EAX,dword ptr [EDX + 0xc]
// 005ce75f: MOV dword ptr [ESP + 0x44],EAX
// 005ce763: MOV EAX,dword ptr [EDX + 0x10]
// 005ce766: MOV dword ptr [ESP + 0x48],EAX
// 005ce76a: MOV EAX,dword ptr [EDX + 0x14]
// 005ce76d: MOV dword ptr [ESP + 0x4c],EAX
// 005ce771: MOV EAX,dword ptr [ESI + 0xc]
// 005ce774: SHL EAX,0x3
// 005ce777: MOV EDX,EAX
// 005ce779: SHL EAX,0x3
// 005ce77c: SUB EAX,EDX
// 005ce77e: LEA EDX,[EDI + EAX*0x1]
// 005ce781: MOV EAX,dword ptr [EDX]
// 005ce783: MOV dword ptr [ESP + 0x50],EAX
// 005ce787: MOV EAX,dword ptr [EDX + 0x4]
// 005ce78a: MOV dword ptr [ESP + 0x54],EAX
// 005ce78e: MOV EAX,dword ptr [EDX + 0x8]
// 005ce791: MOV dword ptr [ESP + 0x58],EAX
// 005ce795: MOV EAX,dword ptr [EDX + 0xc]
// 005ce798: MOV dword ptr [ESP + 0x5c],EAX
// 005ce79c: MOV EAX,dword ptr [EDX + 0x10]
// 005ce79f: MOV dword ptr [ESP + 0x60],EAX
// 005ce7a3: PUSH 0x663ca0
//   XREF to: 00663ca0 (DATA)
// 005ce7a8: MOV EAX,dword ptr [EDX + 0x14]
// 005ce7ab: PUSH 0x5
// 005ce7ad: MOV dword ptr [ESP + 0x6c],EAX
// 005ce7b1: LEA EAX,[ESP + 0xa0]
// 005ce7b8: PUSH EAX
// 005ce7b9: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005ce7be: LEA EDX,[ESI + 0x10]
// 005ce7c1: ADD ESP,0xc
// 005ce7c4: MOV EAX,dword ptr [EDX]
// 005ce7c6: MOV dword ptr [ESP + 0x98],EAX
// 005ce7cd: MOV EAX,dword ptr [EDX + 0x4]
// 005ce7d0: MOV dword ptr [ESP + 0x9c],EAX
// 005ce7d7: MOV EAX,dword ptr [EDX + 0x8]
// 005ce7da: MOV dword ptr [ESP + 0xa0],EAX
// 005ce7e1: MOV EAX,dword ptr [EDX + 0xc]
// 005ce7e4: LEA EDX,[ESI + 0x20]
// 005ce7e7: MOV dword ptr [ESP + 0xa4],EAX
// 005ce7ee: MOV EAX,dword ptr [EDX]
// 005ce7f0: MOV dword ptr [ESP + 0xa8],EAX
// 005ce7f7: MOV EAX,dword ptr [EDX + 0x4]
// 005ce7fa: MOV dword ptr [ESP + 0xac],EAX
// 005ce801: MOV EAX,dword ptr [EDX + 0x8]
// 005ce804: MOV dword ptr [ESP + 0xb0],EAX
// 005ce80b: MOV EAX,dword ptr [EDX + 0xc]
// 005ce80e: MOV dword ptr [ESP + 0xb4],EAX
// 005ce815: MOV EAX,dword ptr [ESI + 0x30]
// 005ce818: MOV dword ptr [ESP + 0xb8],EAX
// 005ce81f: MOV EAX,dword ptr [ESI + 0x34]
// 005ce822: MOV dword ptr [ESP + 0xbc],EAX
// 005ce829: MOV EAX,dword ptr [ESI + 0x38]
// 005ce82c: MOV dword ptr [ESP + 0xc0],EAX
// 005ce833: MOV EAX,dword ptr [ESI + 0x3c]
// 005ce836: MOV dword ptr [ESP + 0xc4],EAX
// 005ce83d: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ce840: MOV EAX,dword ptr [EAX + 0x4]
// 005ce843: SHL EAX,0x3
// 005ce846: LEA ESI,[EAX*0x8 + 0x0]
// 005ce84d: SUB ESI,EAX
// 005ce84f: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ce852: MOV EAX,dword ptr [EAX]
// 005ce854: LEA EDI,[ESP + 0x2e0]
// 005ce85b: MOV EAX,dword ptr [EAX + 0x4]
// 005ce85e: MOV ECX,0x6
// 005ce863: ADD ESI,EAX
// 005ce865: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ce868: MOVSD.REP ES:EDI,ESI
// 005ce86a: MOV EDX,dword ptr [EAX + 0x40]
// 005ce86d: MOV dword ptr [ESP + 0x3e8],EDX
// 005ce874: MOV EDX,dword ptr [EAX + 0x44]
// 005ce877: MOV dword ptr [ESP + 0x3ec],EDX
// 005ce87e: MOV EDX,dword ptr [EAX + 0x48]
// 005ce881: MOV dword ptr [ESP + 0x3f0],EDX
// 005ce888: MOV EDX,dword ptr [EAX + 0x4c]
// 005ce88b: MOV dword ptr [ESP + 0x3f4],EDX
// 005ce892: MOV EDX,dword ptr [EAX + 0x50]
// 005ce895: MOV EAX,dword ptr [EAX + 0x54]
// 005ce898: MOV dword ptr [ESP + 0x3f8],EDX
// 005ce89f: MOV dword ptr [ESP + 0x3fc],EAX
// 005ce8a6: FLD double ptr [ESP + 0x2e0]
// 005ce8ad: FMUL double ptr [ESP + 0x3e8]
// 005ce8b4: FLD double ptr [ESP + 0x2e8]
// 005ce8bb: FMUL double ptr [ESP + 0x3f0]
// 005ce8c2: FLD double ptr [ESP + 0x2f0]
// 005ce8c9: FMUL double ptr [ESP + 0x3f8]
// 005ce8d0: FLD double ptr [ESP + 0x3e8]
// 005ce8d7: FMUL double ptr [ESP + 0x20]
// 005ce8db: FLD double ptr [ESP + 0x3f0]
// 005ce8e2: FMUL double ptr [ESP + 0x28]
// 005ce8e6: FLD double ptr [ESP + 0x3f8]
// 005ce8ed: FMUL double ptr [ESP + 0x30]
// 005ce8f1: FLD double ptr [ESP + 0x3e8]
// 005ce8f8: FMUL double ptr [ESP + 0x38]
// 005ce8fc: FXCH ST6
// 005ce8fe: FSTP double ptr [ESP + 0x250]
// 005ce905: FLD double ptr [ESP + 0x3f0]
// 005ce90c: FMUL double ptr [ESP + 0x40]
// 005ce910: FXCH ST5
// 005ce912: FSTP double ptr [ESP + 0x258]
// 005ce919: FLD double ptr [ESP + 0x3f8]
// 005ce920: FMUL double ptr [ESP + 0x48]
// 005ce924: FXCH ST4
// 005ce926: FSTP double ptr [ESP + 0x260]
// 005ce92d: FLD double ptr [ESP + 0x3e8]
// 005ce934: FMUL double ptr [ESP + 0x50]
// 005ce938: MOV ECX,0x6
// 005ce93d: LEA EDI,[ESP + 0x3b8]
// 005ce944: LEA ESI,[ESP + 0x250]
// 005ce94b: FXCH ST3
// 005ce94d: FSTP double ptr [ESP + 0x118]
// 005ce954: FLD double ptr [ESP + 0x3f0]
// 005ce95b: FMUL double ptr [ESP + 0x58]
// 005ce95f: FXCH ST2
// 005ce961: FSTP double ptr [ESP + 0x120]
// 005ce968: FLD double ptr [ESP + 0x3f8]
// 005ce96f: FMUL double ptr [ESP + 0x60]
// 005ce973: FXCH
// 005ce975: FSTP double ptr [ESP + 0x128]
// 005ce97c: FXCH ST5
// 005ce97e: FSTP double ptr [ESP + 0x328]
// 005ce985: FXCH ST3
// 005ce987: FSTP double ptr [ESP + 0x330]
// 005ce98e: FXCH
// 005ce990: FSTP double ptr [ESP + 0x338]
// 005ce997: FSTP double ptr [ESP + 0x340]
// 005ce99e: FSTP double ptr [ESP + 0x348]
// 005ce9a5: MOVSD.REP ES:EDI,ESI
// 005ce9a7: FSTP double ptr [ESP + 0x350]
// 005ce9ae: MOV ECX,0x6
// 005ce9b3: LEA EDI,[ESP + 0x268]
// 005ce9ba: LEA ESI,[ESP + 0x118]
// 005ce9c1: FLD double ptr [ESP + 0x3b8]
// 005ce9c8: MOVSD.REP ES:EDI,ESI
// 005ce9ca: FADD double ptr [ESP + 0x3c0]
// 005ce9d1: FLD double ptr [ESP + 0x268]
// 005ce9d8: MOV ECX,0x6
// 005ce9dd: LEA EDI,[ESP + 0x388]
// 005ce9e4: FXCH
// 005ce9e6: FADD double ptr [ESP + 0x3c8]
// 005ce9ed: LEA ESI,[ESP + 0x328]
// 005ce9f4: FCHS
// 005ce9f6: MOVSD.REP ES:EDI,ESI
// 005ce9f8: FXCH
// 005ce9fa: FADD double ptr [ESP + 0x270]
// 005cea01: FLD double ptr [ESP + 0x388]
// 005cea08: FXCH ST2
// 005cea0a: FSTP double ptr [ESP + 0x18]
// 005cea0e: MOV ECX,0x6
// 005cea13: LEA EDI,[ESP + 0x190]
// 005cea1a: LEA ESI,[ESP + 0x340]
// 005cea21: FADD double ptr [ESP + 0x278]
// 005cea28: FXCH
// 005cea2a: FADD double ptr [ESP + 0x390]
// 005cea31: MOVSD.REP ES:EDI,ESI
// 005cea33: FXCH
// 005cea35: FADD double ptr [ESP + 0x18]
// 005cea39: FLD double ptr [ESP + 0x190]
// 005cea40: FXCH
// 005cea42: FSTP double ptr [ESP + 0x208]
// 005cea49: FXCH
// 005cea4b: FADD double ptr [ESP + 0x398]
// 005cea52: FXCH
// 005cea54: FADD double ptr [ESP + 0x198]
// 005cea5b: FLD double ptr [ESP + 0x208]
// 005cea62: FXCH
// 005cea64: FADD double ptr [ESP + 0x1a0]
// 005cea6b: FXCH ST2
// 005cea6d: FADD double ptr [ESP + 0x18]
// 005cea71: FXCH ST2
// 005cea73: FADD double ptr [ESP + 0x18]
// 005cea77: FXCH ST2
// 005cea79: FSTP double ptr [ESP + 0x210]
// 005cea80: FXCH
// 005cea82: FSTP double ptr [ESP + 0x218]
// 005cea89: FCOMP double ptr [0x006542e2]
//   XREF to: 006542e2 (READ)
// 005cea8f: FNSTSW AX
// 005cea91: SAHF
// 005cea92: JNC 0x005ceab6
//   XREF to: 005ceab6 (CONDITIONAL_JUMP)
// 005cea94: FLD double ptr [ESP + 0x208]
// 005cea9b: FCOMP double ptr [0x006542ea]
//   XREF to: 006542ea (READ)
// 005ceaa1: FNSTSW AX
// 005ceaa3: SAHF
// 005ceaa4: JBE 0x005ceab6
//   XREF to: 005ceab6 (CONDITIONAL_JUMP)
// 005ceaa6: XOR ESI,ESI
// 005ceaa8: MOV dword ptr [ESP + 0x208],ESI
// 005ceaaf: MOV dword ptr [ESP + 0x20c],ESI
// 005ceab6: FLD double ptr [ESP + 0x210]
//   Label: LAB_005ceab6
// 005ceabd: FCOMP double ptr [0x006542e2]
//   XREF to: 006542e2 (READ)
// 005ceac3: FNSTSW AX
// 005ceac5: SAHF
// 005ceac6: JNC 0x005ceaea
//   XREF to: 005ceaea (CONDITIONAL_JUMP)
// 005ceac8: FLD double ptr [ESP + 0x210]
// 005ceacf: FCOMP double ptr [0x006542ea]
//   XREF to: 006542ea (READ)
// 005cead5: FNSTSW AX
// 005cead7: SAHF
// 005cead8: JBE 0x005ceaea
//   XREF to: 005ceaea (CONDITIONAL_JUMP)
// 005ceada: XOR EAX,EAX
// 005ceadc: MOV dword ptr [ESP + 0x210],EAX
// 005ceae3: MOV dword ptr [ESP + 0x214],EAX
// 005ceaea: FLD double ptr [ESP + 0x218]
//   Label: LAB_005ceaea
// 005ceaf1: FCOMP double ptr [0x006542e2]
//   XREF to: 006542e2 (READ)
// 005ceaf7: FNSTSW AX
// 005ceaf9: SAHF
// 005ceafa: JNC 0x005ceb1e
//   XREF to: 005ceb1e (CONDITIONAL_JUMP)
// 005ceafc: FLD double ptr [ESP + 0x218]
// 005ceb03: FCOMP double ptr [0x006542ea]
//   XREF to: 006542ea (READ)
// 005ceb09: FNSTSW AX
// 005ceb0b: SAHF
// 005ceb0c: JBE 0x005ceb1e
//   XREF to: 005ceb1e (CONDITIONAL_JUMP)
// 005ceb0e: XOR ECX,ECX
// 005ceb10: MOV dword ptr [ESP + 0x218],ECX
// 005ceb17: MOV dword ptr [ESP + 0x21c],ECX
// 005ceb1e: FLDZ
//   Label: LAB_005ceb1e
// 005ceb20: FCOMP double ptr [ESP + 0x208]
// 005ceb27: FNSTSW AX
// 005ceb29: SAHF
// 005ceb2a: JA 0x005ceb4c
//   XREF to: 005ceb4c (CONDITIONAL_JUMP)
// 005ceb2c: FLDZ
// 005ceb2e: FCOMP double ptr [ESP + 0x210]
// 005ceb35: FNSTSW AX
// 005ceb37: SAHF
// 005ceb38: JA 0x005ceb4c
//   XREF to: 005ceb4c (CONDITIONAL_JUMP)
// 005ceb3a: FLDZ
// 005ceb3c: FCOMP double ptr [ESP + 0x218]
// 005ceb43: FNSTSW AX
// 005ceb45: SAHF
// 005ceb46: JBE 0x005ce641
//   XREF to: 005ce641 (CONDITIONAL_JUMP)
// 005ceb4c: FLDZ
//   Label: LAB_005ceb4c
// 005ceb4e: FCOMP double ptr [ESP + 0x208]
// 005ceb55: FNSTSW AX
// 005ceb57: SAHF
// 005ceb58: JC 0x005ceb7a
//   XREF to: 005ceb7a (CONDITIONAL_JUMP)
// 005ceb5a: FLDZ
// 005ceb5c: FCOMP double ptr [ESP + 0x210]
// 005ceb63: FNSTSW AX
// 005ceb65: SAHF
// 005ceb66: JC 0x005ceb7a
//   XREF to: 005ceb7a (CONDITIONAL_JUMP)
// 005ceb68: FLDZ
// 005ceb6a: FCOMP double ptr [ESP + 0x218]
// 005ceb71: FNSTSW AX
// 005ceb73: SAHF
// 005ceb74: JNC 0x005ce641
//   XREF to: 005ce641 (CONDITIONAL_JUMP)
// 005ceb7a: MOV EDI,dword ptr [ESP + 0x20c]
//   Label: LAB_005ceb7a
// 005ceb81: MOV EAX,dword ptr [ESP + 0x208]
// 005ceb88: TEST EDI,0x7fffffff
// 005ceb8e: JNZ 0x005cf287
//   XREF to: 005cf287 (CONDITIONAL_JUMP)
// 005ceb94: TEST EAX,EAX
// 005ceb96: JNZ 0x005cf287
//   XREF to: 005cf287 (CONDITIONAL_JUMP)
// 005ceb9c: MOV EDX,0x3
//   Label: LAB_005ceb9c
// 005ceba1: MOV ECX,dword ptr [ESP + 0x20c]
// 005ceba8: MOV ESI,dword ptr [ESP + 0x208]
// 005cebaf: MOV dword ptr [ESP + 0x558],EDX
// 005cebb6: TEST ECX,0x7fffffff
// 005cebbc: JNZ 0x005cfb29
//   XREF to: 005cfb29 (CONDITIONAL_JUMP)
// 005cebc2: TEST ESI,ESI
// 005cebc4: JNZ 0x005cfb29
//   XREF to: 005cfb29 (CONDITIONAL_JUMP)
// 005cebca: MOV ESI,0x1
// 005cebcf: MOV EDI,0x2
// 005cebd4: XOR ECX,ECX
// 005cebd6: MOV dword ptr [ESP + 0x5b4],ESI
// 005cebdd: MOV dword ptr [ESP + 0x5ac],EDI
// 005cebe4: MOV dword ptr [ESP + 0x594],ECX
// 005cebeb: MOV EAX,dword ptr [ESP + 0x5b4]
//   Label: LAB_005cebeb
// 005cebf2: SHL EAX,0x3
// 005cebf5: MOV dword ptr [ESP + 0x570],EAX
// 005cebfc: MOV EDX,dword ptr [ESP + 0x570]
// 005cec03: MOV EAX,dword ptr [ESP + 0x5ac]
// 005cec0a: FLD double ptr [ESP + EDX*0x1 + 0x208]
// 005cec11: FSUB double ptr [ESP + EAX*0x8 + 0x208]
// 005cec18: FDIVR double ptr [ESP + EDX*0x1 + 0x208]
// 005cec1f: MOV EDX,EAX
// 005cec21: SHL EAX,0x2
// 005cec24: SUB EAX,EDX
// 005cec26: LEA EDX,[ESP + 0x20]
// 005cec2a: SHL EAX,0x3
// 005cec2d: ADD EDX,EAX
// 005cec2f: MOV dword ptr [ESP + 0x5e8],EDX
// 005cec36: MOV EDX,dword ptr [ESP + 0x5b4]
// 005cec3d: LEA EAX,[EDX*0x4 + 0x0]
// 005cec44: SUB EAX,EDX
// 005cec46: LEA EDX,[EAX*0x8 + 0x0]
// 005cec4d: LEA EAX,[ESP + 0x20]
// 005cec51: ADD EAX,EDX
// 005cec53: FLD double ptr [EAX]
// 005cec55: MOV dword ptr [ESP + 0x564],EAX
// 005cec5c: MOV EAX,dword ptr [ESP + 0x5e8]
// 005cec63: FSUB double ptr [EAX]
// 005cec65: MOV EAX,dword ptr [ESP + 0x564]
// 005cec6c: FLD double ptr [EAX + 0x8]
// 005cec6f: MOV EAX,dword ptr [ESP + 0x5e8]
// 005cec76: MOV ECX,0x6
// 005cec7b: FSUB double ptr [EAX + 0x8]
// 005cec7e: MOV EAX,dword ptr [ESP + 0x564]
// 005cec85: LEA EDI,[ESP + 0x148]
// 005cec8c: LEA ESI,[ESP + 0x3d0]
// 005cec93: FLD double ptr [EAX + 0x10]
// 005cec96: MOV EAX,dword ptr [ESP + 0x5e8]
// 005cec9d: FXCH ST2
// 005cec9f: FSTP double ptr [ESP + 0x3d0]
// 005ceca6: FXCH
// 005ceca8: FSUB double ptr [EAX + 0x10]
// 005cecab: FXCH
// 005cecad: FSTP double ptr [ESP + 0x3d8]
// 005cecb4: FSTP double ptr [ESP + 0x3e0]
// 005cecbb: MOVSD.REP ES:EDI,ESI
// 005cecbd: FSTP double ptr [ESP + 0x8]
// 005cecc1: FLD double ptr [ESP + 0x148]
// 005cecc8: FMUL double ptr [ESP + 0x8]
// 005ceccc: FLD double ptr [ESP + 0x150]
// 005cecd3: FMUL double ptr [ESP + 0x8]
// 005cecd7: FLD double ptr [ESP + 0x158]
// 005cecde: FMUL double ptr [ESP + 0x8]
// 005cece2: MOV EAX,dword ptr [ESP + 0x564]
// 005cece9: MOV ECX,0x6
// 005cecee: LEA EDI,[ESP + 0x3a0]
// 005cecf5: LEA ESI,[ESP + 0x370]
// 005cecfc: FXCH ST2
// 005cecfe: FSTP double ptr [ESP + 0x370]
// 005ced05: FSTP double ptr [ESP + 0x378]
// 005ced0c: FSTP double ptr [ESP + 0x380]
// 005ced13: MOVSD.REP ES:EDI,ESI
// 005ced15: MOV EDX,dword ptr [ESP + 0x558]
// 005ced1c: FLD double ptr [EAX + 0x8]
// 005ced1f: FLD double ptr [EAX + 0x10]
// 005ced22: FLD double ptr [EAX]
// 005ced24: MOV ECX,0x6
// 005ced29: LEA EDI,[ESP + 0x220]
// 005ced30: LEA ESI,[ESP + 0x1d8]
// 005ced37: LEA EAX,[EDX*0x4 + 0x0]
// 005ced3e: FSUB double ptr [ESP + 0x3a0]
// 005ced45: FXCH ST2
// 005ced47: FSUB double ptr [ESP + 0x3a8]
// 005ced4e: FXCH
// 005ced50: FSUB double ptr [ESP + 0x3b0]
// 005ced57: FXCH ST2
// 005ced59: FSTP double ptr [ESP + 0x1d8]
// 005ced60: FSTP double ptr [ESP + 0x1e0]
// 005ced67: FSTP double ptr [ESP + 0x1e8]
// 005ced6e: SUB EAX,EDX
// 005ced70: LEA EDX,[ESP + 0x20]
// 005ced74: SHL EAX,0x3
// 005ced77: MOVSD.REP ES:EDI,ESI
// 005ced79: ADD EDX,EAX
// 005ced7b: MOV EAX,dword ptr [ESP + 0x220]
// 005ced82: MOV dword ptr [EDX],EAX
// 005ced84: MOV EAX,dword ptr [ESP + 0x224]
// 005ced8b: MOV dword ptr [EDX + 0x4],EAX
// 005ced8e: MOV EAX,dword ptr [ESP + 0x228]
// 005ced95: MOV dword ptr [EDX + 0x8],EAX
// 005ced98: MOV EAX,dword ptr [ESP + 0x22c]
// 005ced9f: MOV dword ptr [EDX + 0xc],EAX
// 005ceda2: MOV EAX,dword ptr [ESP + 0x230]
// 005ceda9: MOV dword ptr [EDX + 0x10],EAX
// 005cedac: MOV EAX,dword ptr [ESP + 0x234]
// 005cedb3: MOV dword ptr [EDX + 0x14],EAX
// 005cedb6: MOV EAX,dword ptr [ESP + 0x5ac]
// 005cedbd: LEA ECX,[ESP + 0x98]
// 005cedc4: SHL EAX,0x4
// 005cedc7: ADD ECX,EAX
// 005cedc9: MOV dword ptr [ESP + 0x5cc],ECX
// 005cedd0: MOV ECX,dword ptr [ESP + 0x5b4]
// 005cedd7: LEA EAX,[ESP + 0x98]
// 005cedde: SHL ECX,0x4
// 005cede1: ADD EAX,ECX
// 005cede3: FLD double ptr [EAX]
// 005cede5: MOV dword ptr [ESP + 0x5e4],EAX
// 005cedec: MOV EAX,dword ptr [ESP + 0x5cc]
// 005cedf3: FSUB double ptr [EAX]
// 005cedf5: MOV EAX,dword ptr [ESP + 0x5e4]
// 005cedfc: FLD double ptr [EAX + 0x8]
// 005cedff: MOV EAX,dword ptr [ESP + 0x5cc]
// 005cee06: LEA EDI,[ESP + 0x4f8]
// 005cee0d: LEA ESI,[ESP + 0x428]
// 005cee14: FSUB double ptr [EAX + 0x8]
// 005cee17: FXCH
// 005cee19: FSTP double ptr [ESP + 0x428]
// 005cee20: FSTP double ptr [ESP + 0x430]
// 005cee27: MOVSD ES:EDI,ESI
// 005cee28: MOVSD ES:EDI,ESI
// 005cee29: MOVSD ES:EDI,ESI
// 005cee2a: MOVSD ES:EDI,ESI
// 005cee2b: FLD double ptr [ESP + 0x4f8]
// 005cee32: FMUL double ptr [ESP + 0x8]
// 005cee36: FLD double ptr [ESP + 0x500]
// 005cee3d: FMUL double ptr [ESP + 0x8]
// 005cee41: MOV EAX,dword ptr [ESP + 0x5e4]
// 005cee48: LEA EDI,[ESP + 0x468]
// 005cee4f: LEA ESI,[ESP + 0x518]
// 005cee56: FXCH
// 005cee58: FSTP double ptr [ESP + 0x518]
// 005cee5f: FSTP double ptr [ESP + 0x520]
// 005cee66: MOVSD ES:EDI,ESI
// 005cee67: MOVSD ES:EDI,ESI
// 005cee68: MOVSD ES:EDI,ESI
// 005cee69: MOVSD ES:EDI,ESI
// 005cee6a: FLD double ptr [EAX + 0x8]
// 005cee6d: FLD double ptr [EAX]
// 005cee6f: LEA EDI,[ESP + 0x4c8]
// 005cee76: LEA ESI,[ESP + 0x508]
// 005cee7d: MOV EAX,dword ptr [ESP + 0x558]
// 005cee84: FSUB double ptr [ESP + 0x468]
// 005cee8b: FXCH
// 005cee8d: FSUB double ptr [ESP + 0x470]
// 005cee94: FXCH
// 005cee96: FSTP double ptr [ESP + 0x508]
// 005cee9d: FSTP double ptr [ESP + 0x510]
// 005ceea4: MOVSD ES:EDI,ESI
// 005ceea5: MOVSD ES:EDI,ESI
// 005ceea6: MOVSD ES:EDI,ESI
// 005ceea7: MOVSD ES:EDI,ESI
// 005ceea8: SHL EAX,0x4
// 005ceeab: LEA ESI,[ESP + 0x98]
// 005ceeb2: ADD ESI,EAX
// 005ceeb4: MOV EAX,dword ptr [ESP + 0x4c8]
// 005ceebb: MOV dword ptr [ESI],EAX
// 005ceebd: MOV EAX,dword ptr [ESP + 0x4cc]
// 005ceec4: MOV dword ptr [ESI + 0x4],EAX
// 005ceec7: MOV EAX,dword ptr [ESP + 0x4d0]
// 005ceece: MOV dword ptr [ESI + 0x8],EAX
// 005ceed1: MOV EAX,dword ptr [ESP + 0x4d4]
// 005ceed8: MOV dword ptr [ESI + 0xc],EAX
// 005ceedb: LEA EAX,[EBX + 0x128]
// 005ceee1: MOV dword ptr [ESP + 0x584],EAX
// 005ceee8: LEA EAX,[EBX + 0xd8]
// 005ceeee: MOV dword ptr [ESP + 0x5d4],EAX
// 005ceef5: LEA EAX,[EBX + 0x118]
// 005ceefb: MOV dword ptr [ESP + 0x598],EAX
// 005cef02: LEA EAX,[EBX + 0xc0]
// 005cef08: MOV dword ptr [ESP + 0x544],EAX
// 005cef0f: LEA EAX,[EBX + 0x108]
// 005cef15: MOV dword ptr [ESP + 0x578],EAX
// 005cef1c: LEA EAX,[EBX + 0xa8]
// 005cef22: MOV dword ptr [ESP + 0x5d8],EAX
// 005cef29: LEA EAX,[EBX + 0x84]
// 005cef2f: MOV dword ptr [ESP + 0x57c],EAX
// 005cef36: LEA EAX,[EBX + 0x34]
// 005cef39: MOV dword ptr [ESP + 0x5c8],EAX
// 005cef40: LEA EAX,[EBX + 0x74]
// 005cef43: MOV dword ptr [ESP + 0x58c],EAX
// 005cef4a: LEA EAX,[EBX + 0x1c]
// 005cef4d: MOV dword ptr [ESP + 0x5c4],EAX
// 005cef54: LEA EAX,[EBX + 0x64]
// 005cef57: MOV dword ptr [ESP + 0x590],EAX
// 005cef5e: LEA EAX,[EBX + 0x4]
// 005cef61: MOV ECX,dword ptr [ESP + 0x594]
// 005cef68: MOV dword ptr [ESP + 0x53c],EAX
// 005cef6f: LEA EAX,[ECX*0x4 + 0x0]
// 005cef76: SUB EAX,ECX
// 005cef78: LEA ECX,[EAX*0x8 + 0x0]
// 005cef7f: MOV EAX,dword ptr [ESP + 0x594]
// 005cef86: LEA EDI,[ESP + 0x98]
// 005cef8d: SHL EAX,0x4
// 005cef90: ADD EDI,EAX
// 005cef92: LEA EAX,[ESP + 0x20]
// 005cef96: ADD ECX,EAX
// 005cef98: MOV EAX,dword ptr [ESP + 0x570]
// 005cef9f: FLDZ
// 005cefa1: FCOMP double ptr [ESP + EAX*0x1 + 0x208]
// 005cefa8: FNSTSW AX
// 005cefaa: SAHF
// 005cefab: JNC 0x005cfb8f
//   XREF to: 005cfb8f (CONDITIONAL_JUMP)
// 005cefb1: MOV dword ptr [EBX],0x3
// 005cefb7: MOV EAX,dword ptr [ESP + 0x53c]
// 005cefbe: FLD double ptr [ECX]
// 005cefc0: FSTP double ptr [EAX]
// 005cefc2: FLD double ptr [ECX + 0x8]
// 005cefc5: FSTP double ptr [EAX + 0x8]
// 005cefc8: FLD double ptr [ECX + 0x10]
// 005cefcb: FSTP double ptr [EAX + 0x10]
// 005cefce: MOV EAX,dword ptr [ESP + 0x590]
// 005cefd5: FLD double ptr [EDI]
// 005cefd7: FSTP double ptr [EAX]
// 005cefd9: FLD double ptr [EDI + 0x8]
// 005cefdc: FSTP double ptr [EAX + 0x8]
// 005cefdf: MOV EAX,dword ptr [ESP + 0x564]
// 005cefe6: FLD double ptr [EAX]
// 005cefe8: MOV EAX,dword ptr [ESP + 0x5c4]
// 005cefef: FSTP double ptr [EAX]
// 005ceff1: MOV EAX,dword ptr [ESP + 0x564]
// 005ceff8: FLD double ptr [EAX + 0x8]
// 005ceffb: MOV EAX,dword ptr [ESP + 0x5c4]
// 005cf002: FSTP double ptr [EAX + 0x8]
// 005cf005: MOV EAX,dword ptr [ESP + 0x564]
// 005cf00c: FLD double ptr [EAX + 0x10]
// 005cf00f: MOV EAX,dword ptr [ESP + 0x5c4]
// 005cf016: FSTP double ptr [EAX + 0x10]
// 005cf019: MOV EAX,dword ptr [ESP + 0x5e4]
// 005cf020: FLD double ptr [EAX]
// 005cf022: MOV EAX,dword ptr [ESP + 0x58c]
// 005cf029: FSTP double ptr [EAX]
// 005cf02b: MOV EAX,dword ptr [ESP + 0x5e4]
// 005cf032: FLD double ptr [EAX + 0x8]
// 005cf035: MOV EAX,dword ptr [ESP + 0x58c]
// 005cf03c: FSTP double ptr [EAX + 0x8]
// 005cf03f: MOV EAX,dword ptr [ESP + 0x5c8]
// 005cf046: FLD double ptr [EDX]
// 005cf048: FSTP double ptr [EAX]
// 005cf04a: FLD double ptr [EDX + 0x8]
// 005cf04d: FSTP double ptr [EAX + 0x8]
// 005cf050: FLD double ptr [EDX + 0x10]
// 005cf053: FSTP double ptr [EAX + 0x10]
// 005cf056: MOV EAX,dword ptr [ESP + 0x57c]
// 005cf05d: FLD double ptr [ESI]
// 005cf05f: FSTP double ptr [EAX]
// 005cf061: FLD double ptr [ESI + 0x8]
// 005cf064: FSTP double ptr [EAX + 0x8]
// 005cf067: MOV dword ptr [EBX + 0xa4],0x3
// 005cf071: MOV EAX,dword ptr [ESP + 0x5d8]
// 005cf078: MOV EBX,dword ptr [ECX]
// 005cf07a: MOV dword ptr [EAX],EBX
// 005cf07c: MOV EBX,dword ptr [ECX + 0x4]
// 005cf07f: MOV dword ptr [EAX + 0x4],EBX
// 005cf082: MOV EBX,dword ptr [ECX + 0x8]
// 005cf085: MOV dword ptr [EAX + 0x8],EBX
// 005cf088: MOV EBX,dword ptr [ECX + 0xc]
// 005cf08b: MOV dword ptr [EAX + 0xc],EBX
// 005cf08e: MOV EBX,dword ptr [ECX + 0x10]
// 005cf091: MOV dword ptr [EAX + 0x10],EBX
// 005cf094: MOV EBX,dword ptr [ECX + 0x14]
// 005cf097: MOV dword ptr [EAX + 0x14],EBX
// 005cf09a: MOV EAX,dword ptr [ESP + 0x578]
// 005cf0a1: MOV ECX,dword ptr [EDI]
// 005cf0a3: MOV dword ptr [EAX],ECX
// 005cf0a5: MOV ECX,dword ptr [EDI + 0x4]
// 005cf0a8: MOV dword ptr [EAX + 0x4],ECX
// 005cf0ab: MOV ECX,dword ptr [EDI + 0x8]
// 005cf0ae: MOV dword ptr [EAX + 0x8],ECX
// 005cf0b1: MOV ECX,dword ptr [EDI + 0xc]
// 005cf0b4: MOV dword ptr [EAX + 0xc],ECX
// 005cf0b7: MOV EAX,dword ptr [ESP + 0x544]
// 005cf0be: MOV ECX,dword ptr [EDX]
// 005cf0c0: MOV dword ptr [EAX],ECX
// 005cf0c2: MOV ECX,dword ptr [EDX + 0x4]
// 005cf0c5: MOV dword ptr [EAX + 0x4],ECX
// 005cf0c8: MOV ECX,dword ptr [EDX + 0x8]
// 005cf0cb: MOV dword ptr [EAX + 0x8],ECX
// 005cf0ce: MOV ECX,dword ptr [EDX + 0xc]
// 005cf0d1: MOV dword ptr [EAX + 0xc],ECX
// 005cf0d4: MOV ECX,dword ptr [EDX + 0x10]
// 005cf0d7: MOV dword ptr [EAX + 0x10],ECX
// 005cf0da: MOV ECX,dword ptr [EDX + 0x14]
// 005cf0dd: MOV dword ptr [EAX + 0x14],ECX
// 005cf0e0: MOV EAX,dword ptr [ESP + 0x598]
// 005cf0e7: MOV EDX,dword ptr [ESI]
// 005cf0e9: MOV dword ptr [EAX],EDX
// 005cf0eb: MOV EDX,dword ptr [ESI + 0x4]
// 005cf0ee: MOV dword ptr [EAX + 0x4],EDX
// 005cf0f1: MOV EDX,dword ptr [ESI + 0x8]
// 005cf0f4: MOV dword ptr [EAX + 0x8],EDX
// 005cf0f7: MOV EDX,dword ptr [ESI + 0xc]
// 005cf0fa: MOV dword ptr [EAX + 0xc],EDX
// 005cf0fd: MOV EAX,dword ptr [ESP + 0x5e8]
// 005cf104: FLD double ptr [EAX]
// 005cf106: MOV EAX,dword ptr [ESP + 0x5d4]
// 005cf10d: FSTP double ptr [EAX]
// 005cf10f: MOV EAX,dword ptr [ESP + 0x5e8]
// 005cf116: FLD double ptr [EAX + 0x8]
// 005cf119: MOV EAX,dword ptr [ESP + 0x5d4]
// 005cf120: FSTP double ptr [EAX + 0x8]
// 005cf123: MOV EAX,dword ptr [ESP + 0x5e8]
// 005cf12a: FLD double ptr [EAX + 0x10]
// 005cf12d: MOV EAX,dword ptr [ESP + 0x5d4]
// 005cf134: FSTP double ptr [EAX + 0x10]
// 005cf137: MOV EAX,dword ptr [ESP + 0x5cc]
// 005cf13e: FLD double ptr [EAX]
// 005cf140: MOV EAX,dword ptr [ESP + 0x584]
// 005cf147: FSTP double ptr [EAX]
// 005cf149: MOV EAX,dword ptr [ESP + 0x5cc]
// 005cf150: FLD double ptr [EAX + 0x8]
// 005cf153: MOV EAX,dword ptr [ESP + 0x584]
// 005cf15a: FSTP double ptr [EAX + 0x8]
// 005cf15d: MOV EAX,0x1
// 005cf162: MOV ESP,EBP
// 005cf164: POP EBP
// 005cf165: POP EDI
// 005cf166: POP ESI
// 005cf167: POP EBX
// 005cf168: RET
// 005cf169: LEA EAX,[ESP + 0x1f0]
//   Label: LAB_005cf169
// 005cf170: PUSH EAX
// 005cf171: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cf174: MOV EAX,dword ptr [EAX + 0x4]
// 005cf177: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cf17a: SHL EAX,0x3
// 005cf17d: MOV ECX,dword ptr [ECX]
// 005cf17f: MOV EDX,EAX
// 005cf181: SHL EAX,0x3
// 005cf184: MOV ECX,dword ptr [ECX + 0x4]
// 005cf187: SUB EAX,EDX
// 005cf189: ADD EAX,ECX
// 005cf18b: PUSH EAX
// 005cf18c: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cf18f: MOV EAX,dword ptr [EAX + 0xc]
// 005cf192: SHL EAX,0x3
// 005cf195: MOV EDX,EAX
// 005cf197: SHL EAX,0x3
// 005cf19a: SUB EAX,EDX
// 005cf19c: ADD EAX,ECX
// 005cf19e: PUSH EAX
// 005cf19f: MOV EDI,dword ptr [ESI + 0x64]
// 005cf1a2: PUSH ESI
// 005cf1a3: CALL dword ptr [EDI + 0x60]
// 005cf1a6: ADD ESP,0x10
// 005cf1a9: TEST EAX,EAX
// 005cf1ab: JNZ 0x005ce6d6
//   XREF to: 005ce6d6 (CONDITIONAL_JUMP)
// 005cf1b1: LEA EAX,[ESP + 0x1f0]
// 005cf1b8: PUSH EAX
// 005cf1b9: MOV EAX,dword ptr [ESI + 0x8]
// 005cf1bc: SHL EAX,0x3
// 005cf1bf: MOV ECX,dword ptr [ESI]
// 005cf1c1: MOV EDX,EAX
// 005cf1c3: SHL EAX,0x3
// 005cf1c6: MOV ECX,dword ptr [ECX + 0x4]
// 005cf1c9: SUB EAX,EDX
// 005cf1cb: ADD EAX,ECX
// 005cf1cd: PUSH EAX
// 005cf1ce: MOV EAX,dword ptr [ESI + 0x4]
// 005cf1d1: SHL EAX,0x3
// 005cf1d4: MOV EDX,EAX
// 005cf1d6: SHL EAX,0x3
// 005cf1d9: SUB EAX,EDX
// 005cf1db: ADD ECX,EAX
// 005cf1dd: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cf1e0: PUSH ECX
// 005cf1e1: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cf1e4: MOV EDI,dword ptr [EDI + 0x64]
// 005cf1e7: PUSH EAX
// 005cf1e8: CALL dword ptr [EDI + 0x60]
// 005cf1eb: ADD ESP,0x10
// 005cf1ee: TEST EAX,EAX
// 005cf1f0: JNZ 0x005ce6d6
//   XREF to: 005ce6d6 (CONDITIONAL_JUMP)
// 005cf1f6: LEA EAX,[ESP + 0x1f0]
// 005cf1fd: PUSH EAX
// 005cf1fe: MOV EAX,dword ptr [ESI + 0xc]
// 005cf201: SHL EAX,0x3
// 005cf204: MOV ECX,dword ptr [ESI]
// 005cf206: MOV EDX,EAX
// 005cf208: SHL EAX,0x3
// 005cf20b: MOV ECX,dword ptr [ECX + 0x4]
// 005cf20e: SUB EAX,EDX
// 005cf210: ADD EAX,ECX
// 005cf212: PUSH EAX
// 005cf213: MOV EAX,dword ptr [ESI + 0x8]
// 005cf216: SHL EAX,0x3
// 005cf219: MOV EDX,EAX
// 005cf21b: SHL EAX,0x3
// 005cf21e: SUB EAX,EDX
// 005cf220: ADD EAX,ECX
// 005cf222: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cf225: PUSH EAX
// 005cf226: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cf229: MOV EDI,dword ptr [EDI + 0x64]
// 005cf22c: PUSH EDX
// 005cf22d: CALL dword ptr [EDI + 0x60]
// 005cf230: ADD ESP,0x10
// 005cf233: TEST EAX,EAX
// 005cf235: JNZ 0x005ce6d6
//   XREF to: 005ce6d6 (CONDITIONAL_JUMP)
// 005cf23b: LEA EAX,[ESP + 0x1f0]
// 005cf242: PUSH EAX
// 005cf243: MOV EAX,dword ptr [ESI + 0x4]
// 005cf246: SHL EAX,0x3
// 005cf249: MOV ECX,dword ptr [ESI]
// 005cf24b: MOV EDX,EAX
// 005cf24d: SHL EAX,0x3
// 005cf250: MOV ECX,dword ptr [ECX + 0x4]
// 005cf253: SUB EAX,EDX
// 005cf255: ADD EAX,ECX
// 005cf257: PUSH EAX
// 005cf258: MOV EAX,dword ptr [ESI + 0xc]
// 005cf25b: SHL EAX,0x3
// 005cf25e: MOV EDX,EAX
// 005cf260: SHL EAX,0x3
// 005cf263: SUB EAX,EDX
// 005cf265: ADD EAX,ECX
// 005cf267: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cf26a: PUSH EAX
// 005cf26b: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cf26e: MOV EDI,dword ptr [EDI + 0x64]
// 005cf271: PUSH ECX
// 005cf272: CALL dword ptr [EDI + 0x60]
// 005cf275: ADD ESP,0x10
// 005cf278: TEST EAX,EAX
// 005cf27a: JNZ 0x005ce6d6
//   XREF to: 005ce6d6 (CONDITIONAL_JUMP)
// 005cf280: MOV ESP,EBP
// 005cf282: POP EBP
// 005cf283: POP EDI
// 005cf284: POP ESI
// 005cf285: POP EBX
// 005cf286: RET
// 005cf287: MOV EDX,dword ptr [ESP + 0x214]
//   Label: LAB_005cf287
// 005cf28e: MOV ECX,dword ptr [ESP + 0x210]
// 005cf295: TEST EDX,0x7fffffff
// 005cf29b: JNZ 0x005cf2a5
//   XREF to: 005cf2a5 (CONDITIONAL_JUMP)
// 005cf29d: TEST ECX,ECX
// 005cf29f: JZ 0x005ceb9c
//   XREF to: 005ceb9c (CONDITIONAL_JUMP)
// 005cf2a5: MOV ESI,dword ptr [ESP + 0x21c]
//   Label: LAB_005cf2a5
// 005cf2ac: MOV EDI,dword ptr [ESP + 0x218]
// 005cf2b3: TEST ESI,0x7fffffff
// 005cf2b9: JNZ 0x005cf2c3
//   XREF to: 005cf2c3 (CONDITIONAL_JUMP)
// 005cf2bb: TEST EDI,EDI
// 005cf2bd: JZ 0x005ceb9c
//   XREF to: 005ceb9c (CONDITIONAL_JUMP)
// 005cf2c3: FLDZ
//   Label: LAB_005cf2c3
// 005cf2c5: MOV EAX,0x3
// 005cf2ca: MOV EDX,0x4
// 005cf2cf: MOV dword ptr [ESP + 0x554],EAX
// 005cf2d6: MOV dword ptr [ESP + 0x550],EDX
// 005cf2dd: FCOMP double ptr [ESP + 0x210]
// 005cf2e4: FNSTSW AX
// 005cf2e6: SAHF
// 005cf2e7: JA 0x005cfd47
//   XREF to: 005cfd47 (CONDITIONAL_JUMP)
// 005cf2ed: FLDZ
// 005cf2ef: FCOMP double ptr [ESP + 0x218]
// 005cf2f6: FNSTSW AX
// 005cf2f8: SAHF
// 005cf2f9: JA 0x005cfd47
//   XREF to: 005cfd47 (CONDITIONAL_JUMP)
// 005cf2ff: MOV EDI,0x1
//   Label: LAB_005cf2ff
// 005cf304: MOV EAX,0x2
// 005cf309: XOR ESI,ESI
// 005cf30b: MOV dword ptr [ESP + 0x538],EDI
// 005cf312: MOV dword ptr [ESP + 0x5a8],EAX
// 005cf319: MOV dword ptr [ESP + 0x5b0],ESI
// 005cf320: MOV EDX,dword ptr [ESP + 0x5b0]
//   Label: LAB_005cf320
// 005cf327: MOV EAX,dword ptr [ESP + 0x538]
// 005cf32e: SHL EDX,0x3
// 005cf331: FLD double ptr [ESP + EAX*0x8 + 0x208]
// 005cf338: FSUB double ptr [ESP + EDX*0x1 + 0x208]
// 005cf33f: FDIVR double ptr [ESP + EAX*0x8 + 0x208]
// 005cf346: MOV dword ptr [ESP + 0x55c],EDX
// 005cf34d: MOV EDX,dword ptr [ESP + 0x5b0]
// 005cf354: LEA EAX,[EDX*0x4 + 0x0]
// 005cf35b: SUB EAX,EDX
// 005cf35d: LEA EDX,[EAX*0x8 + 0x0]
// 005cf364: LEA EAX,[ESP + 0x20]
// 005cf368: ADD EAX,EDX
// 005cf36a: MOV EDX,dword ptr [ESP + 0x538]
// 005cf371: MOV dword ptr [ESP + 0x568],EAX
// 005cf378: LEA EAX,[EDX*0x4 + 0x0]
// 005cf37f: SUB EAX,EDX
// 005cf381: LEA EDX,[ESP + 0x20]
// 005cf385: SHL EAX,0x3
// 005cf388: MOV ECX,0x6
// 005cf38d: ADD EDX,EAX
// 005cf38f: LEA EDI,[ESP + 0x178]
// 005cf396: LEA ESI,[ESP + 0x358]
// 005cf39d: FLD double ptr [EDX]
// 005cf39f: FLD double ptr [EDX + 0x8]
// 005cf3a2: MOV EAX,dword ptr [ESP + 0x568]
// 005cf3a9: FLD double ptr [EDX + 0x10]
// 005cf3ac: FXCH ST2
// 005cf3ae: FSUB double ptr [EAX]
// 005cf3b0: FXCH
// 005cf3b2: FSUB double ptr [EAX + 0x8]
// 005cf3b5: FXCH ST2
// 005cf3b7: FSUB double ptr [EAX + 0x10]
// 005cf3ba: FXCH
// 005cf3bc: FSTP double ptr [ESP + 0x358]
// 005cf3c3: FXCH
// 005cf3c5: FSTP double ptr [ESP + 0x360]
// 005cf3cc: FSTP double ptr [ESP + 0x368]
// 005cf3d3: MOVSD.REP ES:EDI,ESI
// 005cf3d5: FSTP double ptr [ESP + 0x10]
// 005cf3d9: FLD double ptr [ESP + 0x178]
// 005cf3e0: FMUL double ptr [ESP + 0x10]
// 005cf3e4: FLD double ptr [ESP + 0x180]
// 005cf3eb: FMUL double ptr [ESP + 0x10]
// 005cf3ef: FLD double ptr [ESP + 0x188]
// 005cf3f6: FMUL double ptr [ESP + 0x10]
// 005cf3fa: MOV ECX,0x6
// 005cf3ff: LEA EDI,[ESP + 0x160]
// 005cf406: LEA ESI,[ESP + 0x2c8]
// 005cf40d: FXCH ST2
// 005cf40f: FSTP double ptr [ESP + 0x2c8]
// 005cf416: FSTP double ptr [ESP + 0x2d0]
// 005cf41d: FSTP double ptr [ESP + 0x2d8]
// 005cf424: MOVSD.REP ES:EDI,ESI
// 005cf426: MOV dword ptr [ESP + 0x560],EDX
// 005cf42d: FLD double ptr [EDX + 0x8]
// 005cf430: FLD double ptr [EDX + 0x10]
// 005cf433: FLD double ptr [EDX]
// 005cf435: MOV ECX,0x6
// 005cf43a: LEA EDI,[ESP + 0x2b0]
// 005cf441: LEA ESI,[ESP + 0xe8]
// 005cf448: MOV EDX,dword ptr [ESP + 0x554]
// 005cf44f: FSUB double ptr [ESP + 0x160]
// 005cf456: FXCH ST2
// 005cf458: FSUB double ptr [ESP + 0x168]
// 005cf45f: FXCH
// 005cf461: FSUB double ptr [ESP + 0x170]
// 005cf468: FXCH ST2
// 005cf46a: FSTP double ptr [ESP + 0xe8]
// 005cf471: FSTP double ptr [ESP + 0xf0]
// 005cf478: LEA EAX,[EDX*0x4 + 0x0]
// 005cf47f: FSTP double ptr [ESP + 0xf8]
// 005cf486: SUB EAX,EDX
// 005cf488: LEA EDX,[ESP + 0x20]
// 005cf48c: SHL EAX,0x3
// 005cf48f: MOVSD.REP ES:EDI,ESI
// 005cf491: ADD EDX,EAX
// 005cf493: MOV EAX,dword ptr [ESP + 0x2b0]
// 005cf49a: MOV dword ptr [EDX],EAX
// 005cf49c: MOV EAX,dword ptr [ESP + 0x2b4]
// 005cf4a3: MOV dword ptr [EDX + 0x4],EAX
// 005cf4a6: MOV EAX,dword ptr [ESP + 0x2b8]
// 005cf4ad: MOV dword ptr [EDX + 0x8],EAX
// 005cf4b0: MOV EAX,dword ptr [ESP + 0x2bc]
// 005cf4b7: MOV dword ptr [EDX + 0xc],EAX
// 005cf4ba: MOV EAX,dword ptr [ESP + 0x2c0]
// 005cf4c1: MOV ECX,dword ptr [ESP + 0x5b0]
// 005cf4c8: MOV dword ptr [EDX + 0x10],EAX
// 005cf4cb: MOV EAX,dword ptr [ESP + 0x2c4]
// 005cf4d2: SHL ECX,0x4
// 005cf4d5: MOV dword ptr [EDX + 0x14],EAX
// 005cf4d8: LEA EAX,[ESP + 0x98]
// 005cf4df: ADD EAX,ECX
// 005cf4e1: MOV dword ptr [ESP + 0x5dc],EAX
// 005cf4e8: MOV EAX,dword ptr [ESP + 0x538]
// 005cf4ef: LEA ECX,[ESP + 0x98]
// 005cf4f6: SHL EAX,0x4
// 005cf4f9: ADD ECX,EAX
// 005cf4fb: LEA EDI,[ESP + 0x448]
// 005cf502: LEA ESI,[ESP + 0x478]
// 005cf509: FLD double ptr [ECX]
// 005cf50b: MOV EAX,dword ptr [ESP + 0x5dc]
// 005cf512: FLD double ptr [ECX + 0x8]
// 005cf515: FXCH
// 005cf517: FSUB double ptr [EAX]
// 005cf519: FXCH
// 005cf51b: FSUB double ptr [EAX + 0x8]
// 005cf51e: FXCH
// 005cf520: FSTP double ptr [ESP + 0x478]
// 005cf527: FSTP double ptr [ESP + 0x480]
// 005cf52e: MOVSD ES:EDI,ESI
// 005cf52f: MOVSD ES:EDI,ESI
// 005cf530: MOVSD ES:EDI,ESI
// 005cf531: MOVSD ES:EDI,ESI
// 005cf532: FLD double ptr [ESP + 0x448]
// 005cf539: FMUL double ptr [ESP + 0x10]
// 005cf53d: FLD double ptr [ESP + 0x450]
// 005cf544: FMUL double ptr [ESP + 0x10]
// 005cf548: MOV dword ptr [ESP + 0x5e0],ECX
// 005cf54f: LEA EDI,[ESP + 0x438]
// 005cf556: LEA ESI,[ESP + 0x4e8]
// 005cf55d: FXCH
// 005cf55f: FSTP double ptr [ESP + 0x4e8]
// 005cf566: FSTP double ptr [ESP + 0x4f0]
// 005cf56d: MOVSD ES:EDI,ESI
// 005cf56e: MOVSD ES:EDI,ESI
// 005cf56f: MOVSD ES:EDI,ESI
// 005cf570: MOVSD ES:EDI,ESI
// 005cf571: LEA EAX,[ESP + 0x98]
// 005cf578: FLD double ptr [ECX + 0x8]
// 005cf57b: FLD double ptr [ECX]
// 005cf57d: LEA EDI,[ESP + 0x4d8]
// 005cf584: LEA ESI,[ESP + 0x4b8]
// 005cf58b: MOV ECX,dword ptr [ESP + 0x554]
// 005cf592: FSUB double ptr [ESP + 0x438]
// 005cf599: FXCH
// 005cf59b: FSUB double ptr [ESP + 0x440]
// 005cf5a2: SHL ECX,0x4
// 005cf5a5: FXCH
// 005cf5a7: FSTP double ptr [ESP + 0x4b8]
// 005cf5ae: ADD EAX,ECX
// 005cf5b0: FSTP double ptr [ESP + 0x4c0]
// 005cf5b7: MOV dword ptr [ESP + 0x54c],EAX
// 005cf5be: MOVSD ES:EDI,ESI
// 005cf5bf: MOVSD ES:EDI,ESI
// 005cf5c0: MOVSD ES:EDI,ESI
// 005cf5c1: MOVSD ES:EDI,ESI
// 005cf5c2: MOV ECX,dword ptr [ESP + 0x54c]
// 005cf5c9: MOV EAX,dword ptr [ESP + 0x4d8]
// 005cf5d0: MOV dword ptr [ECX],EAX
// 005cf5d2: MOV EAX,dword ptr [ESP + 0x4dc]
// 005cf5d9: MOV dword ptr [ECX + 0x4],EAX
// 005cf5dc: MOV EAX,dword ptr [ESP + 0x4e0]
// 005cf5e3: MOV dword ptr [ECX + 0x8],EAX
// 005cf5e6: MOV EAX,dword ptr [ESP + 0x4e4]
// 005cf5ed: MOV dword ptr [ECX + 0xc],EAX
// 005cf5f0: MOV EAX,dword ptr [ESP + 0x5a8]
// 005cf5f7: MOV ECX,dword ptr [ESP + 0x55c]
// 005cf5fe: FLD double ptr [ESP + EAX*0x8 + 0x208]
// 005cf605: FSUB double ptr [ESP + ECX*0x1 + 0x208]
// 005cf60c: FDIVR double ptr [ESP + EAX*0x8 + 0x208]
// 005cf613: MOV ECX,EAX
// 005cf615: SHL EAX,0x2
// 005cf618: SUB EAX,ECX
// 005cf61a: LEA ECX,[ESP + 0x20]
// 005cf61e: SHL EAX,0x3
// 005cf621: ADD ECX,EAX
// 005cf623: LEA EDI,[ESP + 0x298]
// 005cf62a: LEA ESI,[ESP + 0x100]
// 005cf631: FLD double ptr [ECX + 0x8]
// 005cf634: FLD double ptr [ECX + 0x10]
// 005cf637: FLD double ptr [ECX]
// 005cf639: MOV EAX,dword ptr [ESP + 0x568]
// 005cf640: MOV dword ptr [ESP + 0x56c],ECX
// 005cf647: MOV ECX,0x6
// 005cf64c: FSUB double ptr [EAX]
// 005cf64e: FXCH ST2
// 005cf650: FSUB double ptr [EAX + 0x8]
// 005cf653: FXCH
// 005cf655: FSUB double ptr [EAX + 0x10]
// 005cf658: FXCH ST2
// 005cf65a: FSTP double ptr [ESP + 0x100]
// 005cf661: FSTP double ptr [ESP + 0x108]
// 005cf668: FSTP double ptr [ESP + 0x110]
// 005cf66f: MOVSD.REP ES:EDI,ESI
// 005cf671: FSTP double ptr [ESP]
// 005cf674: FLD double ptr [ESP + 0x298]
// 005cf67b: FMUL double ptr [ESP]
// 005cf67e: FLD double ptr [ESP + 0x2a0]
// 005cf685: FMUL double ptr [ESP]
// 005cf688: FLD double ptr [ESP + 0x2a8]
// 005cf68f: FMUL double ptr [ESP]
// 005cf692: MOV ECX,0x6
// 005cf697: LEA EDI,[ESP + 0x400]
// 005cf69e: LEA ESI,[ESP + 0x2f8]
// 005cf6a5: FXCH ST2
// 005cf6a7: FSTP double ptr [ESP + 0x2f8]
// 005cf6ae: FSTP double ptr [ESP + 0x300]
// 005cf6b5: FSTP double ptr [ESP + 0x308]
// 005cf6bc: MOVSD.REP ES:EDI,ESI
// 005cf6be: MOV EAX,dword ptr [ESP + 0x56c]
// 005cf6c5: MOV ECX,0x6
// 005cf6ca: LEA EDI,[ESP + 0x1c0]
// 005cf6d1: LEA ESI,[ESP + 0x280]
// 005cf6d8: FLD double ptr [EAX]
// 005cf6da: FLD double ptr [EAX + 0x8]
// 005cf6dd: FLD double ptr [EAX + 0x10]
// 005cf6e0: FXCH ST2
// 005cf6e2: FSUB double ptr [ESP + 0x400]
// 005cf6e9: FXCH
// 005cf6eb: FSUB double ptr [ESP + 0x408]
// 005cf6f2: FXCH ST2
// 005cf6f4: FSUB double ptr [ESP + 0x410]
// 005cf6fb: FXCH
// 005cf6fd: FSTP double ptr [ESP + 0x280]
// 005cf704: FXCH
// 005cf706: FSTP double ptr [ESP + 0x288]
// 005cf70d: FSTP double ptr [ESP + 0x290]
// 005cf714: MOVSD.REP ES:EDI,ESI
// 005cf716: MOV ECX,dword ptr [ESP + 0x550]
// 005cf71d: LEA EAX,[ECX*0x4 + 0x0]
// 005cf724: SUB EAX,ECX
// 005cf726: LEA ECX,[ESP + 0x20]
// 005cf72a: SHL EAX,0x3
// 005cf72d: ADD ECX,EAX
// 005cf72f: MOV EAX,dword ptr [ESP + 0x1c0]
// 005cf736: MOV dword ptr [ECX],EAX
// 005cf738: MOV EAX,dword ptr [ESP + 0x1c4]
// 005cf73f: MOV dword ptr [ECX + 0x4],EAX
// 005cf742: MOV EAX,dword ptr [ESP + 0x1c8]
// 005cf749: MOV dword ptr [ECX + 0x8],EAX
// 005cf74c: MOV EAX,dword ptr [ESP + 0x1cc]
// 005cf753: MOV dword ptr [ECX + 0xc],EAX
// 005cf756: MOV EAX,dword ptr [ESP + 0x1d0]
// 005cf75d: MOV dword ptr [ECX + 0x10],EAX
// 005cf760: MOV EAX,dword ptr [ESP + 0x1d4]
// 005cf767: MOV dword ptr [ECX + 0x14],EAX
// 005cf76a: MOV EAX,dword ptr [ESP + 0x5a8]
// 005cf771: LEA ESI,[ESP + 0x98]
// 005cf778: SHL EAX,0x4
// 005cf77b: ADD ESI,EAX
// 005cf77d: LEA EDI,[ESP + 0x488]
// 005cf784: FLD double ptr [ESI + 0x8]
// 005cf787: FLD double ptr [ESI]
// 005cf789: MOV EAX,dword ptr [ESP + 0x5dc]
// 005cf790: MOV dword ptr [ESP + 0x548],ESI
// 005cf797: LEA ESI,[ESP + 0x498]
// 005cf79e: FSUB double ptr [EAX]
// 005cf7a0: FXCH
// 005cf7a2: FSUB double ptr [EAX + 0x8]
// 005cf7a5: FXCH
// 005cf7a7: FSTP double ptr [ESP + 0x498]
// 005cf7ae: FSTP double ptr [ESP + 0x4a0]
// 005cf7b5: MOVSD ES:EDI,ESI
// 005cf7b6: MOVSD ES:EDI,ESI
// 005cf7b7: MOVSD ES:EDI,ESI
// 005cf7b8: MOVSD ES:EDI,ESI
// 005cf7b9: FLD double ptr [ESP]
// 005cf7bc: FLD double ptr [ESP + 0x488]
// 005cf7c3: FMUL ST1
// 005cf7c5: FLD double ptr [ESP + 0x490]
// 005cf7cc: FMULP ST2
// 005cf7ce: MOV EAX,dword ptr [ESP + 0x548]
// 005cf7d5: LEA EDI,[ESP + 0x458]
// 005cf7dc: LEA ESI,[ESP + 0x4a8]
// 005cf7e3: FSTP double ptr [ESP + 0x4a8]
// 005cf7ea: FSTP double ptr [ESP + 0x4b0]
// 005cf7f1: MOVSD ES:EDI,ESI
// 005cf7f2: MOVSD ES:EDI,ESI
// 005cf7f3: MOVSD ES:EDI,ESI
// 005cf7f4: MOVSD ES:EDI,ESI
// 005cf7f5: FLD double ptr [EAX]
// 005cf7f7: FLD double ptr [EAX + 0x8]
// 005cf7fa: LEA EDI,[ESP + 0x528]
// 005cf801: LEA ESI,[ESP + 0x418]
// 005cf808: FXCH
// 005cf80a: FSUB double ptr [ESP + 0x458]
// 005cf811: FXCH
// 005cf813: FSUB double ptr [ESP + 0x460]
// 005cf81a: FXCH
// 005cf81c: FSTP double ptr [ESP + 0x418]
// 005cf823: FSTP double ptr [ESP + 0x420]
// 005cf82a: MOVSD ES:EDI,ESI
// 005cf82b: MOVSD ES:EDI,ESI
// 005cf82c: MOVSD ES:EDI,ESI
// 005cf82d: MOVSD ES:EDI,ESI
// 005cf82e: MOV ESI,dword ptr [ESP + 0x550]
// 005cf835: LEA EAX,[ESP + 0x98]
// 005cf83c: SHL ESI,0x4
// 005cf83f: ADD ESI,EAX
// 005cf841: MOV EAX,dword ptr [ESP + 0x528]
// 005cf848: MOV dword ptr [ESI],EAX
// 005cf84a: MOV EAX,dword ptr [ESP + 0x52c]
// 005cf851: MOV dword ptr [ESI + 0x4],EAX
// 005cf854: MOV EAX,dword ptr [ESP + 0x530]
// 005cf85b: MOV dword ptr [ESI + 0x8],EAX
// 005cf85e: MOV EAX,dword ptr [ESP + 0x534]
// 005cf865: MOV dword ptr [ESI + 0xc],EAX
// 005cf868: LEA EAX,[EBX + 0x128]
// 005cf86e: MOV dword ptr [ESP + 0x588],EAX
// 005cf875: LEA EAX,[EBX + 0xd8]
// 005cf87b: MOV dword ptr [ESP + 0x5bc],EAX
// 005cf882: LEA EAX,[EBX + 0x118]
// 005cf888: MOV dword ptr [ESP + 0x580],EAX
// 005cf88f: LEA EAX,[EBX + 0xc0]
// 005cf895: MOV dword ptr [ESP + 0x5c0],EAX
// 005cf89c: LEA EAX,[EBX + 0x108]
// 005cf8a2: LEA EDI,[EBX + 0xa8]
// 005cf8a8: MOV dword ptr [ESP + 0x574],EAX
// 005cf8af: LEA EAX,[EBX + 0x84]
// 005cf8b5: MOV dword ptr [ESP + 0x5a0],EAX
// 005cf8bc: LEA EAX,[EBX + 0x34]
// 005cf8bf: MOV dword ptr [ESP + 0x5b8],EAX
// 005cf8c6: LEA EAX,[EBX + 0x74]
// 005cf8c9: MOV dword ptr [ESP + 0x5a4],EAX
// 005cf8d0: LEA EAX,[EBX + 0x1c]
// 005cf8d3: MOV dword ptr [ESP + 0x5d0],EAX
// 005cf8da: LEA EAX,[EBX + 0x64]
// 005cf8dd: MOV dword ptr [ESP + 0x59c],EAX
// 005cf8e4: LEA EAX,[EBX + 0x4]
// 005cf8e7: MOV dword ptr [ESP + 0x540],EAX
// 005cf8ee: MOV EAX,dword ptr [ESP + 0x55c]
// 005cf8f5: FLDZ
// 005cf8f7: FCOMP double ptr [ESP + EAX*0x1 + 0x208]
// 005cf8fe: FNSTSW AX
// 005cf900: SAHF
// 005cf901: JNC 0x005cfdeb
//   XREF to: 005cfdeb (CONDITIONAL_JUMP)
// 005cf907: MOV EAX,dword ptr [ESP + 0x568]
// 005cf90e: MOV dword ptr [EBX],0x3
// 005cf914: FLD double ptr [EAX]
// 005cf916: MOV EAX,dword ptr [ESP + 0x540]
// 005cf91d: FSTP double ptr [EAX]
// 005cf91f: MOV EAX,dword ptr [ESP + 0x568]
// 005cf926: FLD double ptr [EAX + 0x8]
// 005cf929: MOV EAX,dword ptr [ESP + 0x540]
// 005cf930: FSTP double ptr [EAX + 0x8]
// 005cf933: MOV EAX,dword ptr [ESP + 0x568]
// 005cf93a: FLD double ptr [EAX + 0x10]
// 005cf93d: MOV EAX,dword ptr [ESP + 0x540]
// 005cf944: FSTP double ptr [EAX + 0x10]
// 005cf947: MOV EAX,dword ptr [ESP + 0x5dc]
// 005cf94e: FLD double ptr [EAX]
// 005cf950: MOV EAX,dword ptr [ESP + 0x59c]
// 005cf957: FSTP double ptr [EAX]
// 005cf959: MOV EAX,dword ptr [ESP + 0x5dc]
// 005cf960: FLD double ptr [EAX + 0x8]
// 005cf963: MOV EAX,dword ptr [ESP + 0x59c]
// 005cf96a: FSTP double ptr [EAX + 0x8]
// 005cf96d: MOV EAX,dword ptr [ESP + 0x5d0]
// 005cf974: FLD double ptr [EDX]
// 005cf976: FSTP double ptr [EAX]
// 005cf978: FLD double ptr [EDX + 0x8]
// 005cf97b: FSTP double ptr [EAX + 0x8]
// 005cf97e: FLD double ptr [EDX + 0x10]
// 005cf981: FSTP double ptr [EAX + 0x10]
// 005cf984: MOV EAX,dword ptr [ESP + 0x54c]
// 005cf98b: FLD double ptr [EAX]
// 005cf98d: MOV EAX,dword ptr [ESP + 0x5a4]
// 005cf994: FSTP double ptr [EAX]
// 005cf996: MOV EAX,dword ptr [ESP + 0x54c]
// 005cf99d: FLD double ptr [EAX + 0x8]
// 005cf9a0: MOV EAX,dword ptr [ESP + 0x5a4]
// 005cf9a7: FSTP double ptr [EAX + 0x8]
// 005cf9aa: MOV EAX,dword ptr [ESP + 0x5b8]
// 005cf9b1: FLD double ptr [ECX]
// 005cf9b3: FSTP double ptr [EAX]
// 005cf9b5: FLD double ptr [ECX + 0x8]
// 005cf9b8: FSTP double ptr [EAX + 0x8]
// 005cf9bb: FLD double ptr [ECX + 0x10]
// 005cf9be: FSTP double ptr [EAX + 0x10]
// 005cf9c1: MOV EAX,dword ptr [ESP + 0x5a0]
// 005cf9c8: FLD double ptr [ESI]
// 005cf9ca: FSTP double ptr [EAX]
// 005cf9cc: FLD double ptr [ESI + 0x8]
// 005cf9cf: FSTP double ptr [EAX + 0x8]
// 005cf9d2: MOV dword ptr [EBX + 0xa4],0x4
// 005cf9dc: MOV EAX,dword ptr [ESP + 0x54c]
// 005cf9e3: FLD double ptr [EDX]
// 005cf9e5: FSTP double ptr [EDI]
// 005cf9e7: FLD double ptr [EDX + 0x8]
// 005cf9ea: FSTP double ptr [EDI + 0x8]
// 005cf9ed: FLD double ptr [EDX + 0x10]
// 005cf9f0: FSTP double ptr [EDI + 0x10]
// 005cf9f3: FLD double ptr [EAX]
// 005cf9f5: MOV EAX,dword ptr [ESP + 0x574]
// 005cf9fc: FSTP double ptr [EAX]
// 005cf9fe: MOV EAX,dword ptr [ESP + 0x54c]
// 005cfa05: FLD double ptr [EAX + 0x8]
// 005cfa08: MOV EAX,dword ptr [ESP + 0x574]
// 005cfa0f: FSTP double ptr [EAX + 0x8]
// 005cfa12: MOV EAX,dword ptr [ESP + 0x560]
// 005cfa19: FLD double ptr [EAX]
// 005cfa1b: MOV EAX,dword ptr [ESP + 0x5c0]
// 005cfa22: FSTP double ptr [EAX]
// 005cfa24: MOV EAX,dword ptr [ESP + 0x560]
// 005cfa2b: FLD double ptr [EAX + 0x8]
// 005cfa2e: MOV EAX,dword ptr [ESP + 0x5c0]
// 005cfa35: FSTP double ptr [EAX + 0x8]
// 005cfa38: MOV EAX,dword ptr [ESP + 0x560]
// 005cfa3f: FLD double ptr [EAX + 0x10]
// 005cfa42: MOV EAX,dword ptr [ESP + 0x5c0]
// 005cfa49: FSTP double ptr [EAX + 0x10]
// 005cfa4c: MOV EAX,dword ptr [ESP + 0x5e0]
// 005cfa53: FLD double ptr [EAX]
// 005cfa55: MOV EAX,dword ptr [ESP + 0x580]
// 005cfa5c: FSTP double ptr [EAX]
// 005cfa5e: MOV EAX,dword ptr [ESP + 0x5e0]
// 005cfa65: FLD double ptr [EAX + 0x8]
// 005cfa68: MOV EAX,dword ptr [ESP + 0x580]
// 005cfa6f: FSTP double ptr [EAX + 0x8]
// 005cfa72: MOV EAX,dword ptr [ESP + 0x56c]
// 005cfa79: FLD double ptr [EAX]
// 005cfa7b: MOV EAX,dword ptr [ESP + 0x5bc]
// 005cfa82: FSTP double ptr [EAX]
// 005cfa84: MOV EAX,dword ptr [ESP + 0x56c]
// 005cfa8b: FLD double ptr [EAX + 0x8]
// 005cfa8e: MOV EAX,dword ptr [ESP + 0x5bc]
// 005cfa95: FSTP double ptr [EAX + 0x8]
// 005cfa98: MOV EAX,dword ptr [ESP + 0x56c]
// 005cfa9f: FLD double ptr [EAX + 0x10]
// 005cfaa2: MOV EAX,dword ptr [ESP + 0x5bc]
// 005cfaa9: FSTP double ptr [EAX + 0x10]
// 005cfaac: MOV EAX,dword ptr [ESP + 0x548]
// 005cfab3: FLD double ptr [EAX]
// 005cfab5: MOV EAX,dword ptr [ESP + 0x588]
// 005cfabc: FSTP double ptr [EAX]
// 005cfabe: MOV EAX,dword ptr [ESP + 0x548]
// 005cfac5: FLD double ptr [EAX + 0x8]
// 005cfac8: MOV EAX,dword ptr [ESP + 0x588]
// 005cfacf: FSTP double ptr [EAX + 0x8]
// 005cfad2: LEA EAX,[EBX + 0xf0]
// 005cfad8: MOV EDX,dword ptr [ECX]
// 005cfada: MOV dword ptr [EAX],EDX
// 005cfadc: MOV EDX,dword ptr [ECX + 0x4]
// 005cfadf: MOV dword ptr [EAX + 0x4],EDX
// 005cfae2: MOV EDX,dword ptr [ECX + 0x8]
// 005cfae5: MOV dword ptr [EAX + 0x8],EDX
// 005cfae8: MOV EDX,dword ptr [ECX + 0xc]
// 005cfaeb: MOV dword ptr [EAX + 0xc],EDX
// 005cfaee: MOV EDX,dword ptr [ECX + 0x10]
// 005cfaf1: MOV dword ptr [EAX + 0x10],EDX
// 005cfaf4: MOV EDX,dword ptr [ECX + 0x14]
// 005cfaf7: MOV dword ptr [EAX + 0x14],EDX
// 005cfafa: MOV EAX,dword ptr [ESI]
// 005cfafc: MOV dword ptr [EBX + 0x138],EAX
// 005cfb02: MOV EAX,dword ptr [ESI + 0x4]
// 005cfb05: MOV dword ptr [EBX + 0x13c],EAX
// 005cfb0b: MOV EAX,dword ptr [ESI + 0x8]
// 005cfb0e: MOV dword ptr [EBX + 0x140],EAX
// 005cfb14: MOV EAX,dword ptr [ESI + 0xc]
// 005cfb17: MOV dword ptr [EBX + 0x144],EAX
// 005cfb1d: MOV EAX,0x1
// 005cfb22: MOV ESP,EBP
// 005cfb24: POP EBP
// 005cfb25: POP EDI
// 005cfb26: POP ESI
// 005cfb27: POP EBX
// 005cfb28: RET
// 005cfb29: MOV EDI,dword ptr [ESP + 0x214]
//   Label: LAB_005cfb29
// 005cfb30: MOV EAX,dword ptr [ESP + 0x210]
// 005cfb37: TEST EDI,0x7fffffff
// 005cfb3d: JNZ 0x005cfb69
//   XREF to: 005cfb69 (CONDITIONAL_JUMP)
// 005cfb3f: TEST EAX,EAX
// 005cfb41: JNZ 0x005cfb69
//   XREF to: 005cfb69 (CONDITIONAL_JUMP)
// 005cfb43: MOV EAX,0x2
// 005cfb48: MOV EDI,0x1
// 005cfb4d: XOR EDX,EDX
// 005cfb4f: MOV dword ptr [ESP + 0x5b4],EAX
// 005cfb56: MOV dword ptr [ESP + 0x5ac],EDX
// 005cfb5d: MOV dword ptr [ESP + 0x594],EDI
// 005cfb64: JMP 0x005cebeb
//   XREF to: 005cebeb (UNCONDITIONAL_JUMP)
// 005cfb69: MOV ESI,0x1
//   Label: LAB_005cfb69
// 005cfb6e: XOR ECX,ECX
// 005cfb70: MOV EDX,0x2
// 005cfb75: MOV dword ptr [ESP + 0x5b4],ECX
// 005cfb7c: MOV dword ptr [ESP + 0x5ac],ESI
// 005cfb83: MOV dword ptr [ESP + 0x594],EDX
// 005cfb8a: JMP 0x005cebeb
//   XREF to: 005cebeb (UNCONDITIONAL_JUMP)
// 005cfb8f: MOV dword ptr [EBX + 0xa4],0x3
//   Label: LAB_005cfb8f
// 005cfb99: MOV EAX,dword ptr [ESP + 0x5d8]
// 005cfba0: FLD double ptr [ECX]
// 005cfba2: FSTP double ptr [EAX]
// 005cfba4: FLD double ptr [ECX + 0x8]
// 005cfba7: FSTP double ptr [EAX + 0x8]
// 005cfbaa: FLD double ptr [ECX + 0x10]
// 005cfbad: FSTP double ptr [EAX + 0x10]
// 005cfbb0: MOV EAX,dword ptr [ESP + 0x578]
// 005cfbb7: FLD double ptr [EDI]
// 005cfbb9: FSTP double ptr [EAX]
// 005cfbbb: FLD double ptr [EDI + 0x8]
// 005cfbbe: FSTP double ptr [EAX + 0x8]
// 005cfbc1: MOV EAX,dword ptr [ESP + 0x564]
// 005cfbc8: FLD double ptr [EAX]
// 005cfbca: MOV EAX,dword ptr [ESP + 0x544]
// 005cfbd1: FSTP double ptr [EAX]
// 005cfbd3: MOV EAX,dword ptr [ESP + 0x564]
// 005cfbda: FLD double ptr [EAX + 0x8]
// 005cfbdd: MOV EAX,dword ptr [ESP + 0x544]
// 005cfbe4: FSTP double ptr [EAX + 0x8]
// 005cfbe7: MOV EAX,dword ptr [ESP + 0x564]
// 005cfbee: FLD double ptr [EAX + 0x10]
// 005cfbf1: MOV EAX,dword ptr [ESP + 0x544]
// 005cfbf8: FSTP double ptr [EAX + 0x10]
// 005cfbfb: MOV EAX,dword ptr [ESP + 0x5e4]
// 005cfc02: FLD double ptr [EAX]
// 005cfc04: MOV EAX,dword ptr [ESP + 0x598]
// 005cfc0b: FSTP double ptr [EAX]
// 005cfc0d: MOV EAX,dword ptr [ESP + 0x5e4]
// 005cfc14: FLD double ptr [EAX + 0x8]
// 005cfc17: MOV EAX,dword ptr [ESP + 0x598]
// 005cfc1e: FSTP double ptr [EAX + 0x8]
// 005cfc21: MOV EAX,dword ptr [ESP + 0x5d4]
// 005cfc28: FLD double ptr [EDX]
// 005cfc2a: FSTP double ptr [EAX]
// 005cfc2c: FLD double ptr [EDX + 0x8]
// 005cfc2f: FSTP double ptr [EAX + 0x8]
// 005cfc32: FLD double ptr [EDX + 0x10]
// 005cfc35: FSTP double ptr [EAX + 0x10]
// 005cfc38: MOV EAX,dword ptr [ESP + 0x584]
// 005cfc3f: FLD double ptr [ESI]
// 005cfc41: FSTP double ptr [EAX]
// 005cfc43: FLD double ptr [ESI + 0x8]
// 005cfc46: FSTP double ptr [EAX + 0x8]
// 005cfc49: MOV dword ptr [EBX],0x3
// 005cfc4f: MOV EAX,dword ptr [ESP + 0x53c]
// 005cfc56: MOV EBX,dword ptr [ECX]
// 005cfc58: MOV dword ptr [EAX],EBX
// 005cfc5a: MOV EBX,dword ptr [ECX + 0x4]
// 005cfc5d: MOV dword ptr [EAX + 0x4],EBX
// 005cfc60: MOV EBX,dword ptr [ECX + 0x8]
// 005cfc63: MOV dword ptr [EAX + 0x8],EBX
// 005cfc66: MOV EBX,dword ptr [ECX + 0xc]
// 005cfc69: MOV dword ptr [EAX + 0xc],EBX
// 005cfc6c: MOV EBX,dword ptr [ECX + 0x10]
// 005cfc6f: MOV dword ptr [EAX + 0x10],EBX
// 005cfc72: MOV EBX,dword ptr [ECX + 0x14]
// 005cfc75: MOV dword ptr [EAX + 0x14],EBX
// 005cfc78: MOV EAX,dword ptr [ESP + 0x590]
// 005cfc7f: MOV ECX,dword ptr [EDI]
// 005cfc81: MOV dword ptr [EAX],ECX
// 005cfc83: MOV ECX,dword ptr [EDI + 0x4]
// 005cfc86: MOV dword ptr [EAX + 0x4],ECX
// 005cfc89: MOV ECX,dword ptr [EDI + 0x8]
// 005cfc8c: MOV dword ptr [EAX + 0x8],ECX
// 005cfc8f: MOV ECX,dword ptr [EDI + 0xc]
// 005cfc92: MOV dword ptr [EAX + 0xc],ECX
// 005cfc95: MOV EAX,dword ptr [ESP + 0x5c4]
// 005cfc9c: MOV ECX,dword ptr [EDX]
// 005cfc9e: MOV dword ptr [EAX],ECX
// 005cfca0: MOV ECX,dword ptr [EDX + 0x4]
// 005cfca3: MOV dword ptr [EAX + 0x4],ECX
// 005cfca6: MOV ECX,dword ptr [EDX + 0x8]
// 005cfca9: MOV dword ptr [EAX + 0x8],ECX
// 005cfcac: MOV ECX,dword ptr [EDX + 0xc]
// 005cfcaf: MOV dword ptr [EAX + 0xc],ECX
// 005cfcb2: MOV ECX,dword ptr [EDX + 0x10]
// 005cfcb5: MOV dword ptr [EAX + 0x10],ECX
// 005cfcb8: MOV ECX,dword ptr [EDX + 0x14]
// 005cfcbb: MOV dword ptr [EAX + 0x14],ECX
// 005cfcbe: MOV EAX,dword ptr [ESP + 0x58c]
// 005cfcc5: MOV EDX,dword ptr [ESI]
// 005cfcc7: MOV dword ptr [EAX],EDX
// 005cfcc9: MOV EDX,dword ptr [ESI + 0x4]
// 005cfccc: MOV dword ptr [EAX + 0x4],EDX
// 005cfccf: MOV EDX,dword ptr [ESI + 0x8]
// 005cfcd2: MOV dword ptr [EAX + 0x8],EDX
// 005cfcd5: MOV EDX,dword ptr [ESI + 0xc]
// 005cfcd8: MOV dword ptr [EAX + 0xc],EDX
// 005cfcdb: MOV EAX,dword ptr [ESP + 0x5e8]
// 005cfce2: FLD double ptr [EAX]
// 005cfce4: MOV EAX,dword ptr [ESP + 0x5c8]
// 005cfceb: FSTP double ptr [EAX]
// 005cfced: MOV EAX,dword ptr [ESP + 0x5e8]
// 005cfcf4: FLD double ptr [EAX + 0x8]
// 005cfcf7: MOV EAX,dword ptr [ESP + 0x5c8]
// 005cfcfe: FSTP double ptr [EAX + 0x8]
// 005cfd01: MOV EAX,dword ptr [ESP + 0x5e8]
// 005cfd08: FLD double ptr [EAX + 0x10]
// 005cfd0b: MOV EAX,dword ptr [ESP + 0x5c8]
// 005cfd12: FSTP double ptr [EAX + 0x10]
// 005cfd15: MOV EAX,dword ptr [ESP + 0x5cc]
// 005cfd1c: FLD double ptr [EAX]
// 005cfd1e: MOV EAX,dword ptr [ESP + 0x57c]
// 005cfd25: FSTP double ptr [EAX]
// 005cfd27: MOV EAX,dword ptr [ESP + 0x5cc]
// 005cfd2e: FLD double ptr [EAX + 0x8]
// 005cfd31: MOV EAX,dword ptr [ESP + 0x57c]
// 005cfd38: FSTP double ptr [EAX + 0x8]
// 005cfd3b: MOV EAX,0x1
// 005cfd40: MOV ESP,EBP
// 005cfd42: POP EBP
// 005cfd43: POP EDI
// 005cfd44: POP ESI
// 005cfd45: POP EBX
// 005cfd46: RET
// 005cfd47: FLDZ
//   Label: LAB_005cfd47
// 005cfd49: FCOMP double ptr [ESP + 0x210]
// 005cfd50: FNSTSW AX
// 005cfd52: SAHF
// 005cfd53: JBE 0x005cfd67
//   XREF to: 005cfd67 (CONDITIONAL_JUMP)
// 005cfd55: FLDZ
// 005cfd57: FCOMP double ptr [ESP + 0x218]
// 005cfd5e: FNSTSW AX
// 005cfd60: SAHF
// 005cfd61: JA 0x005cf2ff
//   XREF to: 005cf2ff (CONDITIONAL_JUMP)
// 005cfd67: FLDZ
//   Label: LAB_005cfd67
// 005cfd69: FCOMP double ptr [ESP + 0x208]
// 005cfd70: FNSTSW AX
// 005cfd72: SAHF
// 005cfd73: JA 0x005cfda9
//   XREF to: 005cfda9 (CONDITIONAL_JUMP)
// 005cfd75: FLDZ
// 005cfd77: FCOMP double ptr [ESP + 0x218]
// 005cfd7e: FNSTSW AX
// 005cfd80: SAHF
// 005cfd81: JA 0x005cfda9
//   XREF to: 005cfda9 (CONDITIONAL_JUMP)
// 005cfd83: MOV EDX,0x2
//   Label: LAB_005cfd83
// 005cfd88: MOV EAX,0x1
// 005cfd8d: XOR ECX,ECX
// 005cfd8f: MOV dword ptr [ESP + 0x538],EDX
// 005cfd96: MOV dword ptr [ESP + 0x5a8],ECX
// 005cfd9d: MOV dword ptr [ESP + 0x5b0],EAX
// 005cfda4: JMP 0x005cf320
//   XREF to: 005cf320 (UNCONDITIONAL_JUMP)
// 005cfda9: FLDZ
//   Label: LAB_005cfda9
// 005cfdab: FCOMP double ptr [ESP + 0x208]
// 005cfdb2: FNSTSW AX
// 005cfdb4: SAHF
// 005cfdb5: JBE 0x005cfdc5
//   XREF to: 005cfdc5 (CONDITIONAL_JUMP)
// 005cfdb7: FLDZ
// 005cfdb9: FCOMP double ptr [ESP + 0x218]
// 005cfdc0: FNSTSW AX
// 005cfdc2: SAHF
// 005cfdc3: JA 0x005cfd83
//   XREF to: 005cfd83 (CONDITIONAL_JUMP)
// 005cfdc5: MOV EDI,0x1
//   Label: LAB_005cfdc5
// 005cfdca: XOR ESI,ESI
// 005cfdcc: MOV ECX,0x2
// 005cfdd1: MOV dword ptr [ESP + 0x538],ESI
// 005cfdd8: MOV dword ptr [ESP + 0x5a8],EDI
// 005cfddf: MOV dword ptr [ESP + 0x5b0],ECX
// 005cfde6: JMP 0x005cf320
//   XREF to: 005cf320 (UNCONDITIONAL_JUMP)
// 005cfdeb: MOV dword ptr [EBX],0x4
//   Label: LAB_005cfdeb
// 005cfdf1: MOV EAX,dword ptr [ESP + 0x540]
// 005cfdf8: FLD double ptr [EDX]
// 005cfdfa: FSTP double ptr [EAX]
// 005cfdfc: FLD double ptr [EDX + 0x8]
// 005cfdff: FSTP double ptr [EAX + 0x8]
// 005cfe02: FLD double ptr [EDX + 0x10]
// 005cfe05: FSTP double ptr [EAX + 0x10]
// 005cfe08: MOV EAX,dword ptr [ESP + 0x54c]
// 005cfe0f: FLD double ptr [EAX]
// 005cfe11: MOV EAX,dword ptr [ESP + 0x59c]
// 005cfe18: FSTP double ptr [EAX]
// 005cfe1a: MOV EAX,dword ptr [ESP + 0x54c]
// 005cfe21: FLD double ptr [EAX + 0x8]
// 005cfe24: MOV EAX,dword ptr [ESP + 0x59c]
// 005cfe2b: FSTP double ptr [EAX + 0x8]
// 005cfe2e: MOV EAX,dword ptr [ESP + 0x560]
// 005cfe35: FLD double ptr [EAX]
// 005cfe37: MOV EAX,dword ptr [ESP + 0x5d0]
// 005cfe3e: FSTP double ptr [EAX]
// 005cfe40: MOV EAX,dword ptr [ESP + 0x560]
// 005cfe47: FLD double ptr [EAX + 0x8]
// 005cfe4a: MOV EAX,dword ptr [ESP + 0x5d0]
// 005cfe51: FSTP double ptr [EAX + 0x8]
// 005cfe54: MOV EAX,dword ptr [ESP + 0x560]
// 005cfe5b: FLD double ptr [EAX + 0x10]
// 005cfe5e: MOV EAX,dword ptr [ESP + 0x5d0]
// 005cfe65: FSTP double ptr [EAX + 0x10]
// 005cfe68: MOV EAX,dword ptr [ESP + 0x5e0]
// 005cfe6f: FLD double ptr [EAX]
// 005cfe71: MOV EAX,dword ptr [ESP + 0x5a4]
// 005cfe78: FSTP double ptr [EAX]
// 005cfe7a: MOV EAX,dword ptr [ESP + 0x5e0]
// 005cfe81: FLD double ptr [EAX + 0x8]
// 005cfe84: MOV EAX,dword ptr [ESP + 0x5a4]
// 005cfe8b: FSTP double ptr [EAX + 0x8]
// 005cfe8e: MOV EAX,dword ptr [ESP + 0x56c]
// 005cfe95: FLD double ptr [EAX]
// 005cfe97: MOV EAX,dword ptr [ESP + 0x5b8]
// 005cfe9e: FSTP double ptr [EAX]
// 005cfea0: MOV EAX,dword ptr [ESP + 0x56c]
// 005cfea7: FLD double ptr [EAX + 0x8]
// 005cfeaa: MOV EAX,dword ptr [ESP + 0x5b8]
// 005cfeb1: FSTP double ptr [EAX + 0x8]
// 005cfeb4: MOV EAX,dword ptr [ESP + 0x56c]
// 005cfebb: FLD double ptr [EAX + 0x10]
// 005cfebe: MOV EAX,dword ptr [ESP + 0x5b8]
// 005cfec5: FSTP double ptr [EAX + 0x10]
// 005cfec8: MOV EAX,dword ptr [ESP + 0x548]
// 005cfecf: FLD double ptr [EAX]
// 005cfed1: MOV EAX,dword ptr [ESP + 0x5a0]
// 005cfed8: FSTP double ptr [EAX]
// 005cfeda: MOV EAX,dword ptr [ESP + 0x548]
// 005cfee1: FLD double ptr [EAX + 0x8]
// 005cfee4: MOV EAX,dword ptr [ESP + 0x5a0]
// 005cfeeb: FSTP double ptr [EAX + 0x8]
// 005cfeee: LEA EAX,[EBX + 0x4c]
// 005cfef1: FLD double ptr [ECX]
// 005cfef3: FSTP double ptr [EAX]
// 005cfef5: FLD double ptr [ECX + 0x8]
// 005cfef8: FSTP double ptr [EAX + 0x8]
// 005cfefb: FLD double ptr [ECX + 0x10]
// 005cfefe: FSTP double ptr [EAX + 0x10]
// 005cff01: LEA EAX,[EBX + 0x94]
// 005cff07: FLD double ptr [ESI]
// 005cff09: FSTP double ptr [EAX]
// 005cff0b: FLD double ptr [ESI + 0x8]
// 005cff0e: FSTP double ptr [EAX + 0x8]
// 005cff11: MOV EAX,dword ptr [ESP + 0x568]
// 005cff18: MOV dword ptr [EBX + 0xa4],0x3
// 005cff22: MOV EBX,dword ptr [EAX]
// 005cff24: MOV dword ptr [EDI],EBX
// 005cff26: MOV EBX,dword ptr [EAX + 0x4]
// 005cff29: MOV dword ptr [EDI + 0x4],EBX
// 005cff2c: MOV EBX,dword ptr [EAX + 0x8]
// 005cff2f: MOV dword ptr [EDI + 0x8],EBX
// 005cff32: MOV EBX,dword ptr [EAX + 0xc]
// 005cff35: MOV dword ptr [EDI + 0xc],EBX
// 005cff38: FLD double ptr [EAX + 0x10]
// 005cff3b: MOV EAX,dword ptr [ESP + 0x5dc]
// 005cff42: FSTP double ptr [EDI + 0x10]
// 005cff45: FLD double ptr [EAX]
// 005cff47: MOV EAX,dword ptr [ESP + 0x574]
// 005cff4e: FSTP double ptr [EAX]
// 005cff50: MOV EAX,dword ptr [ESP + 0x5dc]
// 005cff57: FLD double ptr [EAX + 0x8]
// 005cff5a: MOV EAX,dword ptr [ESP + 0x574]
// 005cff61: FSTP double ptr [EAX + 0x8]
// 005cff64: MOV EAX,dword ptr [ESP + 0x5c0]
// 005cff6b: MOV EBX,dword ptr [EDX]
// 005cff6d: MOV dword ptr [EAX],EBX
// 005cff6f: MOV EBX,dword ptr [EDX + 0x4]
// 005cff72: MOV dword ptr [EAX + 0x4],EBX
// 005cff75: MOV EBX,dword ptr [EDX + 0x8]
// 005cff78: MOV dword ptr [EAX + 0x8],EBX
// 005cff7b: MOV EBX,dword ptr [EDX + 0xc]
// 005cff7e: MOV dword ptr [EAX + 0xc],EBX
// 005cff81: MOV EBX,dword ptr [EDX + 0x10]
// 005cff84: MOV dword ptr [EAX + 0x10],EBX
// 005cff87: MOV EBX,dword ptr [EDX + 0x14]
// 005cff8a: MOV dword ptr [EAX + 0x14],EBX
// 005cff8d: MOV EAX,dword ptr [ESP + 0x54c]
// 005cff94: FLD double ptr [EAX]
// 005cff96: MOV EAX,dword ptr [ESP + 0x580]
// 005cff9d: FSTP double ptr [EAX]
// 005cff9f: MOV EAX,dword ptr [ESP + 0x54c]
// 005cffa6: FLD double ptr [EAX + 0x8]
// 005cffa9: MOV EAX,dword ptr [ESP + 0x580]
// 005cffb0: FSTP double ptr [EAX + 0x8]
// 005cffb3: MOV EAX,dword ptr [ESP + 0x5bc]
// 005cffba: MOV EDX,dword ptr [ECX]
// 005cffbc: MOV dword ptr [EAX],EDX
// 005cffbe: MOV EDX,dword ptr [ECX + 0x4]
// 005cffc1: MOV dword ptr [EAX + 0x4],EDX
// 005cffc4: MOV EDX,dword ptr [ECX + 0x8]
// 005cffc7: MOV dword ptr [EAX + 0x8],EDX
// 005cffca: MOV EDX,dword ptr [ECX + 0xc]
// 005cffcd: MOV dword ptr [EAX + 0xc],EDX
// 005cffd0: MOV EDX,dword ptr [ECX + 0x10]
// 005cffd3: MOV dword ptr [EAX + 0x10],EDX
// 005cffd6: MOV EDX,dword ptr [ECX + 0x14]
// 005cffd9: MOV dword ptr [EAX + 0x14],EDX
// 005cffdc: MOV EAX,dword ptr [ESP + 0x588]
// 005cffe3: MOV EDX,dword ptr [ESI]
// 005cffe5: MOV dword ptr [EAX],EDX
// 005cffe7: MOV EDX,dword ptr [ESI + 0x4]
// 005cffea: MOV dword ptr [EAX + 0x4],EDX
// 005cffed: MOV EDX,dword ptr [ESI + 0x8]
// 005cfff0: MOV dword ptr [EAX + 0x8],EDX
// 005cfff3: MOV EDX,dword ptr [ESI + 0xc]
// 005cfff6: MOV dword ptr [EAX + 0xc],EDX
// 005cfff9: MOV EAX,0x1
// 005cfffe: MOV ESP,EBP
// 005d0000: POP EBP
// 005d0001: POP EDI
// 005d0002: POP ESI
// 005d0003: POP EBX
// 005d0004: RET

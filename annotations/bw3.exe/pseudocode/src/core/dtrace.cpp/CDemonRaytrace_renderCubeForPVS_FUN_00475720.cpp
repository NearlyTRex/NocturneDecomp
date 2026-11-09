// Name: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
// Address: 00475720
// Address Range: [[00475720, 00476066]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode)

{
  uint uVar1;
  int iVar2;
  CDemonRenderer *this_ptr_00;
  CDemonRenderer *this_ptr_01;
  CDemonRenderer *this_ptr_02;
  CDemonRenderer *this_ptr_03;
  CDemonRenderer *this_ptr_04;
  CDemonRenderer *this_ptr_05;
  float10 fVar3;
  SMRGLHeaderPrimitive *pSVar4;
  SMRGLHeaderPrimitive aSStack_d4 [4];
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  byte local_4c [8];
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  CDemonCube *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  _DAT_01c0b7a4 = _DAT_01c0b7a4 + 1;
  if (((((*(int *)&this_ptr->field_0x54 <= grid_x) && (*(int *)&this_ptr->field_0x58 <= grid_y)) &&
       (*(int *)&this_ptr->field_0x5c <= grid_z)) &&
      ((grid_x <= *(int *)&this_ptr->field_0x60 && (grid_y <= *(int *)&this_ptr->field_0x64)))) &&
     (grid_z <= *(int *)&this_ptr->field_0x68)) {
    local_34 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00473b60(this_ptr,grid_x,grid_y,grid_z);
    if ((local_34 != (CDemonCube *)0x0) && (*(int *)local_34 != 0)) {
      local_28 = (float)grid_x;
      local_18 = grid_y;
      local_14 = grid_z;
      local_20 = (float)grid_y;
      local_ac = local_28 * *(float *)&this_ptr->field_0x28 + *(float *)&this_ptr->field_0x10;
      local_30 = (float)grid_z;
      local_a8 = local_20 * *(float *)&this_ptr->field_0x2c + *(float *)&this_ptr->field_0x14;
      _DAT_01c0b7a8 = _DAT_01c0b7a8 + 1;
      local_a4 = local_30 * *(float *)&this_ptr->field_0x30 + *(float *)&this_ptr->field_0x18;
      local_64 = (int)ROUND(local_ac * _DAT_005dee30);
      local_60 = (int)ROUND(local_a8 * _DAT_005dee30);
      local_5c = (int)ROUND(local_a4 * _DAT_005dee30);
      engine_special_cpp_FUN_005632a3((SProjectedVertex *)*0x01BDD7E4,(CVector3i *)&local_64);
      local_14 = grid_x + 1;
      local_2c = (float)local_14;
      local_ac = local_2c * *(float *)&this_ptr->field_0x28 + *(float *)&this_ptr->field_0x10;
      local_a8 = local_20 * *(float *)&this_ptr->field_0x2c + *(float *)&this_ptr->field_0x14;
      local_a4 = local_30 * *(float *)&this_ptr->field_0x30 + *(float *)&this_ptr->field_0x18;
      local_7c = (int)ROUND(local_ac * _DAT_005dee30);
      local_78 = (int)ROUND(local_a8 * _DAT_005dee30);
      local_74 = (int)ROUND(local_a4 * _DAT_005dee30);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(*0x01BDD7E4 + 0x30),(CVector3i *)&local_7c);
      local_14 = grid_z + 1;
      local_ac = local_2c * *(float *)&this_ptr->field_0x28 + *(float *)&this_ptr->field_0x10;
      local_24 = (float)local_14;
      local_a8 = local_20 * *(float *)&this_ptr->field_0x2c + *(float *)&this_ptr->field_0x14;
      local_a4 = local_24 * *(float *)&this_ptr->field_0x30 + *(float *)&this_ptr->field_0x18;
      local_40 = (int)ROUND(local_ac * _DAT_005dee30);
      local_3c = (int)ROUND(local_a8 * _DAT_005dee30);
      local_38 = (int)ROUND(local_a4 * _DAT_005dee30);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(*0x01BDD7E4 + 0x60),(CVector3i *)&local_40);
      local_ac = local_28 * *(float *)&this_ptr->field_0x28 + *(float *)&this_ptr->field_0x10;
      local_a8 = local_20 * *(float *)&this_ptr->field_0x2c + *(float *)&this_ptr->field_0x14;
      local_a4 = local_24 * *(float *)&this_ptr->field_0x30 + *(float *)&this_ptr->field_0x18;
      local_58 = (int)ROUND(local_ac * _DAT_005dee30);
      local_54 = (int)ROUND(local_a8 * _DAT_005dee30);
      local_50 = (int)ROUND(local_a4 * _DAT_005dee30);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(*0x01BDD7E4 + 0x90),(CVector3i *)&local_58);
      local_14 = grid_y + 1;
      local_ac = local_28 * *(float *)&this_ptr->field_0x28 + *(float *)&this_ptr->field_0x10;
      local_1c = (float)local_14;
      local_a8 = local_1c * *(float *)&this_ptr->field_0x2c + *(float *)&this_ptr->field_0x14;
      local_a4 = local_30 * *(float *)&this_ptr->field_0x30 + *(float *)&this_ptr->field_0x18;
      local_a0 = (int)ROUND(local_ac * _DAT_005dee30);
      local_9c = (int)ROUND(local_a8 * _DAT_005dee30);
      local_98 = (int)ROUND(local_a4 * _DAT_005dee30);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(*0x01BDD7E4 + 0xc0),(CVector3i *)&local_a0);
      local_ac = local_2c * *(float *)&this_ptr->field_0x28 + *(float *)&this_ptr->field_0x10;
      local_a8 = local_1c * *(float *)&this_ptr->field_0x2c + *(float *)&this_ptr->field_0x14;
      local_a4 = local_30 * *(float *)&this_ptr->field_0x30 + *(float *)&this_ptr->field_0x18;
      local_94 = (int)ROUND(local_ac * _DAT_005dee30);
      local_90 = (int)ROUND(local_a8 * _DAT_005dee30);
      local_8c = (int)ROUND(local_a4 * _DAT_005dee30);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(*0x01BDD7E4 + 0xf0),(CVector3i *)&local_94);
      local_ac = local_2c * *(float *)&this_ptr->field_0x28 + *(float *)&this_ptr->field_0x10;
      local_a8 = local_1c * *(float *)&this_ptr->field_0x2c + *(float *)&this_ptr->field_0x14;
      local_a4 = local_24 * *(float *)&this_ptr->field_0x30 + *(float *)&this_ptr->field_0x18;
      local_70 = (int)ROUND(local_ac * _DAT_005dee30);
      local_6c = (int)ROUND(local_a8 * _DAT_005dee30);
      local_68 = (int)ROUND(local_a4 * _DAT_005dee30);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(*0x01BDD7E4 + 0x120),(CVector3i *)&local_70);
      local_ac = local_28 * *(float *)&this_ptr->field_0x28 + *(float *)&this_ptr->field_0x10;
      local_a8 = local_1c * *(float *)&this_ptr->field_0x2c + *(float *)&this_ptr->field_0x14;
      local_a4 = local_24 * *(float *)&this_ptr->field_0x30 + *(float *)&this_ptr->field_0x18;
      local_88 = (int)ROUND(local_ac * _DAT_005dee30);
      local_84 = (int)ROUND(local_a8 * _DAT_005dee30);
      local_80 = (int)ROUND(local_a4 * _DAT_005dee30);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(*0x01BDD7E4 + 0x150),(CVector3i *)&local_88);
      uVar1 = DAT_0060b024 & DAT_0060b054 & DAT_0060b084 & DAT_0060b0b4 & DAT_0060b0e4 &
              DAT_0060b114 & DAT_0060b144 & DAT_0060b174;
      pSVar4 = aSStack_d4;
      if (((uVar1 & 0x80000000) == 0) || ((char)uVar1 == '\0')) {
        _DAT_01c0b7ac = _DAT_01c0b7ac + 1;
        if (1 < render_mode) {
          local_14 = grid_z;
          local_d0 = 4;
          local_cc = 0;
          local_c8 = 0;
          local_c4 = -1;
          fVar3 = ((float10)grid_z * (float10)*(float *)&this_ptr->field_0x30 +
                  (float10)*(float *)&this_ptr->field_0x18) * (float10)_DAT_005bca69;
          local_bc = 0;
          local_b4 = 5;
          local_b0 = 4;
          round();
          local_c0 = (int)ROUND(fVar3);
          local_b8 = 1;
          iVar2 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                            (this_ptr_00,pSVar4);
          pSVar4 = aSStack_d4;
          if (iVar2 == 0) {
            local_14 = grid_z + 1;
            local_c4 = 1;
            fVar3 = ((float10)local_14 * (float10)*(float *)&this_ptr->field_0x30 +
                    (float10)*(float *)&this_ptr->field_0x18) * (float10)_DAT_005bca71;
            local_bc = 2;
            local_b8 = 3;
            local_b4 = 7;
            local_b0 = 6;
            local_cc = iVar2;
            local_c8 = iVar2;
            round();
            local_c0 = (int)ROUND(fVar3);
            iVar2 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                              (this_ptr_01,pSVar4);
            pSVar4 = aSStack_d4;
            if (iVar2 == 0) {
              local_14 = grid_x;
              local_cc = -1;
              fVar3 = ((float10)grid_x * (float10)*(float *)&this_ptr->field_0x28 +
                      (float10)*(float *)&this_ptr->field_0x10) * (float10)_DAT_005bca69;
              local_b8 = 4;
              local_b4 = 7;
              local_b0 = 3;
              local_c8 = iVar2;
              local_c4 = iVar2;
              local_bc = iVar2;
              round();
              local_c0 = (int)ROUND(fVar3);
              iVar2 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                                (this_ptr_02,pSVar4);
              pSVar4 = aSStack_d4;
              if (iVar2 == 0) {
                local_14 = grid_x + 1;
                local_cc = 1;
                fVar3 = ((float10)local_14 * (float10)*(float *)&this_ptr->field_0x28 +
                        (float10)*(float *)&this_ptr->field_0x10) * (float10)_DAT_005bca71;
                local_bc = 1;
                local_b4 = 6;
                local_b0 = 5;
                local_c8 = iVar2;
                local_c4 = iVar2;
                round();
                local_c0 = (int)ROUND(fVar3);
                local_b8 = 2;
                iVar2 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                                  (this_ptr_03,pSVar4);
                pSVar4 = aSStack_d4;
                if (iVar2 == 0) {
                  local_c8 = 1;
                  local_14 = grid_y + 1;
                  local_c4 = 0;
                  fVar3 = ((float10)local_14 * (float10)*(float *)&this_ptr->field_0x2c +
                          (float10)*(float *)&this_ptr->field_0x14) * (float10)_DAT_005bca71;
                  local_bc = 4;
                  local_b8 = 5;
                  local_b4 = 6;
                  local_b0 = 7;
                  local_cc = iVar2;
                  round();
                  local_c0 = (int)ROUND(fVar3);
                  iVar2 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                                    (this_ptr_04,pSVar4);
                  pSVar4 = aSStack_d4;
                  if (iVar2 == 0) {
                    local_c8 = -1;
                    local_14 = grid_y;
                    local_c4 = 0;
                    fVar3 = ((float10)grid_y * (float10)*(float *)&this_ptr->field_0x2c +
                            (float10)*(float *)&this_ptr->field_0x14) * (float10)_DAT_005bca69;
                    local_bc = 0;
                    local_b4 = 2;
                    local_b0 = 3;
                    local_cc = iVar2;
                    round();
                    local_c0 = (int)ROUND(fVar3);
                    local_b8 = 1;
                    iVar2 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                                      (this_ptr_05,pSVar4);
                    if (iVar2 == 0) {
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        local_4c._0_4_ =
             (float)grid_x * *(float *)&this_ptr->field_0x28 + *(float *)&this_ptr->field_0x10;
        local_14 = grid_z;
        local_4c._4_4_ =
             (float)grid_y * *(float *)&this_ptr->field_0x2c + *(float *)&this_ptr->field_0x14;
        _DAT_01c0b7b0 = _DAT_01c0b7b0 + 1;
        local_44 = (float)grid_z * *(float *)&this_ptr->field_0x30 + *(float *)&this_ptr->field_0x18
        ;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                  (DAT_005f2afc,(CVector3f *)local_4c);
        core_dcube_cpp_CDemonCube_rotateVertices_FUN_004540c0(local_34,*(uint *)this_ptr);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                  (DAT_005f2afc,(CVector3f *)&DAT_02cfd900);
        iVar2 = _DAT_01c0b7b4;
        *(CDemonCube **)(_DAT_01c0b7b4 * 4 + 0x1c0b7bc) = local_34;
        iVar2 = iVar2 * 0xc;
        if (&DAT_01c1f03c + iVar2 != local_4c) {
          *(uint *)(&DAT_01c1f03c + iVar2) = local_4c._0_4_;
          *(uint *)(&DAT_01c1f040 + iVar2) = local_4c._4_4_;
          *(float *)(&DAT_01c1f044 + iVar2) = local_44;
        }
        _DAT_01c0b7b4 = _DAT_01c0b7b4 + 1;
        if (19999 < _DAT_01c0b7b4) {
          _DAT_01d71de0 = "..\\core\\dtrace.cpp";
          _DAT_01d71de4 = 0x792;
          core_main_c_FUN_004e4330("Too many drawn cubes.  Need to recompile.");
          return;
        }
      }
    }
  }
  return;
}

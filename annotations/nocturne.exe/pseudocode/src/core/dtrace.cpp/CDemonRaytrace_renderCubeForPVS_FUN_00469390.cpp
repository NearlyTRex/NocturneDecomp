// Name: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
// Address: 00469390
// Address Range: [[00469390, 00469cd6]]
// Convention: unknown
// Signature: void core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace *param_1,float param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace *param_1,float param_2,int param_3,int param_4,int param_5)

{
  CDemonRenderer *pCVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  float unaff_ESI;
  int unaff_EDI;
  SMRGLHeaderPrimitive *pSVar4;
  CVector3i local_a0;
  CVector3i local_94;
  CVector3i local_88;
  CVector3i local_7c;
  CVector3i local_70;
  CVector3f local_64;
  CVector3i local_58;
  CDemonCube *local_4c;
  CVector3i local_40;
  CDemonCube *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  _DAT_01b7b734 = _DAT_01b7b734 + 1;
  if ((((((param_1->grid_bounds_min).x <= (int)param_2) && ((param_1->grid_bounds_min).y <= param_3)
        ) && ((param_1->grid_bounds_min).z <= param_4)) &&
      (((int)param_2 <= (param_1->grid_bounds_max).x && (param_3 <= (param_1->grid_bounds_max).y))))
     && (param_4 <= (param_1->grid_bounds_max).z)) {
    local_34 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
                         (param_1,(int)param_2,param_3,param_4);
    if ((local_34 != (CDemonCube *)0x0) && (local_34->voxel_buffer1 != (SVoxelGrid *)0x0)) {
      local_28 = (float)(int)param_2;
      local_18 = param_3;
      local_14 = param_4;
      local_20 = (float)param_3;
      local_30 = (float)param_4;
      _DAT_01b7b738 = _DAT_01b7b738 + 1;
      local_64.x = (float)(int)ROUND((local_28 * (param_1->cell_size).x + (param_1->bbox_min).x) *
                                     _DAT_0059c8a0);
      local_64.y = (float)(int)ROUND((local_20 * (param_1->cell_size).y + (param_1->bbox_min).y) *
                                     _DAT_0059c8a0);
      local_64.z = (float)(int)ROUND((local_30 * (param_1->cell_size).z + (param_1->bbox_min).z) *
                                     _DAT_0059c8a0);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae700->vertex_buffer_ptr->projected_vertex,(CVector3i *)&local_64);
      local_14 = (int)param_2 + 1;
      local_2c = (float)local_14;
      local_7c.x = (int)ROUND((local_2c * (param_1->cell_size).x + (param_1->bbox_min).x) *
                              _DAT_0059c8a0);
      local_7c.y = (int)ROUND((local_20 * (param_1->cell_size).y + (param_1->bbox_min).y) *
                              _DAT_0059c8a0);
      local_7c.z = (int)ROUND((local_30 * (param_1->cell_size).z + (param_1->bbox_min).z) *
                              _DAT_0059c8a0);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae700->vertex_buffer_ptr[1].projected_vertex,&local_7c);
      local_14 = param_4 + 1;
      local_24 = (float)local_14;
      local_40.x = (int)ROUND((local_2c * (param_1->cell_size).x + (param_1->bbox_min).x) *
                              _DAT_0059c8a0);
      local_40.y = (int)ROUND((local_20 * (param_1->cell_size).y + (param_1->bbox_min).y) *
                              _DAT_0059c8a0);
      local_40.z = (int)ROUND((local_24 * (param_1->cell_size).z + (param_1->bbox_min).z) *
                              _DAT_0059c8a0);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae700->vertex_buffer_ptr[2].projected_vertex,&local_40);
      local_58.x = (int)ROUND((local_28 * (param_1->cell_size).x + (param_1->bbox_min).x) *
                              _DAT_0059c8a0);
      local_58.y = (int)ROUND((local_20 * (param_1->cell_size).y + (param_1->bbox_min).y) *
                              _DAT_0059c8a0);
      local_58.z = (int)ROUND((local_24 * (param_1->cell_size).z + (param_1->bbox_min).z) *
                              _DAT_0059c8a0);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae700->vertex_buffer_ptr[3].projected_vertex,&local_58);
      local_14 = param_3 + 1;
      local_1c = (float)local_14;
      local_a0.x = (int)ROUND((local_28 * (param_1->cell_size).x + (param_1->bbox_min).x) *
                              _DAT_0059c8a0);
      local_a0.y = (int)ROUND((local_1c * (param_1->cell_size).y + (param_1->bbox_min).y) *
                              _DAT_0059c8a0);
      local_a0.z = (int)ROUND((local_30 * (param_1->cell_size).z + (param_1->bbox_min).z) *
                              _DAT_0059c8a0);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae700->vertex_buffer_ptr[4].projected_vertex,&local_a0);
      local_94.x = (int)ROUND((local_2c * (param_1->cell_size).x + (param_1->bbox_min).x) *
                              _DAT_0059c8a0);
      local_94.y = (int)ROUND((local_1c * (param_1->cell_size).y + (param_1->bbox_min).y) *
                              _DAT_0059c8a0);
      local_94.z = (int)ROUND((local_30 * (param_1->cell_size).z + (param_1->bbox_min).z) *
                              _DAT_0059c8a0);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae700->vertex_buffer_ptr[5].projected_vertex,&local_94);
      local_70.x = (int)ROUND((local_2c * (param_1->cell_size).x + (param_1->bbox_min).x) *
                              _DAT_0059c8a0);
      local_70.y = (int)ROUND((local_1c * (param_1->cell_size).y + (param_1->bbox_min).y) *
                              _DAT_0059c8a0);
      local_70.z = (int)ROUND((local_24 * (param_1->cell_size).z + (param_1->bbox_min).z) *
                              _DAT_0059c8a0);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae700->vertex_buffer_ptr[6].projected_vertex,&local_70);
      local_88.x = (int)ROUND((local_28 * (param_1->cell_size).x + (param_1->bbox_min).x) *
                              _DAT_0059c8a0);
      local_88.y = (int)ROUND((local_1c * (param_1->cell_size).y + (param_1->bbox_min).y) *
                              _DAT_0059c8a0);
      local_88.z = (int)ROUND((local_24 * (param_1->cell_size).z + (param_1->bbox_min).z) *
                              _DAT_0059c8a0);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae700->vertex_buffer_ptr[7].projected_vertex,&local_88);
      pCVar1 = 0x01B4D738;
      uVar2 = DAT_005c5024 & DAT_005c5054 & DAT_005c5084 & DAT_005c50b4 & DAT_005c50e4 &
              DAT_005c5114 & DAT_005c5144 & DAT_005c5174;
      if (((uVar2 & 0x80000000) == 0) || ((char)uVar2 == '\0')) {
        _DAT_01b7b73c = _DAT_01b7b73c + 1;
        if (1 < param_5) {
          local_14 = param_4;
          pSVar4 = (SMRGLHeaderPrimitive *)0x469a74;
          round
                    ((double)(((float)param_4 * (param_1->cell_size).z + (param_1->bbox_min).z) *
                             (float)-256));
          iVar3 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
                            (pCVar1,pSVar4);
          pCVar1 = 0x01B4D738;
          if (iVar3 == 0) {
            local_18 = param_4 + 1;
            pSVar4 = (SMRGLHeaderPrimitive *)0x469ae8;
            round
                      ((double)(((float)local_18 * (param_1->cell_size).z + (param_1->bbox_min).z) *
                               (float)256));
            iVar3 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
                              (pCVar1,pSVar4);
            pCVar1 = 0x01B4D738;
            if (iVar3 == 0) {
              local_1c = param_2;
              pSVar4 = (SMRGLHeaderPrimitive *)0x469b55;
              round
                        ((double)(((float)(int)param_2 * (param_1->cell_size).x +
                                  (param_1->bbox_min).x) * (float)-256));
              iVar3 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
                                (pCVar1,pSVar4);
              pCVar1 = 0x01B4D738;
              if (iVar3 == 0) {
                local_20 = (float)((int)param_2 + 1);
                pSVar4 = (SMRGLHeaderPrimitive *)0x469bc1;
                round
                          ((double)(((float)(int)local_20 * (param_1->cell_size).x +
                                    (param_1->bbox_min).x) * (float)256));
                iVar3 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
                                  (pCVar1,pSVar4);
                pCVar1 = 0x01B4D738;
                if (iVar3 == 0) {
                  local_24 = (float)(unaff_EBX + 1);
                  pSVar4 = (SMRGLHeaderPrimitive *)0x469c40;
                  round
                            ((double)(((float)(int)local_24 * (param_1->cell_size).y +
                                      (param_1->bbox_min).y) * (float)256));
                  iVar3 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
                                    (pCVar1,pSVar4);
                  pCVar1 = 0x01B4D738;
                  if (iVar3 == 0) {
                    pSVar4 = (SMRGLHeaderPrimitive *)0x469cb3;
                    local_28 = unaff_ESI;
                    round
                              ((double)(((float)(int)unaff_ESI * (param_1->cell_size).y +
                                        (param_1->bbox_min).y) * (float)-256));
                    iVar3 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
                                      (pCVar1,pSVar4);
                    if (iVar3 == 0) {
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        local_64.x = (float)(int)param_2 * (param_1->cell_size).x + (param_1->bbox_min).x;
        local_2c = (float)param_4;
        local_64.y = (float)unaff_EDI * (param_1->cell_size).y + (param_1->bbox_min).y;
        _DAT_01b7b740 = _DAT_01b7b740 + 1;
        local_64.z = (float)param_4 * (param_1->cell_size).z + (param_1->bbox_min).z;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (DAT_005ae704,&local_64);
        core_dcube_cpp_CDemonCube_rotateVertices_FUN_0044aff0(local_4c,param_1->rendering_mode);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (DAT_005ae704,(CVector3f *)&DAT_02dd1184);
        iVar3 = _DAT_01b7b744;
        *(CDemonCube **)(_DAT_01b7b744 * 4 + 0x1b7b74c) = local_4c;
        iVar3 = iVar3 * 0xc;
        if ((CVector3f *)(&DAT_01b8efcc + iVar3) != &local_64) {
          ((CVector3f *)(&DAT_01b8efcc + iVar3))->x = local_64.x;
          *(float *)(&DAT_01b8efd0 + iVar3) = local_64.y;
          *(float *)(&DAT_01b8efd4 + iVar3) = local_64.z;
        }
        _DAT_01b7b744 = _DAT_01b7b744 + 1;
        if (19999 < _DAT_01b7b744) {
          PTR_01cc4800 = "..\\core\\dtrace.cpp";
          INT_01cc4804 = 0x792;
          core_main_c_FUN_004c8440("Too many drawn cubes.  Need to recompile.");
          return;
        }
      }
    }
  }
  return;
}

// Name: core_set.cpp_CDemonSet_FUN_0056d4a0
// Address: 0056d4a0
// Address Range: [[0056d4a0, 0056db79]]
// Convention: __cdecl
// Signature: int core_set.cpp_CDemonSet_FUN_0056d4a0(CDemonSet * this_ptr)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_FUN_0056d4a0(CDemonSet *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CVector3f *pCVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int iVar9;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  CVector3f *in_stack_00000014;
  CMatrix3x3f *in_stack_00000018;
  float local_b4;
  float local_b0;
  CVector3f local_ac;
  CVector3f local_a0 [2];
  float local_84;
  float local_80;
  float local_7c;
  int local_78;
  int local_74;
  int local_70;
  CVector3f local_64;
  CVector3f local_58 [3];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar8 = g_DynamicLightCount;
  if (in_stack_00000008 == (CVector3f *)0x0) {
    g_PrimaryDirectionalLightCount = (int)in_stack_00000008;
    if (0 < g_DynamicLightCount) {
      iVar5 = g_DynamicLightCount * 4;
      iVar4 = 0;
      iVar9 = 0;
      do {
        iVar7 = iVar9;
        if (*(int *)(*(int *)((int)g_DynamicLights + iVar4) + 0x1cb4) != 0) {
          iVar7 = iVar9 + 4;
          g_PrimaryDirectionalLightCount = g_PrimaryDirectionalLightCount + 1;
          *(int *)((int)&g_PrimaryDirectionalLights + iVar9) =
               *(int *)((int)g_DynamicLights + iVar4);
        }
        iVar4 = iVar4 + 4;
        iVar9 = iVar7;
      } while (SBORROW /* signed borrow */4(iVar4,iVar5) != iVar4 + iVar8 * -4 < 0);
    }
    g_SecondaryDirectionalLightCount = 0;
    if (0 < g_ActiveLightCount) {
      iVar9 = g_ActiveLightCount * 4;
      iVar5 = 0;
      iVar8 = 0;
      do {
        iVar4 = iVar8;
        if (*(int *)(*(int *)((int)g_ActiveLightList + iVar5) + 0x1cb4) != 0) {
          iVar4 = iVar8 + 4;
          g_SecondaryDirectionalLightCount = g_SecondaryDirectionalLightCount + 1;
          *(int *)((int)g_SecondaryDirectionalLights + iVar8) =
               *(int *)((int)g_ActiveLightList + iVar5);
        }
        iVar5 = iVar5 + 4;
        iVar8 = iVar4;
      } while (iVar5 < iVar9);
    }
    g_GlobeLightCount = g_CoronaGlobeCount;
    if (0 < g_CoronaGlobeCount) {
      iVar5 = g_CoronaGlobeCount * 4;
      iVar8 = 0;
      do {
        iVar9 = iVar8 + 4;
        *(uint *)((int)&g_GlobeLights + iVar8) = *(uint *)((int)g_CoronaGlobes + iVar8);
        iVar8 = iVar9;
      } while (iVar9 < iVar5);
    }
    g_ColorCorrectionEnabled = DAT_03277d80;
    local_70 = DAT_03277d80;
    if (0 < DAT_03277d80) {
      iVar5 = DAT_03277d80 * 4;
      iVar8 = 0;
      do {
        local_70 = iVar8 + 4;
        *(uint *)((int)&DAT_032c1944 + iVar8) = *(uint *)((int)&DAT_03277d84 + iVar8);
        iVar8 = local_70;
      } while (local_70 < iVar5);
    }
  }
  else {
    local_24 = 0;
    g_PrimaryDirectionalLightCount = 0;
    if (0 < g_DynamicLightCount) {
      iVar8 = 0;
      do {
        if (((*(CDemonCamera **)((int)g_DynamicLights + iVar8))[1].rect_array[0x61].right != 0) &&
           (iVar5 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
                              (*(CDemonCamera **)((int)g_DynamicLights + iVar8),in_stack_00000008,
                               in_stack_0000000c,in_stack_00000010), iVar5 != 0)) {
          (&g_PrimaryDirectionalLights)[g_PrimaryDirectionalLightCount] =
               *(CDemonLight **)((int)g_DynamicLights + iVar8);
          g_PrimaryDirectionalLightCount = g_PrimaryDirectionalLightCount + 1;
        }
        local_24 = local_24 + 1;
        iVar8 = iVar8 + 4;
      } while (local_24 < g_DynamicLightCount);
    }
    local_20 = 0;
    g_SecondaryDirectionalLightCount = 0;
    if (0 < g_ActiveLightCount) {
      iVar8 = 0;
      do {
        if (((*(CDemonCamera **)((int)g_ActiveLightList + iVar8))[1].rect_array[0x61].right != 0) &&
           (iVar5 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
                              (*(CDemonCamera **)((int)g_ActiveLightList + iVar8),in_stack_00000008,
                               in_stack_0000000c,in_stack_00000010), iVar5 != 0)) {
          g_SecondaryDirectionalLights[g_SecondaryDirectionalLightCount] =
               *(CDemonLight **)((int)g_ActiveLightList + iVar8);
          g_SecondaryDirectionalLightCount = g_SecondaryDirectionalLightCount + 1;
        }
        local_20 = local_20 + 1;
        iVar8 = iVar8 + 4;
      } while (local_20 < g_ActiveLightCount);
    }
    local_1c = 0;
    g_ColorCorrectionEnabled = 0;
    if (0 < DAT_03277d80) {
      local_2c = 0;
      do {
        iVar8 = *(int *)((int)&DAT_03277d84 + local_2c);
        local_64.x = *(float *)(iVar8 + 0x104) - in_stack_00000008->x;
        local_64.y = *(float *)(iVar8 + 0x108) - in_stack_00000008->y;
        local_64.z = *(float *)(iVar8 + 0x10c) - in_stack_00000008->z;
        pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                           (in_stack_00000018,local_a0,&local_64);
        if (&local_64 != pCVar6) {
          local_64.x = pCVar6->x;
          local_64.y = pCVar6->y;
          local_64.z = pCVar6->z;
        }
        if ((((in_stack_00000010->x <= local_64.x + *(float *)(iVar8 + 0x11d4)) &&
             (in_stack_00000010->y <= local_64.y + *(float *)(iVar8 + 0x11d4))) &&
            (in_stack_00000010->z <= local_64.z + *(float *)(iVar8 + 0x11d4))) &&
           (((local_64.x - *(float *)(iVar8 + 0x11d4) <= in_stack_00000014->x &&
             (local_64.y - *(float *)(iVar8 + 0x11d4) <= in_stack_00000014->y)) &&
            (local_64.z - *(float *)(iVar8 + 0x11d4) <= in_stack_00000014->z)))) {
          (&DAT_032c1944)[g_ColorCorrectionEnabled] = iVar8;
          g_ColorCorrectionEnabled = g_ColorCorrectionEnabled + 1;
        }
        local_2c = local_2c + 4;
        local_1c = local_1c + 1;
      } while (local_1c < DAT_03277d80);
    }
    local_28 = 0;
    g_GlobeLightCount = 0;
    local_70 = g_CoronaGlobeCount;
    if (0 < g_CoronaGlobeCount) {
      iVar8 = 0;
      do {
        iVar5 = core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_00471770
                          (*(CDemonGlobe **)((int)g_CoronaGlobes + iVar8),in_stack_00000008,
                           in_stack_00000018,in_stack_00000010,in_stack_00000014);
        if (iVar5 != 0) {
          (&g_GlobeLights)[g_GlobeLightCount] = *(CDemonGlobe **)((int)g_CoronaGlobes + iVar8);
          g_GlobeLightCount = g_GlobeLightCount + 1;
        }
        local_70 = local_28 + 1;
        iVar8 = iVar8 + 4;
        local_28 = local_70;
      } while (local_70 < g_CoronaGlobeCount);
    }
    local_18 = 0;
    if (0 < DAT_03277b80) {
      iVar8 = 0;
      do {
        local_70 = core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_00471770
                             (*(CDemonGlobe **)((int)&DAT_03277b84 + iVar8),in_stack_00000008,
                              in_stack_00000018,in_stack_00000010,in_stack_00000014);
        if (local_70 != 0) {
          g_GlobeLightCount = g_GlobeLightCount + 1;
          local_70 = *(int *)((int)&DAT_03277b84 + iVar8);
          (&g_GlobeLightCount)[g_GlobeLightCount] = local_70;
        }
        local_18 = local_18 + 1;
        iVar8 = iVar8 + 4;
      } while (local_18 < DAT_03277b80);
    }
    if (0 < g_ColorCorrectionEnabled) {
      local_ac.x = in_stack_00000014->x - in_stack_00000010->x;
      local_ac.y = in_stack_00000014->y - in_stack_00000010->y;
      local_ac.z = in_stack_00000014->z - in_stack_00000010->z;
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (in_stack_00000018,local_58,&local_ac);
      iVar8 = 0;
      local_7c = 0.0;
      local_80 = 0.0;
      local_84 = 0.0;
      local_ac.x = 0.0;
      local_b0 = 0.0;
      local_b4 = 0.0;
      if (0 < g_ColorCorrectionEnabled) {
        iVar5 = 0;
        do {
          iVar9 = *(int *)((int)&DAT_032c1944 + iVar5);
          if ((*(uint *)(iVar9 + 0x11d4) & 0x7fffffff) == 0) {
            local_b4 = *(float *)(iVar9 + 0x11c4) + local_b4;
            local_b0 = *(float *)(iVar9 + 0x11c8) + local_b0;
            local_ac.x = *(float *)(iVar9 + 0x11cc) + local_ac.x;
            iVar8 = iVar8 + 1;
          }
          else {
            fVar3 = *(float *)(iVar9 + 0x104) - (in_stack_00000008->x + pCVar6->x);
            fVar1 = *(float *)(iVar9 + 0x108) - (in_stack_00000008->y + pCVar6->y);
            fVar2 = *(float *)(iVar9 + 0x10c) - (in_stack_00000008->z + pCVar6->z);
            fVar1 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
            if (fVar1 <= *(float *)(iVar9 + 0x11d8)) {
              fVar1 = (1.0 - (float)(((int)fVar1 >> 1) + DAT_02d7a7b8) * *(float *)(iVar9 + 0x11dc))
                      * 0.666f;
              fVar2 = (float)2;
              local_84 = fVar1 * *(float *)(iVar9 + 0x11c4) * fVar2 + local_84;
              local_80 = fVar1 * *(float *)(iVar9 + 0x11c8) * fVar2 + local_80;
              local_7c = fVar1 * *(float *)(iVar9 + 0x11cc) * fVar2 + local_7c;
            }
          }
          iVar5 = iVar5 + 4;
        } while (SBORROW /* signed borrow */4(iVar5,g_ColorCorrectionEnabled * 4) !=
                 iVar5 + g_ColorCorrectionEnabled * -4 < 0);
      }
      if (iVar8 == 0) {
        local_74 = 0xaaaa;
        local_70 = 0xaaaa;
        local_78 = 0xaaaa;
      }
      else {
        local_78 = (int)ROUND(local_b4 * 256f);
        local_74 = (int)ROUND(local_b0 * 256f);
        local_70 = (int)ROUND(local_ac.x * 256f);
      }
      g_ColorCorrectionLightMultiplier = (int)ROUND(local_84 * 256f) + local_78;
      g_ColorCorrectionColorMultiplier = (int)ROUND(local_80 * 256f) + local_74;
      local_70 = (int)ROUND(local_7c * 256f) + local_70;
      if (0xffff < g_ColorCorrectionLightMultiplier) {
        g_ColorCorrectionLightMultiplier = 0xffff;
      }
      if (0xffff < g_ColorCorrectionColorMultiplier) {
        g_ColorCorrectionColorMultiplier = 0xffff;
      }
      g_ColorCorrectionFogMultiplier = local_70;
      if (0xffff < local_70) {
        g_ColorCorrectionFogMultiplier = 0xffff;
        return local_70;
      }
    }
  }
  return local_70;
}

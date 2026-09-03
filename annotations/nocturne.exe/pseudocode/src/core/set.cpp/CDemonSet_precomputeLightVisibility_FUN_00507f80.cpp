// Name: core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80
// Address: 00507f80
// Address Range: [[00507f80, 005084b0]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80(CDemonSet *this_ptr,int light_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80(CDemonSet *this_ptr,int light_index)

{
  CDemonLight *light_source;
  C3DSLight *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  bool bVar11;
  byte bVar12;
  int in_stack_0000000c;
  int in_stack_00000010;
  uint auStackY_182c [1443];
  char acStack_168 [248];
  CVector3f aCStack_70 [2];
  CRect CStack_50;
  C3DSCamera *pCStack_40;
  int iStack_3c;
  CBoundingBox3D *pCStack_38;
  CDemonSet *pCStack_34;
  CVector3f *pCStack_30;
  C3DSLight *pCStack_2c;
  int iStack_24;
  CDemonSet *pCStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar12 = 0;
  CStack_50.y_min = 0;
  bVar11 = _DAT_01fb99d0 == 0;
  if (bVar11) {
    core_set_cpp_CDemonSet_initScene_FUN_005084c0(this_ptr);
  }
  CStack_50.y_min = (int)bVar11;
  pCStack_20 = (CDemonSet *)0x0;
  if (0 < this_ptr->camera_count) {
    pCStack_30 = (CVector3f *)this_ptr->lights;
    CStack_50.y_max = light_index + 1;
    pCStack_40 = this_ptr->cameras;
    pCStack_38 = &this_ptr->cameras[0].box;
    iStack_3c = 0;
    pCStack_34 = this_ptr;
    pCStack_2c = (C3DSLight *)pCStack_30;
    do {
      core_setutil_cpp_C3DSCamera_apply_FUN_005148b0
                (pCStack_40 + (int)pCStack_20,&g_CDemonCamera_01fb8508);
      core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(&g_CDemonCamera_01fb8508,0);
      g_CDemonRaytrace_01fba938.rendering_mode = 1;
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(this_ptr,9999.9,0);
      core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(&g_CDemonCamera_01fb8508,0);
      core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_004421b0(&g_CDemonCamera_01fb8508);
      pCVar2 = core_dcamera_cpp_CDemonCamera_FUN_00447f20(&g_CDemonCamera_01fb8508,aCStack_70);
      if (pCVar2 != pCStack_30) {
        pCStack_30->x = pCVar2->x;
        pCStack_30->y = pCVar2->y;
        pCStack_30->z = pCVar2->z;
      }
      if (pCStack_30 + 1 != pCVar2 + 1) {
        pCStack_30[1].x = pCVar2[1].x;
        pCStack_30[1].y = pCVar2[1].y;
        pCStack_30[1].z = pCVar2[1].z;
      }
      _sprintf(acStack_168,"Camera box (%7.2f, %7.2f, %7.2f) - (%7.2f, %7.2f, %7.2f)",
                 (double)*(float *)(pCStack_2c->visible_flags + 0x54),
                 (double)*(float *)(pCStack_2c->visible_flags + 0x58),
                 (double)*(float *)(pCStack_2c->visible_flags + 0x5c),
                 (double)*(float *)(pCStack_2c->visible_flags + 0x60),
                 (double)*(float *)(pCStack_2c->visible_flags + 100));
      engine_2d_c_drawText_FUN_00402600(acStack_168,0,0x16);
      iStack_14 = 0x21;
      iStack_1c = *(int *)(in_stack_0000000c + 0x19644);
      iVar6 = 0;
      if (in_stack_00000010 != -1) {
        iStack_1c = iStack_3c;
        iVar6 = in_stack_00000010;
      }
      if (iVar6 < iStack_1c) {
        pCStack_20 = pCStack_34;
        iVar3 = iVar6 * 0x1898 + iStack_18 + in_stack_0000000c;
        iVar6 = (int)pCStack_34->cameras + in_stack_0000000c + iVar6 * 0x1898 + -4;
        do {
          iVar5 = iStack_14;
          iVar7 = iStack_14 * 0x1898;
          if (this_ptr->lights[iStack_14].light_type == 0) {
            iVar5 = 0;
            if (0 < _DAT_01fb99d0) {
              pCVar1 = pCStack_2c + iStack_14;
              iVar7 = 0;
              do {
                iVar4 = _strcmp
                                  (*(char **)(&DAT_01fb99d4 + iVar7),pCVar1->name);
                if (iVar4 == 0) break;
                iVar5 = iVar5 + 1;
                iVar7 = iVar7 + 4;
              } while (iVar5 < _DAT_01fb99d0);
            }
            if (iVar5 == _DAT_01fb99d0) {
              g_CurrentFilename = "..\\core\\set.cpp";
              g_CurrentLineNumber = 744;
              core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonSet::precomuputeLightVisibility - Unable to find light in master list");
            }
            light_source = *(CDemonLight **)(&DAT_01fb99d4 + iVar5 * 4);
            core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_00441c50
                      (&g_CDemonCamera_01fb8508,light_source,(CRect *)0x0);
            iVar5 = core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20
                              (&g_CDemonCamera_01fb8508,light_source);
            *(char *)(iVar3 + 0x19770) = (char)iVar5;
            core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00444ef0
                      (&g_CDemonCamera_01fb8508,light_source,&CStack_50);
            puVar9 = (uint *)(iVar6 + 0x19870 + (uint)bVar12 * -8);
            *(int *)(iVar6 + 0x1986c) = CStack_50.x_min;
            puVar10 = puVar9 + (uint)bVar12 * -2 + 1;
            puVar8 = (uint *)((int)&CStack_50 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            *puVar9 = *(uint *)((int)&CStack_50 + (uint)bVar12 * -8 + 4);
            *puVar10 = *puVar8;
            puVar10[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
            if (*(char *)(iVar3 + 0x19770) != '\0') {
              _sprintf(acStack_168,"Light %d, Box : %d,%d,%d,%d");
              engine_2d_c_drawText_FUN_00402600(acStack_168,0,iStack_14);
              iStack_14 = iStack_14 + 0xb;
            }
          }
          else {
            core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(&g_CDemonCamera_01fb8508,1);
            iVar7 = core_setutil_cpp_C3DSLight_isVisible_FUN_00515c40
                              ((C3DSLight *)(iVar7 + (int)pCStack_30));
            this_ptr->lights[iVar5].visible_flags[iStack_1c] = (char)iVar7;
            core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(&g_CDemonCamera_01fb8508,0);
            *(uint *)((int)&this_ptr->lights[iVar5].camera_light_bounds[0].x_min + iStack_24)
                 = 0;
            *(uint *)((int)&this_ptr->lights[iVar5].camera_light_bounds[0].x_max + iStack_24)
                 = 0;
            *(uint *)((int)&this_ptr->lights[iVar5].camera_light_bounds[0].y_min + iStack_24)
                 = 0;
            *(uint *)((int)&this_ptr->lights[iVar5].camera_light_bounds[0].y_max + iStack_24)
                 = 0;
          }
          iVar6 = iVar6 + 0x1898;
          iStack_18 = iStack_18 + 0x1898;
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < iStack_24);
      }
      _sprintf(&stack0xfffffe90,"Precomputing lights from camera : %d");
      engine_2d_c_drawText_FUN_00402600(&stack0xfffffe90,0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      pCStack_38 = (CBoundingBox3D *)((int)(pCStack_38 + 0x11) + 8);
      pCStack_34 = (CDemonSet *)&pCStack_34->cameras[0].enabled;
      iStack_3c = iStack_3c + 0x10;
      pCStack_20 = (CDemonSet *)((int)&pCStack_20->camera_count + 1);
    } while ((int)pCStack_20 < this_ptr->camera_count);
  }
  if (CStack_50.y_min != 0) {
    core_set_cpp_CDemonSet_FUN_0050ad20(this_ptr);
    g_CDemonRaytrace_01fba938.rendering_mode = 0;
    return;
  }
  g_CDemonRaytrace_01fba938.rendering_mode = 0;
  return;
}

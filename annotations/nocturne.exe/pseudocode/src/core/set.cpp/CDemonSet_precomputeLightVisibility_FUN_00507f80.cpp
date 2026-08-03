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
  C3DSCamera *pCVar1;
  C3DSLight *pCVar2;
  char cVar3;
  CVector3f *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  bool bVar13;
  byte bVar14;
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
  int iStack_28;
  int iStack_24;
  CDemonSet *pCStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar14 = 0;
  CStack_50.y_min = 0;
  bVar13 = _DAT_01fb99d0 == 0;
  if (bVar13) {
    core_set_cpp_CDemonSet_initScene_FUN_005084c0(this_ptr);
  }
  CStack_50.y_min = (int)bVar13;
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
      core_setutil_cpp_FUN_005148b0(pCStack_40 + (int)pCStack_20,&g_CDemonCamera_01fb8508);
      core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(&g_CDemonCamera_01fb8508,0);
      g_CDemonRaytrace_01fba938.rendering_mode = 1;
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(this_ptr,9999.9,0);
      core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(&g_CDemonCamera_01fb8508,0);
      core_dcamera_cpp_FUN_004421b0(&g_CDemonCamera_01fb8508);
      pCVar4 = core_dcamera_cpp_FUN_00447f20(&g_CDemonCamera_01fb8508,aCStack_70);
      if (pCVar4 != pCStack_30) {
        pCStack_30->x = pCVar4->x;
        pCStack_30->y = pCVar4->y;
        pCStack_30->z = pCVar4->z;
      }
      if (pCStack_30 + 1 != pCVar4 + 1) {
        pCStack_30[1].x = pCVar4[1].x;
        pCStack_30[1].y = pCVar4[1].y;
        pCStack_30[1].z = pCVar4[1].z;
      }
      _sprintf(acStack_168,"Camera box (%7.2f, %7.2f, %7.2f) - (%7.2f, %7.2f, %7.2f)");
      engine_2d_c_drawText_FUN_00402600(acStack_168,0,0x16);
      iStack_14 = 0x21;
      iStack_1c = *(int *)(in_stack_0000000c + 0x19644);
      iVar8 = 0;
      if (in_stack_00000010 != -1) {
        iStack_1c = iStack_3c;
        iVar8 = in_stack_00000010;
      }
      if (iVar8 < iStack_1c) {
        pCStack_20 = pCStack_34;
        iVar5 = iVar8 * 0x1898 + iStack_18 + in_stack_0000000c;
        iVar8 = (int)pCStack_34->cameras + in_stack_0000000c + iVar8 * 0x1898 + -4;
        do {
          iVar7 = iStack_14;
          iVar9 = iStack_14 * 0x1898;
          pCVar1 = this_ptr->cameras;
          if (*(int *)((int)pCVar1 + iVar9 + 0x19644) == 0) {
            iVar7 = 0;
            if (0 < _DAT_01fb99d0) {
              pCVar2 = pCStack_2c + iStack_14;
              iVar9 = 0;
              do {
                iVar6 = _strcmp
                                  (*(char **)(&DAT_01fb99d4 + iVar9),pCVar2->name);
                if (iVar6 == 0) break;
                iVar7 = iVar7 + 1;
                iVar9 = iVar9 + 4;
              } while (iVar7 < _DAT_01fb99d0);
            }
            if (iVar7 == _DAT_01fb99d0) {
              g_CHAR_PTR_01cc4800 = "..\\core\\set.cpp";
              g_INT_01cc4804 = 0x2e8;
              core_main_c_FUN_004c8440();
            }
            light_source = *(CDemonLight **)(&DAT_01fb99d4 + iVar7 * 4);
            core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_00441c50
                      (&g_CDemonCamera_01fb8508,light_source,(CRect *)0x0);
            iVar7 = core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20
                              (&g_CDemonCamera_01fb8508,light_source);
            *(char *)(iVar5 + 0x19770) = (char)iVar7;
            core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00444ef0
                      (&g_CDemonCamera_01fb8508,light_source,&CStack_50);
            puVar11 = (uint *)(iVar8 + 0x19870 + (uint)bVar14 * -8);
            *(int *)(iVar8 + 0x1986c) = CStack_50.x_min;
            puVar12 = puVar11 + (uint)bVar14 * -2 + 1;
            puVar10 = (uint *)((int)&CStack_50 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
            *puVar11 = *(uint *)((int)&CStack_50 + (uint)bVar14 * -8 + 4);
            *puVar12 = *puVar10;
            puVar12[(uint)bVar14 * -2 + 1] = puVar10[(uint)bVar14 * -2 + 1];
            if (*(char *)(iVar5 + 0x19770) != '\0') {
              _sprintf(acStack_168,"Light %d, Box : %d,%d,%d,%d");
              engine_2d_c_drawText_FUN_00402600(acStack_168,0,iStack_14);
              iStack_14 = iStack_14 + 0xb;
            }
          }
          else {
            core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(&g_CDemonCamera_01fb8508,1);
            cVar3 = core_setutil_cpp_FUN_00515c40();
            pCVar1->name[(int)(pCStack_20->lights[iVar7].visible_flags + -4)] = cVar3;
            core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(&g_CDemonCamera_01fb8508,0);
            *(uint *)((int)pCVar1 + iStack_28 + iVar9 + 0x19868) = 0;
            *(uint *)((int)pCVar1 + iStack_28 + iVar9 + 0x1986c) = 0;
            *(uint *)((int)pCVar1 + iStack_28 + iVar9 + 0x19870) = 0;
            *(uint *)((int)pCVar1 + iStack_28 + iVar9 + 0x19874) = 0;
          }
          iVar8 = iVar8 + 0x1898;
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
    core_set_cpp_FUN_0050ad20(this_ptr);
    g_CDemonRaytrace_01fba938.rendering_mode = 0;
    return;
  }
  g_CDemonRaytrace_01fba938.rendering_mode = 0;
  return;
}

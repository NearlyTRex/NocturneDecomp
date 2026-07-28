// Name: core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80
// Address: 00507f80
// Address Range: [[00507f80, 005084b0]]
// Convention: unknown
// Signature: void core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80(CDemonSet *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80(CDemonSet *param_1,int param_2)

{
  float *str2;
  CDemonLight *light_source;
  byte uVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  byte bVar10;
  uint auStackY_1834 [1443];
  char acStack_170 [4];
  CDemonLight *pCStack_16c;
  byte auStack_70 [24];
  uint uStack_58;
  uint auStack_54 [4];
  float fStack_44;
  C3DSCamera *pCStack_40;
  int iStack_3c;
  int *piStack_38;
  CDemonSet *pCStack_34;
  float *pfStack_30;
  float *pfStack_2c;
  int iStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar10 = 0;
  auStack_54[3] = 0;
  bVar9 = _DAT_01fb99d0 == 0;
  if (bVar9) {
    core_set_cpp_CDemonSet_initScene_FUN_005084c0();
  }
  auStack_54[3] = (uint)bVar9;
  iStack_20 = 0;
  if (0 < param_1->camera_count) {
    pfStack_30 = &param_1->cameras[0xf7].position.z;
    fStack_44 = (float)(param_2 + 1);
    pCStack_40 = param_1->cameras;
    piStack_38 = &param_1->cameras[0].reverb_preset;
    iStack_3c = 0;
    pCStack_34 = param_1;
    pfStack_2c = pfStack_30;
    do {
      core_setutil_cpp_FUN_005148b0(pCStack_40->name + iStack_20 * 0x1a0);
      core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290((CDemonCamera *)0x1fb8508,0);
      _DAT_01fba938 = 1;
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(param_1,9999.9,0);
      core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(0x1fb8508,0);
      core_dcamera_cpp_FUN_004421b0();
      piVar2 = (int *)core_dcamera_cpp_FUN_00447f20(0x1fb8508,auStack_70);
      if (piVar2 != piStack_38) {
        *piStack_38 = *piVar2;
        (((CBoundingBox3D *)(piStack_38 + 1))->min).x = (float)piVar2[1];
        piStack_38[2] = piVar2[2];
      }
      if (piStack_38 + 3 != piVar2 + 3) {
        piStack_38[3] = piVar2[3];
        ((CVector3f *)(piStack_38 + 4))->x = (float)piVar2[4];
        piStack_38[5] = piVar2[5];
      }
      _sprintf(acStack_170,"Camera box (%7.2f, %7.2f, %7.2f) - (%7.2f, %7.2f, %7.2f)",
                 (double)(float)pCStack_34->cameras[0].reverb_preset,
                 (double)pCStack_34->cameras[0].box.min.x,(double)pCStack_34->cameras[0].box.min.y,
                 (double)pCStack_34->cameras[0].box.min.z,(double)pCStack_34->cameras[0].box.max.x,
                 (double)pCStack_34->cameras[0].box.max.y);
      engine_2d_c_drawText_FUN_00402600(acStack_170,0,0x16);
      iStack_1c = 0x21;
      fStack_24 = param_1->cameras[0xf7].position.y;
      iStack_14 = 0;
      if (param_2 != -1) {
        fStack_24 = fStack_44;
        iStack_14 = param_2;
      }
      if (iStack_14 < (int)fStack_24) {
        iStack_28 = iStack_3c;
        iStack_18 = (int)param_1->cameras + iStack_14 * 0x1898 + iStack_20 + -4;
        iVar4 = (int)param_1->cameras + iStack_3c + iStack_14 * 0x1898 + -4;
        do {
          iVar5 = iStack_14 * 0x1898;
          if (*(int *)((int)param_1->cameras + iVar5 + 0x19644) == 0) {
            iVar5 = 0;
            if (0 < _DAT_01fb99d0) {
              str2 = pfStack_2c + iStack_14 * 0x626 + 1;
              iVar6 = 0;
              do {
                iVar3 = _strcmp
                                  (*(char **)(&DAT_01fb99d4 + iVar6),(char *)str2);
                if (iVar3 == 0) break;
                iVar5 = iVar5 + 1;
                iVar6 = iVar6 + 4;
              } while (iVar5 < _DAT_01fb99d0);
            }
            if (iVar5 == _DAT_01fb99d0) {
              PTR_01cc4800 = "..\\core\\set.cpp";
              INT_01cc4804 = 0x2e8;
              core_main_c_FUN_004c8440();
            }
            light_source = *(CDemonLight **)(&DAT_01fb99d4 + iVar5 * 4);
            core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_00441c50
                      ((CDemonCamera *)0x1fb8508,light_source,(CRect *)0x0);
            iVar5 = core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20
                              ((CDemonCamera *)0x1fb8508,light_source);
            acStack_170[0] = '\b';
            acStack_170[1] = -0x7b;
            acStack_170[2] = -5;
            acStack_170[3] = '\x01';
            *(char *)(unaff_EBP + 0x19770) = (char)iVar5;
            pCStack_16c = light_source;
            core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00444ef0();
            puVar7 = (uint *)(iVar4 + 0x19870 + (uint)bVar10 * -8);
            *(uint *)(iVar4 + 0x1986c) = uStack_58;
            puVar8 = puVar7 + (uint)bVar10 * -2 + 1;
            *puVar7 = auStack_54[(uint)bVar10 * -2];
            *puVar8 = auStack_54[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            puVar8[(uint)bVar10 * -2 + 1] =
                 (auStack_54 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
            if (*(char *)(iStack_18 + 0x19770) != '\0') {
              _sprintf();
              engine_2d_c_drawText_FUN_00402600(acStack_170,0,iStack_1c);
              iStack_1c = iStack_1c + 0xb;
            }
          }
          else {
            core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290((CDemonCamera *)0x1fb8508,1);
            uVar1 = core_setutil_cpp_FUN_00515c40();
            *(byte *)((int)param_1->cameras + iStack_20 + iVar5 + 0x1976c) = uVar1;
            core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(0x1fb8508);
            *(uint *)((int)param_1->cameras + iStack_28 + iVar5 + 0x19868) = 0;
            *(uint *)((int)param_1->cameras + iStack_28 + iVar5 + 0x1986c) = 0;
            *(uint *)((int)param_1->cameras + iStack_28 + iVar5 + 0x19870) = 0;
            *(uint *)((int)param_1->cameras + iStack_28 + iVar5 + 0x19874) = 0;
          }
          iVar4 = iVar4 + 0x1898;
          iStack_18 = iStack_18 + 0x1898;
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < (int)fStack_24);
      }
      _sprintf();
      engine_2d_c_drawText_FUN_00402600(acStack_170,0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      piStack_38 = piStack_38 + 0x68;
      pCStack_34 = (CDemonSet *)&pCStack_34->cameras[0].vdir_zone;
      iStack_3c = iStack_3c + 0x10;
      iStack_20 = iStack_20 + 1;
    } while (iStack_20 < param_1->camera_count);
  }
  if (auStack_54[3] != 0) {
    core_set_cpp_FUN_0050ad20();
    _DAT_01fba938 = 0;
    return;
  }
  _DAT_01fba938 = 0;
  return;
}

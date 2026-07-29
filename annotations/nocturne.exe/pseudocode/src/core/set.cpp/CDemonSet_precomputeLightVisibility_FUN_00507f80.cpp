// Name: core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80
// Address: 00507f80
// Address Range: [[00507f80, 005084b0]]
// Convention: unknown
// Signature: void core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80(CDemonSet *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80(CDemonSet *param_1,int param_2,int param_3,int param_4)

{
  float *str2;
  CDemonLight *light_source;
  C3DSCamera *pCVar1;
  byte uVar2;
  CVector3f *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  bool bVar11;
  byte bVar12;
  uint auStackY_1834 [1445];
  char acStack_168 [248];
  CVector3f aCStack_70 [2];
  uint uStack_58;
  uint auStack_54 [5];
  C3DSCamera *pCStack_40;
  int iStack_3c;
  int *piStack_38;
  CDemonSet *pCStack_34;
  CVector3f *pCStack_30;
  float *pfStack_2c;
  int iStack_28;
  int iStack_24;
  CDemonSet *pCStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar12 = 0;
  auStack_54[3] = 0;
  bVar11 = _DAT_01fb99d0 == 0;
  if (bVar11) {
    core_set_cpp_CDemonSet_initScene_FUN_005084c0(param_1);
  }
  auStack_54[3] = (uint)bVar11;
  pCStack_20 = (CDemonSet *)0x0;
  if (0 < param_1->camera_count) {
    pCStack_30 = (CVector3f *)&param_1->cameras[0xf7].position.z;
    auStack_54[4] = param_2 + 1;
    pCStack_40 = param_1->cameras;
    piStack_38 = &param_1->cameras[0].reverb_preset;
    iStack_3c = 0;
    pCStack_34 = param_1;
    pfStack_2c = (float *)pCStack_30;
    do {
      core_setutil_cpp_FUN_005148b0
                ((C3DSCamera *)(pCStack_40->name + (int)pCStack_20 * 0x1a0),
                 (CDemonCamera *)0x1fb8508);
      core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290((CDemonCamera *)0x1fb8508,0);
      _DAT_01fba938 = 1;
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(param_1,9999.9,0);
      core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(0x1fb8508);
      core_dcamera_cpp_FUN_004421b0((CDemonCamera *)0x1fb8508);
      pCVar3 = core_dcamera_cpp_FUN_00447f20((CDemonCamera *)0x1fb8508,aCStack_70);
      if (pCVar3 != pCStack_30) {
        pCStack_30->x = pCVar3->x;
        pCStack_30->y = pCVar3->y;
        pCStack_30->z = pCVar3->z;
      }
      if (pCStack_30 + 1 != pCVar3 + 1) {
        pCStack_30[1].x = pCVar3[1].x;
        pCStack_30[1].y = pCVar3[1].y;
        pCStack_30[1].z = pCVar3[1].z;
      }
      _sprintf(acStack_168,"Camera box (%7.2f, %7.2f, %7.2f) - (%7.2f, %7.2f, %7.2f)",(double)pfStack_2c[0x5f],
                 (double)pfStack_2c[0x60],(double)pfStack_2c[0x61],(double)pfStack_2c[0x62],
                 (double)pfStack_2c[99]);
      engine_2d_c_drawText_FUN_00402600(acStack_168,0,0x16);
      iStack_14 = 0x21;
      iStack_1c = *(int *)(param_3 + 0x19644);
      iVar6 = 0;
      if (param_4 != -1) {
        iStack_1c = iStack_3c;
        iVar6 = param_4;
      }
      if (iVar6 < iStack_1c) {
        pCStack_20 = pCStack_34;
        iVar4 = iVar6 * 0x1898 + iStack_18;
        iVar6 = (int)pCStack_34->cameras + param_3 + iVar6 * 0x1898 + -4;
        do {
          iVar7 = iStack_14 * 0x1898;
          pCVar1 = param_1->cameras;
          if (*(int *)((int)pCVar1 + iVar7 + 0x19644) == 0) {
            iVar7 = 0;
            if (0 < _DAT_01fb99d0) {
              str2 = pfStack_2c + iStack_14 * 0x626 + 1;
              iVar8 = 0;
              do {
                iVar5 = _strcmp
                                  (*(char **)(&DAT_01fb99d4 + iVar8),(char *)str2);
                if (iVar5 == 0) break;
                iVar7 = iVar7 + 1;
                iVar8 = iVar8 + 4;
              } while (iVar7 < _DAT_01fb99d0);
            }
            if (iVar7 == _DAT_01fb99d0) {
              PTR_01cc4800 = "..\\core\\set.cpp";
              INT_01cc4804 = 0x2e8;
              core_main_c_FUN_004c8440();
            }
            light_source = *(CDemonLight **)(&DAT_01fb99d4 + iVar7 * 4);
            core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_00441c50
                      ((CDemonCamera *)0x1fb8508,light_source,(CRect *)0x0);
            iVar7 = core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20
                              ((CDemonCamera *)0x1fb8508,light_source);
            *(char *)(iVar4 + param_3 + 0x19770) = (char)iVar7;
            core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00444ef0();
            puVar9 = (uint *)(iVar6 + 0x19870 + (uint)bVar12 * -8);
            *(uint *)(iVar6 + 0x1986c) = uStack_58;
            puVar10 = puVar9 + (uint)bVar12 * -2 + 1;
            *puVar9 = auStack_54[(uint)bVar12 * -2];
            *puVar10 = auStack_54[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            puVar10[(uint)bVar12 * -2 + 1] =
                 (auStack_54 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
            if (*(char *)(iStack_18 + 0x19770) != '\0') {
              _sprintf();
              engine_2d_c_drawText_FUN_00402600(&stack0xfffffe90,0,iStack_1c);
              iStack_1c = iStack_1c + 0xb;
            }
          }
          else {
            core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290((CDemonCamera *)0x1fb8508,1);
            uVar2 = core_setutil_cpp_FUN_00515c40();
            *(byte *)((int)pCStack_20->cameras + (int)pCVar1 + iVar7 + 0x19768) = uVar2;
            core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(0x1fb8508);
            *(uint *)((int)pCVar1 + iStack_28 + iVar7 + 0x19868) = 0;
            *(uint *)((int)pCVar1 + iStack_28 + iVar7 + 0x1986c) = 0;
            *(uint *)((int)pCVar1 + iStack_28 + iVar7 + 0x19870) = 0;
            *(uint *)((int)pCVar1 + iStack_28 + iVar7 + 0x19874) = 0;
          }
          iVar6 = iVar6 + 0x1898;
          iStack_18 = iStack_18 + 0x1898;
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < iStack_24);
      }
      _sprintf();
      engine_2d_c_drawText_FUN_00402600(&stack0xfffffe90,0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      piStack_38 = piStack_38 + 0x68;
      pCStack_34 = (CDemonSet *)&pCStack_34->cameras[0].vdir_zone;
      iStack_3c = iStack_3c + 0x10;
      pCStack_20 = (CDemonSet *)((int)&pCStack_20->camera_count + 1);
    } while ((int)pCStack_20 < param_1->camera_count);
  }
  if (auStack_54[3] != 0) {
    core_set_cpp_FUN_0050ad20(param_1);
    _DAT_01fba938 = 0;
    return;
  }
  _DAT_01fba938 = 0;
  return;
}

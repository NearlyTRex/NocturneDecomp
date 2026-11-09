// Name: engine_drender.cpp_FUN_0048478e
// Address: 0048478e
// Address Range: [[0048478e, 00484a32]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0048478e(int *param_1,ushort *param_2,int param_3,int param_4,uint param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_FUN_0048478e(int *param_1,ushort *param_2,int param_3,int param_4,uint param_5)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  CVector3i aCStack_68 [80];
  int iStack_18;
  int iStack_14;
  
  if (param_5 == 0xffffffff) {
    param_5 = 0x2cd;
  }
  if (param_1[7] != 0) {
    _DAT_01d1d400 = "..\\engine\\drender.cpp";
    _DAT_01d1d404 = 0xa6a;
    core_main_c_FUN_005030e0("Can't capture this type of face!");
  }
  if (param_1[1] == 0) {
    if (param_5 == 0xc0) {
      _DAT_01c4f02c = (code *)&UNK_00486de0;
    }
    else if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
    }
    else {
      _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
    }
    _DAT_01c51d18 = 6;
    _DAT_01c51d14 = param_5;
    if (0 < param_3) {
      iStack_14 = param_4 * 2;
      do {
        while ((DAT_00713a7c != 0 &&
               (iVar3 = (uint)param_2[1] * 0x30 + *param_1,
               iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                                 (*param_1 + (uint)*param_2 * 0x30,iVar3,iVar3), iVar3 == 0))) {
          param_3 = param_3 + -1;
          param_2 = (ushort *)((int)param_2 + iStack_14);
          if (param_3 < 1) {
            return;
          }
        }
        iVar3 = 0;
        if (0 < param_4) {
          puVar1 = param_2;
          iVar2 = 0;
          do {
            if (*puVar1 == 0xffff) break;
            iVar3 = iVar3 + 1;
            *(uint *)(aCStack_68 + iVar2) = (uint)*puVar1;
            puVar1 = puVar1 + 1;
            iVar2 = iVar2 + 4;
          } while (iVar3 < param_4);
        }
        if ((param_1[4] == 0) &&
           (((param_1[1] != 0 && ((_DAT_01c51d14 & 1) == 0)) || ((_DAT_01c51d14 & 5) == 0)))) {
          core_xform_cpp_transformAndClipGeometry_FUN_005b9fc0(iVar3,(int *)aCStack_68);
          if (2 < DAT_007c7554) {
            unkafter_zombie_cpp_FUN_005bf120((SRenderVertex *)&DAT_007c7558,DAT_007c7554);
          }
        }
        else if ((_DAT_01c51d14 & 0x200) == 0) {
          engine_clipper_c_clipAndRasterize_FUN_0043cbf0(iVar3,(int *)aCStack_68);
        }
        else {
          engine_clipper_c_clipPolygonToViewport_FUN_0043de60(iVar3,(int *)aCStack_68);
        }
        param_3 = param_3 + -1;
        param_2 = (ushort *)((int)param_2 + iStack_14);
        if (param_3 < 1) {
          return;
        }
      } while( true );
    }
  }
  else {
    _DAT_01c51d14 = 0;
    _DAT_01c51d18 = 0;
    _DAT_01c4f02c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26;
    if (0 < param_3) {
      iStack_18 = param_4 * 2;
      do {
        if ((DAT_00713a7c == 0) ||
           (iVar3 = (uint)param_2[1] * 0x30 + *param_1,
           iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                             (*param_1 + (uint)*param_2 * 0x30,iVar3,iVar3), iVar3 != 0)) {
          iVar3 = 0;
          if (0 < param_4) {
            puVar1 = param_2;
            iVar2 = 0;
            do {
              if (*puVar1 == 0xffff) break;
              iVar3 = iVar3 + 1;
              *(uint *)(aCStack_68 + iVar2) = (uint)*puVar1;
              puVar1 = puVar1 + 1;
              iVar2 = iVar2 + 4;
            } while (iVar3 < param_4);
          }
          if (param_1[4] == 0) {
            core_dpart_cpp_FUN_0047ab00(aCStack_68,iVar3);
          }
          else {
            core_xform_cpp_transformAndClipGeometry_FUN_005b9fc0(iVar3,(int *)aCStack_68);
            if (2 < DAT_007c7554) {
              unkafter_zombie_cpp_FUN_005bf120((SRenderVertex *)&DAT_007c7558,DAT_007c7554);
            }
          }
        }
        param_3 = param_3 + -1;
        param_2 = (ushort *)((int)param_2 + iStack_18);
      } while (0 < param_3);
    }
  }
  return;
}

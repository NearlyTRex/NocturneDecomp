// Name: engine_drender.cpp_FUN_0046c28e
// Address: 0046c28e
// Address Range: [[0046c28e, 0046c532]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0046c28e(int *param_1,ushort *param_2,int param_3,int param_4,uint param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_FUN_0046c28e(int *param_1,ushort *param_2,int param_3,int param_4,uint param_5)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  CVector3i aCStack_68 [6];
  int iStack_18;
  int iStack_14;
  
  if (param_5 == 0xffffffff) {
    param_5 = 0x2cd;
  }
  if (param_1[7] != 0) {
    _DAT_01d046a0 = "..\\engine\\drender.cpp";
    _DAT_01d046a4 = 0xa6a;
    core_main_c_FUN_004e4500("Can't capture this type of face!");
  }
  if (param_1[1] == 0) {
    if (param_5 == 0xc0) {
      _DAT_01c35e6c = (code *)&UNK_0046e8f0;
    }
    else if (DAT_006141c0 == 0x20) {
      _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
    }
    else {
      _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    _DAT_01c38b58 = 6;
    _DAT_01c38b54 = param_5;
    if (0 < param_3) {
      iStack_14 = param_4 * 2;
      do {
        while ((DAT_0070ca7c != 0 &&
               (pSVar4 = (SRenderVertex *)((uint)param_2[1] * 0x30 + *param_1),
               iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                                 ((SRenderVertex *)(*param_1 + (uint)*param_2 * 0x30),pSVar4,pSVar4)
               , iVar3 == 0))) {
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
            *(uint *)((int)&aCStack_68[0].x + iVar2) = (uint)*puVar1;
            puVar1 = puVar1 + 1;
            iVar2 = iVar2 + 4;
          } while (iVar3 < param_4);
        }
        if ((param_1[4] == 0) &&
           (((param_1[1] != 0 && ((_DAT_01c38b54 & 1) == 0)) || ((_DAT_01c38b54 & 5) == 0)))) {
          core_xform_cpp_transformAndClipGeometry_FUN_00594f40(iVar3,&aCStack_68[0].x);
          if (2 < DAT_007bee30) {
            core_zombie_cpp_FUN_0059a0b0((SRenderVertex *)&DAT_007bee34,DAT_007bee30);
          }
        }
        else if ((_DAT_01c38b54 & 0x200) == 0) {
          engine_clipper_c_clipAndRasterize_FUN_00431d90(iVar3,&aCStack_68[0].x);
        }
        else {
          engine_clipper_c_clipPolygonToViewport_FUN_00433000(iVar3,&aCStack_68[0].x);
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
    _DAT_01c38b54 = 0;
    _DAT_01c38b58 = 0;
    _DAT_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
    if (0 < param_3) {
      iStack_18 = param_4 * 2;
      do {
        if ((DAT_0070ca7c == 0) ||
           (pSVar4 = (SRenderVertex *)((uint)param_2[1] * 0x30 + *param_1),
           iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                             ((SRenderVertex *)(*param_1 + (uint)*param_2 * 0x30),pSVar4,pSVar4),
           iVar3 != 0)) {
          iVar3 = 0;
          if (0 < param_4) {
            puVar1 = param_2;
            iVar2 = 0;
            do {
              if (*puVar1 == 0xffff) break;
              iVar3 = iVar3 + 1;
              *(uint *)((int)&aCStack_68[0].x + iVar2) = (uint)*puVar1;
              puVar1 = puVar1 + 1;
              iVar2 = iVar2 + 4;
            } while (iVar3 < param_4);
          }
          if (param_1[4] == 0) {
            core_dpart_cpp_FUN_004625f0(aCStack_68,iVar3);
          }
          else {
            core_xform_cpp_transformAndClipGeometry_FUN_00594f40(iVar3,&aCStack_68[0].x);
            if (2 < DAT_007bee30) {
              core_zombie_cpp_FUN_0059a0b0((SRenderVertex *)&DAT_007bee34,DAT_007bee30);
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

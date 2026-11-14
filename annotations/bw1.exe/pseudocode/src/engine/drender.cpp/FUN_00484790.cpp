// Name: engine_drender.cpp_FUN_00484790
// Address: 00484790
// Address Range: [[00484790, 00484a32]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_00484790(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_drender_cpp_FUN_00484790(void)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  int *in_stack_00000004;
  ushort *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  CVector3i aCStack_68 [6];
  int iStack_18;
  int iStack_14;
  
  if (in_stack_00000014 == 0xffffffff) {
    in_stack_00000014 = 0x2cd;
  }
  if (in_stack_00000004[7] != 0) {
    _DAT_01d1d400 = "..\\engine\\drender.cpp";
    _DAT_01d1d404 = 0xa6a;
    core_main_c_FUN_005030e0("Can't capture this type of face!");
  }
  if (in_stack_00000004[1] == 0) {
    if (in_stack_00000014 == 0xc0) {
      _DAT_01c4f02c = (code *)&UNK_00486de0;
    }
    else if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
    }
    else {
      _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
    }
    _DAT_01c51d18 = 6;
    _DAT_01c51d14 = in_stack_00000014;
    if (0 < in_stack_0000000c) {
      iStack_14 = in_stack_00000010 * 2;
      do {
        while ((DAT_00713a7c != 0 &&
               (pSVar4 = (SRenderVertex *)((uint)in_stack_00000008[1] * 0x30 + *in_stack_00000004),
               iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                                 ((SRenderVertex *)
                                  (*in_stack_00000004 + (uint)*in_stack_00000008 * 0x30),pSVar4,
                                  pSVar4), iVar3 == 0))) {
          in_stack_0000000c = in_stack_0000000c + -1;
          in_stack_00000008 = (ushort *)((int)in_stack_00000008 + iStack_14);
          if (in_stack_0000000c < 1) {
            return;
          }
        }
        iVar3 = 0;
        if (0 < in_stack_00000010) {
          puVar1 = in_stack_00000008;
          iVar2 = 0;
          do {
            if (*puVar1 == 0xffff) break;
            iVar3 = iVar3 + 1;
            *(uint *)((int)&aCStack_68[0].x + iVar2) = (uint)*puVar1;
            puVar1 = puVar1 + 1;
            iVar2 = iVar2 + 4;
          } while (iVar3 < in_stack_00000010);
        }
        if ((in_stack_00000004[4] == 0) &&
           (((in_stack_00000004[1] != 0 && ((_DAT_01c51d14 & 1) == 0)) || ((_DAT_01c51d14 & 5) == 0)
            ))) {
          core_xform_cpp_transformAndClipGeometry_FUN_005b9fc0(iVar3,&aCStack_68[0].x);
          if (2 < DAT_007c7554) {
            core_zombie_cpp_FUN_005bf120((SRenderVertex *)&DAT_007c7558,DAT_007c7554);
          }
        }
        else if ((_DAT_01c51d14 & 0x200) == 0) {
          engine_clipper_c_clipAndRasterize_FUN_0043cbf0(iVar3,&aCStack_68[0].x);
        }
        else {
          engine_clipper_c_clipPolygonToViewport_FUN_0043de60(iVar3,&aCStack_68[0].x);
        }
        in_stack_0000000c = in_stack_0000000c + -1;
        in_stack_00000008 = (ushort *)((int)in_stack_00000008 + iStack_14);
        if (in_stack_0000000c < 1) {
          return;
        }
      } while( true );
    }
  }
  else {
    _DAT_01c51d14 = 0;
    _DAT_01c51d18 = 0;
    _DAT_01c4f02c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26;
    if (0 < in_stack_0000000c) {
      iStack_18 = in_stack_00000010 * 2;
      do {
        if ((DAT_00713a7c == 0) ||
           (pSVar4 = (SRenderVertex *)((uint)in_stack_00000008[1] * 0x30 + *in_stack_00000004),
           iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                             ((SRenderVertex *)
                              (*in_stack_00000004 + (uint)*in_stack_00000008 * 0x30),pSVar4,pSVar4),
           iVar3 != 0)) {
          iVar3 = 0;
          if (0 < in_stack_00000010) {
            puVar1 = in_stack_00000008;
            iVar2 = 0;
            do {
              if (*puVar1 == 0xffff) break;
              iVar3 = iVar3 + 1;
              *(uint *)((int)&aCStack_68[0].x + iVar2) = (uint)*puVar1;
              puVar1 = puVar1 + 1;
              iVar2 = iVar2 + 4;
            } while (iVar3 < in_stack_00000010);
          }
          if (in_stack_00000004[4] == 0) {
            core_dpart_cpp_FUN_0047ab00(aCStack_68,iVar3);
          }
          else {
            core_xform_cpp_transformAndClipGeometry_FUN_005b9fc0(iVar3,&aCStack_68[0].x);
            if (2 < DAT_007c7554) {
              core_zombie_cpp_FUN_005bf120((SRenderVertex *)&DAT_007c7558,DAT_007c7554);
            }
          }
        }
        in_stack_0000000c = in_stack_0000000c + -1;
        in_stack_00000008 = (ushort *)((int)in_stack_00000008 + iStack_18);
      } while (0 < in_stack_0000000c);
    }
  }
  return;
}

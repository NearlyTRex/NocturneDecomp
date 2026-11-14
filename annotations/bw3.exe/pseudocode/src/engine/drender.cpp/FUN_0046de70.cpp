// Name: engine_drender.cpp_FUN_0046de70
// Address: 0046de70
// Address Range: [[0046de70, 0046e112]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0046de70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_drender_cpp_FUN_0046de70(void)

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
    _DAT_01d71de0 = "..\\engine\\drender.cpp";
    _DAT_01d71de4 = 0xa6a;
    core_main_c_FUN_004e4330("Can't capture this type of face!");
  }
  if (in_stack_00000004[1] == 0) {
    if (in_stack_00000014 == 0xc0) {
      _DAT_01c6b5cc = (code *)&UNK_0046f960;
    }
    else if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
    }
    else {
      _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    _DAT_01c6e2b8 = 6;
    _DAT_01c6e2b4 = in_stack_00000014;
    if (0 < in_stack_0000000c) {
      iStack_14 = in_stack_00000010 * 2;
      do {
        while ((DAT_007303fc != 0 &&
               (pSVar4 = (SRenderVertex *)((uint)in_stack_00000008[1] * 0x30 + *in_stack_00000004),
               iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
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
           (((in_stack_00000004[1] != 0 && ((_DAT_01c6e2b4 & 1) == 0)) || ((_DAT_01c6e2b4 & 5) == 0)
            ))) {
          core_xform_cpp_transformAndClipGeometry_FUN_00587cd0(iVar3,&aCStack_68[0].x);
          if (2 < DAT_007e3e88) {
            core_asgaya_cpp_FUN_005a1ea0(&DAT_007e3e8c,DAT_007e3e88);
          }
        }
        else if ((_DAT_01c6e2b4 & 0x200) == 0) {
          engine_clipper_c_clipAndRasterize_FUN_0043a840(iVar3,&aCStack_68[0].x);
        }
        else {
          engine_clipper_c_clipPolygonToViewport_FUN_0043bac0(iVar3,&aCStack_68[0].x);
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
    _DAT_01c6e2b4 = 0;
    _DAT_01c6e2b8 = 0;
    _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
    if (0 < in_stack_0000000c) {
      iStack_18 = in_stack_00000010 * 2;
      do {
        if ((DAT_007303fc == 0) ||
           (pSVar4 = (SRenderVertex *)((uint)in_stack_00000008[1] * 0x30 + *in_stack_00000004),
           iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
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
            core_dpart_cpp_FUN_004673d0(aCStack_68,iVar3);
          }
          else {
            core_xform_cpp_transformAndClipGeometry_FUN_00587cd0(iVar3,&aCStack_68[0].x);
            if (2 < DAT_007e3e88) {
              core_asgaya_cpp_FUN_005a1ea0(&DAT_007e3e8c,DAT_007e3e88);
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

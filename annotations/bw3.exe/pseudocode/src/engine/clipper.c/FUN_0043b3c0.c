// Name: engine_clipper.c_FUN_0043b3c0
// Address: 0043b3c0
// Address Range: [[0043b3c0, 0043b420] [0043b430, 0043b492]]
// Convention: unknown
// Signature: undefined4 engine_clipper_c_FUN_0043b3c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_clipper_c_FUN_0043b3c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  
  if (DAT_007303fc != 0) {
    if (unaff_EBP < 4) {
      iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                        (DAT_007e448c,DAT_007e4490,DAT_007e4494);
      if (iVar2 == 0) {
        return 1;
      }
    }
    else {
      iVar3 = 0;
      iVar2 = (unaff_EBP + -2) * 4;
      iVar4 = 0;
      if (0 < iVar2) {
        do {
          iVar1 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                            (DAT_007e448c,*(SRenderVertex **)((int)&DAT_007e4490 + iVar3),
                             *(SRenderVertex **)((int)&DAT_007e4494 + iVar3));
          if (iVar1 == 0) {
            iVar4 = iVar4 + 1;
          }
          iVar3 = iVar3 + 4;
        } while (iVar3 < iVar2);
      }
      if (iVar4 == unaff_EBP + -2) {
        return 1;
      }
    }
  }
  _DAT_01ed3198 = _DAT_01ed3198 + unaff_EBP + -2;
  engine_special_cpp_drawPolygon2_FUN_00565c40(&DAT_007e448c,unaff_EBP,_DAT_01c6e2b4);
  return 1;
}

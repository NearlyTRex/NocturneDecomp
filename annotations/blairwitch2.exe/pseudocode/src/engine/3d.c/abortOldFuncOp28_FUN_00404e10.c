// Name: engine_3d.c_abortOldFuncOp28_FUN_00404e10
// Address: 00404e10
// Address Range: [[00404e10, 00404e57]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_abortOldFuncOp28_FUN_00404e10(SMRGLHeaderExtended *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_abortOldFuncOp28_FUN_00404e10(SMRGLHeaderExtended *primitive)

{
  byte auStack_54 [80];
  
  FUN_005b7790(auStack_54,"Old func : %d",*(uint *)primitive);
  _DAT_01d046a4 = 0xe2;
  _DAT_01d046a0 = "..\\engine\\3d.c";
  core_main_c_FUN_004e4500(auStack_54);
  return (SMRGLHeaderExtended *)&DAT_0070ca84;
}

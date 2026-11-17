// Name: core_bmppuzzl.cpp_processActivePuzzle_FUN_00411a90
// Address: 00411a90
// Address Range: [[00411a90, 00411b44]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_processActivePuzzle_FUN_00411a90(void)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_processActivePuzzle_FUN_00411a90(void)

{
  uint uVar1;
  _BIT_INTEGER32 _Var2;
  uint uVar3;
  int iVar4;
  
  uVar1 = g_INT_007dffbc;
  if (g_CPuzzle_PTR_007dffb4 != (CPuzzle *)0x0) {
    iVar4 = 0;
    _Var2 = g_MouseButtonFlags;
    while ((g_INT_007dffbc = (int)_Var2, g_MouseButtonFlags = (_BIT_INTEGER32)g_INT_007dffbc,
           g_CPuzzle_PTR_007dffb4 != (CPuzzle *)0x0 &&
           ((uVar3 = 1 << ((byte)iVar4 & 0x1f), (g_INT_007dffbc & uVar3) == (uVar1 & uVar3) ||
            ((**(code **)((int)g_CPuzzle_PTR_007dffb4->vtable + 0x24))
                       (g_CPuzzle_PTR_007dffb4,g_MouseX,g_MouseY,iVar4,(uVar3 & g_INT_007dffbc) != 0
                       ), uVar1 = g_INT_007dffbc, g_CPuzzle_PTR_007dffb4 != (CPuzzle *)0x0))))) {
      g_INT_007dffbc = uVar1;
      iVar4 = iVar4 + 1;
      _Var2 = g_MouseButtonFlags;
      uVar1 = g_INT_007dffbc;
      if (2 < iVar4) {
        (**(code **)((int)g_CPuzzle_PTR_007dffb4->vtable + 0x20))
                  (g_CPuzzle_PTR_007dffb4,g_CGamePtr->delta_time_float);
        return;
      }
    }
  }
  g_INT_007dffbc = uVar1;
  return;
}

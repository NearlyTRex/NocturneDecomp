// Name: core_bmppuzzl.cpp_processActivePuzzle_FUN_00415cd0
// Address: 00415cd0
// Address Range: [[00415cd0, 00415d84]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_processActivePuzzle_FUN_00415cd0(void)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_processActivePuzzle_FUN_00415cd0(void)

{
  uint uVar1;
  _BIT_INTEGER32 _Var2;
  uint uVar3;
  int iVar4;
  
  uVar1 = g_INT_007c3980;
  if (g_CPuzzle_PTR_007c3978 != (CPuzzle *)0x0) {
    iVar4 = 0;
    _Var2 = g_BIT_INTEGER32_01c43544;
    while ((g_INT_007c3980 = (int)_Var2, g_BIT_INTEGER32_01c43544 = (_BIT_INTEGER32)g_INT_007c3980,
           g_CPuzzle_PTR_007c3978 != (CPuzzle *)0x0 &&
           ((uVar3 = 1 << ((byte)iVar4 & 0x1f), (g_INT_007c3980 & uVar3) == (uVar1 & uVar3) ||
            ((**(code **)((int)g_CPuzzle_PTR_007c3978->vtable + 0x24))
                       (g_CPuzzle_PTR_007c3978,g_INT_01c4353c,g_INT_01c43540,iVar4,
                        (uVar3 & g_INT_007c3980) != 0), uVar1 = g_INT_007c3980,
            g_CPuzzle_PTR_007c3978 != (CPuzzle *)0x0))))) {
      g_INT_007c3980 = uVar1;
      iVar4 = iVar4 + 1;
      _Var2 = g_BIT_INTEGER32_01c43544;
      uVar1 = g_INT_007c3980;
      if (2 < iVar4) {
        (**(code **)((int)g_CPuzzle_PTR_007c3978->vtable + 0x20))
                  (g_CPuzzle_PTR_007c3978,g_CGamePtr->delta_time_float);
        return;
      }
    }
  }
  g_INT_007c3980 = uVar1;
  return;
}

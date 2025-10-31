// Name: engine_keys.cpp_clearKeypresses_FUN_00502450
// Address: 00502450
// Address Range: [[00502450, 00502454]]
// Convention: __cdecl
// Signature: void engine_keys.cpp_clearKeypresses_FUN_00502450(void)

#include "nocturne.h"

void __cdecl engine_keys_cpp_clearKeypresses_FUN_00502450(void)

{
  g_InputWriteIndex = 0;
  g_InputReadIndex = 0;
  g_InputCountMaybe = 0;
  return;
}


// Assembly code:
// 00502450: JMP 0x005f2e70
//   Label: engine_keys.cpp_clearKeypresses_FUN_00502450
//   XREF to: 005f2e70 (UNCONDITIONAL_JUMP)

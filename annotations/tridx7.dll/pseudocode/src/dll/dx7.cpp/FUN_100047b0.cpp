// Name: dll_dx7.cpp_FUN_100047b0
// Address: 100047b0
// Address Range: [[100047b0, 100047fe]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_100047b0(void)

#include "nocturne.h"

void dll_dx7_cpp_FUN_100047b0(void)

{
  if ((g_InScene != 0) && (DAT_10014228 != 0)) {
    (*g_Device->vtable->DrawIndexedPrimitive)
              (g_Device,4,0x1c4,&DAT_1013b8d8,DAT_10014228,(WORD *)&DAT_10238910,DAT_1001422c,0x1c);
    DAT_10014228 = 0;
    DAT_1001422c = 0;
  }
  return;
}

// Name: dll_dx7.cpp_flushBatch_FUN_100047b0
// Address: 100047b0
// Address Range: [[100047b0, 100047fe]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_flushBatch_FUN_100047b0(void)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_flushBatch_FUN_100047b0(void)

{
  if ((g_InScene != 0) && (g_PendingVertexCount != 0)) {
    (*g_Device->vtable->DrawIndexedPrimitive)
              (g_Device,4,0x1c4,g_VertexBuffer,g_PendingVertexCount,g_IndexBuffer,
               g_PendingIndexCount,0x1c);
    g_PendingVertexCount = 0;
    g_PendingIndexCount = 0;
  }
  return;
}

// Name: shape_meshlod.cpp_CLodMesh_eqSave_FUN_0051d0e0
// Address: 0051d0e0
// Address Range: [[0051d0e0, 0051d17c]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_eqSave_FUN_0051d0e0(CLodMesh *this_ptr,FILE *file_handle)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_eqSave_FUN_0051d0e0(CLodMesh *this_ptr,FILE *file_handle)

{
  double dVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  if (file_handle != (FILE *)0x0) {
    iVar3 = 0;
    crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
    if (0 < this_ptr->edge_count) {
      dVar1 = 9.9999999999999997e+34 * 0.98999999999999999;
      iVar4 = 0;
      do {
        puVar2 = (uint *)((int)this_ptr->edges_ptr->adjacent_tri_indices + iVar4 + -0x28);
        if (dVar1 <= *(double *)(puVar2 + 2)) {
          puVar2[4] = 0;
        }
        iVar4 = iVar4 + 0xf0;
        iVar3 = iVar3 + 1;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (file_handle,"%d,%d,%lg,%g\n",*puVar2,puVar2[1],puVar2[2],puVar2[3],
                   (double)(float)puVar2[4]);
      } while (iVar3 < this_ptr->edge_count);
    }
  }
  return;
}

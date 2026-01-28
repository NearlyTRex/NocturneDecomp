// Name: shape_superopt.cpp_CObj_copyFrom_FUN_005d2650
// Address: 005d2650
// Address Range: [[005d2650, 005d2715]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_copyFrom_FUN_005d2650(CObj *this_ptr,CObj *source)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: this_ptr */
/* WARNING: Variable defined which should be unmapped: source */

int __cdecl shape_superopt_cpp_CObj_copyFrom_FUN_005d2650(CObj *this_ptr,CObj *source)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  CVert *pCVar5;
  byte bVar6;
  int *in_stack_00000010;
  int in_stack_0000001c;
  
  bVar6 = 0;
  (*this_ptr->vtable->free)(this_ptr);
  (*this_ptr->vtable->reset)(this_ptr);
  iVar2 = (*this_ptr->vtable->init)(this_ptr,in_stack_00000010[2],*in_stack_00000010);
  if (iVar2 == 0) {
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to allocate RAM for object copy");
    return 0;
  }
  puVar4 = *(uint **)(in_stack_0000001c + 4);
  pCVar5 = this_ptr->vertex_data;
  for (uVar3 = (uint)(this_ptr->vertex_count * 0x38) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(uint *)&(pCVar5->position).x = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    pCVar5 = (CVert *)((int)pCVar5 + (uint)bVar6 * -8 + 4);
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(byte *)&(pCVar5->position).x = *(byte *)puVar4;
    puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
    pCVar5 = (CVert *)((int)pCVar5 + (uint)bVar6 * -2 + 1);
  }
  uVar3 = 0;
  if (this_ptr->poly_count != 0) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x68;
      (**(code **)(*(int *)((int)(this_ptr->poly_array->uv_coords + 5) + iVar1) + 4))();
    } while (uVar3 < (uint)this_ptr->poly_count);
  }
  this_ptr->flags = *(int *)(in_stack_0000001c + 0x10);
  return 1;
}

// Name: shape_superopt.cpp_COptimize_FUN_005d7350
// Address: 005d7350
// Address Range: [[005d7350, 005d745f]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_COptimize_FUN_005d7350(COptimize * this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_COptimize_FUN_005d7350(COptimize *this_ptr)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  CPoly *pCVar4;
  int iVar5;
  uint uVar6;
  
  shape_superopt_cpp_CObj_clearStateFlags_FUN_005d35e0(&this_ptr->obj,0xa000);
  do {
    uVar6 = 0;
    if ((this_ptr->obj).poly_count != 0) {
      pCVar4 = (this_ptr->obj).poly_array;
      do {
        if ((pCVar4->flags & 0x8000) == 0) break;
        uVar6 = uVar6 + 1;
        pCVar4 = pCVar4 + 1;
      } while (uVar6 < (uint)(this_ptr->obj).poly_count);
    }
    if (uVar6 == (this_ptr->obj).poly_count) {
      return 1;
    }
    iVar2 = (*(code *)this_ptr->vtable->field14_0x38)();
    if (iVar2 == 0) {
      shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add polygon for complex pass",0);
      return 0;
    }
    uVar6 = 0;
    (*(code *)this_ptr->vtable->field12_0x30)();
    if ((this_ptr->obj).poly_count != 0) {
      iVar5 = 0;
      do {
        pCVar4 = (this_ptr->obj).poly_array;
        if ((*(byte *)((int)(pCVar4->uv_coords + 5) + iVar5 + 1) & 0x20) != 0) {
          iVar3 = shape_superopt_cpp_FUN_005c7a90();
          if (iVar3 == 0) {
            shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add shared triangle for complex pass");
            return 0;
          }
          bVar1 = *(byte *)((int)(pCVar4->uv_coords + 5) + iVar5 + 1);
          *(byte *)((int)(pCVar4->uv_coords + 5) + iVar5 + 1) = bVar1 | 0x80;
          *(byte *)((int)(pCVar4->uv_coords + 5) + iVar5 + 1) = bVar1 & 0xdf | 0x80;
        }
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0x68;
      } while (uVar6 < (uint)(this_ptr->obj).poly_count);
    }
    iVar5 = shape_superopt_cpp_FUN_005c7b20();
    if (iVar5 == 0) {
      shape_superopt_cpp_logToFile_FUN_005c7910("Unable to build complex polygon edge list",iVar2);
      return 0;
    }
  } while( true );
}

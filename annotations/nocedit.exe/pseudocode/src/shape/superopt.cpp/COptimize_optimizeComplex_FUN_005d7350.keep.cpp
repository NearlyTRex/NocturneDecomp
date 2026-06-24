// Name: shape_superopt.cpp_COptimize_optimizeComplex_FUN_005d7350
// Address: 005d7350
// MANUAL RECONSTRUCTION
// Address Range: [[005d7350, 005d745f]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_COptimize_optimizeComplex_FUN_005d7350(COptimize *this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_COptimize_optimizeComplex_FUN_005d7350(COptimize *this_ptr)

{
  CComplexPolygon *this_ptr_00;
  int iVar2;
  CPoly *pCVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  shape_superopt_cpp_CObj_clearStateFlags_FUN_005d35e0(&this_ptr->base,0xa000);
  do {
    uVar5 = 0;
    if ((this_ptr->base).poly_count != 0) {
      pCVar3 = (this_ptr->base).poly_array;
      do {
        if ((pCVar3->flags & 0x8000) == 0) break;
        uVar5 = uVar5 + 1;
        pCVar3 = pCVar3 + 1;
      } while (uVar5 < (uint)(this_ptr->base).poly_count);
    }
    if (uVar5 == (this_ptr->base).poly_count) {
      return 1;
    }
    this_ptr_00 = (*this_ptr->vtable->addComplexPolygon)(this_ptr,(CComplexPolygon *)0x0);
    if (this_ptr_00 == (CComplexPolygon *)0x0) {
      shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add polygon for complex pass");
      return 0;
    }
    uVar6 = 0;
    (*this_ptr->vtable->findCoplanarPolygons)(this_ptr,(this_ptr->base).poly_array + uVar5,this_ptr)
    ;
    if ((this_ptr->base).poly_count != 0) {
      do {
        pCVar3 = (this_ptr->base).poly_array + uVar6;
        if ((pCVar3->flags & 0x2000) != 0) {
          iVar2 = shape_superopt_cpp_CComplexPolygon_addSharedTriangle_FUN_005c7a90
                            (this_ptr_00,pCVar3);
          if (iVar2 == 0) {
            shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add shared triangle for complex pass");
            return 0;
          }
          pCVar3->flags = pCVar3->flags & 0xffffdfff | 0x8000;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)(this_ptr->base).poly_count);
    }
    iVar4 = shape_superopt_cpp_CComplexPolygon_buildEdgeList_FUN_005c7b20(this_ptr_00);
    if (iVar4 == 0) {
      shape_superopt_cpp_logToFile_FUN_005c7910("Unable to build complex polygon edge list");
      return 0;
    }
  } while( true );
}

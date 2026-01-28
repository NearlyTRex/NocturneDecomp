// Name: shape_design.c_wrapCoordinate_FUN_0046acc0
// Address: 0046acc0
// Address Range: [[0046acc0, 0046acff]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_wrapCoordinate_FUN_0046acc0(int coordinate,int dimension)

#include "nocturne.h"

int __cdecl shape_design_c_wrapCoordinate_FUN_0046acc0(int coordinate,int dimension)

{
  if (coordinate < 0) {
    coordinate = dimension - -coordinate % dimension;
  }
  return coordinate % dimension;
}

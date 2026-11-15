// Name: core_dirmat.cpp_angleFromSinCos_FUN_00449610
// Address: 00449610
// Address Range: [[00449610, 004496dd]]
// Convention: __cdecl
// Signature: float __cdecl core_dirmat_cpp_angleFromSinCos_FUN_00449610(double y,double x)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dirmat_cpp_angleFromSinCos_FUN_00449610(double y,double x)

{
  float10 fVar1;
  double dVar2;
  float fStack_c;
  
  if ((_DAT_005cf167 <= y) || (y <= _DAT_005cf16f)) {
    if ((_DAT_005cf177 < x) && (x < 1.0)) {
      dVar2 = acos(x);
      fStack_c = (float)dVar2;
    }
    if (y < 0.0) {
      fStack_c = -fStack_c;
    }
  }
  else {
    fVar1 = asin((float10)y);
    fStack_c = (float)fVar1;
    if (x < 0.0) {
      fStack_c = (float)_DAT_005cf17f - fStack_c;
    }
  }
  if (fStack_c < (float)_DAT_005cf187) {
    fStack_c = fStack_c + _DAT_005cf18f;
  }
  if ((float)_DAT_005cf17f < fStack_c) {
    return fStack_c + _DAT_005cf193;
  }
  return fStack_c;
}

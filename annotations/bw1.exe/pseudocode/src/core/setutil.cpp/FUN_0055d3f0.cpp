// Name: FUN_0055d3f0
// Address: 0055d3f0
// Address Range: [[0055d3f0, 0055d483]]
// Convention: unknown
// Signature: void FUN_0055d3f0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055d3f0(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    _DAT_01d1d400 = "..\\core\\setutil.cpp";
    _DAT_01d1d404 = 0x39f;
    FUN_005030e0("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x11ec) <= param_2)) {
    _DAT_01d1d400 = "..\\core\\setutil.cpp";
    _DAT_01d1d404 = 0x3a3;
    FUN_005030e0("C3DSLight::setFilterFrame - invalid filter frame number");
  }
  *(int *)(param_1 + 0x1890) = param_2;
  FUN_00463e30(param_3,*(uint *)(param_1 + 0x1810 + param_2 * 4),
               *(uint *)(param_1 + 0x1774 + param_2 * 4),0,0);
  return;
}

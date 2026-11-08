// Name: FUN_00542db0
// Address: 00542db0
// Address Range: [[00542db0, 00542e43]]
// Convention: unknown
// Signature: void FUN_00542db0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00542db0(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    _DAT_01d71de0 = "..\\core\\setutil.cpp";
    _DAT_01d71de4 = 0x39f;
    FUN_004e4330("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x11ec) <= param_2)) {
    _DAT_01d71de0 = "..\\core\\setutil.cpp";
    _DAT_01d71de4 = 0x3a3;
    FUN_004e4330("C3DSLight::setFilterFrame - invalid filter frame number");
  }
  *(int *)(param_1 + 0x1890) = param_2;
  FUN_0045db40(param_3,*(uint *)(param_1 + 0x1810 + param_2 * 4),
               *(uint *)(param_1 + 0x1774 + param_2 * 4),0,0);
  return;
}

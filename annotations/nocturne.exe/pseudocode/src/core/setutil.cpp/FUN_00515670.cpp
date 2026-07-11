// Name: FUN_00515670
// Address: 00515670
// Address Range: [[00515670, 00515703]]
// Convention: unknown
// Signature: void FUN_00515670(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00515670(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    _DAT_01cc4800 = "..\\core\\setutil.cpp";
    _DAT_01cc4804 = 0x36c;
    FUN_004c8440("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x11ec) <= param_2)) {
    _DAT_01cc4800 = "..\\core\\setutil.cpp";
    _DAT_01cc4804 = 0x370;
    FUN_004c8440("C3DSLight::setFilterFrame - invalid filter frame number");
  }
  *(int *)(param_1 + 0x1890) = param_2;
  FUN_004501c0(param_3,*(uint *)(param_1 + 0x1810 + param_2 * 4),
               *(uint *)(param_1 + 0x1774 + param_2 * 4),0,0);
  return;
}

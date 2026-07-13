// Name: FUN_10002b20
// Address: 10002b20
// Address Range: [[10002b20, 10002b40]]
// Convention: unknown
// Signature: void FUN_10002b20(LPCSTR param_1,LPCSTR param_2,UINT *param_3)

#include "nocturne.h"

void FUN_10002b20(LPCSTR param_1,LPCSTR param_2,UINT *param_3)

{
  UINT UVar1;
  
  UVar1 = GetPrivateProfileIntA(param_1,param_2,*param_3,".\\system\\render.ini");
  *param_3 = UVar1;
  return;
}

// Name: dll_dx7.cpp_FUN_10001440
// Address: 10001440
// Address Range: [[10001440, 10001460]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_10001440(LPCSTR param_1,LPCSTR param_2,UINT *param_3)

#include "nocturne.h"

void dll_dx7_cpp_FUN_10001440(LPCSTR param_1,LPCSTR param_2,UINT *param_3)

{
  UINT UVar1;
  
  UVar1 = GetPrivateProfileIntA(param_1,param_2,*param_3,".\\system\\render.ini");
  *param_3 = UVar1;
  return;
}

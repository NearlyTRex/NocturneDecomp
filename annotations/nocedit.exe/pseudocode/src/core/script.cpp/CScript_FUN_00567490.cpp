// Name: core_script.cpp_CScript_FUN_00567490
// Address: 00567490
// Address Range: [[00567490, 00567503]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00567490(CScript *this_ptr,int param_2,int param_3)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00567490(CScript *this_ptr,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CCmdParse local_2134 [2122];
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = core_script_cpp_CCmdParse_parse_FUN_00561fd0
                      (local_2134,param_2,
                       *(char **)((int)&PTR_s_cmp_counterUsed_relOp_co_0064546c_00681008 + iVar2));
    if (iVar1 == 3) {
      if (0x77 < iVar3) {
        return;
      }
      goto LAB_005674e5;
    }
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar2 < 0x54);
  if (0x77 < iVar3) {
    return;
  }
LAB_005674e5:
  core_script_cpp_FUN_00564090((int)local_2134,(int *)param_3);
  return;
}

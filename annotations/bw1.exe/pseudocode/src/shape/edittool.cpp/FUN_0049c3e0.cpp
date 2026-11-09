// Name: shape_edittool.cpp_FUN_0049c3e0
// Address: 0049c3e0
// Address Range: [[0049c3e0, 0049c465]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0049c3e0(CStrList *param_1,int param_2,int param_3)

#include "nocturne.h"

void shape_edittool_cpp_FUN_0049c3e0(CStrList *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)&param_1[0x1a].field_0xc <= param_2) && (*(int *)&param_1[0x1b].field_0x4 <= param_2)
     ) {
    shape_edittool_cpp_CStrList_sort_FUN_00499830(param_1,param_2,param_3);
    return;
  }
  for (; param_2 < param_3; param_3 = param_3 + -1) {
    if (param_2 < param_3) {
      iVar3 = param_2 * 4;
      iVar2 = param_2;
      do {
        iVar1 = _stricmp
                          (*(char **)(iVar3 + *(int *)&param_1->field_0x8),
                           *(char **)(iVar3 + 4 + *(int *)&param_1->field_0x8));
        if (0 < iVar1) {
          (**(code **)(*(int *)&param_1->field_0xc + 0x10))(param_1,iVar2,iVar2 + 1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < param_3);
    }
  }
  return;
}

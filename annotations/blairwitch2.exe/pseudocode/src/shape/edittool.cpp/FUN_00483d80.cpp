// Name: shape_edittool.cpp_FUN_00483d80
// Address: 00483d80
// Address Range: [[00483d80, 00483e05]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00483d80(CStrList *param_1,int param_2,int param_3)

#include "nocturne.h"

void shape_edittool_cpp_FUN_00483d80(CStrList *param_1,int param_2,int param_3)

{
  int iVar1;
  int index1;
  int iVar2;
  
  if (((int)param_1[0x1a].vtable._us <= param_2) && (param_1[0x1b].capacity <= param_2)) {
    shape_edittool_cpp_CStrList_sort_FUN_004811d0(param_1,param_2,param_3);
    return;
  }
  for (; param_2 < param_3; param_3 = param_3 + -1) {
    if (param_2 < param_3) {
      iVar2 = param_2 * 4;
      index1 = param_2;
      do {
        iVar1 = _stricmp
                          (*(char **)(iVar2 + (int)param_1->data_array),
                           *(char **)(iVar2 + 4 + (int)param_1->data_array));
        if (0 < iVar1) {
          (*((param_1->vtable)._us)->swap)(param_1,index1,index1 + 1);
        }
        index1 = index1 + 1;
        iVar2 = iVar2 + 4;
      } while (index1 < param_3);
    }
  }
  return;
}

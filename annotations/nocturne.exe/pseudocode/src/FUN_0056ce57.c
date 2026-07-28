// Name: FUN_0056ce57
// Address: 0056ce57
// Address Range: [[0056ce57, 0056ce9f]]
// Convention: unknown
// Signature: int FUN_0056ce57(_FILE *param_1,int param_2)

#include "nocturne.h"

int FUN_0056ce57(_FILE *param_1,int param_2)

{
  int iVar1;
  
  if ((((param_2 != 0) || ((*(uint *)((int)&param_1->_flag + *(int *)(param_1->_ptr + 4)) & 1) == 0)
       ) && (*(int *)((int)&param_1->_handle + *(int *)(param_1->_ptr + 4)) == 0)) &&
     (*(int *)((int)&param_1->_link + *(int *)(param_1->_ptr + 4)) == 0)) {
    return 1;
  }
  iVar1 = stream_setup(param_1,param_2);
  return iVar1;
}

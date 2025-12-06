// Name: shape_design.c_checkNonFFBytes_FUN_0046ac70
// Address: 0046ac70
// Address Range: [[0046ac70, 0046acb6]]
// Convention: __cdecl
// Signature: int shape_design.c_checkNonFFBytes_FUN_0046ac70(char * buffer_ptr, int buffer_length)

#include "nocturne.h"

int __cdecl shape_design_c_checkNonFFBytes_FUN_0046ac70(char *buffer_ptr,int buffer_length)

{
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (buffer_length <= local_14) {
      return 0;
    }
    if (buffer_ptr[local_14] != -1) break;
    local_14 = local_14 + 1;
  }
  return 1;
}

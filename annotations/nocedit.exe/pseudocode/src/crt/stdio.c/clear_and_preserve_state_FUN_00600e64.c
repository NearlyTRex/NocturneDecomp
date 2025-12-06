// Name: crt_stdio.c_clear_and_preserve_state_FUN_00600e64
// Address: 00600e64
// Address Range: [[00600e64, 00600e84]]
// Convention: __cdecl
// Signature: uint crt_stdio.c_clear_and_preserve_state_FUN_00600e64(FileEmbeddedData * embedded_data, uint error_code)

#include "nocturne.h"

uint __cdecl
crt_stdio_c_clear_and_preserve_state_FUN_00600e64(FileEmbeddedData *embedded_data,uint error_code)

{
  uint uVar1;
  
  uVar1 = embedded_data->state_field;
  embedded_data->state_field = 0;
  crt_stdio_c_reportStreamError_FUN_00606020(embedded_data,error_code);
  return uVar1;
}

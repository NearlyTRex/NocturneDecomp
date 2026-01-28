// Name: crt_stdio.c_reportStreamError_FUN_00606020
// Address: 00606020
// Address Range: [[00606020, 00606054]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_reportStreamError_FUN_00606020(FileEmbeddedData *embedded_data,uint error_flags)

#include "nocturne.h"

void __cdecl
crt_stdio_c_reportStreamError_FUN_00606020(FileEmbeddedData *embedded_data,uint error_flags)

{
  uint uVar1;
  uint local_8;
  
  uVar1 = embedded_data->state_field | error_flags;
  embedded_data->state_field = uVar1;
  uVar1 = uVar1 & embedded_data->error_mask;
  if (uVar1 == 0) {
    return;
  }
  crt_stdio_c_storeErrorState_FUN_0060b78e(&local_8,uVar1);
  return;
}

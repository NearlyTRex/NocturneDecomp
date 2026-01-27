// Name: crt_stdio.c_FloatingPointStub_FUN_00603160
// Address: 00603160
// Address Range: [[00603160, 0060317a]]
// Convention: __cdecl
// Signature: void crt_stdio.c_FloatingPointStub_FUN_00603160(char * buffer, va_list_t * args, FormatSpec * spec_info)

#include "nocturne.h"

void __cdecl
crt_stdio_c_FloatingPointStub_FUN_00603160(char *buffer,va_list_t *args,FormatSpec *spec_info)

{
  (*PTR_crt_stdio_c_ReportFloatingPointNotLoaded_FUN_0060ad30_0068540c)
            ((double *)buffer,(double *)args,spec_info->unknown_0x00);
  return;
}

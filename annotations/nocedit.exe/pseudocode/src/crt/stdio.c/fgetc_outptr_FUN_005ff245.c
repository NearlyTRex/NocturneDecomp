// Name: crt_stdio.c_fgetc_outptr_FUN_005ff245
// Address: 005ff245
// Address Range: [[005ff245, 005ff2d6]]
// Convention: __cdecl
// Signature: int crt_stdio.c_fgetc_outptr_FUN_005ff245(FILE * stream, uchar * output_byte)

#include "nocturne.h"

int __cdecl crt_stdio_c_fgetc_outptr_FUN_005ff245(FILE *stream,uchar *output_byte)

{
  uchar *puVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  
  if (((*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) != 0) ||
      (*(int *)((int)&stream->_link + *(int *)(stream->_ptr + 4)) != 0)) &&
     (iVar3 = crt_stdio_c_stream_setup_FUN_00605f20(stream,1), iVar3 == 0)) {
    stream->_cnt = 0;
    return (int)stream;
  }
  iVar3 = *(int *)((int)&stream->_cnt + *(int *)(stream->_ptr + 4));
  if (*(uint *)(iVar3 + 0x10) != *(uint *)(iVar3 + 0x14)) {
    if ((*(uint *)(iVar3 + 0x14) < *(uint *)(iVar3 + 0x10)) ||
       (iVar4 = (**(code **)(*(int *)(iVar3 + 0x28) + 0x10))(), iVar4 != -1)) {
      puVar1 = *(uchar **)(iVar3 + 0x14);
      *(uchar **)(iVar3 + 0x14) = puVar1 + 1;
      uVar2 = *puVar1;
    }
    else {
      uVar2 = 0xff;
    }
    *output_byte = uVar2;
    return (int)stream;
  }
  crt_stdio_c_fgetcInternal_FUN_00605fad(stream,output_byte);
  return (int)stream;
}

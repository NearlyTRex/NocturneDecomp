// Name: crt_unknown.c_build_cmdline_FUN_0056ddf0
// Address: 0056ddf0
// Address Range: [[0056ddf0, 0056de8b]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_build_cmdline_FUN_0056ddf0(int argc,char **argv,char *program,char **out_cmdline,char **out_environment,char **out_buffer,int *out_bufsize,int copy_program_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl build_cmdline(int argc,char **argv,char *program,char **out_cmdline,char **out_environment,char **out_buffer,int *out_bufsize,int copy_program_flag)

{
  int *piVar1;
  int iVar2;
  uint in_EAX;
  uint uVar3;
  uint *puVar4;
  byte *puVar5;
  
  uVar3 = CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(DAT_005c18d5,(char)in_EAX)) & 0xfffff8ff;
  DAT_005c18d5 = (byte)(uVar3 >> 8) | 4;
  puVar5 = &DAT_005c1894;
  iVar2 = _DAT_005c18a0;
  while (iVar2 != 0) {
    puVar4 = InternalHeapAlloc(0x1d);
    if ((puVar4 == (uint *)0x0) &&
       (puVar4 = malloc(0x1d), puVar4 == (uint *)0x0)) {
      HandleRuntimeError("Not enough memory to allocate file structures\r\n",1);
    }
    puVar4[1] = puVar5;
    *puVar4 = _DAT_02de4e20;
    *(uint **)(puVar5 + 8) = puVar4;
    puVar4[2] = 0;
    *(byte *)(*(int *)(puVar5 + 8) + 0x14) = 0;
    uVar3 = *(uint *)(puVar5 + 8);
    *(uint *)(uVar3 + 0xc) = 0;
    piVar1 = (int *)(puVar5 + 0x26);
    puVar5 = puVar5 + 0x1a;
    _DAT_02de4e20 = puVar4;
    iVar2 = *piVar1;
  }
  _DAT_02de4e24 = 0;
  return uVar3;
}

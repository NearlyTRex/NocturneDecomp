// Name: crt_stdlib.c_parse_cmdline_FUN_10007ce0
// Address: 10007ce0
// Address Range: [[10007ce0, 10007eaf]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdlib_c_parse_cmdline_FUN_10007ce0(char *cmdstart,char **argv,char *args,int *pnumargs,int *pnumchars)

#include "nocturne.h"

void __cdecl parse_cmdline(char *cmdstart,char **argv,char *args,int *pnumargs,int *pnumchars)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  *pnumchars = 0;
  *pnumargs = 1;
  if (argv != (char **)0x0) {
    *argv = args;
    argv = argv + 1;
  }
  if (*cmdstart == '\"') {
    pbVar4 = (byte *)(cmdstart + 1);
    bVar1 = *pbVar4;
    while ((bVar1 != 0x22 && (*pbVar4 != 0))) {
      if (((*(byte *)((int)&DAT_10016dd8 + *pbVar4 + 1) & 4) != 0) &&
         (*pnumchars = *pnumchars + 1, (byte *)args != (byte *)0x0)) {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        *args = bVar1;
        args = args + 1;
      }
      *pnumchars = *pnumchars + 1;
      if ((byte *)args != (byte *)0x0) {
        *args = *pbVar4;
        args = args + 1;
      }
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
    }
    *pnumchars = *pnumchars + 1;
    if ((byte *)args != (byte *)0x0) {
      *args = 0;
      args = args + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = pbVar4 + 1;
    }
  }
  else {
    do {
      *pnumchars = *pnumchars + 1;
      if ((byte *)args != (byte *)0x0) {
        *args = *cmdstart;
        args = args + 1;
      }
      bVar1 = *cmdstart;
      pbVar4 = (byte *)(cmdstart + 1);
      if ((*(byte *)((int)&DAT_10016dd8 + bVar1 + 1) & 4) != 0) {
        *pnumchars = *pnumchars + 1;
        if ((byte *)args != (byte *)0x0) {
          *args = *pbVar4;
          args = args + 1;
        }
        pbVar4 = (byte *)(cmdstart + 2);
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10007d50;
      cmdstart = (char *)pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10007d50:
      pbVar4 = pbVar4 + -1;
    }
    else if ((byte *)args != (byte *)0x0) {
      args[-1] = 0;
    }
  }
  bVar3 = false;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (argv != (char **)0x0) {
      *argv = args;
      argv = argv + 1;
    }
    *pnumargs = *pnumargs + 1;
    while( true ) {
      bVar2 = true;
      uVar5 = 0;
      bVar1 = *pbVar4;
      while (bVar1 == 0x5c) {
        pbVar4 = pbVar4 + 1;
        uVar5 = uVar5 + 1;
        bVar1 = *pbVar4;
      }
      if (*pbVar4 == 0x22) {
        pbVar6 = pbVar4;
        if ((uVar5 & 1) == 0) {
          if ((!bVar3) || (pbVar6 = pbVar4 + 1, *pbVar6 != 0x22)) {
            bVar2 = false;
            pbVar6 = pbVar4;
          }
          bVar3 = !bVar3;
        }
        uVar5 = uVar5 >> 1;
        pbVar4 = pbVar6;
      }
      while (uVar5 != 0) {
        uVar5 = uVar5 - 1;
        if ((byte *)args != (byte *)0x0) {
          *args = 0x5c;
          args = args + 1;
        }
        *pnumchars = *pnumchars + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar3 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar2) {
        if ((byte *)args == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_10016dd8 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *pnumchars = *pnumchars + 1;
          }
          *pnumchars = *pnumchars + 1;
          goto LAB_10007e7f;
        }
        pbVar6 = (byte *)args;
        if ((*(byte *)((int)&DAT_10016dd8 + bVar1 + 1) & 4) != 0) {
          *args = bVar1;
          pbVar4 = pbVar4 + 1;
          pbVar6 = (byte *)(args + 1);
          *pnumchars = *pnumchars + 1;
        }
        bVar1 = *pbVar4;
        args = (char *)(pbVar6 + 1);
        pbVar4 = pbVar4 + 1;
        *pbVar6 = bVar1;
        *pnumchars = *pnumchars + 1;
      }
      else {
LAB_10007e7f:
        pbVar4 = pbVar4 + 1;
      }
    }
    if ((byte *)args != (byte *)0x0) {
      *args = 0;
      args = args + 1;
    }
    *pnumchars = *pnumchars + 1;
  }
  if (argv != (char **)0x0) {
    *argv = (char *)0x0;
  }
  *pnumargs = *pnumargs + 1;
  return;
}

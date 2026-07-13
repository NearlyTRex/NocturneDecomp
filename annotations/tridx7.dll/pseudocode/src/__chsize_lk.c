// Name: __chsize_lk
// Address: 1000b560
// Address Range: [[1000b560, 1000b691]]
// Convention: unknown
// Signature: int __chsize_lk(void)

#include "nocturne.h"

/* Library Function - Single Match
int __chsize_lk(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  HANDLE hFile;
  BOOL BVar6;
  DWORD *pDVar7;
  DWORD DVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  uint in_stack_0000100c;
  int in_stack_00001010;
  
  bVar11 = 0;
  FUN_10005600();
  iVar10 = 0;
  iVar1 = __lseek_lk(in_stack_0000100c,0,1);
  if ((iVar1 == -1) || (iVar2 = __lseek_lk(in_stack_0000100c,0,2), iVar2 == -1)) {
    return -1;
  }
  iVar2 = in_stack_00001010 - iVar2;
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      __lseek_lk(in_stack_0000100c,in_stack_00001010,0);
      hFile = (HANDLE)FUN_10008cd0(in_stack_0000100c);
      BVar6 = SetEndOfFile(hFile);
      iVar10 = -(uint)(BVar6 == 0);
      if (iVar10 == -1) {
        puVar5 = (uint *)FUN_10008a20();
        *puVar5 = 0xd;
        pDVar7 = (DWORD *)FUN_10008a30();
        DVar8 = GetLastError();
        *pDVar7 = DVar8;
      }
    }
  }
  else {
    puVar5 = (uint *)&stack0x00000008;
    for (iVar9 = 0x400; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
    }
    uVar3 = __setmode_lk(in_stack_0000100c,0x8000);
    do {
      iVar9 = 0x1000;
      if (iVar2 < 0x1000) {
        iVar9 = iVar2;
      }
      iVar9 = FUN_10008fb0(in_stack_0000100c,&stack0x00000008,iVar9);
      if (iVar9 == -1) {
        piVar4 = (int *)FUN_10008a30();
        if (*piVar4 == 5) {
          puVar5 = (uint *)FUN_10008a20();
          *puVar5 = 0xd;
        }
        iVar10 = -1;
        break;
      }
      iVar2 = iVar2 - iVar9;
    } while (0 < iVar2);
    __setmode_lk(in_stack_0000100c,uVar3);
  }
  __lseek_lk(in_stack_0000100c,iVar1,0);
  return iVar10;
}

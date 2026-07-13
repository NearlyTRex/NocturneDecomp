// Name: FUN_10001200
// Address: 10001200
// Address Range: [[10001200, 10001430]]
// Convention: unknown
// Signature: void FUN_10001200(void)

#include "nocturne.h"

void FUN_10001200(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  FILE *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  byte *local_30 [8];
  int local_10 [4];
  
  local_3c = 0x200;
  local_40 = 0;
  local_38 = 0;
  DAT_10060670 = 0;
  local_34 = 0x20;
  pFVar6 = FID_conflict___wfopen(".\\system\\render.ini","rt");
  if (pFVar6 == (FILE *)0x0) {
    pFVar6 = FID_conflict___wfopen(".\\system\\render.ini","wt");
    FID_conflict__fwprintf(pFVar6,(wchar_t *)"[%s]\n","Textures");
    FID_conflict__fwprintf(pFVar6,(wchar_t *)"maxTextures32=%d\n",local_40);
    FID_conflict__fwprintf(pFVar6,(wchar_t *)"maxTextures64=%d\n",local_3c);
    FID_conflict__fwprintf(pFVar6,(wchar_t *)"maxTextures128=%d\n",local_38);
    FID_conflict__fwprintf(pFVar6,(wchar_t *)"maxTextures256=%d\n",local_34);
    FID_conflict__fwprintf(pFVar6,(wchar_t *)"mipMapFlag=%d\n",DAT_10060670);
    _fclose(pFVar6);
  }
  else {
    _fclose(pFVar6);
    FUN_10001440("Textures","maxTextures32",&local_40);
    FUN_10001440("Textures","maxTextures64",&local_3c);
    FUN_10001440("Textures","maxTextures128",&local_38);
    FUN_10001440("Textures","maxTextures256",&local_34);
    FUN_10001440("Textures","mipMapFlag",&DAT_10060670);
  }
  local_30[4] = PTR_DAT_10014044;
  local_30[5] = PTR_DAT_10014048;
  local_30[6] = PTR_DAT_1001404c;
  local_30[7] = PTR_DAT_10014050;
  local_10[0] = local_40;
  local_10[1] = local_3c;
  local_10[2] = local_38;
  local_10[3] = local_34;
  local_30[0] = (byte *)0x20;
  iVar9 = 0;
  iVar7 = 0;
  local_30[1] = (byte *)0x40;
  local_30[2] = (byte *)0x80;
  local_30[3] = (byte *)0x100;
  do {
    iVar9 = iVar9 + 1;
    if (iVar9 < 4) {
      iVar8 = iVar9 * 4;
      do {
        iVar3 = *(int *)((int)local_10 + iVar7);
        iVar4 = *(int *)((int)local_10 + iVar8);
        if (iVar4 < iVar3) {
          *(int *)((int)local_10 + iVar7) = iVar4;
          uVar5 = *(uint *)((int)local_30 + iVar7);
          *(int *)((int)local_10 + iVar8) = iVar3;
          *(uint *)((int)local_30 + iVar7) = *(uint *)((int)local_30 + iVar8);
          *(uint *)((int)local_30 + iVar8) = uVar5;
          uVar5 = *(uint *)((int)local_30 + iVar7 + 0x10);
          puVar1 = (uint *)((int)local_30 + iVar8 + 0x10);
          *(uint *)((int)local_30 + iVar7 + 0x10) = *puVar1;
          *puVar1 = uVar5;
        }
        iVar8 = iVar8 + 4;
      } while (iVar8 < 0x10);
    }
    iVar7 = iVar7 + 4;
  } while (iVar7 < 0xc);
  iVar7 = 0;
  do {
    puVar1 = (uint *)((int)local_30 + iVar7);
    puVar2 = (uint *)((int)local_10 + iVar7);
    iVar7 = iVar7 + 4;
    FUN_10001020(*puVar2,*puVar1);
  } while (iVar7 < 0x10);
  return;
}

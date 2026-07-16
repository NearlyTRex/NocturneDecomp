// Name: dll_dx7.cpp_FUN_10001200
// Address: 10001200
// Address Range: [[10001200, 10001430]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_10001200(void)

#include "nocturne.h"

void dll_dx7_cpp_FUN_10001200(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  _FILE *p_Var6;
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
  p_Var6 = _fopen(".\\system\\render.ini","rt");
  if (p_Var6 == (_FILE *)0x0) {
    p_Var6 = _fopen(".\\system\\render.ini","wt");
    _fprintf(p_Var6,"[%s]\n","Textures");
    _fprintf(p_Var6,"maxTextures32=%d\n",local_40);
    _fprintf(p_Var6,"maxTextures64=%d\n",local_3c);
    _fprintf(p_Var6,"maxTextures128=%d\n",local_38);
    _fprintf(p_Var6,"maxTextures256=%d\n",local_34);
    _fprintf(p_Var6,"mipMapFlag=%d\n",DAT_10060670);
    _fclose(p_Var6);
  }
  else {
    _fclose(p_Var6);
    dll_dx7_cpp_FUN_10001440("Textures","maxTextures32",&local_40);
    dll_dx7_cpp_FUN_10001440("Textures","maxTextures64",&local_3c);
    dll_dx7_cpp_FUN_10001440("Textures","maxTextures128",&local_38);
    dll_dx7_cpp_FUN_10001440("Textures","maxTextures256",&local_34);
    dll_dx7_cpp_FUN_10001440("Textures","mipMapFlag",&DAT_10060670);
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
    dll_dx7_cpp_FUN_10001020(*puVar2,*puVar1);
  } while (iVar7 < 0x10);
  return;
}

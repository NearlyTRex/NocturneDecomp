// Name: dll_dx7.cpp_FUN_10001200
// Address: 10001200
// Address Range: [[10001200, 10001430]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_10001200(void)

#include "nocturne.h"

void dll_dx7_cpp_FUN_10001200(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  _FILE *p_Var4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30 [4];
  CDLLTextureCache *local_20 [4];
  int local_10 [4];
  
  local_3c = 0x200;
  local_40 = 0;
  local_38 = 0;
  g_MipMapFlag = 0;
  local_34 = 0x20;
  p_Var4 = _fopen(".\\system\\render.ini","rt");
  if (p_Var4 == (_FILE *)0x0) {
    p_Var4 = _fopen(".\\system\\render.ini","wt");
    _fprintf(p_Var4,"[%s]\n","Textures");
    _fprintf(p_Var4,"maxTextures32=%d\n",local_40);
    _fprintf(p_Var4,"maxTextures64=%d\n",local_3c);
    _fprintf(p_Var4,"maxTextures128=%d\n",local_38);
    _fprintf(p_Var4,"maxTextures256=%d\n",local_34);
    _fprintf(p_Var4,"mipMapFlag=%d\n",g_MipMapFlag);
    _fclose(p_Var4);
  }
  else {
    _fclose(p_Var4);
    dll_dx7_cpp_FUN_10001440("Textures","maxTextures32",&local_40);
    dll_dx7_cpp_FUN_10001440("Textures","maxTextures64",&local_3c);
    dll_dx7_cpp_FUN_10001440("Textures","maxTextures128",&local_38);
    dll_dx7_cpp_FUN_10001440("Textures","maxTextures256",&local_34);
    dll_dx7_cpp_FUN_10001440("Textures","mipMapFlag",&g_MipMapFlag);
  }
  local_20[0] = g_TextureCache32;
  local_20[1] = g_TextureCache64;
  local_20[2] = g_TextureCache128;
  local_20[3] = g_TextureCache256;
  local_10[0] = local_40;
  local_10[1] = local_3c;
  local_10[2] = local_38;
  local_10[3] = local_34;
  local_30[0] = 0x20;
  iVar7 = 0;
  iVar5 = 0;
  local_30[1] = 0x40;
  local_30[2] = 0x80;
  local_30[3] = 0x100;
  do {
    iVar7 = iVar7 + 1;
    if (iVar7 < 4) {
      iVar6 = iVar7 * 4;
      do {
        iVar1 = *(int *)((int)local_10 + iVar5);
        iVar2 = *(int *)((int)local_10 + iVar6);
        if (iVar2 < iVar1) {
          *(int *)((int)local_10 + iVar5) = iVar2;
          uVar3 = *(uint *)((int)local_30 + iVar5);
          *(int *)((int)local_10 + iVar6) = iVar1;
          *(uint *)((int)local_30 + iVar5) = *(uint *)((int)local_30 + iVar6);
          *(uint *)((int)local_30 + iVar6) = uVar3;
          uVar3 = *(uint *)((int)local_20 + iVar5);
          *(uint *)((int)local_20 + iVar5) = *(uint *)((int)local_20 + iVar6);
          *(uint *)((int)local_20 + iVar6) = uVar3;
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 < 0x10);
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0xc);
  iVar5 = 0;
  do {
    iVar7 = iVar5 + 4;
    dll_dx7_cpp_CDLLTextureCache_init_FUN_10001020
              (*(CDLLTextureCache **)((int)local_20 + iVar5),*(int *)((int)local_10 + iVar5),
               *(int *)((int)local_30 + iVar5));
    iVar5 = iVar7;
  } while (iVar7 < 0x10);
  return;
}

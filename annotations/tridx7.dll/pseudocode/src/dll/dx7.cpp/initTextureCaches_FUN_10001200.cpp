// Name: dll_dx7.cpp_initTextureCaches_FUN_10001200
// Address: 10001200
// Address Range: [[10001200, 10001430]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_initTextureCaches_FUN_10001200(void)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_initTextureCaches_FUN_10001200(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  _FILE *p_Var5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34 [5];
  CDLLTextureCache *local_20 [4];
  uint local_10 [4];
  
  local_3c = 0x200;
  local_40 = 0;
  local_38 = 0;
  g_MipMapFlag = 0;
  local_34[0] = 0x20;
  p_Var5 = _fopen(".\\system\\render.ini","rt");
  if (p_Var5 == (_FILE *)0x0) {
    p_Var5 = _fopen(".\\system\\render.ini","wt");
    _fprintf(p_Var5,"[%s]\n","Textures");
    _fprintf(p_Var5,"maxTextures32=%d\n",local_40);
    _fprintf(p_Var5,"maxTextures64=%d\n",local_3c);
    _fprintf(p_Var5,"maxTextures128=%d\n",local_38);
    _fprintf(p_Var5,"maxTextures256=%d\n",local_34[0]);
    _fprintf(p_Var5,"mipMapFlag=%d\n",g_MipMapFlag);
    _fclose(p_Var5);
  }
  else {
    _fclose(p_Var5);
    dll_dx7_cpp_readIniInt_FUN_10001440("Textures","maxTextures32",&local_40);
    dll_dx7_cpp_readIniInt_FUN_10001440("Textures","maxTextures64",&local_3c);
    dll_dx7_cpp_readIniInt_FUN_10001440("Textures","maxTextures128",&local_38);
    dll_dx7_cpp_readIniInt_FUN_10001440("Textures","maxTextures256",local_34);
    dll_dx7_cpp_readIniInt_FUN_10001440
              ("Textures","mipMapFlag",(uint *)&g_MipMapFlag);
  }
  local_20[0] = g_TextureCache32;
  local_20[1] = g_TextureCache64;
  local_20[2] = g_TextureCache128;
  local_20[3] = g_TextureCache256;
  local_10[0] = local_40;
  local_10[1] = local_3c;
  local_10[2] = local_38;
  local_10[3] = local_34[0];
  local_34[1] = 0x20;
  iVar8 = 0;
  iVar6 = 0;
  local_34[2] = 0x40;
  local_34[3] = 0x80;
  local_34[4] = 0x100;
  do {
    iVar8 = iVar8 + 1;
    if (iVar8 < 4) {
      iVar7 = iVar8 * 4;
      do {
        iVar2 = *(int *)((int)local_10 + iVar6);
        iVar3 = *(int *)((int)local_10 + iVar7);
        if (iVar3 < iVar2) {
          *(int *)((int)local_10 + iVar6) = iVar3;
          uVar4 = *(uint *)((int)local_34 + iVar6 + 4);
          *(int *)((int)local_10 + iVar7) = iVar2;
          puVar1 = (uint *)((int)local_34 + iVar7 + 4);
          *(uint *)((int)local_34 + iVar6 + 4) = *puVar1;
          *puVar1 = uVar4;
          uVar4 = *(uint *)((int)local_20 + iVar6);
          *(uint *)((int)local_20 + iVar6) = *(uint *)((int)local_20 + iVar7);
          *(uint *)((int)local_20 + iVar7) = uVar4;
        }
        iVar7 = iVar7 + 4;
      } while (iVar7 < 0x10);
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0xc);
  iVar6 = 0;
  do {
    iVar8 = iVar6 + 4;
    dll_dx7_cpp_CDLLTextureCache_init_FUN_10001020
              (*(CDLLTextureCache **)((int)local_20 + iVar6),*(int *)((int)local_10 + iVar6),
               *(int *)((int)local_34 + iVar6 + 4));
    iVar6 = iVar8;
  } while (iVar8 < 0x10);
  return;
}

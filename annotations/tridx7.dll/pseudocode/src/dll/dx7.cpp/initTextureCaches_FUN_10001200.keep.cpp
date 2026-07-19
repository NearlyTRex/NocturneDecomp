// Name: dll_dx7.cpp_initTextureCaches_FUN_10001200
// Address: 10001200
// MANUAL RECONSTRUCTION
// Address Range: [[10001200, 10001430]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_initTextureCaches_FUN_10001200(void)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_initTextureCaches_FUN_10001200(void)

{
  _FILE *p_Var5;
  int i;
  int j;
  int swap_count;
  int swap_size;
  CDLLTextureCache *swap_cache;
  uint max_textures_32;
  uint max_textures_64;
  uint max_textures_128;
  uint max_textures_256;
  int texture_sizes [4];
  CDLLTextureCache *caches [4];
  int max_counts [4];

  max_textures_64 = 0x200;
  max_textures_32 = 0;
  max_textures_128 = 0;
  g_MipMapFlag = 0;
  max_textures_256 = 0x20;
  p_Var5 = _fopen(".\\system\\render.ini","rt");
  if (p_Var5 == (_FILE *)0x0) {
    p_Var5 = _fopen(".\\system\\render.ini","wt");
    _fprintf(p_Var5,"[%s]\n","Textures");
    _fprintf(p_Var5,"maxTextures32=%d\n",max_textures_32);
    _fprintf(p_Var5,"maxTextures64=%d\n",max_textures_64);
    _fprintf(p_Var5,"maxTextures128=%d\n",max_textures_128);
    _fprintf(p_Var5,"maxTextures256=%d\n",max_textures_256);
    _fprintf(p_Var5,"mipMapFlag=%d\n",g_MipMapFlag);
    _fclose(p_Var5);
  }
  else {
    _fclose(p_Var5);
    dll_dx7_cpp_readIniInt_FUN_10001440("Textures","maxTextures32",&max_textures_32);
    dll_dx7_cpp_readIniInt_FUN_10001440("Textures","maxTextures64",&max_textures_64);
    dll_dx7_cpp_readIniInt_FUN_10001440("Textures","maxTextures128",&max_textures_128);
    dll_dx7_cpp_readIniInt_FUN_10001440("Textures","maxTextures256",&max_textures_256);
    dll_dx7_cpp_readIniInt_FUN_10001440
              ("Textures","mipMapFlag",(uint *)&g_MipMapFlag);
  }
  caches[0] = g_TextureCache32;
  caches[1] = g_TextureCache64;
  caches[2] = g_TextureCache128;
  caches[3] = g_TextureCache256;
  max_counts[0] = max_textures_32;
  max_counts[1] = max_textures_64;
  max_counts[2] = max_textures_128;
  max_counts[3] = max_textures_256;
  texture_sizes[0] = 0x20;
  texture_sizes[1] = 0x40;
  texture_sizes[2] = 0x80;
  texture_sizes[3] = 0x100;
  for (i = 0; i < (int)(sizeof(max_counts) / sizeof(max_counts[0])) - 1; i = i + 1) {
    for (j = i + 1; j < (int)(sizeof(max_counts) / sizeof(max_counts[0])); j = j + 1) {
      if (max_counts[j] < max_counts[i]) {
        swap_count = max_counts[i];
        max_counts[i] = max_counts[j];
        max_counts[j] = swap_count;
        swap_size = texture_sizes[i];
        texture_sizes[i] = texture_sizes[j];
        texture_sizes[j] = swap_size;
        swap_cache = caches[i];
        caches[i] = caches[j];
        caches[j] = swap_cache;
      }
    }
  }
  for (i = 0; i < (int)(sizeof(caches) / sizeof(caches[0])); i = i + 1) {
    dll_dx7_cpp_CDLLTextureCache_init_FUN_10001020
              (caches[i],max_counts[i],texture_sizes[i]);
  }
  return;
}

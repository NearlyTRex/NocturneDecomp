// Name: engine_palette.cpp_CPaletteManager_FUN_00545060
// Address: 00545060
// Address Range: [[00545060, 00545172]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_palette.cpp_CPaletteManager_FUN_00545060(CPaletteManager * this_ptr, SMRGLHeaderExtended * unk)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_palette_cpp_CPaletteManager_FUN_00545060(CPaletteManager *this_ptr,SMRGLHeaderExtended *unk)

{
  SMRGLHeaderExtended *in_EAX;
  SMRGLHeaderExtended *unk_00;
  SMRGLHeaderExtended *pSVar1;
  int iVar2;
  
  iVar2 = (unk->base).type;
  if (iVar2 == 0x20) {
    iVar2 = 0;
    if (0 < unk->child_count) {
      pSVar1 = unk + 2;
      do {
        unk_00 = engine_model_c_loadModelFile_FUN_00527ec0((char *)pSVar1);
        engine_palette_cpp_CPaletteManager_FUN_00545060(this_ptr,unk_00);
        in_EAX = (SMRGLHeaderExtended *)0x545122;
        engine_model_c_freeMRGLData_FUN_005280b0(unk_00);
        iVar2 = iVar2 + 1;
        pSVar1 = (SMRGLHeaderExtended *)&pSVar1[1].base.count;
      } while (iVar2 < in_EAX->child_count);
    }
  }
  else {
    in_EAX = unk;
    if (iVar2 == 0x26) {
      in_EAX = (SMRGLHeaderExtended *)unk[2].base.type;
      iVar2 = 0;
      if (0 < (int)in_EAX) {
        do {
          iVar2 = iVar2 + 1;
          pSVar1 = (SMRGLHeaderExtended *)
                   engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0();
        } while (iVar2 < unk[2].base.type);
        return pSVar1;
      }
    }
    else {
      while (iVar2 = (in_EAX->base).type, iVar2 != 0) {
        if ((iVar2 == 0xd) || (pSVar1 = in_EAX, iVar2 == 0x40)) {
          engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0();
          pSVar1 = in_EAX;
        }
        in_EAX = pSVar1;
        if (((pSVar1->base).type == 0x1d) && (iVar2 = 0, 0 < pSVar1->child_count)) {
          do {
            iVar2 = iVar2 + 1;
            engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0();
          } while (iVar2 < pSVar1->child_count);
        }
        engine_model_c_getMRGLSize_FUN_00528700(in_EAX);
      }
    }
  }
  return in_EAX;
}

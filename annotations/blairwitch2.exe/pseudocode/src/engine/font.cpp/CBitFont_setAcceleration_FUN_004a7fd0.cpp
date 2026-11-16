// Name: engine_font.cpp_CBitFont_setAcceleration_FUN_004a7fd0
// Address: 004a7fd0
// Address Range: [[004a7fd0, 004a8530]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_setAcceleration_FUN_004a7fd0(CBitFont *this_ptr,int enable)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_font_cpp_CBitFont_setAcceleration_FUN_004a7fd0(CBitFont *this_ptr,int enable)

{
  char cVar1;
  float fVar2;
  char *pcVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *puVar8;
  int iVar9;
  char *pcVar10;
  char (*pacVar11) [80];
  byte *puVar12;
  byte bVar13;
  CBitFont *in_stack_00000018;
  int in_stack_0000001c;
  uint uStack_454;
  char acStack_254 [256];
  char acStack_154 [256];
  byte auStack_54 [44];
  void *pvStack_28;
  char *pcStack_24;
  byte *puStack_20;
  ulong uStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar13 = 0;
  if (this_ptr->accel_vertex_alloc != (void *)0x0) {
    FUN_005b86a0(this_ptr->accel_vertex_alloc);
    this_ptr->accel_vertex_alloc = (void *)0x0;
  }
  this_ptr->accel_vertices = (void *)0x0;
  if (this_ptr->accel_indices != (void *)0x0) {
    FUN_005b86a0(this_ptr->accel_indices);
    this_ptr->accel_indices = (void *)0x0;
  }
  if (_DAT_01c37788 != 0) {
    if (enable != 0) {
      iVar9 = this_ptr->bitmap_widths[0];
      if (_DAT_0264bbac == 0) {
        iVar9 = iVar9 * 2;
      }
      uStack_1c = iVar9 * iVar9;
      pcVar3 = (char *)malloc(0x300);
      pcStack_24 = pcVar3;
      pvVar4 = malloc(uStack_1c);
      pvStack_28 = pvVar4;
      puStack_20 = (byte *)malloc(uStack_1c);
      if (((pcVar3 == (char *)0x0) || (pvVar4 == (void *)0x0)) || (puStack_20 == (byte *)0x0))
      {
        _DAT_01d046a0 = "..\\engine\\font.cpp";
        _DAT_01d046a4 = 0x17f;
        core_main_c_displayErrorAndQuit_FUN_004e4500("CBitFont::setAcceleration - Out of memory");
      }
      engine_dosio_cpp_splitPath_FUN_00461070
                (this_ptr->bitmap_files[0],(char *)0x0,(char *)0x0,acStack_154,(char *)0x0);
      engine_dosio_cpp_makePath_FUN_004610a0
                (acStack_254,(char *)0x0,(char *)0x0,acStack_154,(char *)0x5d684a);
      support_trstream_cpp_CInStreamFile_ctor_FUN_0057cd50((CInStreamFile *)auStack_54);
      iVar5 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
                        ((CInStreamFile *)auStack_54,(char *)0x5d684e,acStack_254);
      if (iVar5 == 0) {
        _DAT_01d046a4 = 0x19e;
        _DAT_01d046a0 = "..\\engine\\font.cpp";
        core_main_c_displayErrorAndQuit_FUN_004e4500("CBitFont::setAcceleration - No opacity file found: %s");
      }
      else {
        if (_DAT_0264bbac == 0) {
          iStack_14 = iVar9 / 2;
          iVar5 = 0;
          puVar12 = puStack_20;
          if (0 < iStack_14) {
            do {
              support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0
                        ((CInStreamFile *)auStack_54,&uStack_454,iStack_14);
              iVar7 = 0;
              puVar8 = puVar12;
              if (0 < iVar9) {
                do {
                  iVar6 = iVar7 / 2;
                  iVar7 = iVar7 + 1;
                  *puVar8 = *(byte *)((int)&uStack_454 + iVar6);
                  puVar8 = puVar8 + 1;
                } while (iVar7 < iVar9);
              }
              iVar7 = 0;
              puVar8 = puVar12 + iVar9;
              if (0 < iVar9) {
                do {
                  iVar6 = iVar7 / 2;
                  iVar7 = iVar7 + 1;
                  *puVar8 = *(byte *)((int)&uStack_454 + iVar6);
                  puVar8 = puVar8 + 1;
                } while (iVar7 < iVar9);
              }
              iVar5 = iVar5 + 1;
              puVar12 = puVar12 + iVar9 + iVar9;
            } while (iVar5 < iStack_14);
          }
        }
        else {
          support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0
                    ((CInStreamFile *)auStack_54,puStack_20,iVar9 * iVar9);
        }
        support_trstream_cpp_CInStreamFile_close_FUN_0057d180((CInStreamFile *)auStack_54);
      }
      pvVar4 = pvStack_28;
      memset(pvStack_28,0xff,uStack_1c);
      pcVar3 = this_ptr->palette_data;
      pcVar10 = pcStack_24;
      for (iVar5 = 0xc0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(uint *)pcVar10 = *(uint *)pcVar3;
        pcVar3 = pcVar3 + (uint)bVar13 * -8 + 4;
        pcVar10 = pcVar10 + (uint)bVar13 * -8 + 4;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pcVar10 = *pcVar3;
        pcVar3 = pcVar3 + (uint)bVar13 * -2 + 1;
        pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
      }
      pacVar11 = this_ptr->bitmap_files;
      pcVar3 = (this_ptr->accel_texture).texture_name;
      (this_ptr->accel_texture).base.count = 0;
      do {
        cVar1 = (*pacVar11)[0];
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = (*pacVar11)[1];
        pacVar11 = (char (*) [80])(*pacVar11 + 2);
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      engine_mini3d_cpp_loadTexture_FUN_004f33d0
                ((int)&this_ptr->accel_texture,iVar9,(int)pvVar4,(int)pcStack_24,(int)puStack_20);
      pvVar4 = malloc(0x7d20);
      in_stack_00000018->accel_vertex_alloc = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _DAT_01d046a0 = "..\\engine\\font.cpp";
        _DAT_01d046a4 = 0x1e0;
        uStack_454 = 0x4a826d;
        core_main_c_displayErrorAndQuit_FUN_004e4500("Out of memory loading opacity mapped font : ");
      }
      in_stack_00000018->accel_vertices =
           (void *)((int)in_stack_00000018->accel_vertex_alloc + 0x1fU & 0xffffffe0);
      pvVar4 = malloc(2000);
      in_stack_00000018->accel_indices = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _DAT_01d046a0 = "..\\engine\\font.cpp";
        _DAT_01d046a4 = 0x1e8;
        uStack_454 = 0x4a845e;
        core_main_c_displayErrorAndQuit_FUN_004e4500("Out of memory loading opacity mapped font : ");
      }
      pcVar3 = in_stack_00000018->bitmap_files[1] + 0x2c;
      pcVar10 = in_stack_00000018->palette_data + 0x4c;
      in_stack_00000018->accel_vertex_count = 0;
      in_stack_00000018->accel_index_count = 0;
      do {
        if (*(int *)(pcVar3 + 0x35e8) != 0) {
          iVar5 = *(int *)(pcVar3 + 0x1de8) -
                  (int)in_stack_00000018->bitmap_data[*(int *)(pcVar3 + 0x21e8)];
          iVar9 = in_stack_00000018->bitmap_widths[*(int *)(pcVar3 + 0x21e8)];
          iVar7 = iVar5 % iVar9;
          fVar2 = 1.0 / (float)iVar9;
          iVar5 = iVar5 / iVar9;
          iStack_18 = *(int *)(pcVar3 + 0x35e8) + iVar7 + 1;
          iVar9 = *(int *)(pcVar3 + 0x39e8);
          (*(float (*) [4])(pcVar10 + 0x25e8))[0] = (float)iVar7 * fVar2;
          *(float *)(pcVar10 + 0x25ec) = (float)iVar5 * fVar2;
          *(float *)(pcVar10 + 0x25f0) = (float)iStack_18 * fVar2;
          *(float *)(pcVar10 + 0x25f4) = (float)(iVar9 + iVar5 + 1) * fVar2;
        }
        pcVar3 = pcVar3 + 4;
        pcVar10 = pcVar10 + 0x10;
      } while (pcVar3 != in_stack_00000018->palette_data + 0x24c);
      uStack_454 = 0x4a8311;
      support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0((CInStreamFile *)(auStack_54 + 0x14),0);
    }
    in_stack_00000018->use_3d_rendering = in_stack_0000001c;
    engine_font_cpp_CBitFont_setAccelScale_FUN_004a8540(in_stack_00000018,1.1);
  }
  return;
}

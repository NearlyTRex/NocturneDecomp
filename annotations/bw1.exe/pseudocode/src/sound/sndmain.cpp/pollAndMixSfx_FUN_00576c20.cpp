// Name: sound_sndmain.cpp_pollAndMixSfx_FUN_00576c20
// Address: 00576c20
// Address Range: [[00576c20, 00576f32]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_00576c20(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_00576c20(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)

{
  int *piVar1;
  CSfxSlot *pCVar2;
  int iVar3;
  int iVar4;
  CSfxSlot *this_ptr;
  byte *puVar5;
  int iVar6;
  int iVar7;
  ulong count;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  uint auStack_98 [5];
  uint uStack_84;
  uint local_6c [8];
  int local_4c;
  int local_48;
  int local_44 [9];
  int local_20;
  CSfxSlot *local_1c;
  byte *local_18;
  float local_14;
  
  bVar10 = 0;
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x199a;
    core_main_c_FUN_005030e0();
  }
  if (0 < num_channels) {
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + 0x2c80698) == 0) {
        return;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < num_channels * 4);
  }
  if (((bits_per_sample == DAT_006232e8) && (num_channels == DAT_006232ec)) &&
     (samples_per_sec == DAT_006232f0)) {
    sound_sndmain_cpp_FUN_0056f1e0();
    iVar3 = 0;
    if (0 < num_channels) {
      do {
        iVar3 = iVar3 + 1;
        local_44[iVar3] = (int)*channel_buffers;
        channel_buffers = channel_buffers + 1;
      } while (iVar3 < num_channels);
    }
    local_20 = num_channels << 2;
    local_18 = &DAT_02c78cec;
    local_1c = (CSfxSlot *)&DAT_02c78cec;
    for (; 0 < samples_per_block; samples_per_block = samples_per_block - iVar4) {
      if (_DAT_02c80660 < 1) {
        if (_DAT_02c807ec < 1) {
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0x593;
          core_main_c_FUN_005030e0();
        }
        if (0 < _DAT_02c80660) {
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0x597;
          core_main_c_FUN_005030e0();
        }
        iVar3 = 0;
        count = _DAT_02c80668 * 4;
        if (0 < DAT_006232ec) {
          iVar4 = 0;
          do {
            memmove
                      (*(void **)(iVar4 + 0x2c80698),
                       (void *)(_DAT_02c80668 * 4 + (int)*(void **)(iVar4 + 0x2c80698)),
                       (_DAT_02c8066c + -1) * count);
            piVar1 = (int *)(iVar4 + 0x2c80698);
            iVar4 = iVar4 + 4;
            iVar3 = iVar3 + 1;
            memset
                      ((void *)((_DAT_02c8066c + -1) * _DAT_02c80668 * 4 + *piVar1),0,count);
          } while (iVar3 < DAT_006232ec);
        }
        local_4c = _DAT_02c80668;
        local_48 = DAT_006232ec;
        local_44[0] = DAT_006232f0;
        if (0 < DAT_006232ec) {
          iVar3 = 0;
          do {
            iVar4 = iVar3 + 4;
            *(uint *)((int)local_6c + iVar3) = *(uint *)(iVar3 + 0x2c80698);
            iVar3 = iVar4;
          } while (iVar4 < DAT_006232ec * 4);
        }
        pCVar2 = local_1c;
        local_14 = (float)_DAT_02c80668 / (float)DAT_006232f0;
        this_ptr = (CSfxSlot *)0x2c745ec;
        do {
          sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30(this_ptr,local_14);
          this_ptr = this_ptr + 1;
        } while (this_ptr != pCVar2);
        puVar5 = (byte *)0x2c745ec;
        do {
          puVar8 = local_6c;
          puVar9 = auStack_98;
          for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
          }
          sound_sndmain_cpp_FUN_00571420(puVar5);
          puVar5 = puVar5 + 0x11c;
        } while (puVar5 != local_18);
        _DAT_02c80660 = _DAT_02c80668;
        _DAT_02c80708 = _DAT_02c80708 + 1;
        _DAT_02c80664 = 0;
      }
      iVar3 = local_20;
      iVar4 = _DAT_02c80660;
      if (samples_per_block < _DAT_02c80660) {
        iVar4 = samples_per_block;
      }
      if (0 < num_channels) {
        iVar6 = 0;
        do {
          uStack_84 = 0x576e96;
          sound_sndmain_cpp_convertMixBufToOutput_FUN_0056f890
                    ((float *)(_DAT_02c80664 * 4 + *(int *)(iVar6 + 0x2c80698)),
                     *(ushort **)((int)local_44 + iVar6 + 4),bits_per_sample,iVar4,block_align);
          iVar7 = iVar6 + 4;
          *(int *)((int)local_44 + iVar6 + 4) =
               *(int *)((int)local_44 + iVar6 + 4) + block_align * iVar4;
          iVar6 = iVar7;
        } while (iVar7 < iVar3);
      }
      _DAT_02c80660 = _DAT_02c80660 - iVar4;
      _DAT_02c80664 = _DAT_02c80664 + iVar4;
    }
  }
  return;
}

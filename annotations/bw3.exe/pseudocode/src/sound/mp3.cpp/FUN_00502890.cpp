// Name: sound_mp3.cpp_FUN_00502890
// Address: 00502890
// Address Range: [[00502890, 00502a0e]]
// Convention: unknown
// Signature: void sound_mp3_cpp_FUN_00502890(CMP3Decoder *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_mp3_cpp_FUN_00502890(CMP3Decoder *param_1,uint param_2,uint param_3)

{
  byte *puVar1;
  uint uVar2;
  void *pvVar3;
  float10 fVar4;
  int sample_offset;
  int local_68 [4];
  int local_58;
  SMpegFrameHeader *local_38 [4];
  uint local_28;
  uint local_1c;
  ulong local_18;
  uint local_14;
  
  sound_mp3_cpp_CMP3Decoder_free_FUN_00502a10(param_1);
  puVar1 = &param_1->field_0x5320;
  local_18 = 0x1000;
  local_14 = param_2;
  local_1c = param_3;
  if (*(int *)puVar1 != 0) {
    _fclose(*(int *)puVar1);
    *(uint *)puVar1 = 0;
  }
  if (*(int *)&param_1->field_0x5324 != 0) {
    FUN_005a3770(*(int *)&param_1->field_0x5324);
    *(uint *)&param_1->field_0x5324 = 0;
  }
  *(uint *)puVar1 = local_14;
  uVar2 = _ftell(local_14);
  *(uint *)&param_1->field_0x5340 = uVar2;
  *(uint *)&param_1->field_0x5344 = local_1c;
  *(ulong *)&param_1->field_0x5328 = local_18;
  pvVar3 = FUN_005a3650(local_18);
  *(void **)&param_1->field_0x5324 = pvVar3;
  if (pvVar3 == (void *)0x0) {
    _DAT_01d71de0 = "..\\sound\\mp3.cpp";
    _DAT_01d71de4 = 0x23d;
    core_main_c_FUN_004e4330("Out of memory.  File: %s",&DAT_01d94b98);
  }
  _fseek(*(uint *)puVar1,*(uint *)&param_1->field_0x5340,0);
  *(uint *)&param_1->field_0x5330 = 0;
  *(uint *)&param_1->field_0x5334 = 0;
  *(uint *)&param_1->field_0x532c = 0;
  *(uint *)&param_1->field_0x5338 = 0;
  *(uint *)&param_1->field_0x533c = 0;
  *(uint *)&param_1->field_0x5348 = *(uint *)&param_1->field_0x5344;
  sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_004fd780
            ((CFileBitStream *)&param_1->field_0x5320,0xfff,0xc);
  local_38[0] = (SMpegFrameHeader *)local_68;
  sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_004fdc50
            ((CFileBitStream *)&param_1->field_0x5320,local_38);
  sound_mp3_cpp_FUN_004fd150((SMpegFrame *)local_38);
  fVar4 = (float10)*(double *)(&DAT_006011b8 + local_58 * 8 + local_68[0] * 0x20) *
          (float10)_DAT_005ca39f;
  sample_offset = 0;
  round();
  *(int *)&param_1->field_0x100 = (int)ROUND(fVar4);
  *(uint *)&param_1->field_0x104 = local_28;
  sound_mp3_cpp_CMP3Decoder_seek_FUN_00502bc0(param_1,sample_offset);
  return;
}

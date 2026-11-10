// Name: sound_sndmain.cpp_FUN_00552350
// Address: 00552350
// Address Range: [[00552350, 005526c5]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_FUN_00552350(int slot_index,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * __cdecl sound_sndmain_cpp_FUN_00552350(int slot_index,char *filename)

{
  char cVar1;
  CSfxSample *this_ptr;
  CMP3Decoder *this_ptr_00;
  CMP3Decoder *pCVar2;
  uint uVar3;
  int iVar4;
  CSfxSample *pCVar5;
  float10 fVar6;
  char local_118 [256];
  byte *local_18;
  CSfxSample *local_14;
  
  iVar4 = 0;
  do {
    _DAT_02cebc20 = _DAT_02cebc20 + 1;
    if (0x3f < _DAT_02cebc20) {
      _DAT_02cebc20 = 0;
    }
    if ((((g_SfxSamples[_DAT_02cebc20].taken == 0) && (g_SfxSamples[_DAT_02cebc20].ref_count == 0))
        && (*(int *)&g_SfxSamples[_DAT_02cebc20].field_0x15c == 0)) &&
       (g_SfxSamples[_DAT_02cebc20].locked_length == 0)) {
      local_14 = g_SfxSamples + _DAT_02cebc20;
      goto LAB_00552392;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x40);
  local_14 = (CSfxSample *)0x0;
LAB_00552392:
  this_ptr = local_14;
  if (local_14 == (CSfxSample *)0x0) {
    return (CSfxSample *)0x0;
  }
  engine_dosio_cpp_splitPath_FUN_00465e50(filename,(char *)0x0,(char *)0x0,(char *)0x0,local_118);
  iVar4 = _stricmp(local_118,&DAT_005d29d6);
  if ((iVar4 == 0) ||
     (iVar4 = _stricmp(local_118,&DAT_005d29da), iVar4 == 0)) {
    iVar4 = engine_dosio_cpp_getFileSize_FUN_004657f0("sound",filename);
    if (iVar4 < 1) goto LAB_005526aa;
    this_ptr_00 = (CMP3Decoder *)debugAllocTracked1(0x8630);
    pCVar2 = (CMP3Decoder *)0x0;
    if (this_ptr_00 != (CMP3Decoder *)0x0) {
      pCVar2 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_00502750(this_ptr_00);
    }
    *(CMP3Decoder **)&this_ptr->field_0x174 = pCVar2;
    if (pCVar2 == (CMP3Decoder *)0x0) {
      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
      _DAT_01d71de4 = 0x463;
      core_main_c_FUN_004e4330("Out of memory.");
    }
    sound_mp3_cpp_CMP3Decoder_openFile_FUN_005027b0
              (*(CMP3Decoder **)&this_ptr->field_0x174,filename);
    pCVar5 = this_ptr;
    do {
      cVar1 = *filename;
      (pCVar5->sample_info).name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = filename[1];
      filename = filename + 2;
      (pCVar5->sample_info).name[1] = cVar1;
      pCVar5 = (CSfxSample *)((pCVar5->sample_info).name + 2);
    } while (cVar1 != '\0');
    (this_ptr->sample_info).streaming_flag = 1;
    iVar4 = *(int *)&this_ptr->field_0x174;
    (this_ptr->sample_info).bit_depth = 0x10;
    (this_ptr->sample_info).num_channels = *(int *)(iVar4 + 0x104);
    iVar4 = *(int *)(*(int *)&this_ptr->field_0x174 + 0x100);
    (this_ptr->sample_info).sample_count = -1;
    (this_ptr->sample_info).sample_rate = iVar4;
    sound_sndmain_cpp_FUN_00551620(this_ptr);
    this_ptr->taken = 0;
    iVar4 = (this_ptr->sample_info).sample_rate;
    this_ptr->ref_count = 0;
    fVar6 = (float10)iVar4 * (float10)0x40000000;
    this_ptr->buffer_id = 0;
    *(uint *)&this_ptr->field_0x15c = 0;
    round();
    *(int *)&this_ptr->field_0x164 = (int)ROUND(fVar6);
    *(uint *)&this_ptr->field_0x16c = 0;
    *(uint *)&this_ptr->field_0x170 = 0;
    *(int *)&this_ptr->field_0x160 = slot_index;
    uVar3 = sound_sndmain_cpp_FUN_00555900(this_ptr,*(uint *)&this_ptr->field_0x164);
    *(uint *)&this_ptr->field_0x168 = uVar3;
    iVar4 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005533b0(this_ptr);
  }
  else {
    local_18 = &this_ptr->field_0x17c;
    iVar4 = support_trstream_cpp_FUN_00573fc0(local_18,"sound",filename,1);
    pCVar5 = this_ptr;
    if (iVar4 == 0) goto LAB_005526aa;
    do {
      cVar1 = *filename;
      (pCVar5->sample_info).name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = filename[1];
      filename = filename + 2;
      (pCVar5->sample_info).name[1] = cVar1;
      pCVar5 = (CSfxSample *)((pCVar5->sample_info).name + 2);
    } while (cVar1 != '\0');
    uVar3 = unkafter_turret_cpp_FUN_00573d40(local_18);
    *(uint *)&this_ptr->field_0x178 = uVar3;
    iVar4 = sound_sndmain_cpp_FUN_00551000(local_18,&this_ptr->field_0x178,this_ptr);
    if (iVar4 == 0) goto LAB_005526aa;
    sound_sndmain_cpp_FUN_00551620(this_ptr);
    this_ptr->taken = 0;
    iVar4 = (this_ptr->sample_info).sample_rate;
    this_ptr->ref_count = 0;
    fVar6 = (float10)iVar4 * (float10)0x40000000;
    this_ptr->buffer_id = 0;
    *(uint *)&this_ptr->field_0x15c = 0;
    round();
    *(int *)&this_ptr->field_0x164 = (int)ROUND(fVar6);
    *(uint *)&this_ptr->field_0x16c = 0;
    *(uint *)&this_ptr->field_0x170 = 0;
    *(int *)&this_ptr->field_0x160 = slot_index;
    uVar3 = sound_sndmain_cpp_FUN_00555900(this_ptr,*(uint *)&this_ptr->field_0x164);
    *(uint *)&this_ptr->field_0x168 = uVar3;
    iVar4 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005533b0(this_ptr);
  }
  if (iVar4 != 0) {
    sound_sndmain_cpp_CSfxSample_seek_FUN_005537c0(this_ptr,0,0);
    return this_ptr;
  }
LAB_005526aa:
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(this_ptr);
  return (CSfxSample *)0x0;
}

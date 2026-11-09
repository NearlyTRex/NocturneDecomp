// Name: sound_sndmain.cpp_FUN_0054c7f0
// Address: 0054c7f0
// Address Range: [[0054c7f0, 0054cb63]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_FUN_0054c7f0(int slot_index,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * __cdecl sound_sndmain_cpp_FUN_0054c7f0(int slot_index,char *filename)

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
    _DAT_02641920 = _DAT_02641920 + 1;
    if (0x3f < _DAT_02641920) {
      _DAT_02641920 = 0;
    }
    if ((((*(int *)&g_SfxSamples[_DAT_02641920].field_0x150 == 0) &&
         (*(int *)&g_SfxSamples[_DAT_02641920].field_0x154 == 0)) &&
        (*(int *)&g_SfxSamples[_DAT_02641920].field_0x15c == 0)) &&
       (*(int *)&g_SfxSamples[_DAT_02641920].field_0x1a8 == 0)) {
      local_14 = g_SfxSamples + _DAT_02641920;
      goto LAB_0054c832;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x40);
  local_14 = (CSfxSample *)0x0;
LAB_0054c832:
  this_ptr = local_14;
  if (local_14 == (CSfxSample *)0x0) {
    return (CSfxSample *)0x0;
  }
  engine_dosio_cpp_FUN_00461070(filename,(char *)0x0,(char *)0x0,(char *)0x0,local_118);
  iVar4 = _stricmp(local_118,&DAT_005e7ef2);
  if ((iVar4 == 0) ||
     (iVar4 = _stricmp(local_118,&DAT_005e7ef6), iVar4 == 0)) {
    iVar4 = engine_dosio_cpp_getFileSize_FUN_00460aa0("sound",filename);
    if (iVar4 < 1) goto LAB_0054cb48;
    this_ptr_00 = (CMP3Decoder *)FUN_005b8be2(0x8630);
    pCVar2 = (CMP3Decoder *)0x0;
    if (this_ptr_00 != (CMP3Decoder *)0x0) {
      pCVar2 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_00509c70(this_ptr_00);
    }
    *(CMP3Decoder **)&this_ptr->field_0x174 = pCVar2;
    if (pCVar2 == (CMP3Decoder *)0x0) {
      _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
      _DAT_01d046a4 = 0x461;
      core_main_c_FUN_004e4500("Out of memory.");
    }
    sound_mp3_cpp_FUN_00509cd0(*(CMP3Decoder **)&this_ptr->field_0x174,filename);
    pCVar5 = this_ptr;
    do {
      cVar1 = *filename;
      *(char *)pCVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = filename[1];
      filename = filename + 2;
      pCVar5->field_0x1 = cVar1;
      pCVar5 = (CSfxSample *)&pCVar5->field_0x2;
    } while (cVar1 != '\0');
    *(uint *)&this_ptr->field_0x100 = 1;
    *(uint *)&this_ptr->field_0x104 = 0x10;
    *(uint *)&this_ptr->field_0x108 = *(uint *)(*(int *)&this_ptr->field_0x174 + 0x104);
    uVar3 = *(uint *)(*(int *)&this_ptr->field_0x174 + 0x100);
    *(uint *)&this_ptr->field_0x110 = 0xffffffff;
    *(uint *)&this_ptr->field_0x10c = uVar3;
    sound_sndmain_cpp_FUN_0054bac0(this_ptr);
    *(uint *)&this_ptr->field_0x150 = 0;
    *(uint *)&this_ptr->field_0x154 = 0;
    fVar6 = (float10)*(int *)&this_ptr->field_0x10c * (float10)0x40000000;
    *(uint *)&this_ptr->field_0x158 = 0;
    *(uint *)&this_ptr->field_0x15c = 0;
    round();
    *(int *)&this_ptr->field_0x164 = (int)ROUND(fVar6);
    *(uint *)&this_ptr->field_0x16c = 0;
    *(uint *)&this_ptr->field_0x170 = 0;
    *(int *)&this_ptr->field_0x160 = slot_index;
    uVar3 = sound_sndmain_cpp_FUN_0054fd90(this_ptr,*(uint *)&this_ptr->field_0x164);
    *(uint *)&this_ptr->field_0x168 = uVar3;
    iVar4 = sound_sndmain_cpp_FUN_0054d840(this_ptr);
  }
  else {
    local_18 = &this_ptr->field_0x17c;
    iVar4 = support_trstream_cpp_FUN_0057d390(local_18,"sound",filename);
    pCVar5 = this_ptr;
    if (iVar4 == 0) goto LAB_0054cb48;
    do {
      cVar1 = *filename;
      *(char *)pCVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = filename[1];
      filename = filename + 2;
      pCVar5->field_0x1 = cVar1;
      pCVar5 = (CSfxSample *)&pCVar5->field_0x2;
    } while (cVar1 != '\0');
    uVar3 = unkaddr_0057b9a0_cpp_FUN_0057d110(local_18);
    *(uint *)&this_ptr->field_0x178 = uVar3;
    iVar4 = sound_sndmain_cpp_FUN_0054b4a0(local_18,&this_ptr->field_0x178,this_ptr);
    if (iVar4 == 0) goto LAB_0054cb48;
    sound_sndmain_cpp_FUN_0054bac0(this_ptr);
    *(uint *)&this_ptr->field_0x150 = 0;
    *(uint *)&this_ptr->field_0x154 = 0;
    fVar6 = (float10)*(int *)&this_ptr->field_0x10c * (float10)0x40000000;
    *(uint *)&this_ptr->field_0x158 = 0;
    *(uint *)&this_ptr->field_0x15c = 0;
    round();
    *(int *)&this_ptr->field_0x164 = (int)ROUND(fVar6);
    *(uint *)&this_ptr->field_0x16c = 0;
    *(uint *)&this_ptr->field_0x170 = 0;
    *(int *)&this_ptr->field_0x160 = slot_index;
    uVar3 = sound_sndmain_cpp_FUN_0054fd90(this_ptr,*(uint *)&this_ptr->field_0x164);
    *(uint *)&this_ptr->field_0x168 = uVar3;
    iVar4 = sound_sndmain_cpp_FUN_0054d840(this_ptr);
  }
  if (iVar4 != 0) {
    sound_sndmain_cpp_CSfxSample_seek_FUN_0054dc50(this_ptr,0,0);
    return this_ptr;
  }
LAB_0054cb48:
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(this_ptr);
  return (CSfxSample *)0x0;
}

// Name: FUN_004a3b90
// Address: 004a3b90
// Address Range: [[004a3b90, 004a4163]]
// Convention: unknown
// Signature: void FUN_004a3b90(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a3b90(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  ulonglong uVar8;
  char *pcVar9;
  char local_558 [520];
  byte local_350 [260];
  byte local_24c [256];
  byte local_14c [68];
  byte local_108 [32];
  int local_e8;
  byte local_cc [68];
  byte local_88 [28];
  int local_6c;
  byte local_50 [4];
  byte local_4c [52];
  uint local_18;
  int local_14;
  
  if (*(int *)(param_1 + 0x228) != 0) {
    uVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                      ("p@Unable to save during cinematic" + 2);
    FUN_0046fcd0(0x01BCD074,uVar4);
    return;
  }
  remove("save\\$$SAVE$$.TMP");
  splitpath();
  iVar2 = _stricmp(local_24c,&DAT_00583b32);
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(local_24c,&DAT_00583b36), iVar2 == 0)) {
    pcVar7 = local_558;
    pcVar5 = &DAT_01c78598;
    do {
      cVar1 = *pcVar5;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
  }
  else {
    local_558[0] = '\0';
  }
  pcVar5 = local_558;
  pcVar9 = local_558;
  pcVar7 = local_558;
  if (param_2 == (char *)0x0) {
    uVar3 = 1;
    uVar8 = 0x583b3b00583b3f;
    uVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370();
    iVar2 = FUN_00470eb0(0x01BCD074,uVar4,uVar8,pcVar9,uVar3);
    if (iVar2 == 0) {
      return;
    }
    splitpath();
    _sprintf();
  }
  else {
    do {
      cVar1 = *param_2;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  _mkdir(&DAT_00583b55);
  DAT_00763e90 = 1;
  local_14 = 1;
  iVar2 = _fopen("save\\$$SAVE$$.TMP",&DAT_00583b5a);
  if (iVar2 == 0) {
    uVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                      ("Warning!  Your game didn't save.");
    FUN_0046fcd0(0x01BCD074,uVar4);
    DAT_00763e90 = iVar2;
    return;
  }
  _fprintf(iVar2,"// .NOC file version\n");
  _fprintf();
  FUN_004d8720(0x01CC9450,iVar2);
  _fprintf(iVar2,"// Hero count, local hero index, hero list\n");
  _fprintf(iVar2,"%d, %d\n",_DAT_01cae0d4,_DAT_01cae0e8);
  iVar6 = 0;
  if (0 < _DAT_01cae0d4) {
    do {
      iVar6 = iVar6 + 1;
      _fprintf();
    } while (iVar6 < _DAT_01cae0d4);
  }
  core_event_cpp_CEventList_saveState_FUN_00481330(0x01C03A10,iVar2);
  FUN_005055f0(0x01E56DA0,iVar2);
  core_fire_cpp_CFireEffect_save_FUN_0048c850(0x01C08D04,iVar2);
  _fprintf(iVar2,"Light state\n");
  core_set_cpp_CDemonSet_saveMasterLightStates_FUN_0050e860(0x01E57284,&DAT_01c7869c);
  iVar6 = 1;
  _fprintf();
  if (0 < _DAT_01c7869c) {
    do {
      iVar6 = iVar6 + 1;
      _fprintf();
    } while (iVar6 <= _DAT_01c7869c);
  }
  _fprintf(iVar2,"Game stats\n");
  _fprintf(iVar2,"%f,%f,%d,%d\n",(double)*(float *)(param_1 + 0x250),
             (double)*(float *)(param_1 + 0x248),*(uint *)(param_1 + 0x24c),
             *(uint *)(param_1 + 0x254));
  core_set_cpp_CDemonSet_saveStateInfo_FUN_0050e8a0(0x01E57284,iVar2);
  _fclose(iVar2);
  DAT_00763e90 = 0;
  if (local_14 != 0) {
    local_18 = engine_dosio_cpp_getFileSize_FUN_004568c0(&DAT_00583c06,"save\\$$SAVE$$.TMP")
    ;
    crt_fstream_cpp_ifstream_ctor_FUN_005652fe(local_14c,0);
    crt_fstream_cpp_ofstream_ctor_FUN_0056536a(local_cc,0);
    uVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                      ("Warning!  Your game didn't save.");
    uVar4 = 0x000001A4;
    crt_fstream_cpp_openFile_FUN_00565eb5(local_14c,"save\\$$SAVE$$.TMP",0x121,0x000001A4)
    ;
    if (local_e8 != 0) {
      FUN_0046fcd0(0x01BCD074,uVar3);
      crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_cc,0);
      crt_fstream_cpp_ifstream_dtor_FUN_00565264(local_14c,0);
      return;
    }
    _sprintf(local_350,"%s\\%s",&DAT_00583c28,local_558);
    crt_fstream_cpp_openFile_FUN_00565eb5(local_cc,local_350,0x112,uVar4);
    if (local_6c != 0) {
      FUN_0046fcd0(0x01BCD074,uVar3);
      crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_cc,0);
      crt_fstream_cpp_ifstream_dtor_FUN_00565264(local_14c,0);
      return;
    }
    crt_fstream_cpp_ostream_write_FUN_00565a13();
    support_codec_cpp_CLZWCompress_ctor_FUN_00439830();
    support_codec_cpp_CLZWCompress_init_FUN_00439880(local_50);
    support_codec_cpp_CLZWCompress_process_FUN_004398c0(local_50,local_108,&local_18,local_88);
    support_codec_cpp_CLZWCompress_finalize_FUN_004399a0(local_50,local_88);
    _fflush(local_14c);
    _fflush(local_cc);
    support_codec_cpp_CLZWDictionary_dtor_FUN_00439370(local_4c,0);
    support_codec_cpp_CCodec_dtor_FUN_00438f30(local_50,1);
    crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_cc,0);
    crt_fstream_cpp_ifstream_dtor_FUN_00565264(local_14c,0);
  }
  remove("save\\$$SAVE$$.TMP");
  pcVar5 = &DAT_01c78598;
  do {
    cVar1 = *pcVar7;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  return;
}

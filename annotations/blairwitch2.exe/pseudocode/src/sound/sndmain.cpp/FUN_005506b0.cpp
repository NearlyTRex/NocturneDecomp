// Name: sound_sndmain.cpp_FUN_005506b0
// Address: 005506b0
// Address Range: [[005506b0, 00550a51]]
// Convention: unknown
// Signature: uint sound_sndmain_cpp_FUN_005506b0(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndmain_cpp_FUN_005506b0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CSfxSlot *pCVar4;
  int extraout_EAX;
  int iVar6;
  int iVar7;
  CSfxSample *pCVar8;
  CSfxSlot *this_ptr;
  char *pcVar9;
  int *piVar10;
  CSfxOptions *pCVar11;
  char *pcVar12;
  byte bVar13;
  int in_stack_fffffd8c;
  char local_174 [256];
  CSfxOptions local_74;
  uint local_14;
  CVector3d *pCVar5;
  
  bVar13 = 0;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (iVar2 = sound_sndmain_cpp_isSoundBusy_FUN_00552b20(), iVar2 == 0)) {
    return 0;
  }
  sound_sndmain_cpp_FUN_00550070(&local_74);
  pcVar12 = local_174;
  pcVar9 = param_1;
  do {
    cVar1 = *pcVar9;
    *pcVar12 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar12[1] = cVar1;
    pcVar12 = pcVar12 + 2;
  } while (cVar1 != '\0');
  piVar10 = (int *)(_DAT_0264161c * 0x60 + 0x2641620);
  pCVar11 = &local_74;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar11->channel_index = *piVar10;
    piVar10 = piVar10 + (uint)bVar13 * -2 + 1;
    pCVar11 = (CSfxOptions *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
  }
  iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(local_74.channel_index);
  if (iVar2 == 0) {
    return 0;
  }
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x249;
    core_main_c_FUN_004e4500("SfxSlot::kill - must be locked!");
  }
  local_14 = 0;
  iVar6 = 0;
  iVar2 = _DAT_0263cf80;
  while (iVar2 != 0) {
    local_14 = local_14 + 1;
    if (0x46ff < iVar6 + 0x11c) {
      local_14 = 0xffffffff;
      break;
    }
    iVar2 = *(int *)(&DAT_0263d09c + iVar6);
    iVar6 = iVar6 + 0x11c;
  }
  if ((int)local_14 < 0) goto LAB_00550933;
  iVar2 = local_14 * 0x11c;
  this_ptr = (CSfxSlot *)(iVar2 + 0x263cf1c);
  pCVar11 = &local_74;
  pCVar4 = this_ptr;
  for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
    (pCVar4->options).channel_index = pCVar11->channel_index;
    pCVar11 = (CSfxOptions *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
    pCVar4 = (CSfxSlot *)((int)pCVar4 + (uint)bVar13 * -8 + 4);
  }
  pCVar8 = g_SfxSamples;
  iVar6 = 0;
  do {
    iVar3 = _stricmp((char *)pCVar8,param_1);
    if (iVar3 == 0) {
      if (pCVar8 != (CSfxSample *)0x0) {
        if (pCVar8->streaming_slot_index != -1) goto LAB_0055080c;
        *(CSfxSample **)(&DAT_0263cf84 + iVar2) = pCVar8;
        goto LAB_00550817;
      }
      break;
    }
    iVar6 = iVar6 + 1;
    pCVar8 = pCVar8 + 1;
  } while (iVar6 < 0x40);
  iVar6 = engine_dosio_cpp_getFileSize_FUN_00460aa0("sound",local_174);
  if (iVar6 < 0x200001) {
    engine_dosio_cpp_splitPath_FUN_00461070
              (local_174,(char *)0x0,(char *)0x0,(char *)0x0,&stack0xfffffd8c);
    iVar6 = _stricmp(&stack0xfffffd8c,&DAT_005e7ee9);
    if ((iVar6 == 0) ||
       (iVar6 = _stricmp(&stack0xfffffd8c,&DAT_005e7eed), iVar6 == 0))
    goto LAB_0055080c;
    pCVar8 = sound_sndmain_cpp_FUN_0054c1c0(local_174);
  }
  else {
LAB_0055080c:
    pCVar8 = sound_sndmain_cpp_FUN_0054c7f0(local_14,local_174);
  }
  *(CSfxSample **)(&DAT_0263cf84 + iVar2) = pCVar8;
LAB_00550817:
  iVar6 = *(int *)(&DAT_0263cf84 + iVar2);
  if (iVar6 == 0) {
    sound_sndmain_cpp_FUN_005549c0("startSfx - can't get sample %s\n",local_174);
  }
  else {
    *(int *)(iVar6 + 0x154) = *(int *)(iVar6 + 0x154) + 1;
    sound_sndmain_cpp_CSfxSlot_seek_FUN_0054fbe0(this_ptr);
    *(uint *)(iVar2 + 0x263d024) = 0;
    *(uint *)(iVar2 + 0x263d01c) = 0xbf800000;
    *(uint *)(iVar2 + 0x263d020) = 0;
    *(uint *)(iVar2 + 0x263d018) = *(uint *)(iVar2 + 0x263cf54);
    pCVar4 = this_ptr;
    do {
      pCVar5 = &(pCVar4->options).position;
      pCVar4->channel_current_buffer_offsets[0] = -1;
      pCVar4 = (CSfxSlot *)pCVar5;
    } while (pCVar5 != (CVector3d *)(iVar2 + 0x263cf3c));
    iVar7 = DAT_0061bc80 + 1;
    iVar6 = *(int *)(&DAT_0263cf84 + iVar2);
    *(uint *)(iVar2 + 0x263d00c) = *(uint *)(*(int *)(&DAT_0263cf84 + iVar2) + 0x114);
    iVar3 = *(int *)(&DAT_0263cf84 + iVar2);
    DAT_0061bc80 = iVar7;
    *(uint *)(iVar2 + 0x263d010) = *(uint *)(iVar6 + 0x118);
    *(uint *)(iVar2 + 0x263d014) = *(uint *)(iVar3 + 0x11c);
    *(uint *)(iVar2 + 0x263d034) = 0xffffffff;
    if (0xfffffe < iVar7) {
      DAT_0061bc80 = 1;
    }
    iVar6 = DAT_0061bc80;
    *(int *)(&DAT_0263cf80 + iVar2) = DAT_0061bc80;
    iVar3 = sound_sndmain_cpp_FUN_0054ddf0
                      (*(uint *)(&DAT_0263cf84 + iVar2),0x4479c000,0x4479c000);
    if (iVar3 != 0) {
      sound_sndmain_cpp_CSfxSlot_compute_FUN_0054e8c0(this_ptr,0.0);
      sound_sndmain_cpp_FUN_00552b30(in_stack_fffffd8c);
      if (extraout_EAX < 1) {
LAB_00550a34:
        sound_sndmain_cpp_FUN_00551440();
        return iVar6 << 6 | local_14;
      }
      iVar3 = (**(code **)(*_DAT_02648e80 + 0x40))
                        (_DAT_02648e80,*(uint *)(*(int *)(&DAT_0263cf84 + iVar2) + 0x158));
      *(int *)(&DAT_0263cf7c + iVar2) = iVar3;
      if (iVar3 != 0) goto LAB_00550a34;
    }
  }
  sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(this_ptr);
LAB_00550933:
  sound_sndmain_cpp_FUN_00551440();
  return 0;
}

// Name: core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450
// Address: 00506450
// Address Range: [[00506450, 00506663]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450()
// Globals:
//   TerminatedCString s_cre_charge_wav_006314fa
//   TerminatedCString s_lgunmask_raw_00631509
//   double DOUBLE_00631516 = 100
//   undefined4 DAT_00660a40
//   undefined4 DAT_00660a48
//   undefined4 DAT_00660a4c
//   undefined4 DAT_00660a50
//   undefined4 DAT_00660a54
//   CFilterCache* g_CFilterCachePtr = 020a4c08
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CWeather* g_CWeatherPtr = 03f95dc0
//   CFilterCache g_CFilterCacheInstance
//   CDemonLight g_CDemonLightInstance
//   undefined4 g_CDemonLightInstance.antialiasing_enabled
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   CDemonSet g_CDemonSetInstance
//   CWeather g_CWeatherInstance
// Function calls:
//   core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060
//   core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0
//   core_lightgun.cpp_FUN_00505ac0
//   core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090
//   core_weapon.cpp_CWeapon_process_FUN_005ee110
//   core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0
//   crt_math.c_round_FUN_005fe6b0
//   sound_sndmain.cpp_FUN_005a9660
//   sound_sndmain.cpp_FUN_005a9ae0
//   sound_sndmain.cpp_FUN_005a9b40
//   sound_sndmain.cpp_FUN_005a9c40
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_005a8a80
//   sound_sndmain.cpp_setNextSfxTrackedPosition_FUN_005a8940
//   sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_weapon_lightgun.cpp_ChargedRadianceEmitterGunMaybe(undefined4
   param_1, undefined4 param_2) */

void core_lightgun_cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CDemonFilter *filter_ptr;
  undefined4 uVar5;
  float10 fVar6;
  double dVar7;
  CWeapon *in_stack_00000004;
  float in_stack_0000000c;
  float in_stack_00000010;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(in_stack_00000004);
  fVar3 = core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0
                    (&g_HeroActors[g_LocalHeroIndex]->inventory,DAT_00660a40);
  fVar1 = (DAT_00660a40 / fVar3) * in_stack_00000010 +
          *(float *)(in_stack_00000004[1].base_actor.actor_name + 8);
  *(float *)(in_stack_00000004[1].base_actor.actor_name + 8) = fVar1;
  fVar2 = DAT_00660a40;
  fVar3 = (float)CONCAT22((short)((uint)fVar3 >> 0x10),
                          (ushort)(fVar1 < DAT_00660a40) << 8 |
                          (ushort)(NAN(fVar1) || NAN(DAT_00660a40)) << 10 |
                          (ushort)(fVar1 == DAT_00660a40) << 0xe);
  if (fVar1 >= DAT_00660a40 && (fVar1 == DAT_00660a40) == 0) {
    *(float *)(in_stack_00000004[1].base_actor.actor_name + 8) = DAT_00660a40;
    fVar3 = fVar2;
  }
  fVar6 = (float10)*(float *)(in_stack_00000004[1].base_actor.actor_name + 8) /
          (float10)DAT_00660a40;
  *(float *)(in_stack_00000004[1].base_actor.actor_name + 0xc) = (float)fVar6;
  fVar6 = fVar6 * (float10)DOUBLE_00631516;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_stack_00000004->weapon_state,fVar3));
  in_stack_00000004->ammo_count = (int)ROUND(fVar6);
  if ((int)((ulonglong)dVar7 >> 0x20) == 2) {
    iVar4 = sound_sndmain_cpp_FUN_005a9660();
    if (iVar4 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxTrackedPosition_FUN_005a8940
                (&(in_stack_00000004->base_actor).location.position);
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60((float)in_stack_00000004);
      sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_005a8a80(in_stack_0000000c);
      uVar5 = sound_sndmain_cpp_startSfx_FUN_005a8e90();
      *(undefined4 *)(in_stack_00000004[1].base_actor.actor_name + 4) = uVar5;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
    else {
      sound_sndmain_cpp_FUN_005a9ae0();
      sound_sndmain_cpp_FUN_005a9b40();
    }
    core_lightgun_cpp_FUN_00505ac0();
    if (*(int *)in_stack_00000004[1].base_actor.actor_name == 0) {
      g_CDemonLightInstance.antialiasing_enabled = 0;
    }
    else {
      g_CDemonLightInstance.antialiasing_enabled = 1;
      filter_ptr = core_dfilter_cpp_CFilterCache_getFilter_FUN_00470060
                             (g_CFilterCachePtr,"lgunmask.raw",(char *)0x0,
                              (int)in_stack_00000010);
      core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770(&g_CDemonLightInstance,filter_ptr,0,0,0);
      core_weather_cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0();
    }
    core_set_cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(g_CDemonSetPtr);
    in_stack_00000004[1].base_actor.actor_name[0] = '\0';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
    return;
  }
  sound_sndmain_cpp_FUN_005a9c40();
  in_stack_00000004[1].base_actor.actor_name[0] = '\0';
  in_stack_00000004[1].base_actor.actor_name[1] = '\0';
  in_stack_00000004[1].base_actor.actor_name[2] = '\0';
  in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  return;
}


// Assembly code:
// 00506450: PUSH EBX
//   Label: core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450
// 00506451: PUSH EBP
// 00506452: SUB ESP,0xc
// 00506455: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00506459: PUSH dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0050645d: PUSH EBX
// 0050645e: CALL core_weapon.cpp_CWeapon_process_FUN_005ee110
//   XREF to: 005ee110 (UNCONDITIONAL_CALL)
// 00506463: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 00506468: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0050646f: ADD ESP,0x8
// 00506472: ADD EAX,0x1f738
// 00506477: PUSH dword ptr [0x00660a40]
//   XREF to: 00660a40 (READ)
// 0050647d: PUSH EAX
// 0050647e: CALL core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0
//   XREF to: 004ffda0 (UNCONDITIONAL_CALL)
// 00506483: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00506487: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0xc] (READ)
// 0050648b: FDIVR float ptr [0x00660a40]
//   XREF to: 00660a40 (READ)
// 00506491: ADD ESP,0x8
// 00506494: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00506498: FADD float ptr [EBX + 0x580]
// 0050649e: FST float ptr [EBX + 0x580]
// 005064a4: FCOMP float ptr [0x00660a40]
//   XREF to: 00660a40 (READ)
// 005064aa: FNSTSW AX
// 005064ac: SAHF
// 005064ad: JA 0x005065e4
//   XREF to: 005065e4 (CONDITIONAL_JUMP)
// 005064b3: FLD float ptr [EBX + 0x580]
//   Label: LAB_005064b3
// 005064b9: FDIV float ptr [0x00660a40]
//   XREF to: 00660a40 (READ)
// 005064bf: FST float ptr [EBX + 0x584]
// 005064c5: FMUL double ptr [0x00631516]
//   XREF to: 00631516 (READ)
// 005064cb: MOV EDX,dword ptr [EBX + 0x2d4]
// 005064d1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005064d6: FISTP dword ptr [EBX + 0x568]
// 005064dc: CMP EDX,0x2
// 005064df: JNZ 0x005065f4
//   XREF to: 005065f4 (CONDITIONAL_JUMP)
// 005064e5: PUSH EDI
// 005064e6: PUSH ESI
// 005064e7: FLD float ptr [0x00660a48]
//   XREF to: 00660a48 (READ)
// 005064ed: FLD float ptr [0x00660a4c]
//   XREF to: 00660a4c (READ)
// 005064f3: FSUB ST0,ST1
// 005064f5: FMUL float ptr [EBX + 0x584]
// 005064fb: FLD float ptr [0x00660a50]
//   XREF to: 00660a50 (READ)
// 00506501: FLD float ptr [0x00660a54]
//   XREF to: 00660a54 (READ)
// 00506507: FSUB ST0,ST1
// 00506509: MOV ECX,dword ptr [EBX + 0x57c]
// 0050650f: FMUL float ptr [EBX + 0x584]
// 00506515: PUSH ECX
// 00506516: FXCH ST2
// 00506518: FADDP ST3,ST0
// 0050651a: FADDP
// 0050651c: FXCH
// 0050651e: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (WRITE)
// 00506522: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (WRITE)
// 00506526: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 0050652b: ADD ESP,0x4
// 0050652e: TEST EAX,EAX
// 00506530: JZ 0x00506613
//   XREF to: 00506613 (CONDITIONAL_JUMP)
// 00506536: MOV ESI,dword ptr [EBX + 0x57c]
// 0050653c: PUSH dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00506540: PUSH ESI
// 00506541: CALL sound_sndmain.cpp_FUN_005a9ae0
//   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)
// 00506546: ADD ESP,0x8
// 00506549: MOV EDI,dword ptr [EBX + 0x57c]
// 0050654f: PUSH dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 00506553: PUSH EDI
// 00506554: CALL sound_sndmain.cpp_FUN_005a9b40
//   XREF to: 005a9b40 (UNCONDITIONAL_CALL)
// 00506559: ADD ESP,0x8
// 0050655c: PUSH EBX
//   Label: LAB_0050655c
// 0050655d: CALL core_lightgun.cpp_FUN_00505ac0
//   XREF to: 00505ac0 (UNCONDITIONAL_CALL)
// 00506562: MOV EBP,dword ptr [EBX + 0x578]
// 00506568: ADD ESP,0x4
// 0050656b: TEST EBP,EBP
// 0050656d: JZ 0x00506659
//   XREF to: 00506659 (CONDITIONAL_JUMP)
// 00506573: PUSH 0x0
// 00506575: PUSH 0x631509
//   XREF to: 00631509 (DATA)
// 0050657a: MOV ECX,dword ptr [0x0066efcc]
//   XREF to: 020a4c08 (PARAM)
//   XREF to: 0066efcc (READ)
// 00506580: MOV EDX,0x1
// 00506585: PUSH ECX
//   XREF to: 020a4c08 (DATA)
// 00506586: MOV dword ptr [0x02d807c0],EDX
//   XREF to: 02d807c0 (WRITE)
// 0050658c: CALL core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060
//   XREF to: 00470060 (UNCONDITIONAL_CALL)
// 00506591: ADD ESP,0xc
// 00506594: PUSH 0x0
// 00506596: PUSH 0x0
// 00506598: PUSH 0x0
// 0050659a: PUSH EAX
// 0050659b: PUSH 0x2d7eaf0
//   XREF to: 02d7eaf0 (DATA)
// 005065a0: CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   XREF to: 00474770 (UNCONDITIONAL_CALL)
// 005065a5: ADD ESP,0x14
// 005065a8: PUSH 0x0
// 005065aa: MOV ESI,dword ptr [0x006848fc]
//   XREF to: 006848fc (READ)
// 005065b0: PUSH 0x3dcccccd
// 005065b5: PUSH ESI
//   XREF to: 03f95dc0 (DATA)
// 005065b6: CALL core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0
//   XREF to: 005eeeb0 (UNCONDITIONAL_CALL)
// 005065bb: ADD ESP,0xc
// 005065be: PUSH 0x2d7eaf0
//   Label: LAB_005065be
//   XREF to: 02d7eaf0 (DATA)
// 005065c3: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005065c9: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005065ca: CALL core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090
//   XREF to: 0056d090 (UNCONDITIONAL_CALL)
// 005065cf: ADD ESP,0x8
// 005065d2: MOV dword ptr [EBX + 0x578],0x0
// 005065dc: POP ESI
// 005065dd: POP EDI
// 005065de: ADD ESP,0xc
// 005065e1: POP EBP
// 005065e2: POP EBX
// 005065e3: RET
// 005065e4: MOV EAX,[0x00660a40]
//   Label: LAB_005065e4
//   XREF to: 00660a40 (READ)
// 005065e9: MOV dword ptr [EBX + 0x580],EAX
// 005065ef: JMP 0x005064b3
//   XREF to: 005064b3 (UNCONDITIONAL_JUMP)
// 005065f4: MOV EBP,dword ptr [EBX + 0x57c]
//   Label: LAB_005065f4
// 005065fa: PUSH EBP
// 005065fb: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 00506600: ADD ESP,0x4
// 00506603: MOV dword ptr [EBX + 0x578],0x0
// 0050660d: ADD ESP,0xc
// 00506610: POP EBP
// 00506611: POP EBX
// 00506612: RET
// 00506613: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   Label: LAB_00506613
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 00506618: LEA EAX,[EBX + 0x20]
// 0050661b: PUSH EAX
// 0050661c: CALL sound_sndmain.cpp_setNextSfxTrackedPosition_FUN_005a8940
//   XREF to: 005a8940 (UNCONDITIONAL_CALL)
// 00506621: ADD ESP,0x4
// 00506624: PUSH dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00506628: CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
//   XREF to: 005a8a60 (UNCONDITIONAL_CALL)
// 0050662d: ADD ESP,0x4
// 00506630: PUSH dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 00506634: CALL sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_005a8a80
//   XREF to: 005a8a80 (UNCONDITIONAL_CALL)
// 00506639: ADD ESP,0x4
// 0050663c: PUSH 0x6314fa
//   XREF to: 006314fa (DATA)
// 00506641: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 00506646: ADD ESP,0x4
// 00506649: MOV dword ptr [EBX + 0x57c],EAX
// 0050664f: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 00506654: JMP 0x0050655c
//   XREF to: 0050655c (UNCONDITIONAL_JUMP)
// 00506659: MOV dword ptr [0x02d807c0],EBP
//   Label: LAB_00506659
//   XREF to: 02d807c0 (WRITE)
// 0050665f: JMP 0x005065be
//   XREF to: 005065be (UNCONDITIONAL_JUMP)

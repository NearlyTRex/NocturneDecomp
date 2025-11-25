// Name: core_tommygun.cpp_CTommyGun_process_FUN_005de360
// Address: 005de360
// Address Range: [[005de360, 005de3a3] [005de436, 005de595]]
// Convention: __cdecl
// Signature: void core_tommygun.cpp_CTommyGun_process_FUN_005de360(CTommyGun * this_ptr)
// Globals:
//   TerminatedCString s_m_gun_t_wav_006554ff
//   float FLOAT_0065550d = 6
//   float FLOAT_00655511 = 0.1666667
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_weapon.cpp_CWeapon_process_FUN_005ee110
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0
//   sound_sndmain.cpp_CSfxSample_init_FUN_005a8480
//   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720
//   sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0
//   sound_sndmain.cpp_killSfx_FUN_005a9c40
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_005de360(CTommyGun *this_ptr)

{
  float base_frequency;
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_EAX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  float10 fVar3;
  double dVar4;
  uint in_stack_fffffe14;
  double dStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  char acStack_1c4 [4];
  float fStack_bc;
  char acStack_7c [8];
  char acStack_74 [84];
  undefined4 local_20;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base_weapon);
  if (*(int *)this_ptr->field1_0x578 < 1) {
    dVar4 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(2,in_stack_fffffe14);
    uStack_1c._4_4_ = SUB84(dVar4,0);
    uStack_14 = (undefined4)((ulonglong)dVar4 >> 0x20);
    if (0.0 <= (float)dVar4) {
      sound_sndmain_cpp_lockSound_FUN_005abd30();
      fStack_1d4 = fStack_1d4 * FLOAT_0065550d;
      uStack_1c = (double)fStack_1d4;
      crt_math_c_floor_FUN_005feb90((double)in_ST0);
      dStack_1d8 = (double)CONCAT44(fStack_1d4,
                                    (float)((float10)(double)CONCAT44((undefined4)uStack_1c,local_20
                                                                     ) -
                                           (float10)(double)CONCAT44(extraout_EDX,extraout_EAX)));
      sound_sndmain_cpp_CSfxSample_init_FUN_005a8480((CSfxSample *)&fStack_1d4);
      iVar1 = sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0
                        (*(uint *)(this_ptr->field1_0x578 + 4),(CSfxSample *)&fStack_1d0);
      if (iVar1 != 0) {
        fVar3 = (float10)(int)fStack_bc * (float10)fStack_1d0 * (float10)FLOAT_00655511;
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,fStack_bc));
        dStack_1d8 = (double)CONCAT44((int)ROUND(fVar3),SUB84(dStack_1d8,0));
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        dStack_1d8 = (double)(int)fStack_1d0;
        if (0.0 < dStack_1d8) {
          sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0(dStack_1d8,0);
        }
        dStack_1d8 = (double)CONCAT44(fStack_1d4,"m-gun-t.wav");
        uVar2 = (*((this_ptr->base_weapon).base_actor.vtable)->playSound)
                          ((CDemonActor *)this_ptr,"m-gun-t.wav");
        *(undefined4 *)(this_ptr->field1_0x578 + 8) = uVar2;
        acStack_1c4[0] = 'e';
        acStack_1c4[1] = -0x1b;
        acStack_1c4[2] = ']';
        acStack_1c4[3] = '\0';
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      }
      acStack_1c4[0] = 'q';
      acStack_1c4[1] = -0x1b;
      acStack_1c4[2] = ']';
      acStack_1c4[3] = '\0';
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->field1_0x578 + 4));
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return;
    }
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->field1_0x578 + 4));
    return;
  }
  *(int *)this_ptr->field1_0x578 = *(int *)this_ptr->field1_0x578 + -1;
  base_frequency = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1111112);
  iVar1 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40
                    (*(uint *)(this_ptr->field1_0x578 + 4),base_frequency);
  if (iVar1 != 0) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->field1_0x578 + 4));
  crt_stdio_c_sprintf_FUN_005fdbd0
            (acStack_7c,"m-gun1.wav @ 2.3 * %f",SUB84((double)fStack_1d4,0),
             (int)((ulonglong)(double)fStack_1d4 >> 0x20));
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->field1_0x578 + 8));
  uVar2 = (*((this_ptr->base_weapon).base_actor.vtable)->playAmbientSound)
                    ((CDemonActor *)this_ptr,acStack_74);
  *(undefined4 *)(this_ptr->field1_0x578 + 4) = uVar2;
  return;
}


// Assembly code:
// 005de360: PUSH EBX
//   Label: core_tommygun.cpp_CTommyGun_process_FUN_005de360
// 005de361: PUSH ESI
// 005de362: PUSH EDI
// 005de363: PUSH EBP
// 005de364: MOV EBP,ESP
// 005de366: SUB ESP,0x1dc
// 005de36c: AND ESP,0xfffffff8
// 005de36f: MOV EBX,dword ptr [EBP + 0x14]
// 005de372: PUSH dword ptr [EBP + 0x18]
// 005de375: PUSH EBX
// 005de376: CALL core_weapon.cpp_CWeapon_process_FUN_005ee110
//   XREF to: 005ee110 (UNCONDITIONAL_CALL)
// 005de37b: MOV EDX,dword ptr [EBX + 0x578]
// 005de381: ADD ESP,0x8
// 005de384: TEST EDX,EDX
// 005de386: JLE 0x005de436
//   XREF to: 005de436 (CONDITIONAL_JUMP)
// 005de38c: PUSH 0x3f8e38e4
// 005de391: LEA EAX,[EDX + -0x1]
// 005de394: PUSH 0x3f666666
// 005de399: MOV dword ptr [EBX + 0x578],EAX
// 005de39f: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005de436: PUSH 0x2
//   Label: LAB_005de436
// 005de438: MOV ECX,dword ptr [EBX + 0x57c]
// 005de43e: PUSH ECX
// 005de43f: CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720
//   XREF to: 005a9720 (UNCONDITIONAL_CALL)
// 005de444: MOV dword ptr [ESP + 0x1d8],EAX
// 005de44b: MOV dword ptr [ESP + 0x1dc],EDX
// 005de452: FLD double ptr [ESP + 0x1d8]
// 005de459: ADD ESP,0x8
// 005de45c: FST float ptr [ESP + 0x10]
// 005de460: FLDZ
// 005de462: FCOMPP
// 005de464: FNSTSW AX
// 005de466: SAHF
// 005de467: JA 0x005de580
//   XREF to: 005de580 (CONDITIONAL_JUMP)
// 005de46d: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005de472: FLD float ptr [ESP + 0x10]
// 005de476: FMUL float ptr [0x0065550d]
//   XREF to: 0065550d (READ)
// 005de47c: FST float ptr [ESP + 0x10]
// 005de480: FSTP double ptr [ESP + 0x1c8]
// 005de487: MOV EDI,dword ptr [ESP + 0x1cc]
// 005de48e: PUSH EDI
// 005de48f: MOV EAX,dword ptr [ESP + 0x1cc]
// 005de496: PUSH EAX
// 005de497: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 005de49c: MOV dword ptr [ESP + 0x1d8],EAX
// 005de4a3: MOV dword ptr [ESP + 0x1dc],EDX
// 005de4aa: FLD double ptr [ESP + 0x1d8]
// 005de4b1: ADD ESP,0x8
// 005de4b4: LEA EAX,[ESP + 0x14]
// 005de4b8: FSUBR double ptr [ESP + 0x1c8]
// 005de4bf: PUSH EAX
// 005de4c0: FSTP float ptr [ESP + 0x14]
// 005de4c4: CALL sound_sndmain.cpp_CSfxSample_init_FUN_005a8480
//   XREF to: 005a8480 (UNCONDITIONAL_CALL)
// 005de4c9: ADD ESP,0x4
// 005de4cc: LEA EAX,[ESP + 0x14]
// 005de4d0: PUSH EAX
// 005de4d1: MOV EDX,dword ptr [EBX + 0x57c]
// 005de4d7: PUSH EDX
// 005de4d8: CALL sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0
//   XREF to: 005a96e0 (UNCONDITIONAL_CALL)
// 005de4dd: ADD ESP,0x8
// 005de4e0: TEST EAX,EAX
// 005de4e2: JZ 0x005de565
//   XREF to: 005de565 (CONDITIONAL_JUMP)
// 005de4e8: MOV EAX,dword ptr [ESP + 0x124]
// 005de4ef: MOV dword ptr [ESP + 0x1d8],EAX
// 005de4f6: FILD dword ptr [ESP + 0x1d8]
// 005de4fd: FMUL float ptr [ESP + 0x10]
// 005de501: FMUL float ptr [0x00655511]
//   XREF to: 00655511 (READ)
// 005de507: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005de50c: FISTP dword ptr [ESP + 0x8]
// 005de510: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005de515: MOV EAX,dword ptr [ESP + 0x8]
// 005de519: MOV dword ptr [ESP + 0x1d8],EAX
// 005de520: FLDZ
// 005de522: FILD dword ptr [ESP + 0x1d8]
// 005de529: FSTP double ptr [ESP]
// 005de52c: FCOMP double ptr [ESP]
// 005de52f: FNSTSW AX
// 005de531: SAHF
// 005de532: JNC 0x005de548
//   XREF to: 005de548 (CONDITIONAL_JUMP)
// 005de534: PUSH 0x0
// 005de536: MOV ECX,dword ptr [ESP + 0x8]
// 005de53a: PUSH ECX
// 005de53b: MOV ESI,dword ptr [ESP + 0x8]
// 005de53f: PUSH ESI
// 005de540: CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0
//   XREF to: 005a8be0 (UNCONDITIONAL_CALL)
// 005de545: ADD ESP,0xc
// 005de548: PUSH 0x6554ff
//   Label: LAB_005de548
//   XREF to: 006554ff (DATA)
// 005de54d: MOV EAX,dword ptr [EBX + 0x154]
// 005de553: PUSH EBX
// 005de554: CALL dword ptr [EAX + 0x24]
// 005de557: ADD ESP,0x8
// 005de55a: MOV dword ptr [EBX + 0x580],EAX
// 005de560: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005de565: MOV EDI,dword ptr [EBX + 0x57c]
//   Label: LAB_005de565
// 005de56b: PUSH EDI
// 005de56c: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005de571: ADD ESP,0x4
// 005de574: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005de579: MOV ESP,EBP
// 005de57b: POP EBP
// 005de57c: POP EDI
// 005de57d: POP ESI
// 005de57e: POP EBX
// 005de57f: RET
// 005de580: MOV ESI,dword ptr [EBX + 0x57c]
//   Label: LAB_005de580
// 005de586: PUSH ESI
// 005de587: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005de58c: ADD ESP,0x4
// 005de58f: MOV ESP,EBP
// 005de591: POP EBP
// 005de592: POP EDI
// 005de593: POP ESI
// 005de594: POP EBX
// 005de595: RET

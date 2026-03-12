; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_005de360(CTommyGun *this_ptr,float delta_time)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x1f8]:8  local_1f8
; undefined8       Stack[-0x1f0]:8  local_1f0
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; CSfxSample       Stack[-0x1dc]:384  local_1dc
; double           Stack[-0x28]:8  local_28
; double           Stack[-0x20]:8  local_20
; float            Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   TerminatedCString s_m_gun_t_wav_006554ff
;   float FLOAT_0065550d = 6
;   float FLOAT_00655511 = 0.1666667
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_weapon.cpp_CWeapon_process_FUN_005ee110
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;   sound_sndmain.cpp_CSfxSample_init_FUN_005a8480
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720
;   sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005de360
        ;   Label: core_tommygun.cpp_CTommyGun_process_FUN_005de360
    PUSH ESI                            ; 005de361
    PUSH EDI                            ; 005de362
    PUSH EBP                            ; 005de363
    MOV EBP,ESP                         ; 005de364
    SUB ESP,0x1dc                       ; 005de366
    AND ESP,0xfffffff8                  ; 005de36c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005de36f
    PUSH dword ptr [EBP + 0x18]         ; 005de372
    PUSH EBX                            ; 005de375
    CALL core_weapon.cpp_CWeapon_process_FUN_005ee110 ; 005de376
        ;   XREF to: 005ee110 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_005ee110(CWeapon * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x578]     ; 005de37b
    ADD ESP,0x8                         ; 005de381
    TEST EDX,EDX                        ; 005de384
    JLE 0x005de436                      ; 005de386
        ;   XREF to: 005de436 (CONDITIONAL_JUMP)  ; LAB_005de436
    PUSH 0x3f8e38e4                     ; 005de38c
    LEA EAX,[EDX + -0x1]                ; 005de391
    PUSH 0x3f666666                     ; 005de394
    MOV dword ptr [EBX + 0x578],EAX     ; 005de399
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005de39f
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    PUSH 0x2                            ; 005de436
        ;   Label: LAB_005de436
    MOV ECX,dword ptr [EBX + 0x57c]     ; 005de438
    PUSH ECX                            ; 005de43e
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720 ; 005de43f
        ;   XREF to: 005a9720 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720(uint sfx_handle, uint output_format)
    MOV dword ptr [ESP + 0x1d8],EAX     ; 005de444
    MOV dword ptr [ESP + 0x1dc],EDX     ; 005de44b
    FLD double ptr [ESP + 0x1d8]        ; 005de452
    ADD ESP,0x8                         ; 005de459
    FST float ptr [ESP + 0x10]          ; 005de45c
    FLDZ                                ; 005de460
    FCOMPP                              ; 005de462
    FNSTSW AX                           ; 005de464
    SAHF                                ; 005de466
    JA 0x005de580                       ; 005de467
        ;   XREF to: 005de580 (CONDITIONAL_JUMP)  ; LAB_005de580
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005de46d
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005abd30()
    FLD float ptr [ESP + 0x10]          ; 005de472
    FMUL float ptr [0x0065550d]         ; 005de476 | FLOAT_0065550d
    FST float ptr [ESP + 0x10]          ; 005de47c
    FSTP double ptr [ESP + 0x1c8]       ; 005de480
    MOV EDI,dword ptr [ESP + 0x1cc]     ; 005de487
    PUSH EDI                            ; 005de48e
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 005de48f
    PUSH EAX                            ; 005de496
    CALL crt_math.c_floor_FUN_005feb90  ; 005de497
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x1d8],EAX     ; 005de49c
    MOV dword ptr [ESP + 0x1dc],EDX     ; 005de4a3
    FLD double ptr [ESP + 0x1d8]        ; 005de4aa
    ADD ESP,0x8                         ; 005de4b1
    LEA EAX,[ESP + 0x14]                ; 005de4b4
    FSUBR double ptr [ESP + 0x1c8]      ; 005de4b8
    PUSH EAX                            ; 005de4bf
    FSTP float ptr [ESP + 0x14]         ; 005de4c0
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_005a8480 ; 005de4c4
        ;   XREF to: 005a8480 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_005a8480(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005de4c9
    LEA EAX,[ESP + 0x14]                ; 005de4cc
    PUSH EAX                            ; 005de4d0
    MOV EDX,dword ptr [EBX + 0x57c]     ; 005de4d1
    PUSH EDX                            ; 005de4d7
    CALL sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0 ; 005de4d8
        ;   XREF to: 005a96e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0(uint sfx_handle, CSfxSample * output_buffer)
    ADD ESP,0x8                         ; 005de4dd
    TEST EAX,EAX                        ; 005de4e0
    JZ 0x005de565                       ; 005de4e2
        ;   XREF to: 005de565 (CONDITIONAL_JUMP)  ; LAB_005de565
    MOV EAX,dword ptr [ESP + 0x124]     ; 005de4e8
    MOV dword ptr [ESP + 0x1d8],EAX     ; 005de4ef
    FILD dword ptr [ESP + 0x1d8]        ; 005de4f6
    FMUL float ptr [ESP + 0x10]         ; 005de4fd
    FMUL float ptr [0x00655511]         ; 005de501 | FLOAT_00655511
    CALL crt_math.c_round_FUN_005fe6b0  ; 005de507
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 005de50c
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005de510
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    MOV EAX,dword ptr [ESP + 0x8]       ; 005de515
    MOV dword ptr [ESP + 0x1d8],EAX     ; 005de519
    FLDZ                                ; 005de520
    FILD dword ptr [ESP + 0x1d8]        ; 005de522
    FSTP double ptr [ESP]               ; 005de529
    FCOMP double ptr [ESP]              ; 005de52c
    FNSTSW AX                           ; 005de52f
    SAHF                                ; 005de531
    JNC 0x005de548                      ; 005de532
        ;   XREF to: 005de548 (CONDITIONAL_JUMP)  ; LAB_005de548
    PUSH 0x0                            ; 005de534
    MOV ECX,dword ptr [ESP + 0x8]       ; 005de536
    PUSH ECX                            ; 005de53a
    MOV ESI,dword ptr [ESP + 0x8]       ; 005de53b
    PUSH ESI                            ; 005de53f
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0 ; 005de540
        ;   XREF to: 005a8be0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 005de545
    PUSH 0x6554ff                       ; 005de548 | = "m-gun-t.wav"
        ;   Label: LAB_005de548
    MOV EAX,dword ptr [EBX + 0x154]     ; 005de54d
    PUSH EBX                            ; 005de553
    CALL dword ptr [EAX + 0x24]         ; 005de554
    ADD ESP,0x8                         ; 005de557
    MOV dword ptr [EBX + 0x580],EAX     ; 005de55a
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005de560
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    MOV EDI,dword ptr [EBX + 0x57c]     ; 005de565
        ;   Label: LAB_005de565
    PUSH EDI                            ; 005de56b
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005de56c
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005de571
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005de574
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    MOV ESP,EBP                         ; 005de579
    POP EBP                             ; 005de57b
    POP EDI                             ; 005de57c
    POP ESI                             ; 005de57d
    POP EBX                             ; 005de57e
    RET                                 ; 005de57f
    MOV ESI,dword ptr [EBX + 0x57c]     ; 005de580
        ;   Label: LAB_005de580
    PUSH ESI                            ; 005de586
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005de587
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005de58c
    MOV ESP,EBP                         ; 005de58f
    POP EBP                             ; 005de591
    POP EDI                             ; 005de592
    POP ESI                             ; 005de593
    POP EBX                             ; 005de594
    RET                                 ; 005de595


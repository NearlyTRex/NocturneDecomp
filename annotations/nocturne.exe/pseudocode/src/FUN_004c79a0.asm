; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c79a0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   TerminatedCString s_cre_charge_wav_00587a89
;   TerminatedCString s_lgunmask_raw_00587a98
;   double DOUBLE_00587aa5 = 100
;   float FLOAT_0059fd60 = 30
;   float FLOAT_0059fd68 = 2
;   float FLOAT_0059fd6c = 2.5
;   float FLOAT_0059fd70 = 1
;   float FLOAT_0059fd74 = 2
;   float FLOAT_0059fd78 = 0.3000000
;   float FLOAT_0059fd7c = 0.4500000
;   float FLOAT_0059fd80 = 1
;   float FLOAT_0059fd84 = 1.580000
;   undefined4 DAT_005ad54c
;   undefined4 DAT_005b9284
;   undefined4 DAT_005be368
;   ... and 5 more
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0
;   core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004c1b20
;   core_lightgun.cpp_CLightGun_updateBeamLight_FUN_004c6ff0
;   core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970
;   core_weapon.cpp_CWeapon_process_FUN_00554030
;   core_weather.cpp_CWeather_createLightningStrike_FUN_00554d40
;   crt_math.c_round_FUN_00563a30
;   FUN_004940d0
;   FUN_00526120
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_killSfx_FUN_00527230
;   sound_sndmain.cpp_popSfxOptions_FUN_005263c0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00526340
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c79a0
        ;   Label: FUN_004c79a0
    PUSH ESI                            ; 004c79a1
    PUSH EBP                            ; 004c79a2
    SUB ESP,0x14                        ; 004c79a3
    MOV EBX,dword ptr [ESP + 0x24]      ; 004c79a6
    PUSH dword ptr [ESP + 0x28]         ; 004c79aa
    PUSH EBX                            ; 004c79ae
    CALL core_weapon.cpp_CWeapon_process_FUN_00554030 ; 004c79af
        ;   XREF to: 00554030 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_process_FUN_00554030()
    MOV EAX,[0x01cae0e8]                ; 004c79b4 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004c79b9
    ADD ESP,0x8                         ; 004c79c0
    ADD EAX,0x1f5a0                     ; 004c79c3
    PUSH dword ptr [0x0059fd60]         ; 004c79c8 | FLOAT_0059fd60
    PUSH EAX                            ; 004c79ce
    CALL core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004c1b20 ; 004c79cf
        ;   XREF to: 004c1b20 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004c1b20()
    MOV dword ptr [ESP + 0x18],EAX      ; 004c79d4
    FLD float ptr [ESP + 0x18]          ; 004c79d8
    FDIVR float ptr [0x0059fd60]        ; 004c79dc | FLOAT_0059fd60
    ADD ESP,0x8                         ; 004c79e2
    FMUL float ptr [ESP + 0x28]         ; 004c79e5
    FADD float ptr [EBX + 0x578]        ; 004c79e9
    FST float ptr [EBX + 0x578]         ; 004c79ef
    FCOMP float ptr [0x0059fd60]        ; 004c79f5 | FLOAT_0059fd60
    FNSTSW AX                           ; 004c79fb
    SAHF                                ; 004c79fd
    JA 0x004c7ba8                       ; 004c79fe
        ;   XREF to: 004c7ba8 (CONDITIONAL_JUMP)  ; LAB_004c7ba8
    FLD float ptr [EBX + 0x578]         ; 004c7a04
        ;   Label: LAB_004c7a04
    FDIV float ptr [0x0059fd60]         ; 004c7a0a | FLOAT_0059fd60
    FST float ptr [EBX + 0x57c]         ; 004c7a10
    FMUL double ptr [0x00587aa5]        ; 004c7a16 | DOUBLE_00587aa5
    MOV EDX,dword ptr [EBX + 0x2cc]     ; 004c7a1c
    CALL crt_math.c_round_FUN_00563a30  ; 004c7a22
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBX + 0x560]       ; 004c7a27
    CMP EDX,0x2                         ; 004c7a2d
    JNZ 0x004c7bb8                      ; 004c7a30
        ;   XREF to: 004c7bb8 (CONDITIONAL_JUMP)  ; LAB_004c7bb8
    PUSH EDI                            ; 004c7a36
    FLD float ptr [0x0059fd68]          ; 004c7a37 | FLOAT_0059fd68
    FLD float ptr [0x0059fd6c]          ; 004c7a3d | FLOAT_0059fd6c
    FSUB ST0,ST1                        ; 004c7a43
    FMUL float ptr [EBX + 0x57c]        ; 004c7a45
    FLD float ptr [0x0059fd70]          ; 004c7a4b | FLOAT_0059fd70
    FLD float ptr [0x0059fd74]          ; 004c7a51 | FLOAT_0059fd74
    FSUB ST0,ST1                        ; 004c7a57
    MOV ECX,dword ptr [EBX + 0x574]     ; 004c7a59
    FMUL float ptr [EBX + 0x57c]        ; 004c7a5f
    PUSH ECX                            ; 004c7a65
    FXCH ST2                            ; 004c7a66
    FADDP ST3,ST0                       ; 004c7a68
    FADDP                               ; 004c7a6a
    FXCH                                ; 004c7a6c
    FSTP float ptr [ESP + 0x10]         ; 004c7a6e
    FSTP float ptr [ESP + 0x14]         ; 004c7a72
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004c7a76
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 004c7a7b
    TEST EAX,EAX                        ; 004c7a7e
    JZ 0x004c7c08                       ; 004c7a80
        ;   XREF to: 004c7c08 (CONDITIONAL_JUMP)  ; LAB_004c7c08
    MOV ESI,dword ptr [EBX + 0x574]     ; 004c7a86
    PUSH dword ptr [ESP + 0xc]          ; 004c7a8c
    PUSH ESI                            ; 004c7a90
    CALL sound_sndmain.cpp_setSfxVolume_FUN_005270d0 ; 004c7a91
        ;   XREF to: 005270d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxVolume_FUN_005270d0()
    ADD ESP,0x8                         ; 004c7a96
    MOV EDI,dword ptr [EBX + 0x574]     ; 004c7a99
    PUSH dword ptr [ESP + 0x10]         ; 004c7a9f
    PUSH EDI                            ; 004c7aa3
    CALL sound_sndmain.cpp_setSfxBaseFrequency_FUN_00527130 ; 004c7aa4
        ;   XREF to: 00527130 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxBaseFrequency_FUN_00527130()
    ADD ESP,0x8                         ; 004c7aa9
    PUSH EBX                            ; 004c7aac
        ;   Label: LAB_004c7aac
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c7aad
    CALL dword ptr [EAX + 0x8c]         ; 004c7ab3
    MOV EDX,dword ptr [0x01cae0e8]      ; 004c7ab9 | DAT_01cae0e8
    MOV EBP,dword ptr [EDX*0x4 + 0x1cae0d8] ; 004c7abf
    ADD ESP,0x4                         ; 004c7ac6
    CMP EAX,EBP                         ; 004c7ac9
    JNZ 0x004c7b21                      ; 004c7acb
        ;   XREF to: 004c7b21 (CONDITIONAL_JUMP)  ; LAB_004c7b21
    FLD float ptr [0x0059fd84]          ; 004c7acd | FLOAT_0059fd84
    FLD float ptr [0x0059fd78]          ; 004c7ad3 | FLOAT_0059fd78
    FLD float ptr [0x0059fd7c]          ; 004c7ad9 | FLOAT_0059fd7c
    FSUB ST0,ST1                        ; 004c7adf
    FXCH ST2                            ; 004c7ae1
    FLD float ptr [0x0059fd80]          ; 004c7ae3 | FLOAT_0059fd80
    FXCH                                ; 004c7ae9
    FSUB ST0,ST1                        ; 004c7aeb
    FXCH ST3                            ; 004c7aed
    FMUL float ptr [EBX + 0x57c]        ; 004c7aef
    FXCH ST3                            ; 004c7af5
    FMUL float ptr [EBX + 0x57c]        ; 004c7af7
    MOV EAX,[0x005b9284]                ; 004c7afd | DAT_005b9284
    FXCH ST3                            ; 004c7b02
    FADDP ST2,ST0                       ; 004c7b04
    FADDP ST2,ST0                       ; 004c7b06
    FSTP float ptr [ESP + 0x4]          ; 004c7b08
    PUSH dword ptr [ESP + 0x4]          ; 004c7b0c
    FSTP float ptr [ESP + 0xc]          ; 004c7b10
    PUSH dword ptr [ESP + 0xc]          ; 004c7b14
    PUSH EAX                            ; 004c7b18
    CALL FUN_004940d0                   ; 004c7b19
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    ADD ESP,0xc                         ; 004c7b1e
    PUSH EBX                            ; 004c7b21
        ;   Label: LAB_004c7b21
    CALL core_lightgun.cpp_CLightGun_updateBeamLight_FUN_004c6ff0 ; 004c7b22
        ;   XREF to: 004c6ff0 (UNCONDITIONAL_CALL)  ; undefined core_lightgun.cpp_CLightGun_updateBeamLight_FUN_004c6ff0()
    MOV EDX,dword ptr [EBX + 0x570]     ; 004c7b27
    ADD ESP,0x4                         ; 004c7b2d
    TEST EDX,EDX                        ; 004c7b30
    JZ 0x004c7c4e                       ; 004c7b32
        ;   XREF to: 004c7c4e (CONDITIONAL_JUMP)  ; LAB_004c7c4e
    PUSH 0x0                            ; 004c7b38
    PUSH 0x587a98                       ; 004c7b3a | = "lgunmask.raw"
    MOV EDI,dword ptr [0x005ad54c]      ; 004c7b3f | DAT_005ad54c
    MOV ESI,0x1                         ; 004c7b45
    PUSH EDI                            ; 004c7b4a
    MOV dword ptr [0x01c76310],ESI      ; 004c7b4b | DAT_01c76310
    CALL core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20 ; 004c7b51
        ;   XREF to: 0044bd20 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20()
    ADD ESP,0xc                         ; 004c7b56
    PUSH 0x0                            ; 004c7b59
    PUSH 0x0                            ; 004c7b5b
    PUSH 0x0                            ; 004c7b5d
    PUSH EAX                            ; 004c7b5f
    PUSH 0x1c74640                      ; 004c7b60 | DAT_01c74640
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0 ; 004c7b65
        ;   XREF to: 004501c0 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0()
    ADD ESP,0x14                        ; 004c7b6a
    PUSH 0x0                            ; 004c7b6d
    MOV EBP,dword ptr [0x005c15b8]      ; 004c7b6f | DAT_005c15b8
    PUSH 0x3dcccccd                     ; 004c7b75
    PUSH EBP                            ; 004c7b7a
    CALL core_weather.cpp_CWeather_createLightningStrike_FUN_00554d40 ; 004c7b7b
        ;   XREF to: 00554d40 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_CWeather_createLightningStrike_FUN_00554d40()
    ADD ESP,0xc                         ; 004c7b80
    PUSH 0x1c74640                      ; 004c7b83 | DAT_01c74640
        ;   Label: LAB_004c7b83
    MOV EAX,[0x005be368]                ; 004c7b88 | DAT_005be368
    PUSH EAX                            ; 004c7b8d | DAT_01e57284
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970 ; 004c7b8e
        ;   XREF to: 0050a970 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970()
    ADD ESP,0x8                         ; 004c7b93
    MOV dword ptr [EBX + 0x570],0x0     ; 004c7b96
    POP EDI                             ; 004c7ba0
    ADD ESP,0x14                        ; 004c7ba1
    POP EBP                             ; 004c7ba4
    POP ESI                             ; 004c7ba5
    POP EBX                             ; 004c7ba6
    RET                                 ; 004c7ba7
    MOV EAX,[0x0059fd60]                ; 004c7ba8 | FLOAT_0059fd60
        ;   Label: LAB_004c7ba8
    MOV dword ptr [EBX + 0x578],EAX     ; 004c7bad
    JMP 0x004c7a04                      ; 004c7bb3
        ;   XREF to: 004c7a04 (UNCONDITIONAL_JUMP)  ; LAB_004c7a04
    MOV EDX,dword ptr [EBX + 0x574]     ; 004c7bb8
        ;   Label: LAB_004c7bb8
    PUSH EDX                            ; 004c7bbe
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004c7bbf
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 004c7bc4
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c7bc7
    PUSH EBX                            ; 004c7bcd
    CALL dword ptr [EAX + 0x8c]         ; 004c7bce
    MOV EDX,dword ptr [0x01cae0e8]      ; 004c7bd4 | DAT_01cae0e8
    MOV ECX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 004c7bda
    ADD ESP,0x4                         ; 004c7be1
    CMP EAX,ECX                         ; 004c7be4
    JNZ 0x004c7bf7                      ; 004c7be6
        ;   XREF to: 004c7bf7 (CONDITIONAL_JUMP)  ; LAB_004c7bf7
    MOV ESI,dword ptr [0x005b9284]      ; 004c7be8 | DAT_005b9284
    PUSH ESI                            ; 004c7bee
    CALL FUN_004940d0                   ; 004c7bef
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    ADD ESP,0x4                         ; 004c7bf4
    MOV dword ptr [EBX + 0x570],0x0     ; 004c7bf7
        ;   Label: LAB_004c7bf7
    ADD ESP,0x14                        ; 004c7c01
    POP EBP                             ; 004c7c04
    POP ESI                             ; 004c7c05
    POP EBX                             ; 004c7c06
    RET                                 ; 004c7c07
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 004c7c08
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
        ;   Label: LAB_004c7c08
    LEA EAX,[EBX + 0x20]                ; 004c7c0d
    PUSH EAX                            ; 004c7c10
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0 ; 004c7c11
        ;   XREF to: 00525fc0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0()
    ADD ESP,0x4                         ; 004c7c16
    PUSH dword ptr [ESP + 0xc]          ; 004c7c19
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0 ; 004c7c1d
        ;   XREF to: 005260f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0()
    ADD ESP,0x4                         ; 004c7c22
    PUSH dword ptr [ESP + 0x10]         ; 004c7c25
    CALL FUN_00526120                   ; 004c7c29
        ;   XREF to: 00526120 (UNCONDITIONAL_CALL)  ; undefined FUN_00526120()
    ADD ESP,0x4                         ; 004c7c2e
    PUSH 0x587a89                       ; 004c7c31 | = "cre-charge.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005265a0 ; 004c7c36
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_startSfx_FUN_005265a0()
    ADD ESP,0x4                         ; 004c7c3b
    MOV dword ptr [EBX + 0x574],EAX     ; 004c7c3e
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 004c7c44
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    JMP 0x004c7aac                      ; 004c7c49
        ;   XREF to: 004c7aac (UNCONDITIONAL_JUMP)  ; LAB_004c7aac
    MOV dword ptr [0x01c76310],EDX      ; 004c7c4e | DAT_01c76310
        ;   Label: LAB_004c7c4e
    JMP 0x004c7b83                      ; 004c7c54
        ;   XREF to: 004c7b83 (UNCONDITIONAL_JUMP)  ; LAB_004c7b83


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_00598d50(CTommyGun *this_ptr,float delta_time)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005f7f44
;   undefined4 DAT_005f7f48
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_weapon.cpp_CWeapon_process_FUN_005ad770
;   crt_math.c_floor_FUN_005c0880
;   crt_math.c_round_FUN_005c03a0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   sound_sndmain.cpp_CSfxSample_init_FUN_00572340
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00573660
;   sound_sndmain.cpp_getSfxSampleInfo_FUN_00573620
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;   sound_sndmain.cpp_popSfxOptions_FUN_00572b40
;   sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0
;   sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00572a50
;   sound_sndmain.cpp_setSfxBaseFrequency_FUN_00573980
;   sound_sndmain.cpp_unlockSound_FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598d50
        ;   Label: core_tommygun.cpp_CTommyGun_process_FUN_00598d50
    PUSH ESI                            ; 00598d51
    PUSH EDI                            ; 00598d52
    PUSH EBP                            ; 00598d53
    MOV EBP,ESP                         ; 00598d54
    SUB ESP,0x1dc                       ; 00598d56
    AND ESP,0xfffffff8                  ; 00598d5c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00598d5f
    PUSH dword ptr [EBP + 0x18]         ; 00598d62
    PUSH EBX                            ; 00598d65
    CALL core_weapon.cpp_CWeapon_process_FUN_005ad770 ; 00598d66
        ;   XREF to: 005ad770 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_005ad770(CWeapon * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x578]     ; 00598d6b
    ADD ESP,0x8                         ; 00598d71
    TEST EDX,EDX                        ; 00598d74
    JLE 0x00598e26                      ; 00598d76
        ;   XREF to: 00598e26 (CONDITIONAL_JUMP)  ; LAB_00598e26
    PUSH 0x3f8e38e4                     ; 00598d7c
    LEA EAX,[EDX + -0x1]                ; 00598d81
    PUSH 0x3f666666                     ; 00598d84
    MOV dword ptr [EBX + 0x578],EAX     ; 00598d89
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00598d8f
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1e0],EAX     ; 00598d94
    FLD float ptr [ESP + 0x1e0]         ; 00598d9b
    ADD ESP,0x8                         ; 00598da2
    MOV EDX,dword ptr [EBX + 0x57c]     ; 00598da5
    FSTP float ptr [ESP + 0xc]          ; 00598dab
    PUSH dword ptr [ESP + 0xc]          ; 00598daf
    PUSH EDX                            ; 00598db3
    CALL sound_sndmain.cpp_setSfxBaseFrequency_FUN_00573980 ; 00598db4
        ;   XREF to: 00573980 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxBaseFrequency_FUN_00573980(uint sfx_handle, float base_frequency)
    ADD ESP,0x8                         ; 00598db9
    TEST EAX,EAX                        ; 00598dbc
    JZ 0x00598dc7                       ; 00598dbe
        ;   XREF to: 00598dc7 (CONDITIONAL_JUMP)  ; LAB_00598dc7
    MOV ESP,EBP                         ; 00598dc0
    POP EBP                             ; 00598dc2
    POP EDI                             ; 00598dc3
    POP ESI                             ; 00598dc4
    POP EBX                             ; 00598dc5
    RET                                 ; 00598dc6
    MOV ECX,dword ptr [EBX + 0x57c]     ; 00598dc7
        ;   Label: LAB_00598dc7
    PUSH ECX                            ; 00598dcd
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00598dce
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00598dd3
    FLD float ptr [ESP + 0xc]           ; 00598dd6
    SUB ESP,0x8                         ; 00598dda
    FSTP double ptr [ESP]               ; 00598ddd
    PUSH 0x5f7f20                       ; 00598de0
    LEA EAX,[ESP + 0x170]               ; 00598de5
    PUSH EAX                            ; 00598dec
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00598ded
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00598df2
    MOV ESI,dword ptr [EBX + 0x580]     ; 00598df5
    PUSH ESI                            ; 00598dfb
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00598dfc
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00598e01
    LEA EAX,[ESP + 0x164]               ; 00598e04
    PUSH EAX                            ; 00598e0b
    MOV EDX,dword ptr [EBX + 0x154]     ; 00598e0c
    PUSH EBX                            ; 00598e12
    CALL dword ptr [EDX + 0x30]         ; 00598e13
    ADD ESP,0x8                         ; 00598e16
    MOV dword ptr [EBX + 0x57c],EAX     ; 00598e19
    MOV ESP,EBP                         ; 00598e1f
    POP EBP                             ; 00598e21
    POP EDI                             ; 00598e22
    POP ESI                             ; 00598e23
    POP EBX                             ; 00598e24
    RET                                 ; 00598e25
    PUSH 0x2                            ; 00598e26
        ;   Label: LAB_00598e26
    MOV ECX,dword ptr [EBX + 0x57c]     ; 00598e28
    PUSH ECX                            ; 00598e2e
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00573660 ; 00598e2f
        ;   XREF to: 00573660 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00573660(uint sfx_handle, uint output_format)
    MOV dword ptr [ESP + 0x1d8],EAX     ; 00598e34
    MOV dword ptr [ESP + 0x1dc],EDX     ; 00598e3b
    FLD double ptr [ESP + 0x1d8]        ; 00598e42
    ADD ESP,0x8                         ; 00598e49
    FST float ptr [ESP + 0x10]          ; 00598e4c
    FLDZ                                ; 00598e50
    FCOMPP                              ; 00598e52
    FNSTSW AX                           ; 00598e54
    SAHF                                ; 00598e56
    JA 0x00598f70                       ; 00598e57
        ;   XREF to: 00598f70 (CONDITIONAL_JUMP)  ; LAB_00598f70
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00598e5d
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
    FLD float ptr [ESP + 0x10]          ; 00598e62
    FMUL float ptr [0x005f7f44]         ; 00598e66 | DAT_005f7f44
    FST float ptr [ESP + 0x10]          ; 00598e6c
    FSTP double ptr [ESP + 0x1c8]       ; 00598e70
    MOV EDI,dword ptr [ESP + 0x1cc]     ; 00598e77
    PUSH EDI                            ; 00598e7e
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 00598e7f
    PUSH EAX                            ; 00598e86
    CALL crt_math.c_floor_FUN_005c0880  ; 00598e87
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x1d8],EAX     ; 00598e8c
    MOV dword ptr [ESP + 0x1dc],EDX     ; 00598e93
    FLD double ptr [ESP + 0x1d8]        ; 00598e9a
    ADD ESP,0x8                         ; 00598ea1
    LEA EAX,[ESP + 0x14]                ; 00598ea4
    FSUBR double ptr [ESP + 0x1c8]      ; 00598ea8
    PUSH EAX                            ; 00598eaf
    FSTP float ptr [ESP + 0x14]         ; 00598eb0
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_00572340 ; 00598eb4
        ;   XREF to: 00572340 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_00572340(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00598eb9
    LEA EAX,[ESP + 0x14]                ; 00598ebc
    PUSH EAX                            ; 00598ec0
    MOV EDX,dword ptr [EBX + 0x57c]     ; 00598ec1
    PUSH EDX                            ; 00598ec7
    CALL sound_sndmain.cpp_getSfxSampleInfo_FUN_00573620 ; 00598ec8
        ;   XREF to: 00573620 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSfxSampleInfo_FUN_00573620(uint sfx_handle, CSfxSample * output_buffer)
    ADD ESP,0x8                         ; 00598ecd
    TEST EAX,EAX                        ; 00598ed0
    JZ 0x00598f55                       ; 00598ed2
        ;   XREF to: 00598f55 (CONDITIONAL_JUMP)  ; LAB_00598f55
    MOV EAX,dword ptr [ESP + 0x124]     ; 00598ed8
    MOV dword ptr [ESP + 0x1d8],EAX     ; 00598edf
    FILD dword ptr [ESP + 0x1d8]        ; 00598ee6
    FMUL float ptr [ESP + 0x10]         ; 00598eed
    FMUL float ptr [0x005f7f48]         ; 00598ef1 | DAT_005f7f48
    CALL crt_math.c_round_FUN_005c03a0  ; 00598ef7
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8]         ; 00598efc
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 00598f00
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
    MOV EAX,dword ptr [ESP + 0x8]       ; 00598f05
    MOV dword ptr [ESP + 0x1d8],EAX     ; 00598f09
    FLDZ                                ; 00598f10
    FILD dword ptr [ESP + 0x1d8]        ; 00598f12
    FSTP double ptr [ESP]               ; 00598f19
    FCOMP double ptr [ESP]              ; 00598f1c
    FNSTSW AX                           ; 00598f1f
    SAHF                                ; 00598f21
    JNC 0x00598f38                      ; 00598f22
        ;   XREF to: 00598f38 (CONDITIONAL_JUMP)  ; LAB_00598f38
    PUSH 0x0                            ; 00598f24
    MOV ECX,dword ptr [ESP + 0x8]       ; 00598f26
    PUSH ECX                            ; 00598f2a
    MOV ESI,dword ptr [ESP + 0x8]       ; 00598f2b
    PUSH ESI                            ; 00598f2f
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00572a50 ; 00598f30
        ;   XREF to: 00572a50 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00572a50(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 00598f35
    PUSH 0x5f7f36                       ; 00598f38
        ;   Label: LAB_00598f38
    MOV EAX,dword ptr [EBX + 0x154]     ; 00598f3d
    PUSH EBX                            ; 00598f43
    CALL dword ptr [EAX + 0x2c]         ; 00598f44
    ADD ESP,0x8                         ; 00598f47
    MOV dword ptr [EBX + 0x580],EAX     ; 00598f4a
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 00598f50
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    MOV EDI,dword ptr [EBX + 0x57c]     ; 00598f55
        ;   Label: LAB_00598f55
    PUSH EDI                            ; 00598f5b
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00598f5c
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00598f61
    CALL sound_sndmain.cpp_unlockSound_FUN_00573e70 ; 00598f64
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00573e70()
    MOV ESP,EBP                         ; 00598f69
    POP EBP                             ; 00598f6b
    POP EDI                             ; 00598f6c
    POP ESI                             ; 00598f6d
    POP EBX                             ; 00598f6e
    RET                                 ; 00598f6f
    MOV ESI,dword ptr [EBX + 0x57c]     ; 00598f70
        ;   Label: LAB_00598f70
    PUSH ESI                            ; 00598f76
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00598f77
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00598f7c
    MOV ESP,EBP                         ; 00598f7f
    POP EBP                             ; 00598f81
    POP EDI                             ; 00598f82
    POP ESI                             ; 00598f83
    POP EBX                             ; 00598f84
    RET                                 ; 00598f85


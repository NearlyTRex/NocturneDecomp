; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_0056bd40(CTommyGun *this_ptr,float delta_time)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005d64b3
;   undefined4 DAT_005d64b7
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_weapon.cpp_CWeapon_process_FUN_0057b160
;   crt_math.c_floor_FUN_005a3600
;   crt_math.c_round_FUN_005a3120
;   crt_unknown.c_sprintf_FUN_005a28c0
;   sound_sndmain.cpp_CSfxSample_init_FUN_00555840
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005567c0
;   sound_sndmain.cpp_getSfxSampleInfo_FUN_00556780
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;   sound_sndmain.cpp_lockSound_FUN_00558e90
;   sound_sndmain.cpp_popSfxOptions_FUN_00556050
;   sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0
;   sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00555f60
;   sound_sndmain.cpp_setSfxBaseFrequency_FUN_00556ae0
;   sound_sndmain.cpp_unlockSound_FUN_00556fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056bd40
        ;   Label: core_tommygun.cpp_CTommyGun_process_FUN_0056bd40
    PUSH ESI                            ; 0056bd41
    PUSH EDI                            ; 0056bd42
    PUSH EBP                            ; 0056bd43
    MOV EBP,ESP                         ; 0056bd44
    SUB ESP,0x1dc                       ; 0056bd46
    AND ESP,0xfffffff8                  ; 0056bd4c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056bd4f
    PUSH dword ptr [EBP + 0x18]         ; 0056bd52
    PUSH EBX                            ; 0056bd55
    CALL core_weapon.cpp_CWeapon_process_FUN_0057b160 ; 0056bd56
        ;   XREF to: 0057b160 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_0057b160(CWeapon * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x594]     ; 0056bd5b
    ADD ESP,0x8                         ; 0056bd61
    TEST EDX,EDX                        ; 0056bd64
    JLE 0x0056be16                      ; 0056bd66
        ;   XREF to: 0056be16 (CONDITIONAL_JUMP)  ; LAB_0056be16
    PUSH 0x3f8e38e4                     ; 0056bd6c
    LEA EAX,[EDX + -0x1]                ; 0056bd71
    PUSH 0x3f666666                     ; 0056bd74
    MOV dword ptr [EBX + 0x594],EAX     ; 0056bd79
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0056bd7f
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1e0],EAX     ; 0056bd84
    FLD float ptr [ESP + 0x1e0]         ; 0056bd8b
    ADD ESP,0x8                         ; 0056bd92
    MOV EDX,dword ptr [EBX + 0x598]     ; 0056bd95
    FSTP float ptr [ESP + 0xc]          ; 0056bd9b
    PUSH dword ptr [ESP + 0xc]          ; 0056bd9f
    PUSH EDX                            ; 0056bda3
    CALL sound_sndmain.cpp_setSfxBaseFrequency_FUN_00556ae0 ; 0056bda4
        ;   XREF to: 00556ae0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxBaseFrequency_FUN_00556ae0(uint sfx_handle, float base_frequency)
    ADD ESP,0x8                         ; 0056bda9
    TEST EAX,EAX                        ; 0056bdac
    JZ 0x0056bdb7                       ; 0056bdae
        ;   XREF to: 0056bdb7 (CONDITIONAL_JUMP)  ; LAB_0056bdb7
    MOV ESP,EBP                         ; 0056bdb0
    POP EBP                             ; 0056bdb2
    POP EDI                             ; 0056bdb3
    POP ESI                             ; 0056bdb4
    POP EBX                             ; 0056bdb5
    RET                                 ; 0056bdb6
    MOV ECX,dword ptr [EBX + 0x598]     ; 0056bdb7
        ;   Label: LAB_0056bdb7
    PUSH ECX                            ; 0056bdbd
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0056bdbe
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0056bdc3
    FLD float ptr [ESP + 0xc]           ; 0056bdc6
    SUB ESP,0x8                         ; 0056bdca
    FSTP double ptr [ESP]               ; 0056bdcd
    PUSH 0x5d648f                       ; 0056bdd0
    LEA EAX,[ESP + 0x170]               ; 0056bdd5
    PUSH EAX                            ; 0056bddc
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0056bddd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0056bde2
    MOV ESI,dword ptr [EBX + 0x59c]     ; 0056bde5
    PUSH ESI                            ; 0056bdeb
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0056bdec
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0056bdf1
    LEA EAX,[ESP + 0x164]               ; 0056bdf4
    PUSH EAX                            ; 0056bdfb
    MOV EDX,dword ptr [EBX + 0x154]     ; 0056bdfc
    PUSH EBX                            ; 0056be02
    CALL dword ptr [EDX + 0x30]         ; 0056be03
    ADD ESP,0x8                         ; 0056be06
    MOV dword ptr [EBX + 0x598],EAX     ; 0056be09
    MOV ESP,EBP                         ; 0056be0f
    POP EBP                             ; 0056be11
    POP EDI                             ; 0056be12
    POP ESI                             ; 0056be13
    POP EBX                             ; 0056be14
    RET                                 ; 0056be15
    PUSH 0x2                            ; 0056be16
        ;   Label: LAB_0056be16
    MOV ECX,dword ptr [EBX + 0x598]     ; 0056be18
    PUSH ECX                            ; 0056be1e
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005567c0 ; 0056be1f
        ;   XREF to: 005567c0 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005567c0(uint sfx_handle, uint output_format)
    MOV dword ptr [ESP + 0x1d8],EAX     ; 0056be24
    MOV dword ptr [ESP + 0x1dc],EDX     ; 0056be2b
    FLD double ptr [ESP + 0x1d8]        ; 0056be32
    ADD ESP,0x8                         ; 0056be39
    FST float ptr [ESP + 0x10]          ; 0056be3c
    FLDZ                                ; 0056be40
    FCOMPP                              ; 0056be42
    FNSTSW AX                           ; 0056be44
    SAHF                                ; 0056be46
    JA 0x0056bf60                       ; 0056be47
        ;   XREF to: 0056bf60 (CONDITIONAL_JUMP)  ; LAB_0056bf60
    CALL sound_sndmain.cpp_lockSound_FUN_00558e90 ; 0056be4d
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00558e90()
    FLD float ptr [ESP + 0x10]          ; 0056be52
    FMUL float ptr [0x005d64b3]         ; 0056be56 | DAT_005d64b3
    FST float ptr [ESP + 0x10]          ; 0056be5c
    FSTP double ptr [ESP + 0x1c8]       ; 0056be60
    MOV EDI,dword ptr [ESP + 0x1cc]     ; 0056be67
    PUSH EDI                            ; 0056be6e
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 0056be6f
    PUSH EAX                            ; 0056be76
    CALL crt_math.c_floor_FUN_005a3600  ; 0056be77
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x1d8],EAX     ; 0056be7c
    MOV dword ptr [ESP + 0x1dc],EDX     ; 0056be83
    FLD double ptr [ESP + 0x1d8]        ; 0056be8a
    ADD ESP,0x8                         ; 0056be91
    LEA EAX,[ESP + 0x14]                ; 0056be94
    FSUBR double ptr [ESP + 0x1c8]      ; 0056be98
    PUSH EAX                            ; 0056be9f
    FSTP float ptr [ESP + 0x14]         ; 0056bea0
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_00555840 ; 0056bea4
        ;   XREF to: 00555840 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_00555840(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0056bea9
    LEA EAX,[ESP + 0x14]                ; 0056beac
    PUSH EAX                            ; 0056beb0
    MOV EDX,dword ptr [EBX + 0x598]     ; 0056beb1
    PUSH EDX                            ; 0056beb7
    CALL sound_sndmain.cpp_getSfxSampleInfo_FUN_00556780 ; 0056beb8
        ;   XREF to: 00556780 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSfxSampleInfo_FUN_00556780(uint sfx_handle, CSfxSample * output_buffer)
    ADD ESP,0x8                         ; 0056bebd
    TEST EAX,EAX                        ; 0056bec0
    JZ 0x0056bf45                       ; 0056bec2
        ;   XREF to: 0056bf45 (CONDITIONAL_JUMP)  ; LAB_0056bf45
    MOV EAX,dword ptr [ESP + 0x124]     ; 0056bec8
    MOV dword ptr [ESP + 0x1d8],EAX     ; 0056becf
    FILD dword ptr [ESP + 0x1d8]        ; 0056bed6
    FMUL float ptr [ESP + 0x10]         ; 0056bedd
    FMUL float ptr [0x005d64b7]         ; 0056bee1 | DAT_005d64b7
    CALL crt_math.c_round_FUN_005a3120  ; 0056bee7
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x8]         ; 0056beec
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0 ; 0056bef0
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0()
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056bef5
    MOV dword ptr [ESP + 0x1d8],EAX     ; 0056bef9
    FLDZ                                ; 0056bf00
    FILD dword ptr [ESP + 0x1d8]        ; 0056bf02
    FSTP double ptr [ESP]               ; 0056bf09
    FCOMP double ptr [ESP]              ; 0056bf0c
    FNSTSW AX                           ; 0056bf0f
    SAHF                                ; 0056bf11
    JNC 0x0056bf28                      ; 0056bf12
        ;   XREF to: 0056bf28 (CONDITIONAL_JUMP)  ; LAB_0056bf28
    PUSH 0x0                            ; 0056bf14
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056bf16
    PUSH ECX                            ; 0056bf1a
    MOV ESI,dword ptr [ESP + 0x8]       ; 0056bf1b
    PUSH ESI                            ; 0056bf1f
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00555f60 ; 0056bf20
        ;   XREF to: 00555f60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00555f60(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 0056bf25
    PUSH 0x5d64a5                       ; 0056bf28
        ;   Label: LAB_0056bf28
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056bf2d
    PUSH EBX                            ; 0056bf33
    CALL dword ptr [EAX + 0x2c]         ; 0056bf34
    ADD ESP,0x8                         ; 0056bf37
    MOV dword ptr [EBX + 0x59c],EAX     ; 0056bf3a
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00556050 ; 0056bf40
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00556050()
    MOV EDI,dword ptr [EBX + 0x598]     ; 0056bf45
        ;   Label: LAB_0056bf45
    PUSH EDI                            ; 0056bf4b
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0056bf4c
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0056bf51
    CALL sound_sndmain.cpp_unlockSound_FUN_00556fd0 ; 0056bf54
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00556fd0()
    MOV ESP,EBP                         ; 0056bf59
    POP EBP                             ; 0056bf5b
    POP EDI                             ; 0056bf5c
    POP ESI                             ; 0056bf5d
    POP EBX                             ; 0056bf5e
    RET                                 ; 0056bf5f
    MOV ESI,dword ptr [EBX + 0x598]     ; 0056bf60
        ;   Label: LAB_0056bf60
    PUSH ESI                            ; 0056bf66
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0056bf67
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0056bf6c
    MOV ESP,EBP                         ; 0056bf6f
    POP EBP                             ; 0056bf71
    POP EDI                             ; 0056bf72
    POP ESI                             ; 0056bf73
    POP EBX                             ; 0056bf74
    RET                                 ; 0056bf75


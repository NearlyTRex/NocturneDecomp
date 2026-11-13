; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_turret_cpp_CTurret_process_FUN_005a23b0(CTurret *this_ptr,float delta_time)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_turret_loop_wav_f_005f8a3c
;   TerminatedCString s_turret_tail_wav_005f8a51
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_main.c_FUN_005030e0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00573660
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;   sound_sndmain.cpp_setSfxBaseFrequency_FUN_00573980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a23b0
        ;   Label: core_turret.cpp_CTurret_process_FUN_005a23b0
    PUSH ESI                            ; 005a23b1
    PUSH EDI                            ; 005a23b2
    PUSH EBP                            ; 005a23b3
    MOV EBP,ESP                         ; 005a23b4
    SUB ESP,0xf4                        ; 005a23b6
    AND ESP,0xfffffff8                  ; 005a23bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a23bf
    MOV EAX,dword ptr [EBX + 0x700]     ; 005a23c2
    MOV dword ptr [EBX + 0x2f4],0xffffffff ; 005a23c8
    CMP EAX,0x4                         ; 005a23d2
    JA 0x005a27f4                       ; 005a23d5
        ;   XREF to: 005a27f4 (CONDITIONAL_JUMP)  ; LAB_005a27f4
    JMP dword ptr [EAX*0x4 + 0x5a2394]  ; 005a23db
    CMP dword ptr [EBX + 0x2f4],0x0     ; 005a245a
        ;   Label: LAB_005a245a
    JL 0x005a2473                       ; 005a2461
        ;   XREF to: 005a2473 (CONDITIONAL_JUMP)  ; LAB_005a2473
    PUSH EBX                            ; 005a2463
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a2464
    CALL dword ptr [EAX + 0xf0]         ; 005a246a
    ADD ESP,0x4                         ; 005a2470
    FLD float ptr [EBX + 0x300]         ; 005a2473
        ;   Label: LAB_005a2473
    FLD float ptr [EBX + 0x86c]         ; 005a2479
    MOV EDI,dword ptr [EBX + 0x8b0]     ; 005a247f
    FLD float ptr [EBP + 0x18]          ; 005a2485
    FXCH                                ; 005a2488
    FSUB ST0,ST1                        ; 005a248a
    FXCH ST2                            ; 005a248c
    FSUBRP                              ; 005a248e
    FXCH                                ; 005a2490
    FSTP float ptr [EBX + 0x86c]        ; 005a2492
    FSTP float ptr [EBX + 0x300]        ; 005a2498
    TEST EDI,EDI                        ; 005a249e
    JG 0x005a24b5                       ; 005a24a0
        ;   XREF to: 005a24b5 (CONDITIONAL_JUMP)  ; LAB_005a24b5
    FLD float ptr [EBX + 0x86c]         ; 005a24a2
    FLDZ                                ; 005a24a8
    FCOMPP                              ; 005a24aa
    FNSTSW AX                           ; 005a24ac
    SAHF                                ; 005a24ae
    JNC 0x005a2856                      ; 005a24af
        ;   XREF to: 005a2856 (CONDITIONAL_JUMP)  ; LAB_005a2856
    MOV ECX,dword ptr [EBX + 0x8b0]     ; 005a24b5
        ;   Label: LAB_005a24b5
    PUSH 0x3f8e38e4                     ; 005a24bb
    DEC ECX                             ; 005a24c0
    PUSH 0x3f666666                     ; 005a24c1
    MOV dword ptr [EBX + 0x8b0],ECX     ; 005a24c6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005a24cc
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf8],EAX      ; 005a24d1
    FLD float ptr [ESP + 0xf8]          ; 005a24d8
    ADD ESP,0x8                         ; 005a24df
    MOV ESI,dword ptr [EBX + 0x8b4]     ; 005a24e2
    FSTP float ptr [ESP]                ; 005a24e8
    PUSH dword ptr [ESP]                ; 005a24eb
    PUSH ESI                            ; 005a24ee
    CALL sound_sndmain.cpp_setSfxBaseFrequency_FUN_00573980 ; 005a24ef
        ;   XREF to: 00573980 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxBaseFrequency_FUN_00573980(uint sfx_handle, float base_frequency)
    ADD ESP,0x8                         ; 005a24f4
    TEST EAX,EAX                        ; 005a24f7
    JZ 0x005a281c                       ; 005a24f9
        ;   XREF to: 005a281c (CONDITIONAL_JUMP)  ; LAB_005a281c
    MOV ESP,EBP                         ; 005a24ff
        ;   Label: LAB_005a24ff
    POP EBP                             ; 005a2501
    POP EDI                             ; 005a2502
    POP ESI                             ; 005a2503
    POP EBX                             ; 005a2504
    RET                                 ; 005a2505
    MOV EDX,0x5f8a08                    ; 005a27f4
        ;   Label: LAB_005a27f4
    MOV ECX,0x15a                       ; 005a27f9
    PUSH 0x5f8a1b                       ; 005a27fe
    MOV dword ptr [0x01d1d400],EDX      ; 005a2803 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005a2809 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005a280f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005a2814
    JMP 0x005a245a                      ; 005a2817
        ;   XREF to: 005a245a (UNCONDITIONAL_JUMP)  ; LAB_005a245a
    FLD float ptr [ESP]                 ; 005a281c
        ;   Label: LAB_005a281c
    SUB ESP,0x8                         ; 005a281f
    FSTP double ptr [ESP]               ; 005a2822
    PUSH 0x5f8a3c                       ; 005a2825 | = "turret-loop.wav * %f"
    LEA EAX,[ESP + 0x10]                ; 005a282a
    PUSH EAX                            ; 005a282e
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005a282f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 005a2834
    LEA EAX,[ESP + 0x4]                 ; 005a2837
    PUSH EAX                            ; 005a283b
    MOV EDX,dword ptr [EBX + 0x154]     ; 005a283c
    PUSH EBX                            ; 005a2842
    CALL dword ptr [EDX + 0x30]         ; 005a2843
    ADD ESP,0x8                         ; 005a2846
    MOV dword ptr [EBX + 0x8b4],EAX     ; 005a2849
    MOV ESP,EBP                         ; 005a284f
    POP EBP                             ; 005a2851
    POP EDI                             ; 005a2852
    POP ESI                             ; 005a2853
    POP EBX                             ; 005a2854
    RET                                 ; 005a2855
    PUSH 0x2                            ; 005a2856
        ;   Label: LAB_005a2856
    MOV EAX,dword ptr [EBX + 0x8b4]     ; 005a2858
    PUSH EAX                            ; 005a285e
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00573660 ; 005a285f
        ;   XREF to: 00573660 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00573660(uint sfx_handle, uint output_format)
    MOV dword ptr [ESP + 0xe8],EAX      ; 005a2864
    MOV dword ptr [ESP + 0xec],EDX      ; 005a286b
    FLD double ptr [ESP + 0xe8]         ; 005a2872
    FLDZ                                ; 005a2879
    ADD ESP,0x8                         ; 005a287b
    FCOMPP                              ; 005a287e
    FNSTSW AX                           ; 005a2880
    SAHF                                ; 005a2882
    JA 0x005a24ff                       ; 005a2883
        ;   XREF to: 005a24ff (CONDITIONAL_JUMP)  ; LAB_005a24ff
    MOV EDX,dword ptr [EBX + 0x8b4]     ; 005a2889
    PUSH EDX                            ; 005a288f
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 005a2890
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 005a2895
    PUSH 0x5f8a51                       ; 005a2898 | = "turret-tail.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a289d
    PUSH EBX                            ; 005a28a3
    CALL dword ptr [EAX + 0x2c]         ; 005a28a4
    ADD ESP,0x8                         ; 005a28a7
    MOV ESP,EBP                         ; 005a28aa
    POP EBP                             ; 005a28ac
    POP EDI                             ; 005a28ad
    POP ESI                             ; 005a28ae
    POP EBX                             ; 005a28af
    RET                                 ; 005a28b0


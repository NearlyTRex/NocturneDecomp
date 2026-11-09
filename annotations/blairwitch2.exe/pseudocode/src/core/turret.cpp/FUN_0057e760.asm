; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_turret_cpp_FUN_0057e760(CTurret *param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_turret_loop_wav_f_005ed6e0
;   TerminatedCString s_turret_tail_wav_005ed6f5
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b7790
;   sound_sndmain.cpp_FUN_00550f50
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00550c30
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057e760
        ;   Label: core_turret.cpp_FUN_0057e760
    PUSH ESI                            ; 0057e761
    PUSH EDI                            ; 0057e762
    PUSH EBP                            ; 0057e763
    MOV EBP,ESP                         ; 0057e764
    SUB ESP,0xf4                        ; 0057e766
    AND ESP,0xfffffff8                  ; 0057e76c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057e76f
    MOV EAX,dword ptr [EBX + 0x85c]     ; 0057e772
    MOV dword ptr [EBX + 0x450],0xffffffff ; 0057e778
    CMP EAX,0x4                         ; 0057e782
    JA 0x0057eba4                       ; 0057e785
        ;   XREF to: 0057eba4 (CONDITIONAL_JUMP)  ; LAB_0057eba4
    JMP dword ptr [EAX*0x4 + 0x57e744]  ; 0057e78b
    CMP dword ptr [EBX + 0x450],0x0     ; 0057e80a
        ;   Label: LAB_0057e80a
    JL 0x0057e823                       ; 0057e811
        ;   XREF to: 0057e823 (CONDITIONAL_JUMP)  ; LAB_0057e823
    PUSH EBX                            ; 0057e813
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0057e814
    CALL dword ptr [EAX + 0xf8]         ; 0057e81a
    ADD ESP,0x4                         ; 0057e820
    FLD float ptr [EBX + 0x45c]         ; 0057e823
        ;   Label: LAB_0057e823
    FLD float ptr [EBX + 0x9c8]         ; 0057e829
    MOV EDI,dword ptr [EBX + 0xa0c]     ; 0057e82f
    FLD float ptr [EBP + 0x18]          ; 0057e835
    FXCH                                ; 0057e838
    FSUB ST0,ST1                        ; 0057e83a
    FXCH ST2                            ; 0057e83c
    FSUBRP                              ; 0057e83e
    FXCH                                ; 0057e840
    FSTP float ptr [EBX + 0x9c8]        ; 0057e842
    FSTP float ptr [EBX + 0x45c]        ; 0057e848
    TEST EDI,EDI                        ; 0057e84e
    JG 0x0057e865                       ; 0057e850
        ;   XREF to: 0057e865 (CONDITIONAL_JUMP)  ; LAB_0057e865
    FLD float ptr [EBX + 0x9c8]         ; 0057e852
    FLDZ                                ; 0057e858
    FCOMPP                              ; 0057e85a
    FNSTSW AX                           ; 0057e85c
    SAHF                                ; 0057e85e
    JNC 0x0057ec06                      ; 0057e85f
        ;   XREF to: 0057ec06 (CONDITIONAL_JUMP)  ; LAB_0057ec06
    MOV ECX,dword ptr [EBX + 0xa0c]     ; 0057e865
        ;   Label: LAB_0057e865
    PUSH 0x3f8e38e4                     ; 0057e86b
    DEC ECX                             ; 0057e870
    PUSH 0x3f666666                     ; 0057e871
    MOV dword ptr [EBX + 0xa0c],ECX     ; 0057e876
    CALL core_actor.cpp_FUN_0040cf60    ; 0057e87c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0xf8],EAX      ; 0057e881
    FLD float ptr [ESP + 0xf8]          ; 0057e888
    ADD ESP,0x8                         ; 0057e88f
    MOV ESI,dword ptr [EBX + 0xa10]     ; 0057e892
    FSTP float ptr [ESP]                ; 0057e898
    PUSH dword ptr [ESP]                ; 0057e89b
    PUSH ESI                            ; 0057e89e
    CALL sound_sndmain.cpp_FUN_00550f50 ; 0057e89f
        ;   XREF to: 00550f50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550f50(uint sfx_handle, float base_frequency)
    ADD ESP,0x8                         ; 0057e8a4
    TEST EAX,EAX                        ; 0057e8a7
    JZ 0x0057ebcc                       ; 0057e8a9
        ;   XREF to: 0057ebcc (CONDITIONAL_JUMP)  ; LAB_0057ebcc
    MOV ESP,EBP                         ; 0057e8af
        ;   Label: LAB_0057e8af
    POP EBP                             ; 0057e8b1
    POP EDI                             ; 0057e8b2
    POP ESI                             ; 0057e8b3
    POP EBX                             ; 0057e8b4
    RET                                 ; 0057e8b5
    MOV EDX,0x5ed6ac                    ; 0057eba4
        ;   Label: LAB_0057eba4
    MOV ECX,0x15a                       ; 0057eba9
    PUSH 0x5ed6bf                       ; 0057ebae
    MOV dword ptr [0x01d046a0],EDX      ; 0057ebb3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0057ebb9 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0057ebbf
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0057ebc4
    JMP 0x0057e80a                      ; 0057ebc7
        ;   XREF to: 0057e80a (UNCONDITIONAL_JUMP)  ; LAB_0057e80a
    FLD float ptr [ESP]                 ; 0057ebcc
        ;   Label: LAB_0057ebcc
    SUB ESP,0x8                         ; 0057ebcf
    FSTP double ptr [ESP]               ; 0057ebd2
    PUSH 0x5ed6e0                       ; 0057ebd5 | = "turret-loop.wav * %f"
    LEA EAX,[ESP + 0x10]                ; 0057ebda
    PUSH EAX                            ; 0057ebde
    CALL crt_unknown.c_FUN_005b7790     ; 0057ebdf
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 0057ebe4
    LEA EAX,[ESP + 0x4]                 ; 0057ebe7
    PUSH EAX                            ; 0057ebeb
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 0057ebec
    PUSH EBX                            ; 0057ebf2
    CALL dword ptr [EDX + 0x38]         ; 0057ebf3
    ADD ESP,0x8                         ; 0057ebf6
    MOV dword ptr [EBX + 0xa10],EAX     ; 0057ebf9
    MOV ESP,EBP                         ; 0057ebff
    POP EBP                             ; 0057ec01
    POP EDI                             ; 0057ec02
    POP ESI                             ; 0057ec03
    POP EBX                             ; 0057ec04
    RET                                 ; 0057ec05
    PUSH 0x2                            ; 0057ec06
        ;   Label: LAB_0057ec06
    MOV EAX,dword ptr [EBX + 0xa10]     ; 0057ec08
    PUSH EAX                            ; 0057ec0e
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00550c30 ; 0057ec0f
        ;   XREF to: 00550c30 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00550c30(uint sfx_handle, uint output_format)
    MOV dword ptr [ESP + 0xe8],EAX      ; 0057ec14
    MOV dword ptr [ESP + 0xec],EDX      ; 0057ec1b
    FLD double ptr [ESP + 0xe8]         ; 0057ec22
    FLDZ                                ; 0057ec29
    ADD ESP,0x8                         ; 0057ec2b
    FCOMPP                              ; 0057ec2e
    FNSTSW AX                           ; 0057ec30
    SAHF                                ; 0057ec32
    JA 0x0057e8af                       ; 0057ec33
        ;   XREF to: 0057e8af (CONDITIONAL_JUMP)  ; LAB_0057e8af
    MOV EDX,dword ptr [EBX + 0xa10]     ; 0057ec39
    PUSH EDX                            ; 0057ec3f
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0057ec40
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0057ec45
    PUSH 0x5ed6f5                       ; 0057ec48 | = "turret-tail.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0057ec4d
    PUSH EBX                            ; 0057ec53
    CALL dword ptr [EAX + 0x34]         ; 0057ec54
    ADD ESP,0x8                         ; 0057ec57
    MOV ESP,EBP                         ; 0057ec5a
    POP EBP                             ; 0057ec5c
    POP EDI                             ; 0057ec5d
    POP ESI                             ; 0057ec5e
    POP EBX                             ; 0057ec5f
    RET                                 ; 0057ec60


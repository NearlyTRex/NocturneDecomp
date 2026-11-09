; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_heal_cpp_FUN_004d1a10(CDemonActor *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_wp_nomana_wav_005c4a24
;   TerminatedCString s_wp_heal_wav_005c4a32
;   undefined4 DAT_005c4a3f
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_006045f8
;   undefined4 g_CHeroClassInfo.name_hash
;   undefined4 DAT_02cfd900
;   undefined4 DAT_02cfd904
;   undefined4 DAT_02cfd908
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_0040ce40
;   core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0
;   core_sound.cpp_CSound_playActorSound_FUN_005609d0
;   core_weapon.cpp_FUN_0057b880
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d1a10
        ;   Label: core_heal.cpp_FUN_004d1a10
    PUSH EDI                            ; 004d1a11
    PUSH EBP                            ; 004d1a12
    SUB ESP,0x7c                        ; 004d1a13
    MOV EBP,dword ptr [ESP + 0x8c]      ; 004d1a16
    LEA EDI,[ESP + 0x48]                ; 004d1a1d
    MOV ESI,0x2cfd900                   ; 004d1a21
    MOVSD ES:EDI,ESI                    ; 004d1a26 | DAT_02cfd900
    MOVSD ES:EDI,ESI                    ; 004d1a27 | DAT_02cfd904
    MOVSD ES:EDI,ESI                    ; 004d1a28 | DAT_02cfd908
    MOV EDX,dword ptr [EBP + 0x598]     ; 004d1a29
    MOV dword ptr [EBP + 0x594],0x1     ; 004d1a2f
    TEST EDX,EDX                        ; 004d1a39
    JZ 0x004d1a46                       ; 004d1a3b
        ;   XREF to: 004d1a46 (CONDITIONAL_JUMP)  ; LAB_004d1a46
    XOR EAX,EAX                         ; 004d1a3d
    ADD ESP,0x7c                        ; 004d1a3f
    POP EBP                             ; 004d1a42
    POP EDI                             ; 004d1a43
    POP ESI                             ; 004d1a44
    RET                                 ; 004d1a45
    PUSH EBP                            ; 004d1a46
        ;   Label: LAB_004d1a46
    CALL core_weapon.cpp_FUN_0057b880   ; 004d1a47
        ;   XREF to: 0057b880 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_FUN_0057b880()
    ADD ESP,0x4                         ; 004d1a4c
    TEST EAX,EAX                        ; 004d1a4f
    JZ 0x004d1bfc                       ; 004d1a51
        ;   XREF to: 004d1bfc (CONDITIONAL_JUMP)  ; LAB_004d1bfc
    PUSH EBX                            ; 004d1a57
    MOV EBX,dword ptr [0x01d5ba70]      ; 004d1a58 | g_CHeroClassInfo.name_hash
    PUSH EBX                            ; 004d1a5e
    MOV ESI,dword ptr [EBP + 0x304]     ; 004d1a5f
    PUSH ESI                            ; 004d1a65
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004d1a66
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004d1a6b
    MOV EBX,EAX                         ; 004d1a6e
    TEST EAX,EAX                        ; 004d1a70
    JZ 0x004d1bcc                       ; 004d1a72
        ;   XREF to: 004d1bcc (CONDITIONAL_JUMP)  ; LAB_004d1bcc
    FLD float ptr [EAX + 0x2538]        ; 004d1a78
    FADD float ptr [0x005c4a3f]         ; 004d1a7e | DAT_005c4a3f
    FSTP float ptr [EAX + 0x2538]       ; 004d1a84
    CMP dword ptr [EAX + 0x2538],0x42c80000 ; 004d1a8a
    JLE 0x004d1aa0                      ; 004d1a94
        ;   XREF to: 004d1aa0 (CONDITIONAL_JUMP)  ; LAB_004d1aa0
    MOV dword ptr [EAX + 0x2538],0x42c80000 ; 004d1a96
    LEA EAX,[ESP + 0x34]                ; 004d1aa0
        ;   Label: LAB_004d1aa0
    LEA EDX,[EBX + 0x20]                ; 004d1aa4
    CMP EAX,EDX                         ; 004d1aa7
    JNZ 0x004d1c28                      ; 004d1aa9
        ;   XREF to: 004d1c28 (CONDITIONAL_JUMP)  ; LAB_004d1c28
    PUSH EBX                            ; 004d1aaf
        ;   Label: LAB_004d1aaf
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d1ab0
    LEA ESI,[ESP + 0x20]                ; 004d1ab6
    LEA EDI,[ESP + 0x8]                 ; 004d1aba
    CALL dword ptr [EAX + 0x1c]         ; 004d1abe
    MOV ECX,0x6                         ; 004d1ac1
    LEA ESI,[ESP + 0x20]                ; 004d1ac6
    ADD ESP,0x4                         ; 004d1aca
    LEA EAX,[ESP + 0x4]                 ; 004d1acd
    MOVSD.REP ES:EDI,ESI                ; 004d1ad1
    FLD float ptr [EAX + 0xc]           ; 004d1ad3
    FLD float ptr [EAX + 0x10]          ; 004d1ad6
    FLD float ptr [EAX + 0x14]          ; 004d1ad9
    LEA EDI,[ESP + 0x58]                ; 004d1adc
    LEA ESI,[ESP + 0x40]                ; 004d1ae0
    FXCH ST2                            ; 004d1ae4
    FSUB float ptr [ESP + 0x4]          ; 004d1ae6
    FXCH                                ; 004d1aea
    FSUB float ptr [ESP + 0x8]          ; 004d1aec
    FXCH ST2                            ; 004d1af0
    FSUB float ptr [ESP + 0xc]          ; 004d1af2
    FXCH                                ; 004d1af6
    FSTP float ptr [ESP + 0x40]         ; 004d1af8
    FXCH                                ; 004d1afc
    FSTP float ptr [ESP + 0x44]         ; 004d1afe
    FSTP float ptr [ESP + 0x48]         ; 004d1b02
    MOVSD ES:EDI,ESI                    ; 004d1b06
    MOVSD ES:EDI,ESI                    ; 004d1b07
    MOVSD ES:EDI,ESI                    ; 004d1b08
    FLD1                                ; 004d1b09
    FADD float ptr [ESP + 0x5c]         ; 004d1b0b
    FADD float ptr [ESP + 0x38]         ; 004d1b0f
    XOR EBX,EBX                         ; 004d1b13
    FSTP float ptr [ESP + 0x38]         ; 004d1b15
    PUSH 0x40a00000                     ; 004d1b19
        ;   Label: LAB_004d1b19
    PUSH 0xc0a00000                     ; 004d1b1e
    CALL core_actor.cpp_FUN_0040ce40    ; 004d1b23
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x78],EAX      ; 004d1b28
    ADD ESP,0x8                         ; 004d1b2c
    PUSH 0x40a00000                     ; 004d1b2f
    PUSH 0xc0a00000                     ; 004d1b34
    CALL core_actor.cpp_FUN_0040ce40    ; 004d1b39
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x84],EAX      ; 004d1b3e
    FLD float ptr [ESP + 0x84]          ; 004d1b45
    ADD ESP,0x8                         ; 004d1b4c
    MOV EAX,dword ptr [ESP + 0x70]      ; 004d1b4f
    FSTP float ptr [ESP + 0x74]         ; 004d1b53
    MOV dword ptr [ESP + 0x78],EAX      ; 004d1b57
    MOV EAX,dword ptr [ESP + 0x74]      ; 004d1b5b
    MOV dword ptr [ESP + 0x64],EAX      ; 004d1b5f
    MOV dword ptr [ESP + 0x68],0xc0a00000 ; 004d1b63
    MOV EAX,dword ptr [ESP + 0x78]      ; 004d1b6b
    LEA EDX,[ESP + 0x64]                ; 004d1b6f
    MOV dword ptr [ESP + 0x6c],EAX      ; 004d1b73
    LEA EAX,[ESP + 0x4c]                ; 004d1b77
    CMP EAX,EDX                         ; 004d1b7b
    JZ 0x004d1b98                       ; 004d1b7d
        ;   XREF to: 004d1b98 (CONDITIONAL_JUMP)  ; LAB_004d1b98
    MOV EAX,dword ptr [ESP + 0x74]      ; 004d1b7f
    MOV EDX,0xc0a00000                  ; 004d1b83
    MOV dword ptr [ESP + 0x4c],EAX      ; 004d1b88
    MOV EAX,dword ptr [ESP + 0x78]      ; 004d1b8c
    MOV dword ptr [ESP + 0x50],EDX      ; 004d1b90
    MOV dword ptr [ESP + 0x54],EAX      ; 004d1b94
    PUSH 0xffff                         ; 004d1b98
        ;   Label: LAB_004d1b98
    PUSH 0x5                            ; 004d1b9d
    PUSH 0x10000                        ; 004d1b9f
    PUSH 0x20000                        ; 004d1ba4
    LEA EAX,[ESP + 0x5c]                ; 004d1ba9
    PUSH EAX                            ; 004d1bad
    LEA EAX,[ESP + 0x48]                ; 004d1bae
    PUSH EAX                            ; 004d1bb2
    MOV ECX,dword ptr [0x005fc5a0]      ; 004d1bb3 | DAT_005fc5a0
    PUSH ECX                            ; 004d1bb9
    INC EBX                             ; 004d1bba
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 004d1bbb
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004d1bc0
    CMP EBX,0x10                        ; 004d1bc3
    JL 0x004d1b19                       ; 004d1bc6
        ;   XREF to: 004d1b19 (CONDITIONAL_JUMP)  ; LAB_004d1b19
    LEA EAX,[EBP + 0x20]                ; 004d1bcc
        ;   Label: LAB_004d1bcc
    PUSH EAX                            ; 004d1bcf
    PUSH 0x5c4a32                       ; 004d1bd0 | = "wp_heal.wav"
    PUSH EBP                            ; 004d1bd5
    MOV EBX,dword ptr [0x006045f8]      ; 004d1bd6 | DAT_006045f8
    PUSH EBX                            ; 004d1bdc
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004d1bdd
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    MOV EAX,0x1                         ; 004d1be2
    ADD ESP,0x10                        ; 004d1be7
    MOV dword ptr [EBP + 0x300],0x40400000 ; 004d1bea
    POP EBX                             ; 004d1bf4
    ADD ESP,0x7c                        ; 004d1bf5
    POP EBP                             ; 004d1bf8
    POP EDI                             ; 004d1bf9
    POP ESI                             ; 004d1bfa
    RET                                 ; 004d1bfb
    LEA EAX,[EBP + 0x20]                ; 004d1bfc
        ;   Label: LAB_004d1bfc
    PUSH EAX                            ; 004d1bff
    PUSH 0x5c4a24                       ; 004d1c00 | = "wp_nomana.wav"
    PUSH EBP                            ; 004d1c05
    MOV ECX,dword ptr [0x006045f8]      ; 004d1c06 | DAT_006045f8
    PUSH ECX                            ; 004d1c0c
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004d1c0d
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004d1c12
    MOV dword ptr [EBP + 0x300],0x3f800000 ; 004d1c15
    XOR EAX,EAX                         ; 004d1c1f
    ADD ESP,0x7c                        ; 004d1c21
    POP EBP                             ; 004d1c24
    POP EDI                             ; 004d1c25
    POP ESI                             ; 004d1c26
    RET                                 ; 004d1c27
    MOV EAX,dword ptr [EDX]             ; 004d1c28
        ;   Label: LAB_004d1c28
    MOV dword ptr [ESP + 0x34],EAX      ; 004d1c2a
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d1c2e
    MOV dword ptr [ESP + 0x38],EAX      ; 004d1c31
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d1c35
    MOV dword ptr [ESP + 0x3c],EAX      ; 004d1c38
    JMP 0x004d1aaf                      ; 004d1c3c
        ;   XREF to: 004d1aaf (UNCONDITIONAL_JUMP)  ; LAB_004d1aaf


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cross_cpp_FUN_005a6cf0(CDemonActor *param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_doc.cpp_FUN_0045bdc0 at 0045c792
;
; Referenced Globals:
;   undefined4 s_crosssmall_wav_005f072b+2
;   TerminatedCString s_crossfull_wav_005f073c
;   undefined4 DAT_005f074d
;   undefined4 DAT_005f0755
;   undefined4 DAT_005f075d
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0061c068
;   undefined4 g_CCharacterClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   undefined4 g_CBasicEnemyClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6cf0
        ;   Label: core_cross.cpp_FUN_005a6cf0
    PUSH ESI                            ; 005a6cf1
    PUSH EDI                            ; 005a6cf2
    PUSH EBP                            ; 005a6cf3
    SUB ESP,0x30                        ; 005a6cf4
    MOV EAX,dword ptr [ESP + 0x44]      ; 005a6cf7
    FLD float ptr [EAX + 0x840]         ; 005a6cfb
    FLDZ                                ; 005a6d01
    FCOMPP                              ; 005a6d03
    FNSTSW AX                           ; 005a6d05
    SAHF                                ; 005a6d07
    JC 0x005a6d8a                       ; 005a6d08
        ;   XREF to: 005a6d8a (CONDITIONAL_JUMP)  ; LAB_005a6d8a
    MOV EAX,dword ptr [ESP + 0x44]      ; 005a6d0e
    MOV dword ptr [EAX + 0x840],0x3f800000 ; 005a6d12
    MOV dword ptr [EAX + 0x83c],0x0     ; 005a6d1c
    FLD float ptr [EAX + 0x828]         ; 005a6d26
    FLD ST0                             ; 005a6d2c
    MOV dword ptr [EAX + 0x82c],0x0     ; 005a6d2e
    LEA EDX,[EAX + 0x20]                ; 005a6d38
    FXCH                                ; 005a6d3b
    FSTP float ptr [EAX + 0x838]        ; 005a6d3d
    FCOMP double ptr [0x005f074d]       ; 005a6d43 | DAT_005f074d
    FNSTSW AX                           ; 005a6d49
    SAHF                                ; 005a6d4b
    JC 0x005a6d92                       ; 005a6d4c
        ;   XREF to: 005a6d92 (CONDITIONAL_JUMP)  ; LAB_005a6d92
    PUSH EDX                            ; 005a6d4e
    PUSH 0x5f073c                       ; 005a6d4f | = "crossfull.wav"
    MOV EDX,dword ptr [ESP + 0x4c]      ; 005a6d54
    PUSH EDX                            ; 005a6d58
    MOV ECX,dword ptr [0x0061c068]      ; 005a6d59 | DAT_0061c068
    PUSH ECX                            ; 005a6d5f
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a6d60
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
        ;   Label: LAB_005a6d60
    ADD ESP,0x10                        ; 005a6d65
    MOV EBP,dword ptr [ESP + 0x44]      ; 005a6d68
    XOR EDI,EDI                         ; 005a6d6c
    ADD EBP,0x20                        ; 005a6d6e
    MOV dword ptr [ESP + 0x24],EDI      ; 005a6d71
    MOV dword ptr [ESP + 0x28],EDI      ; 005a6d75
    MOV EAX,[0x0061b5a8]                ; 005a6d79 | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_005a6d79
    MOV EDX,dword ptr [ESP + 0x28]      ; 005a6d7e
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 005a6d82 | g_CDemonSetInstance.actor_count
    JL 0x005a6da6                       ; 005a6d88
        ;   XREF to: 005a6da6 (CONDITIONAL_JUMP)  ; LAB_005a6da6
    ADD ESP,0x30                        ; 005a6d8a
        ;   Label: LAB_005a6d8a
    POP EBP                             ; 005a6d8d
    POP EDI                             ; 005a6d8e
    POP ESI                             ; 005a6d8f
    POP EBX                             ; 005a6d90
    RET                                 ; 005a6d91
    PUSH EDX                            ; 005a6d92
        ;   Label: LAB_005a6d92
    PUSH 0x5f072d                       ; 005a6d93 | s_crosssmall_wav_005f072b+2
    MOV EBX,dword ptr [ESP + 0x4c]      ; 005a6d98
    PUSH EBX                            ; 005a6d9c
    MOV ESI,dword ptr [0x0061c068]      ; 005a6d9d | DAT_0061c068
    PUSH ESI                            ; 005a6da3
    JMP 0x005a6d60                      ; 005a6da4
        ;   XREF to: 005a6d60 (UNCONDITIONAL_JUMP)  ; LAB_005a6d60
    MOV ESI,dword ptr [ESP + 0x24]      ; 005a6da6
        ;   Label: LAB_005a6da6
    MOV EBX,dword ptr [0x02668498]      ; 005a6daa | g_CBasicEnemyClassInfo.name_hash
    ADD EAX,ESI                         ; 005a6db0
    PUSH EBX                            ; 005a6db2
    MOV EDI,dword ptr [EAX + 0x14d168]  ; 005a6db3 | g_CDemonSetInstance.actors[0]
    PUSH EDI                            ; 005a6db9
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 005a6dba
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV EBX,EAX                         ; 005a6dbf
    ADD ESP,0x8                         ; 005a6dc1
    TEST EAX,EAX                        ; 005a6dc4
    JZ 0x005a6ead                       ; 005a6dc6
        ;   XREF to: 005a6ead (CONDITIONAL_JUMP)  ; LAB_005a6ead
    CMP dword ptr [EAX + 0x11348],0x0   ; 005a6dcc
    JZ 0x005a6ead                       ; 005a6dd3
        ;   XREF to: 005a6ead (CONDITIONAL_JUMP)  ; LAB_005a6ead
    PUSH EBX                            ; 005a6dd9
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a6dda
    CALL dword ptr [EAX + 0x114]        ; 005a6de0
    ADD ESP,0x4                         ; 005a6de6
    TEST EAX,EAX                        ; 005a6de9
    JNZ 0x005a6ead                      ; 005a6deb
        ;   XREF to: 005a6ead (CONDITIONAL_JUMP)  ; LAB_005a6ead
    LEA EDX,[EBX + 0x20]                ; 005a6df1
    FLD float ptr [EBP]                 ; 005a6df4
    FSUB float ptr [EDX]                ; 005a6df7
    FMUL ST0                            ; 005a6df9
    FLD float ptr [EBP + 0x8]           ; 005a6dfb
    FSUB float ptr [EDX + 0x8]          ; 005a6dfe
    FMUL ST0                            ; 005a6e01
    MOV EAX,dword ptr [ESP + 0x44]      ; 005a6e03
    FADDP                               ; 005a6e07
    FLD float ptr [EAX + 0x838]         ; 005a6e09
    FXCH                                ; 005a6e0f
    FSQRT                               ; 005a6e11
    FXCH                                ; 005a6e13
    FMUL double ptr [0x005f0755]        ; 005a6e15 | DAT_005f0755
    FXCH                                ; 005a6e1b
    FCOMPP                              ; 005a6e1d
    FNSTSW AX                           ; 005a6e1f
    SAHF                                ; 005a6e21
    JNC 0x005a6ead                      ; 005a6e22
        ;   XREF to: 005a6ead (CONDITIONAL_JUMP)  ; LAB_005a6ead
    FLD float ptr [EDX + 0x4]           ; 005a6e28
    FLD float ptr [EDX + 0x8]           ; 005a6e2b
    FLD float ptr [EDX]                 ; 005a6e2e
    MOV EDI,ESP                         ; 005a6e30
    LEA ESI,[ESP + 0xc]                 ; 005a6e32
    MOV EDX,dword ptr [ESP + 0x44]      ; 005a6e36
    FSUB float ptr [EBP]                ; 005a6e3a
    FXCH ST2                            ; 005a6e3d
    FSUB float ptr [EBP + 0x4]          ; 005a6e3f
    FXCH                                ; 005a6e42
    FSUB float ptr [EBP + 0x8]          ; 005a6e44
    FXCH ST2                            ; 005a6e47
    FSTP float ptr [ESP + 0xc]          ; 005a6e49
    FSTP float ptr [ESP + 0x10]         ; 005a6e4d
    FSTP float ptr [ESP + 0x14]         ; 005a6e51
    MOVSD ES:EDI,ESI                    ; 005a6e55
    MOVSD ES:EDI,ESI                    ; 005a6e56
    MOVSD ES:EDI,ESI                    ; 005a6e57
    FLD float ptr [EDX + 0x838]         ; 005a6e58
    FMUL double ptr [0x005f075d]        ; 005a6e5e | DAT_005f075d
    SUB ESP,0x4                         ; 005a6e64
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a6e67
    LEA EDX,[ESP + 0x4]                 ; 005a6e6d
    FSTP float ptr [ESP]                ; 005a6e71
    PUSH EDX                            ; 005a6e74
    PUSH EBX                            ; 005a6e75
    CALL dword ptr [EAX + 0x16c]        ; 005a6e76
    ADD ESP,0xc                         ; 005a6e7c
    MOV EDX,dword ptr [0x007bdc94]      ; 005a6e7f | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 005a6e85
    MOV ECX,dword ptr [ESP + 0x48]      ; 005a6e86
    MOV EAX,dword ptr [ESP + 0x48]      ; 005a6e8a
    PUSH ECX                            ; 005a6e8e
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 005a6e8f
    CALL dword ptr [EAX + 0x9c]         ; 005a6e95
    ADD ESP,0x4                         ; 005a6e9b
    PUSH EAX                            ; 005a6e9e
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 005a6e9f
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 005a6ea4
    MOV dword ptr [EBX + 0x10a78],EAX   ; 005a6ea7
    MOV ESI,dword ptr [ESP + 0x28]      ; 005a6ead
        ;   Label: LAB_005a6ead
    MOV EBX,dword ptr [ESP + 0x24]      ; 005a6eb1
    INC ESI                             ; 005a6eb5
    ADD EBX,0x4                         ; 005a6eb6
    MOV dword ptr [ESP + 0x28],ESI      ; 005a6eb9
    MOV dword ptr [ESP + 0x24],EBX      ; 005a6ebd
    JMP 0x005a6d79                      ; 005a6ec1
        ;   XREF to: 005a6d79 (UNCONDITIONAL_JUMP)  ; LAB_005a6d79


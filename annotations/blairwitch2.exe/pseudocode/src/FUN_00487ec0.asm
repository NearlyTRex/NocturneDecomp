; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00487ec0(int param_1)
;
;
; XREF[30]:
;   FUN_0040f040 at 0040f047
;   FUN_004124a0 at 004124a7
;   FUN_00413e60 at 00413e67
;   FUN_00414b10 at 00414b17
;   FUN_00415250 at 00415257
;   FUN_00419c50 at 00419c5c
;   FUN_0041e800 at 0041e806
;   FUN_0041f7c0 at 0041f7c9
;   FUN_00437b80 at 00437b8a
;   FUN_00439830 at 00439836
;   ... and 20 more
;
; Referenced Globals:
;   TerminatedCString s_speed_005d2d2c
;   TerminatedCString s_hitPoints_005d2d32
;   TerminatedCString s_poolMe_005d2d3c
;   TerminatedCString s_speed_005d2d43
;   TerminatedCString s_poolMe_005d2d49
;   TerminatedCString s_randomizeMe_005d2d50
;   TerminatedCString s_scriptVictim_005d2d5c
;   TerminatedCString s_patrolNamePattern_005d2d69
;   TerminatedCString s_guardDistance_005d2d7b
;   TerminatedCString s_victimHeight_005d2d89
;   TerminatedCString s_victim_005d2d96
;   undefined4 DAT_006141a0
;
; Called Functions:
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040b9e0
;   FUN_0040c330
;   FUN_00422c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487ec0
        ;   Label: FUN_00487ec0
    PUSH ESI                            ; 00487ec1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00487ec2
    MOV EDX,dword ptr [0x006141a0]      ; 00487ec6 | DAT_006141a0
    LEA ESI,[EBX + 0x10a60]             ; 00487ecc
    CMP EDX,0x4                         ; 00487ed2
    JGE 0x00487f30                      ; 00487ed5
        ;   XREF to: 00487f30 (CONDITIONAL_JUMP)  ; LAB_00487f30
    PUSH EBX                            ; 00487ed7
    CALL FUN_0040c330                   ; 00487ed8
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    MOV ECX,dword ptr [0x006141a0]      ; 00487edd | DAT_006141a0
    ADD ESP,0x4                         ; 00487ee3
    CMP ECX,0x2                         ; 00487ee6
    JL 0x00487ef9                       ; 00487ee9
        ;   XREF to: 00487ef9 (CONDITIONAL_JUMP)  ; LAB_00487ef9
    PUSH 0x5d2d2c                       ; 00487eeb | = "speed"
    PUSH ESI                            ; 00487ef0
    CALL FUN_0040b8e0                   ; 00487ef1
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00487ef6
    CMP dword ptr [0x006141a0],0x3      ; 00487ef9 | DAT_006141a0
        ;   Label: LAB_00487ef9
    JGE 0x00487f05                      ; 00487f00
        ;   XREF to: 00487f05 (CONDITIONAL_JUMP)  ; LAB_00487f05
    POP ESI                             ; 00487f02
        ;   Label: LAB_00487f02
    POP EBX                             ; 00487f03
    RET                                 ; 00487f04
    PUSH 0x5d2d32                       ; 00487f05 | = "hitPoints"
        ;   Label: LAB_00487f05
    LEA ESI,[EBX + 0x25a8]              ; 00487f0a
    PUSH ESI                            ; 00487f10
    CALL FUN_0040b8e0                   ; 00487f11
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00487f16
    PUSH 0x5d2d3c                       ; 00487f19 | = "poolMe"
    ADD EBX,0x10a64                     ; 00487f1e
    PUSH EBX                            ; 00487f24
    CALL FUN_0040b960                   ; 00487f25
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00487f2a
    POP ESI                             ; 00487f2d
    POP EBX                             ; 00487f2e
    RET                                 ; 00487f2f
    PUSH EBX                            ; 00487f30
        ;   Label: LAB_00487f30
    CALL FUN_00422c30                   ; 00487f31
        ;   XREF to: 00422c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00422c30()
    ADD ESP,0x4                         ; 00487f36
    PUSH 0x5d2d43                       ; 00487f39 | = "speed"
    PUSH ESI                            ; 00487f3e
    CALL FUN_0040b8e0                   ; 00487f3f
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00487f44
    PUSH 0x5d2d49                       ; 00487f47 | = "poolMe"
    LEA ESI,[EBX + 0x10a64]             ; 00487f4c
    PUSH ESI                            ; 00487f52
    CALL FUN_0040b960                   ; 00487f53
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    MOV ECX,dword ptr [0x006141a0]      ; 00487f58 | DAT_006141a0
    ADD ESP,0x8                         ; 00487f5e
    CMP ECX,0x5                         ; 00487f61
    JL 0x00487f7a                       ; 00487f64
        ;   XREF to: 00487f7a (CONDITIONAL_JUMP)  ; LAB_00487f7a
    PUSH 0x5d2d50                       ; 00487f66 | = "randomizeMe"
    LEA ESI,[EBX + 0x10a68]             ; 00487f6b
    PUSH ESI                            ; 00487f71
    CALL FUN_0040b960                   ; 00487f72
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00487f77
    CMP dword ptr [0x006141a0],0x6      ; 00487f7a | DAT_006141a0
        ;   Label: LAB_00487f7a
    JL 0x00487f97                       ; 00487f81
        ;   XREF to: 00487f97 (CONDITIONAL_JUMP)  ; LAB_00487f97
    PUSH 0x5d2d5c                       ; 00487f83 | = "scriptVictim"
    LEA ESI,[EBX + 0x10af0]             ; 00487f88
    PUSH ESI                            ; 00487f8e
    CALL FUN_0040b9e0                   ; 00487f8f
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 00487f94
    CMP dword ptr [0x006141a0],0x7      ; 00487f97 | DAT_006141a0
        ;   Label: LAB_00487f97
    JL 0x00487fb4                       ; 00487f9e
        ;   XREF to: 00487fb4 (CONDITIONAL_JUMP)  ; LAB_00487fb4
    PUSH 0x5d2d69                       ; 00487fa0 | = "patrolNamePattern"
    LEA ESI,[EBX + 0x10a84]             ; 00487fa5
    PUSH ESI                            ; 00487fab
    CALL FUN_0040b730                   ; 00487fac
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00487fb1
    CMP dword ptr [0x006141a0],0x8      ; 00487fb4 | DAT_006141a0
        ;   Label: LAB_00487fb4
    JL 0x00487fd1                       ; 00487fbb
        ;   XREF to: 00487fd1 (CONDITIONAL_JUMP)  ; LAB_00487fd1
    PUSH 0x5d2d7b                       ; 00487fbd | = "guardDistance"
    LEA ESI,[EBX + 0x10a70]             ; 00487fc2
    PUSH ESI                            ; 00487fc8
    CALL FUN_0040b8e0                   ; 00487fc9
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00487fce
    CMP dword ptr [0x006141a0],0x9      ; 00487fd1 | DAT_006141a0
        ;   Label: LAB_00487fd1
    JL 0x00487fee                       ; 00487fd8
        ;   XREF to: 00487fee (CONDITIONAL_JUMP)  ; LAB_00487fee
    PUSH 0x5d2d89                       ; 00487fda | = "victimHeight"
    LEA ESI,[EBX + 0x10aec]             ; 00487fdf
    PUSH ESI                            ; 00487fe5
    CALL FUN_0040b8e0                   ; 00487fe6
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00487feb
    CMP dword ptr [0x006141a0],0xa      ; 00487fee | DAT_006141a0
        ;   Label: LAB_00487fee
    JL 0x00487f02                       ; 00487ff5
        ;   XREF to: 00487f02 (CONDITIONAL_JUMP)  ; LAB_00487f02
    PUSH 0x5d2d96                       ; 00487ffb | = "victim"
    ADD EBX,0x10a78                     ; 00488000
    PUSH EBX                            ; 00488006
    CALL FUN_0040b9e0                   ; 00488007
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 0048800c
    POP ESI                             ; 0048800f
    POP EBX                             ; 00488010
    RET                                 ; 00488011


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00531bf0(int param_1)
;
;
; XREF[4]:
;   FUN_004ed3f0 at 004ed3f5
;   FUN_004ef020 at 004ef027
;   FUN_004f09f0 at 004f09f5
;   FUN_00532dc0 at 00532dc7
;
; Referenced Globals:
;   TerminatedCString s_hitPoints_005ec79a
;   TerminatedCString s_modelName_005ec7a4
;   TerminatedCString s_motion_state_005ec7ae
;   TerminatedCString s_shootMe_005ec7bb
;   TerminatedCString s_poolMe_005ec7c3
;   TerminatedCString s_speed_005ec7ca
;   undefined4 DAT_00622714
;
; Called Functions:
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_0040c040
;   FUN_0042c7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531bf0
        ;   Label: FUN_00531bf0
    PUSH ESI                            ; 00531bf1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00531bf2
    CMP dword ptr [0x00622714],0x2      ; 00531bf6 | DAT_00622714
    JL 0x00531c7f                       ; 00531bfd
        ;   XREF to: 00531c7f (CONDITIONAL_JUMP)  ; LAB_00531c7f
    PUSH EBX                            ; 00531c03
    CALL FUN_0042c7f0                   ; 00531c04
        ;   XREF to: 0042c7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c7f0()
    MOV ECX,dword ptr [0x00622714]      ; 00531c09 | DAT_00622714
    ADD ESP,0x4                         ; 00531c0f
    CMP ECX,0x3                         ; 00531c12
    JL 0x00531c39                       ; 00531c15
        ;   XREF to: 00531c39 (CONDITIONAL_JUMP)  ; LAB_00531c39
    PUSH 0x5ec7a4                       ; 00531c17 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 00531c1c
    PUSH ESI                            ; 00531c22
    CALL FUN_0040b7f0                   ; 00531c23
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    ADD ESP,0x8                         ; 00531c28
    PUSH 0x5ec7ae                       ; 00531c2b | = "motion state"
    PUSH ESI                            ; 00531c30
    CALL FUN_0040b870                   ; 00531c31
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    ADD ESP,0x8                         ; 00531c36
    CMP dword ptr [0x00622714],0x4      ; 00531c39 | DAT_00622714
        ;   Label: LAB_00531c39
    JL 0x00531c56                       ; 00531c40
        ;   XREF to: 00531c56 (CONDITIONAL_JUMP)  ; LAB_00531c56
    PUSH 0x5ec7bb                       ; 00531c42 | = "shootMe"
    LEA ESI,[EBX + 0x1faac]             ; 00531c47
    PUSH ESI                            ; 00531c4d
    CALL FUN_0040b670                   ; 00531c4e
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 00531c53
    CMP dword ptr [0x00622714],0x5      ; 00531c56 | DAT_00622714
        ;   Label: LAB_00531c56
    JL 0x00531c73                       ; 00531c5d
        ;   XREF to: 00531c73 (CONDITIONAL_JUMP)  ; LAB_00531c73
    PUSH 0x5ec7c3                       ; 00531c5f | = "poolMe"
    LEA ESI,[EBX + 0x1fab0]             ; 00531c64
    PUSH ESI                            ; 00531c6a
    CALL FUN_0040b670                   ; 00531c6b
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 00531c70
    CMP dword ptr [0x00622714],0x6      ; 00531c73 | DAT_00622714
        ;   Label: LAB_00531c73
    JGE 0x00531c9f                      ; 00531c7a
        ;   XREF to: 00531c9f (CONDITIONAL_JUMP)  ; LAB_00531c9f
    POP ESI                             ; 00531c7c
    POP EBX                             ; 00531c7d
    RET                                 ; 00531c7e
    PUSH EBX                            ; 00531c7f
        ;   Label: LAB_00531c7f
    CALL FUN_0040c040                   ; 00531c80
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 00531c85
    PUSH 0x5ec79a                       ; 00531c88 | = "hitPoints"
    ADD EBX,0x2538                      ; 00531c8d
    PUSH EBX                            ; 00531c93
    CALL FUN_0040b5f0                   ; 00531c94
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00531c99
    POP ESI                             ; 00531c9c
    POP EBX                             ; 00531c9d
    RET                                 ; 00531c9e
    PUSH 0x5ec7ca                       ; 00531c9f | = "speed"
        ;   Label: LAB_00531c9f
    ADD EBX,0x1fab4                     ; 00531ca4
    PUSH EBX                            ; 00531caa
    CALL FUN_0040b5f0                   ; 00531cab
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00531cb0
    POP ESI                             ; 00531cb3
    POP EBX                             ; 00531cb4
    RET                                 ; 00531cb5


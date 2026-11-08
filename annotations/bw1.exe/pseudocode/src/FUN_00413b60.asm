; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00413b60(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005d3ae0+1
;   TerminatedCString s_modelName_005d3ae7
;   TerminatedCString s_motion_state_005d3af1
;   TerminatedCString s_fallEvent_005d3afe
;   TerminatedCString s_mistState_005d3b08
;   TerminatedCString s_vanishTimer_005d3b12
;   TerminatedCString s_newPos_005d3b1e
;   undefined4 DAT_00610990
;
; Called Functions:
;   FUN_0040b1c0
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413b60
        ;   Label: FUN_00413b60
    PUSH ESI                            ; 00413b61
    MOV EBX,dword ptr [ESP + 0xc]       ; 00413b62
    PUSH EBX                            ; 00413b66
    CALL FUN_004a0520                   ; 00413b67
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    ADD ESP,0x4                         ; 00413b6c
    PUSH 0x5d3ae1                       ; 00413b6f | s_speed_005d3ae0+1
    LEA ESI,[EBX + 0xc1d0]              ; 00413b74
    PUSH ESI                            ; 00413b7a
    CALL FUN_0040b5f0                   ; 00413b7b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00413b80
    PUSH 0x5d3ae7                       ; 00413b83 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 00413b88
    PUSH ESI                            ; 00413b8e
    CALL FUN_0040b7f0                   ; 00413b8f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    ADD ESP,0x8                         ; 00413b94
    PUSH 0x5d3af1                       ; 00413b97 | = "motion state"
    PUSH ESI                            ; 00413b9c
    CALL FUN_0040b870                   ; 00413b9d
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    MOV EDX,dword ptr [0x00610990]      ; 00413ba2 | DAT_00610990
    ADD ESP,0x8                         ; 00413ba8
    CMP EDX,0x2                         ; 00413bab
    JGE 0x00413bbc                      ; 00413bae
        ;   XREF to: 00413bbc (CONDITIONAL_JUMP)  ; LAB_00413bbc
    CMP dword ptr [0x00610990],0x3      ; 00413bb0 | DAT_00610990
    JGE 0x00413bdc                      ; 00413bb7
        ;   XREF to: 00413bdc (CONDITIONAL_JUMP)  ; LAB_00413bdc
    POP ESI                             ; 00413bb9
    POP EBX                             ; 00413bba
    RET                                 ; 00413bbb
    PUSH 0x5d3afe                       ; 00413bbc | = "fallEvent"
        ;   Label: LAB_00413bbc
    LEA ESI,[EBX + 0xc26c]              ; 00413bc1
    PUSH ESI                            ; 00413bc7
    CALL FUN_0040b440                   ; 00413bc8
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 00413bcd
    CMP dword ptr [0x00610990],0x3      ; 00413bd0 | DAT_00610990
    JGE 0x00413bdc                      ; 00413bd7
        ;   XREF to: 00413bdc (CONDITIONAL_JUMP)  ; LAB_00413bdc
    POP ESI                             ; 00413bd9
    POP EBX                             ; 00413bda
    RET                                 ; 00413bdb
    PUSH 0x5d3b08                       ; 00413bdc | = "mistState"
        ;   Label: LAB_00413bdc
    LEA ESI,[EBX + 0xc308]              ; 00413be1
    PUSH ESI                            ; 00413be7
    CALL FUN_0040b670                   ; 00413be8
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 00413bed
    PUSH 0x5d3b12                       ; 00413bf0 | = "vanishTimer"
    LEA ESI,[EBX + 0xc30c]              ; 00413bf5
    PUSH ESI                            ; 00413bfb
    CALL FUN_0040b5f0                   ; 00413bfc
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00413c01
    PUSH 0x5d3b1e                       ; 00413c04 | = "newPos"
    ADD EBX,0xc310                      ; 00413c09
    PUSH EBX                            ; 00413c0f
    CALL FUN_0040b1c0                   ; 00413c10
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 00413c15
    POP ESI                             ; 00413c18
    POP EBX                             ; 00413c19
    RET                                 ; 00413c1a


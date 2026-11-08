; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c8cc0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005c433c+1
;   TerminatedCString s_modelName_005c4343
;   TerminatedCString s_guardDistance_005c434d
;   TerminatedCString s_livesLeft_005c435b
;   TerminatedCString s_motion_state_005c4365
;   TerminatedCString s_partStatus_005c4372
;   TerminatedCString s_spasmCount_005c437d
;   TerminatedCString s_livesLeft_005c4388
;   TerminatedCString s_ariseTimer_005c4392
;   undefined4 DAT_005fecac
;
; Called Functions:
;   FUN_0040b830
;   FUN_0040b8b0
;   FUN_0040ba30
;   FUN_0040bab0
;   FUN_0040bba0
;   FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8cc0
        ;   Label: FUN_004c8cc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c8cc1
    PUSH EBX                            ; 004c8cc5
    CALL FUN_00489120                   ; 004c8cc6
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined FUN_00489120()
    MOV EDX,dword ptr [0x005fecac]      ; 004c8ccb | DAT_005fecac
    ADD ESP,0x4                         ; 004c8cd1
    CMP EDX,0x4                         ; 004c8cd4
    JL 0x004c8d5a                       ; 004c8cd7
        ;   XREF to: 004c8d5a (CONDITIONAL_JUMP)  ; LAB_004c8d5a
    PUSH 0x5c4343                       ; 004c8cdd | = "modelName"
        ;   Label: LAB_004c8cdd
    LEA EAX,[EBX + 0x158]               ; 004c8ce2
    PUSH EAX                            ; 004c8ce8
    CALL FUN_0040ba30                   ; 004c8ce9
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba30()
    MOV ECX,dword ptr [0x005fecac]      ; 004c8cee | DAT_005fecac
    ADD ESP,0x8                         ; 004c8cf4
    CMP ECX,0x2                         ; 004c8cf7
    JL 0x004c8d15                       ; 004c8cfa
        ;   XREF to: 004c8d15 (CONDITIONAL_JUMP)  ; LAB_004c8d15
    CMP ECX,0x7                         ; 004c8cfc
    JGE 0x004c8d15                      ; 004c8cff
        ;   XREF to: 004c8d15 (CONDITIONAL_JUMP)  ; LAB_004c8d15
    PUSH 0x5c434d                       ; 004c8d01 | = "guardDistance"
    LEA EAX,[EBX + 0xcddc]              ; 004c8d06
    PUSH EAX                            ; 004c8d0c
    CALL FUN_0040b830                   ; 004c8d0d
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 004c8d12
    CMP dword ptr [0x005fecac],0x3      ; 004c8d15 | DAT_005fecac
        ;   Label: LAB_004c8d15
    JL 0x004c8d32                       ; 004c8d1c
        ;   XREF to: 004c8d32 (CONDITIONAL_JUMP)  ; LAB_004c8d32
    PUSH 0x5c435b                       ; 004c8d1e | = "livesLeft"
    LEA EAX,[EBX + 0xd070]              ; 004c8d23
    PUSH EAX                            ; 004c8d29
    CALL FUN_0040b8b0                   ; 004c8d2a
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 004c8d2f
    CMP dword ptr [0x005fecac],0x5      ; 004c8d32 | DAT_005fecac
        ;   Label: LAB_004c8d32
    JL 0x004c8d4f                       ; 004c8d39
        ;   XREF to: 004c8d4f (CONDITIONAL_JUMP)  ; LAB_004c8d4f
    PUSH 0x5c4365                       ; 004c8d3b | = "motion state"
    LEA EAX,[EBX + 0x158]               ; 004c8d40
    PUSH EAX                            ; 004c8d46
    CALL FUN_0040bab0                   ; 004c8d47
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bab0()
    ADD ESP,0x8                         ; 004c8d4c
    CMP dword ptr [0x005fecac],0x6      ; 004c8d4f | DAT_005fecac
        ;   Label: LAB_004c8d4f
    JGE 0x004c8d73                      ; 004c8d56
        ;   XREF to: 004c8d73 (CONDITIONAL_JUMP)  ; LAB_004c8d73
    POP EBX                             ; 004c8d58
    RET                                 ; 004c8d59
    PUSH 0x5c433d                       ; 004c8d5a | s_speed_005c433c+1
        ;   Label: LAB_004c8d5a
    LEA EAX,[EBX + 0xcdcc]              ; 004c8d5f
    PUSH EAX                            ; 004c8d65
    CALL FUN_0040b830                   ; 004c8d66
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 004c8d6b
    JMP 0x004c8cdd                      ; 004c8d6e
        ;   XREF to: 004c8cdd (UNCONDITIONAL_JUMP)  ; LAB_004c8cdd
    PUSH 0x5c4372                       ; 004c8d73 | = "partStatus"
        ;   Label: LAB_004c8d73
    LEA EAX,[EBX + 0x158]               ; 004c8d78
    PUSH EAX                            ; 004c8d7e
    CALL FUN_0040bba0                   ; 004c8d7f
        ;   XREF to: 0040bba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bba0()
    ADD ESP,0x8                         ; 004c8d84
    PUSH 0x5c437d                       ; 004c8d87 | = "spasmCount"
    LEA EAX,[EBX + 0xd074]              ; 004c8d8c
    PUSH EAX                            ; 004c8d92
    CALL FUN_0040b8b0                   ; 004c8d93
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 004c8d98
    PUSH 0x5c4388                       ; 004c8d9b | = "livesLeft"
    LEA EAX,[EBX + 0xd070]              ; 004c8da0
    PUSH EAX                            ; 004c8da6
    CALL FUN_0040b8b0                   ; 004c8da7
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 004c8dac
    PUSH 0x5c4392                       ; 004c8daf | = "ariseTimer"
    ADD EBX,0xd060                      ; 004c8db4
    PUSH EBX                            ; 004c8dba
    CALL FUN_0040b8b0                   ; 004c8dbb
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 004c8dc0
    POP EBX                             ; 004c8dc3
    RET                                 ; 004c8dc4


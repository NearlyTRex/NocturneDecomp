; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056cd90(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_005f2a03
;   TerminatedCString s_modelName_005f2a09
;   TerminatedCString s_guardDistance_005f2a13
;   TerminatedCString s_motion_state_005f2a21
;
; Called Functions:
;   FUN_0040b5f0
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056cd90
        ;   Label: FUN_0056cd90
    PUSH ESI                            ; 0056cd91
    MOV ESI,dword ptr [ESP + 0xc]       ; 0056cd92
    PUSH ESI                            ; 0056cd96
    CALL FUN_004a0520                   ; 0056cd97
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    ADD ESP,0x4                         ; 0056cd9c
    PUSH 0x5f2a03                       ; 0056cd9f | = "speed"
    LEA EBX,[ESI + 0xc1d0]              ; 0056cda4
    PUSH EBX                            ; 0056cdaa
    CALL FUN_0040b5f0                   ; 0056cdab
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0056cdb0
    PUSH 0x5f2a09                       ; 0056cdb3 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 0056cdb8
    PUSH EBX                            ; 0056cdbe
    CALL FUN_0040b7f0                   ; 0056cdbf
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    ADD ESP,0x8                         ; 0056cdc4
    PUSH 0x5f2a13                       ; 0056cdc7 | = "guardDistance"
    ADD ESI,0xc26c                      ; 0056cdcc
    PUSH ESI                            ; 0056cdd2
    CALL FUN_0040b5f0                   ; 0056cdd3
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0056cdd8
    PUSH 0x5f2a21                       ; 0056cddb | = "motion state"
    PUSH EBX                            ; 0056cde0
    CALL FUN_0040b870                   ; 0056cde1
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    ADD ESP,0x8                         ; 0056cde6
    POP ESI                             ; 0056cde9
    POP EBX                             ; 0056cdea
    RET                                 ; 0056cdeb


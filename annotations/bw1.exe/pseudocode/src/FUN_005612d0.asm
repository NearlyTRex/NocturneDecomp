; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005612d0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_005f1951
;   TerminatedCString s_modelName_005f1957
;   TerminatedCString s_guardDistance_005f1961
;   TerminatedCString s_motion_state_005f196f
;
; Called Functions:
;   FUN_0040b5f0
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005612d0
        ;   Label: FUN_005612d0
    PUSH ESI                            ; 005612d1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005612d2
    PUSH ESI                            ; 005612d6
    CALL FUN_004a0520                   ; 005612d7
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    ADD ESP,0x4                         ; 005612dc
    PUSH 0x5f1951                       ; 005612df | = "speed"
    LEA EBX,[ESI + 0xc1d0]              ; 005612e4
    PUSH EBX                            ; 005612ea
    CALL FUN_0040b5f0                   ; 005612eb
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005612f0
    PUSH 0x5f1957                       ; 005612f3 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 005612f8
    PUSH EBX                            ; 005612fe
    CALL FUN_0040b7f0                   ; 005612ff
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    ADD ESP,0x8                         ; 00561304
    PUSH 0x5f1961                       ; 00561307 | = "guardDistance"
    ADD ESI,0xc1e0                      ; 0056130c
    PUSH ESI                            ; 00561312
    CALL FUN_0040b5f0                   ; 00561313
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00561318
    PUSH 0x5f196f                       ; 0056131b | = "motion state"
    PUSH EBX                            ; 00561320
    CALL FUN_0040b870                   ; 00561321
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    ADD ESP,0x8                         ; 00561326
    POP ESI                             ; 00561329
    POP EBX                             ; 0056132a
    RET                                 ; 0056132b


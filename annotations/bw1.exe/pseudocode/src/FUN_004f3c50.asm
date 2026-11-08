; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f3c50(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005e5679+1
;   TerminatedCString s_modelName_005e5680
;   TerminatedCString s_motion_state_005e568a
;
; Called Functions:
;   FUN_0040b5f0
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3c50
        ;   Label: FUN_004f3c50
    PUSH ESI                            ; 004f3c51
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f3c52
    PUSH ESI                            ; 004f3c56
    CALL FUN_004a0520                   ; 004f3c57
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    ADD ESP,0x4                         ; 004f3c5c
    PUSH 0x5e567a                       ; 004f3c5f | s_speed_005e5679+1
    LEA EBX,[ESI + 0xc1d0]              ; 004f3c64
    PUSH EBX                            ; 004f3c6a
    CALL FUN_0040b5f0                   ; 004f3c6b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004f3c70
    PUSH 0x5e5680                       ; 004f3c73 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 004f3c78
    PUSH EBX                            ; 004f3c7e
    CALL FUN_0040b7f0                   ; 004f3c7f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    ADD ESP,0x8                         ; 004f3c84
    PUSH 0x5e568a                       ; 004f3c87 | = "motion state"
    PUSH EBX                            ; 004f3c8c
    CALL FUN_0040b870                   ; 004f3c8d
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    ADD ESP,0x8                         ; 004f3c92
    POP ESI                             ; 004f3c95
    POP EBX                             ; 004f3c96
    RET                                 ; 004f3c97


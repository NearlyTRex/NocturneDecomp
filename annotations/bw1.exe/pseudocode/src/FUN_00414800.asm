; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414800(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_005d3be3
;   TerminatedCString s_modelName_005d3be9
;   TerminatedCString s_motion_state_005d3bf3
;
; Called Functions:
;   FUN_0040b5f0
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414800
        ;   Label: FUN_00414800
    PUSH ESI                            ; 00414801
    MOV ESI,dword ptr [ESP + 0xc]       ; 00414802
    PUSH ESI                            ; 00414806
    CALL FUN_004a0520                   ; 00414807
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    ADD ESP,0x4                         ; 0041480c
    PUSH 0x5d3be3                       ; 0041480f | = "speed"
    LEA EBX,[ESI + 0xc1d0]              ; 00414814
    PUSH EBX                            ; 0041481a
    CALL FUN_0040b5f0                   ; 0041481b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00414820
    PUSH 0x5d3be9                       ; 00414823 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 00414828
    PUSH EBX                            ; 0041482e
    CALL FUN_0040b7f0                   ; 0041482f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    ADD ESP,0x8                         ; 00414834
    PUSH 0x5d3bf3                       ; 00414837 | = "motion state"
    PUSH EBX                            ; 0041483c
    CALL FUN_0040b870                   ; 0041483d
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    ADD ESP,0x8                         ; 00414842
    POP ESI                             ; 00414845
    POP EBX                             ; 00414846
    RET                                 ; 00414847


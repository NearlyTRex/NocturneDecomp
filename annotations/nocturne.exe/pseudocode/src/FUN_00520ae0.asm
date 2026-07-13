; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00520ae0(int param_1)
;
;
; Referenced Globals:
;   string s_speed_005920a9
;   string s_modelName_005920af
;   string s_guardDistance_005920b9
;   string s_motion_state_005920c7
;
; Called Functions:
;   FUN_0040c880
;   FUN_0040ca80
;   FUN_0040cb00
;   FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520ae0
        ;   Label: FUN_00520ae0
    PUSH ESI                            ; 00520ae1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00520ae2
    PUSH ESI                            ; 00520ae6
    CALL FUN_004796c0                   ; 00520ae7
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796c0()
    ADD ESP,0x4                         ; 00520aec
    PUSH 0x5920a9                       ; 00520aef | = "speed"
    LEA EBX,[ESI + 0xbc8c]              ; 00520af4
    PUSH EBX                            ; 00520afa
    CALL FUN_0040c880                   ; 00520afb
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 00520b00
    PUSH 0x5920af                       ; 00520b03 | = "modelName"
    LEA EBX,[ESI + 0x150]               ; 00520b08
    PUSH EBX                            ; 00520b0e
    CALL FUN_0040ca80                   ; 00520b0f
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ca80()
    ADD ESP,0x8                         ; 00520b14
    PUSH 0x5920b9                       ; 00520b17 | = "guardDistance"
    ADD ESI,0xbd28                      ; 00520b1c
    PUSH ESI                            ; 00520b22
    CALL FUN_0040c880                   ; 00520b23
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 00520b28
    PUSH 0x5920c7                       ; 00520b2b | = "motion state"
    PUSH EBX                            ; 00520b30
    CALL FUN_0040cb00                   ; 00520b31
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cb00()
    ADD ESP,0x8                         ; 00520b36
    POP ESI                             ; 00520b39
    POP EBX                             ; 00520b3a
    RET                                 ; 00520b3b


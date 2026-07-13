; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bc9c0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_0058647c+1
;   string s_modelName_00586483
;   string s_motion_state_0058648d
;
; Called Functions:
;   FUN_0040c880
;   FUN_0040ca80
;   FUN_0040cb00
;   FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc9c0
        ;   Label: FUN_004bc9c0
    PUSH ESI                            ; 004bc9c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004bc9c2
    PUSH ESI                            ; 004bc9c6
    CALL FUN_004796c0                   ; 004bc9c7
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796c0()
    ADD ESP,0x4                         ; 004bc9cc
    PUSH 0x58647d                       ; 004bc9cf | s_speed_0058647c+1
    LEA EBX,[ESI + 0xbc8c]              ; 004bc9d4
    PUSH EBX                            ; 004bc9da
    CALL FUN_0040c880                   ; 004bc9db
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 004bc9e0
    PUSH 0x586483                       ; 004bc9e3 | = "modelName"
    LEA EBX,[ESI + 0x150]               ; 004bc9e8
    PUSH EBX                            ; 004bc9ee
    CALL FUN_0040ca80                   ; 004bc9ef
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ca80()
    ADD ESP,0x8                         ; 004bc9f4
    PUSH 0x58648d                       ; 004bc9f7 | = "motion state"
    PUSH EBX                            ; 004bc9fc
    CALL FUN_0040cb00                   ; 004bc9fd
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cb00()
    ADD ESP,0x8                         ; 004bca02
    POP ESI                             ; 004bca05
    POP EBX                             ; 004bca06
    RET                                 ; 004bca07


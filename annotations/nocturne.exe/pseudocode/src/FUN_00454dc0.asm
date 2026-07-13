; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00454dc0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_0057cfcc+2
;   string s_modelName_0057cfd4
;   string s_guardDistance_0057cfde
;   string s_motion_state_0057cfec
;   undefined4 DAT_005ae678
;
; Called Functions:
;   FUN_0040c880
;   FUN_0040ca80
;   FUN_0040cb00
;   FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454dc0
        ;   Label: FUN_00454dc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00454dc1
    PUSH EBX                            ; 00454dc5
    CALL FUN_004796c0                   ; 00454dc6
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796c0()
    ADD ESP,0x4                         ; 00454dcb
    PUSH 0x57cfce                       ; 00454dce | s_speed_0057cfcc+2
    LEA EAX,[EBX + 0xbc8c]              ; 00454dd3
    PUSH EAX                            ; 00454dd9
    CALL FUN_0040c880                   ; 00454dda
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 00454ddf
    PUSH 0x57cfd4                       ; 00454de2 | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 00454de7
    PUSH EAX                            ; 00454ded
    CALL FUN_0040ca80                   ; 00454dee
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ca80()
    MOV EDX,dword ptr [0x005ae678]      ; 00454df3 | DAT_005ae678
    ADD ESP,0x8                         ; 00454df9
    CMP EDX,0x2                         ; 00454dfc
    JL 0x00454e17                       ; 00454dff
        ;   XREF to: 00454e17 (CONDITIONAL_JUMP)  ; LAB_00454e17
    PUSH 0x57cfec                       ; 00454e01 | = "motion state"
        ;   Label: LAB_00454e01
    ADD EBX,0x150                       ; 00454e06
    PUSH EBX                            ; 00454e0c
    CALL FUN_0040cb00                   ; 00454e0d
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cb00()
    ADD ESP,0x8                         ; 00454e12
    POP EBX                             ; 00454e15
    RET                                 ; 00454e16
    PUSH 0x57cfde                       ; 00454e17 | = "guardDistance"
        ;   Label: LAB_00454e17
    LEA EAX,[EBX + 0xbc9c]              ; 00454e1c
    PUSH EAX                            ; 00454e22
    CALL FUN_0040c880                   ; 00454e23
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 00454e28
    JMP 0x00454e01                      ; 00454e2b
        ;   XREF to: 00454e01 (UNCONDITIONAL_JUMP)  ; LAB_00454e01


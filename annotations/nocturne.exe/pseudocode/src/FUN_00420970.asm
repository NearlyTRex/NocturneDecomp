; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00420970(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_00579b83+2
;   string s_modelName_00579b8b
;   string s_guardDistance_00579b95
;   string s_state_00579ba3
;   undefined4 DAT_005ad0e0
;
; Called Functions:
;   FUN_0040c880
;   FUN_0040ca80
;   FUN_0040cb00
;   FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420970
        ;   Label: FUN_00420970
    MOV EBX,dword ptr [ESP + 0x8]       ; 00420971
    PUSH EBX                            ; 00420975
    CALL FUN_004796c0                   ; 00420976
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796c0()
    MOV EDX,dword ptr [0x005ad0e0]      ; 0042097b | DAT_005ad0e0
    ADD ESP,0x4                         ; 00420981
    CMP EDX,0x2                         ; 00420984
    JL 0x004209cc                       ; 00420987
        ;   XREF to: 004209cc (CONDITIONAL_JUMP)  ; LAB_004209cc
    PUSH 0x579b8b                       ; 00420989 | = "modelName"
        ;   Label: LAB_00420989
    LEA EAX,[EBX + 0x150]               ; 0042098e
    PUSH EAX                            ; 00420994
    CALL FUN_0040ca80                   ; 00420995
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ca80()
    MOV ECX,dword ptr [0x005ad0e0]      ; 0042099a | DAT_005ad0e0
    ADD ESP,0x8                         ; 004209a0
    CMP ECX,0x2                         ; 004209a3
    JL 0x004209c1                       ; 004209a6
        ;   XREF to: 004209c1 (CONDITIONAL_JUMP)  ; LAB_004209c1
    CMP ECX,0x4                         ; 004209a8
    JGE 0x004209c1                      ; 004209ab
        ;   XREF to: 004209c1 (CONDITIONAL_JUMP)  ; LAB_004209c1
    PUSH 0x579b95                       ; 004209ad | = "guardDistance"
    LEA EAX,[EBX + 0xbc9c]              ; 004209b2
    PUSH EAX                            ; 004209b8
    CALL FUN_0040c880                   ; 004209b9
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 004209be
    CMP dword ptr [0x005ad0e0],0x3      ; 004209c1 | DAT_005ad0e0
        ;   Label: LAB_004209c1
    JGE 0x004209e2                      ; 004209c8
        ;   XREF to: 004209e2 (CONDITIONAL_JUMP)  ; LAB_004209e2
    POP EBX                             ; 004209ca
    RET                                 ; 004209cb
    PUSH 0x579b85                       ; 004209cc | s_speed_00579b83+2
        ;   Label: LAB_004209cc
    LEA EAX,[EBX + 0xbc8c]              ; 004209d1
    PUSH EAX                            ; 004209d7
    CALL FUN_0040c880                   ; 004209d8
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 004209dd
    JMP 0x00420989                      ; 004209e0
        ;   XREF to: 00420989 (UNCONDITIONAL_JUMP)  ; LAB_00420989
    PUSH 0x579ba3                       ; 004209e2 | = "state"
        ;   Label: LAB_004209e2
    ADD EBX,0x150                       ; 004209e7
    PUSH EBX                            ; 004209ed
    CALL FUN_0040cb00                   ; 004209ee
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cb00()
    ADD ESP,0x8                         ; 004209f3
    POP EBX                             ; 004209f6
    RET                                 ; 004209f7


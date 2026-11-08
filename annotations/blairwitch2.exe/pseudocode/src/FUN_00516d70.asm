; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00516d70(char *param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00516960
;   FUN_005171e0
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516d70
        ;   Label: FUN_00516d70
    PUSH ESI                            ; 00516d71
    MOV EBX,dword ptr [ESP + 0xc]       ; 00516d72
    MOV DL,0x2e                         ; 00516d76
    MOV ESI,EBX                         ; 00516d78
    MOV AL,byte ptr [ESI]               ; 00516d7a
        ;   Label: LAB_00516d7a
    CMP AL,DL                           ; 00516d7c
    JZ 0x00516d92                       ; 00516d7e
        ;   XREF to: 00516d92 (CONDITIONAL_JUMP)  ; LAB_00516d92
    CMP AL,0x0                          ; 00516d80
    JZ 0x00516d90                       ; 00516d82
        ;   XREF to: 00516d90 (CONDITIONAL_JUMP)  ; LAB_00516d90
    INC ESI                             ; 00516d84
    MOV AL,byte ptr [ESI]               ; 00516d85
    CMP AL,DL                           ; 00516d87
    JZ 0x00516d92                       ; 00516d89
        ;   XREF to: 00516d92 (CONDITIONAL_JUMP)  ; LAB_00516d92
    INC ESI                             ; 00516d8b
    CMP AL,0x0                          ; 00516d8c
    JNZ 0x00516d7a                      ; 00516d8e
        ;   XREF to: 00516d7a (CONDITIONAL_JUMP)  ; LAB_00516d7a
    SUB ESI,ESI                         ; 00516d90
        ;   Label: LAB_00516d90
    TEST ESI,ESI                        ; 00516d92
        ;   Label: LAB_00516d92
    JNZ 0x00516d99                      ; 00516d94
        ;   XREF to: 00516d99 (CONDITIONAL_JUMP)  ; LAB_00516d99
    POP ESI                             ; 00516d96
        ;   Label: LAB_00516d96
    POP EBX                             ; 00516d97
    RET                                 ; 00516d98
    PUSH 0x5e1c41                       ; 00516d99
        ;   Label: LAB_00516d99
    PUSH ESI                            ; 00516d9e
    CALL FUN_005b8130                   ; 00516d9f
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00516da4
    TEST EAX,EAX                        ; 00516da7
    JZ 0x00516dce                       ; 00516da9
        ;   XREF to: 00516dce (CONDITIONAL_JUMP)  ; LAB_00516dce
    PUSH 0x5e1c46                       ; 00516dab
    PUSH ESI                            ; 00516db0
    CALL FUN_005b8130                   ; 00516db1
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00516db6
    TEST EAX,EAX                        ; 00516db9
    JNZ 0x00516d96                      ; 00516dbb
        ;   XREF to: 00516d96 (CONDITIONAL_JUMP)  ; LAB_00516d96
    MOV ECX,dword ptr [ESP + 0x10]      ; 00516dbd
    PUSH ECX                            ; 00516dc1
    PUSH EBX                            ; 00516dc2
    CALL FUN_005171e0                   ; 00516dc3
        ;   XREF to: 005171e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005171e0()
    ADD ESP,0x8                         ; 00516dc8
    POP ESI                             ; 00516dcb
    POP EBX                             ; 00516dcc
    RET                                 ; 00516dcd
    MOV EDX,dword ptr [ESP + 0x10]      ; 00516dce
        ;   Label: LAB_00516dce
    PUSH EDX                            ; 00516dd2
    PUSH EBX                            ; 00516dd3
    CALL FUN_00516960                   ; 00516dd4
        ;   XREF to: 00516960 (UNCONDITIONAL_CALL)  ; undefined FUN_00516960()
    ADD ESP,0x8                         ; 00516dd9
    POP ESI                             ; 00516ddc
    POP EBX                             ; 00516ddd
    RET                                 ; 00516dde


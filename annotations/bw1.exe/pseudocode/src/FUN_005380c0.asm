; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005380c0(char *param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00537cb0
;   FUN_00538530
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005380c0
        ;   Label: FUN_005380c0
    PUSH ESI                            ; 005380c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005380c2
    MOV DL,0x2e                         ; 005380c6
    MOV ESI,EBX                         ; 005380c8
    MOV AL,byte ptr [ESI]               ; 005380ca
        ;   Label: LAB_005380ca
    CMP AL,DL                           ; 005380cc
    JZ 0x005380e2                       ; 005380ce
        ;   XREF to: 005380e2 (CONDITIONAL_JUMP)  ; LAB_005380e2
    CMP AL,0x0                          ; 005380d0
    JZ 0x005380e0                       ; 005380d2
        ;   XREF to: 005380e0 (CONDITIONAL_JUMP)  ; LAB_005380e0
    INC ESI                             ; 005380d4
    MOV AL,byte ptr [ESI]               ; 005380d5
    CMP AL,DL                           ; 005380d7
    JZ 0x005380e2                       ; 005380d9
        ;   XREF to: 005380e2 (CONDITIONAL_JUMP)  ; LAB_005380e2
    INC ESI                             ; 005380db
    CMP AL,0x0                          ; 005380dc
    JNZ 0x005380ca                      ; 005380de
        ;   XREF to: 005380ca (CONDITIONAL_JUMP)  ; LAB_005380ca
    SUB ESI,ESI                         ; 005380e0
        ;   Label: LAB_005380e0
    TEST ESI,ESI                        ; 005380e2
        ;   Label: LAB_005380e2
    JNZ 0x005380e9                      ; 005380e4
        ;   XREF to: 005380e9 (CONDITIONAL_JUMP)  ; LAB_005380e9
    POP ESI                             ; 005380e6
        ;   Label: LAB_005380e6
    POP EBX                             ; 005380e7
    RET                                 ; 005380e8
    PUSH 0x5ece9c                       ; 005380e9
        ;   Label: LAB_005380e9
    PUSH ESI                            ; 005380ee
    CALL FUN_005c04e0                   ; 005380ef
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 005380f4
    TEST EAX,EAX                        ; 005380f7
    JZ 0x0053811e                       ; 005380f9
        ;   XREF to: 0053811e (CONDITIONAL_JUMP)  ; LAB_0053811e
    PUSH 0x5ecea1                       ; 005380fb
    PUSH ESI                            ; 00538100
    CALL FUN_005c04e0                   ; 00538101
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00538106
    TEST EAX,EAX                        ; 00538109
    JNZ 0x005380e6                      ; 0053810b
        ;   XREF to: 005380e6 (CONDITIONAL_JUMP)  ; LAB_005380e6
    MOV ECX,dword ptr [ESP + 0x10]      ; 0053810d
    PUSH ECX                            ; 00538111
    PUSH EBX                            ; 00538112
    CALL FUN_00538530                   ; 00538113
        ;   XREF to: 00538530 (UNCONDITIONAL_CALL)  ; undefined FUN_00538530()
    ADD ESP,0x8                         ; 00538118
    POP ESI                             ; 0053811b
    POP EBX                             ; 0053811c
    RET                                 ; 0053811d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053811e
        ;   Label: LAB_0053811e
    PUSH EDX                            ; 00538122
    PUSH EBX                            ; 00538123
    CALL FUN_00537cb0                   ; 00538124
        ;   XREF to: 00537cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00537cb0()
    ADD ESP,0x8                         ; 00538129
    POP ESI                             ; 0053812c
    POP EBX                             ; 0053812d
    RET                                 ; 0053812e


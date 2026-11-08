; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b9c39(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_005b9bf7
;   FUN_005c0b85
;   FUN_005c0bba
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9c39
        ;   Label: FUN_005b9c39
    PUSH ESI                            ; 005b9c3a
    PUSH EDI                            ; 005b9c3b
    PUSH EBP                            ; 005b9c3c
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b9c3d
    MOV EAX,dword ptr [EBX]             ; 005b9c41
    MOV EAX,dword ptr [EAX + 0x4]       ; 005b9c43
    ADD EAX,EBX                         ; 005b9c46
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b9c48
    TEST EDX,EDX                        ; 005b9c4b
    JZ 0x005b9c82                       ; 005b9c4d
        ;   XREF to: 005b9c82 (CONDITIONAL_JUMP)  ; LAB_005b9c82
    MOV ECX,dword ptr [ESP + 0x20]      ; 005b9c4f
    PUSH ECX                            ; 005b9c53
    MOV ESI,dword ptr [ESP + 0x20]      ; 005b9c54
    PUSH ESI                            ; 005b9c58
    MOV EDI,dword ptr [ESP + 0x20]      ; 005b9c59
    PUSH EDI                            ; 005b9c5d
    PUSH EDX                            ; 005b9c5e
    CALL FUN_005c0bba                   ; 005b9c5f
        ;   XREF to: 005c0bba (UNCONDITIONAL_CALL)  ; undefined FUN_005c0bba()
    ADD ESP,0x10                        ; 005b9c64
    TEST EAX,EAX                        ; 005b9c67
    JNZ 0x005b9c87                      ; 005b9c69
        ;   XREF to: 005b9c87 (CONDITIONAL_JUMP)  ; LAB_005b9c87
    MOV EAX,dword ptr [EBX]             ; 005b9c6b
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b9c6d
    PUSH 0x2                            ; 005b9c70
    ADD EBX,EDX                         ; 005b9c72
    PUSH EBX                            ; 005b9c74
    CALL FUN_005c0b85                   ; 005b9c75
        ;   XREF to: 005c0b85 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b85()
        ;   Label: LAB_005b9c75
    ADD ESP,0x8                         ; 005b9c7a
        ;   Label: LAB_005b9c7a
    POP EBP                             ; 005b9c7d
    POP EDI                             ; 005b9c7e
    POP ESI                             ; 005b9c7f
    POP EBX                             ; 005b9c80
    RET                                 ; 005b9c81
    PUSH 0x2                            ; 005b9c82
        ;   Label: LAB_005b9c82
    PUSH EAX                            ; 005b9c84
    JMP 0x005b9c75                      ; 005b9c85
        ;   XREF to: 005b9c75 (UNCONDITIONAL_JUMP)  ; LAB_005b9c75
    MOV EAX,dword ptr [EBX]             ; 005b9c87
        ;   Label: LAB_005b9c87
    MOV EBP,dword ptr [EAX + 0x4]       ; 005b9c89
    PUSH 0x0                            ; 005b9c8c
    ADD EBX,EBP                         ; 005b9c8e
    PUSH EBX                            ; 005b9c90
    CALL FUN_005b9bf7                   ; 005b9c91
        ;   XREF to: 005b9bf7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9bf7()
    JMP 0x005b9c7a                      ; 005b9c96
        ;   XREF to: 005b9c7a (UNCONDITIONAL_JUMP)  ; LAB_005b9c7a


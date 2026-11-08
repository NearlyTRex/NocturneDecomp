; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a4e29(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_005a4de7
;   FUN_005abc85
;   FUN_005abcba
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4e29
        ;   Label: FUN_005a4e29
    PUSH ESI                            ; 005a4e2a
    PUSH EDI                            ; 005a4e2b
    PUSH EBP                            ; 005a4e2c
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a4e2d
    MOV EAX,dword ptr [EBX]             ; 005a4e31
    MOV EAX,dword ptr [EAX + 0x4]       ; 005a4e33
    ADD EAX,EBX                         ; 005a4e36
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a4e38
    TEST EDX,EDX                        ; 005a4e3b
    JZ 0x005a4e72                       ; 005a4e3d
        ;   XREF to: 005a4e72 (CONDITIONAL_JUMP)  ; LAB_005a4e72
    MOV ECX,dword ptr [ESP + 0x20]      ; 005a4e3f
    PUSH ECX                            ; 005a4e43
    MOV ESI,dword ptr [ESP + 0x20]      ; 005a4e44
    PUSH ESI                            ; 005a4e48
    MOV EDI,dword ptr [ESP + 0x20]      ; 005a4e49
    PUSH EDI                            ; 005a4e4d
    PUSH EDX                            ; 005a4e4e
    CALL FUN_005abcba                   ; 005a4e4f
        ;   XREF to: 005abcba (UNCONDITIONAL_CALL)  ; undefined FUN_005abcba()
    ADD ESP,0x10                        ; 005a4e54
    TEST EAX,EAX                        ; 005a4e57
    JNZ 0x005a4e77                      ; 005a4e59
        ;   XREF to: 005a4e77 (CONDITIONAL_JUMP)  ; LAB_005a4e77
    MOV EAX,dword ptr [EBX]             ; 005a4e5b
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a4e5d
    PUSH 0x2                            ; 005a4e60
    ADD EBX,EDX                         ; 005a4e62
    PUSH EBX                            ; 005a4e64
    CALL FUN_005abc85                   ; 005a4e65
        ;   XREF to: 005abc85 (UNCONDITIONAL_CALL)  ; undefined FUN_005abc85()
        ;   Label: LAB_005a4e65
    ADD ESP,0x8                         ; 005a4e6a
        ;   Label: LAB_005a4e6a
    POP EBP                             ; 005a4e6d
    POP EDI                             ; 005a4e6e
    POP ESI                             ; 005a4e6f
    POP EBX                             ; 005a4e70
    RET                                 ; 005a4e71
    PUSH 0x2                            ; 005a4e72
        ;   Label: LAB_005a4e72
    PUSH EAX                            ; 005a4e74
    JMP 0x005a4e65                      ; 005a4e75
        ;   XREF to: 005a4e65 (UNCONDITIONAL_JUMP)  ; LAB_005a4e65
    MOV EAX,dword ptr [EBX]             ; 005a4e77
        ;   Label: LAB_005a4e77
    MOV EBP,dword ptr [EAX + 0x4]       ; 005a4e79
    PUSH 0x0                            ; 005a4e7c
    ADD EBX,EBP                         ; 005a4e7e
    PUSH EBX                            ; 005a4e80
    CALL FUN_005a4de7                   ; 005a4e81
        ;   XREF to: 005a4de7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4de7()
    JMP 0x005a4e6a                      ; 005a4e86
        ;   XREF to: 005a4e6a (UNCONDITIONAL_JUMP)  ; LAB_005a4e6a


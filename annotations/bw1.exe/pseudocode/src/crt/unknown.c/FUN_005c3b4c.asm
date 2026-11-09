; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c3b4c(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c3c08 at 005c3ea5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3b4c
        ;   Label: crt_unknown.c_FUN_005c3b4c
    PUSH ESI                            ; 005c3b4d
    PUSH EDI                            ; 005c3b4e
    PUSH EBP                            ; 005c3b4f
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c3b50
    TEST byte ptr [EAX + 0x1e],0x8      ; 005c3b54
    JNZ 0x005c3b8a                      ; 005c3b58
        ;   XREF to: 005c3b8a (CONDITIONAL_JUMP)  ; LAB_005c3b8a
    CMP byte ptr [EAX + 0x16],0x30      ; 005c3b5a
    JNZ 0x005c3b8a                      ; 005c3b5e
        ;   XREF to: 005c3b8a (CONDITIONAL_JUMP)  ; LAB_005c3b8a
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c3b60
    MOV EBX,dword ptr [EAX + 0x20]      ; 005c3b63
    MOV ECX,dword ptr [EAX + 0x24]      ; 005c3b66
    SUB EDX,EBX                         ; 005c3b69
    MOV ESI,dword ptr [EAX + 0x28]      ; 005c3b6b
    SUB EDX,ECX                         ; 005c3b6e
    MOV EDI,dword ptr [EAX + 0x2c]      ; 005c3b70
    SUB EDX,ESI                         ; 005c3b73
    MOV EBP,dword ptr [EAX + 0x30]      ; 005c3b75
    SUB EDX,EDI                         ; 005c3b78
    MOV EBX,dword ptr [EAX + 0x34]      ; 005c3b7a
    SUB EDX,EBP                         ; 005c3b7d
    SUB EDX,EBX                         ; 005c3b7f
    TEST EDX,EDX                        ; 005c3b81
    JLE 0x005c3b8a                      ; 005c3b83
        ;   XREF to: 005c3b8a (CONDITIONAL_JUMP)  ; LAB_005c3b8a
    ADD ECX,EDX                         ; 005c3b85
    MOV dword ptr [EAX + 0x24],ECX      ; 005c3b87
    POP EBP                             ; 005c3b8a
        ;   Label: LAB_005c3b8a
    POP EDI                             ; 005c3b8b
    POP ESI                             ; 005c3b8c
    POP EBX                             ; 005c3b8d
    RET                                 ; 005c3b8e


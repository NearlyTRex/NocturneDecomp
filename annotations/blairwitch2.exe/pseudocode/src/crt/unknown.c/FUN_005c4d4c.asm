; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c4d4c(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c4dc0 at 005c4dc0
;   crt_unknown.c_FUN_005c4dcc at 005c4dcc
;
; Referenced Globals:
;   void* PTR_CreateFileA_005c8518 = 001c8c64
;   TerminatedCString s_conin_005f205c
;   TerminatedCString s_conout_005f2064
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;   undefined4 DAT_0061f75c
;   undefined4 DAT_0061f760
;
; Called Functions:
;   CreateFileA
;   crt_unknown.c_FUN_005bce04
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005c4d4c
        ;   Label: crt_unknown.c_FUN_005c4d4c
    CALL dword ptr [0x0061f2a8]         ; 005c4d4e | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    MOV EDX,dword ptr [0x0061f75c]      ; 005c4d54 | DAT_0061f75c
    ADD ESP,0x4                         ; 005c4d5a
    CMP EDX,-0x1                        ; 005c4d5d
    JNZ 0x005c4d85                      ; 005c4d60
        ;   XREF to: 005c4d85 (CONDITIONAL_JUMP)  ; LAB_005c4d85
    PUSH 0x0                            ; 005c4d62
    PUSH 0x80                           ; 005c4d64
    PUSH 0x3                            ; 005c4d69
    PUSH 0x0                            ; 005c4d6b
    PUSH 0x1                            ; 005c4d6d
    PUSH 0x80000000                     ; 005c4d6f
    PUSH 0x5f205c                       ; 005c4d74 | = "conin$"
    CALL dword ptr CS:[0x5c8518]        ; 005c4d79 | PTR_CreateFileA_005c8518
    MOV [0x0061f75c],EAX                ; 005c4d80 | DAT_0061f75c
    CMP dword ptr [0x0061f760],-0x1     ; 005c4d85 | DAT_0061f760
        ;   Label: LAB_005c4d85
    JNZ 0x005c4db1                      ; 005c4d8c
        ;   XREF to: 005c4db1 (CONDITIONAL_JUMP)  ; LAB_005c4db1
    PUSH 0x0                            ; 005c4d8e
    PUSH 0x80                           ; 005c4d90
    PUSH 0x3                            ; 005c4d95
    PUSH 0x0                            ; 005c4d97
    PUSH 0x2                            ; 005c4d99
    PUSH 0x40000000                     ; 005c4d9b
    PUSH 0x5f2064                       ; 005c4da0 | = "conout$"
    CALL dword ptr CS:[0x5c8518]        ; 005c4da5 | PTR_CreateFileA_005c8518
    MOV [0x0061f760],EAX                ; 005c4dac | DAT_0061f760
    PUSH 0x0                            ; 005c4db1
        ;   Label: LAB_005c4db1
    CALL dword ptr [0x0061f2ac]         ; 005c4db3 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005c4db9
    RET                                 ; 005c4dbc


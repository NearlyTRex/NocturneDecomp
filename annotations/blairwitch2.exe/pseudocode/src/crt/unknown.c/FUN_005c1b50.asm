; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c1b50(byte *param_1,byte *param_2,int param_3)
;
;
; XREF[1]:
;   crt_env.c_getenv_FUN_005bac90 at 005bacbf
;
; Called Functions:
;   crt_unknown.c_FUN_005c0e00
;   unkafter_morph.cpp_FUN_005c4260
;   unkafter_morph.cpp_FUN_005c46f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1b50
        ;   Label: crt_unknown.c_FUN_005c1b50
    PUSH ESI                            ; 005c1b51
    PUSH EDI                            ; 005c1b52
    PUSH EBP                            ; 005c1b53
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c1b54
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c1b58
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005c1b5c
    XOR EBP,EBP                         ; 005c1b60
    TEST EDI,EDI                        ; 005c1b62
    JBE 0x005c1bab                      ; 005c1b64
        ;   XREF to: 005c1bab (CONDITIONAL_JUMP)  ; LAB_005c1bab
    PUSH ESI                            ; 005c1b66
        ;   Label: LAB_005c1b66
    CALL unkafter_morph.cpp_FUN_005c4260 ; 005c1b67
        ;   XREF to: 005c4260 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c4260()
    ADD ESP,0x4                         ; 005c1b6c
    TEST EAX,EAX                        ; 005c1b6f
    JNZ 0x005c1bab                      ; 005c1b71
        ;   XREF to: 005c1bab (CONDITIONAL_JUMP)  ; LAB_005c1bab
    PUSH EBX                            ; 005c1b73
    CALL unkafter_morph.cpp_FUN_005c4260 ; 005c1b74
        ;   XREF to: 005c4260 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c4260()
    ADD ESP,0x4                         ; 005c1b79
    TEST EAX,EAX                        ; 005c1b7c
    JNZ 0x005c1bab                      ; 005c1b7e
        ;   XREF to: 005c1bab (CONDITIONAL_JUMP)  ; LAB_005c1bab
    PUSH EBX                            ; 005c1b80
    PUSH ESI                            ; 005c1b81
    CALL unkafter_morph.cpp_FUN_005c46f0 ; 005c1b82
        ;   XREF to: 005c46f0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c46f0()
    ADD ESP,0x8                         ; 005c1b87
    MOV EBP,EAX                         ; 005c1b8a
    TEST EAX,EAX                        ; 005c1b8c
    JNZ 0x005c1bdb                      ; 005c1b8e
        ;   XREF to: 005c1bdb (CONDITIONAL_JUMP)  ; LAB_005c1bdb
    PUSH ESI                            ; 005c1b90
    CALL crt_unknown.c_FUN_005c0e00     ; 005c1b91
        ;   XREF to: 005c0e00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e00()
    ADD ESP,0x4                         ; 005c1b96
    PUSH EBX                            ; 005c1b99
    DEC EDI                             ; 005c1b9a
    MOV ESI,EAX                         ; 005c1b9b
    CALL crt_unknown.c_FUN_005c0e00     ; 005c1b9d
        ;   XREF to: 005c0e00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e00()
    ADD ESP,0x4                         ; 005c1ba2
    MOV EBX,EAX                         ; 005c1ba5
    TEST EDI,EDI                        ; 005c1ba7
    JA 0x005c1b66                       ; 005c1ba9
        ;   XREF to: 005c1b66 (CONDITIONAL_JUMP)  ; LAB_005c1b66
    TEST EDI,EDI                        ; 005c1bab
        ;   Label: LAB_005c1bab
    JBE 0x005c1bd9                      ; 005c1bad
        ;   XREF to: 005c1bd9 (CONDITIONAL_JUMP)  ; LAB_005c1bd9
    PUSH ESI                            ; 005c1baf
    CALL unkafter_morph.cpp_FUN_005c4260 ; 005c1bb0
        ;   XREF to: 005c4260 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c4260()
    ADD ESP,0x4                         ; 005c1bb5
    TEST EAX,EAX                        ; 005c1bb8
    JNZ 0x005c1bc9                      ; 005c1bba
        ;   XREF to: 005c1bc9 (CONDITIONAL_JUMP)  ; LAB_005c1bc9
    PUSH EBX                            ; 005c1bbc
    CALL unkafter_morph.cpp_FUN_005c4260 ; 005c1bbd
        ;   XREF to: 005c4260 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c4260()
    ADD ESP,0x4                         ; 005c1bc2
    TEST EAX,EAX                        ; 005c1bc5
    JZ 0x005c1bd9                       ; 005c1bc7
        ;   XREF to: 005c1bd9 (CONDITIONAL_JUMP)  ; LAB_005c1bd9
    XOR EAX,EAX                         ; 005c1bc9
        ;   Label: LAB_005c1bc9
    MOVZX ESI,byte ptr [ESI]            ; 005c1bcb
    MOV AL,byte ptr [EBX]               ; 005c1bce
    SUB ESI,EAX                         ; 005c1bd0
    MOV EAX,ESI                         ; 005c1bd2
    POP EBP                             ; 005c1bd4
    POP EDI                             ; 005c1bd5
    POP ESI                             ; 005c1bd6
    POP EBX                             ; 005c1bd7
    RET                                 ; 005c1bd8
    MOV EAX,EBP                         ; 005c1bd9
        ;   Label: LAB_005c1bd9
    POP EBP                             ; 005c1bdb
        ;   Label: LAB_005c1bdb
    POP EDI                             ; 005c1bdc
    POP ESI                             ; 005c1bdd
    POP EBX                             ; 005c1bde
    RET                                 ; 005c1bdf


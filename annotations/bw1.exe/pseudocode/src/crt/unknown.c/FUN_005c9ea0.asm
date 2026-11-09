; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c9ea0(byte *param_1,byte *param_2,int param_3)
;
;
; XREF[1]:
;   crt_env.c_getenv_FUN_005c3050 at 005c307f
;
; Called Functions:
;   crt_unknown.c_FUN_005c90c0
;   unkafter_zombie.cpp_FUN_005cc560
;   unkafter_zombie.cpp_FUN_005cc9f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9ea0
        ;   Label: crt_unknown.c_FUN_005c9ea0
    PUSH ESI                            ; 005c9ea1
    PUSH EDI                            ; 005c9ea2
    PUSH EBP                            ; 005c9ea3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c9ea4
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c9ea8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005c9eac
    XOR EBP,EBP                         ; 005c9eb0
    TEST EDI,EDI                        ; 005c9eb2
    JBE 0x005c9efb                      ; 005c9eb4
        ;   XREF to: 005c9efb (CONDITIONAL_JUMP)  ; LAB_005c9efb
    PUSH ESI                            ; 005c9eb6
        ;   Label: LAB_005c9eb6
    CALL unkafter_zombie.cpp_FUN_005cc560 ; 005c9eb7
        ;   XREF to: 005cc560 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cc560()
    ADD ESP,0x4                         ; 005c9ebc
    TEST EAX,EAX                        ; 005c9ebf
    JNZ 0x005c9efb                      ; 005c9ec1
        ;   XREF to: 005c9efb (CONDITIONAL_JUMP)  ; LAB_005c9efb
    PUSH EBX                            ; 005c9ec3
    CALL unkafter_zombie.cpp_FUN_005cc560 ; 005c9ec4
        ;   XREF to: 005cc560 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cc560()
    ADD ESP,0x4                         ; 005c9ec9
    TEST EAX,EAX                        ; 005c9ecc
    JNZ 0x005c9efb                      ; 005c9ece
        ;   XREF to: 005c9efb (CONDITIONAL_JUMP)  ; LAB_005c9efb
    PUSH EBX                            ; 005c9ed0
    PUSH ESI                            ; 005c9ed1
    CALL unkafter_zombie.cpp_FUN_005cc9f0 ; 005c9ed2
        ;   XREF to: 005cc9f0 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cc9f0()
    ADD ESP,0x8                         ; 005c9ed7
    MOV EBP,EAX                         ; 005c9eda
    TEST EAX,EAX                        ; 005c9edc
    JNZ 0x005c9f2b                      ; 005c9ede
        ;   XREF to: 005c9f2b (CONDITIONAL_JUMP)  ; LAB_005c9f2b
    PUSH ESI                            ; 005c9ee0
    CALL crt_unknown.c_FUN_005c90c0     ; 005c9ee1
        ;   XREF to: 005c90c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c90c0()
    ADD ESP,0x4                         ; 005c9ee6
    PUSH EBX                            ; 005c9ee9
    DEC EDI                             ; 005c9eea
    MOV ESI,EAX                         ; 005c9eeb
    CALL crt_unknown.c_FUN_005c90c0     ; 005c9eed
        ;   XREF to: 005c90c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c90c0()
    ADD ESP,0x4                         ; 005c9ef2
    MOV EBX,EAX                         ; 005c9ef5
    TEST EDI,EDI                        ; 005c9ef7
    JA 0x005c9eb6                       ; 005c9ef9
        ;   XREF to: 005c9eb6 (CONDITIONAL_JUMP)  ; LAB_005c9eb6
    TEST EDI,EDI                        ; 005c9efb
        ;   Label: LAB_005c9efb
    JBE 0x005c9f29                      ; 005c9efd
        ;   XREF to: 005c9f29 (CONDITIONAL_JUMP)  ; LAB_005c9f29
    PUSH ESI                            ; 005c9eff
    CALL unkafter_zombie.cpp_FUN_005cc560 ; 005c9f00
        ;   XREF to: 005cc560 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cc560()
    ADD ESP,0x4                         ; 005c9f05
    TEST EAX,EAX                        ; 005c9f08
    JNZ 0x005c9f19                      ; 005c9f0a
        ;   XREF to: 005c9f19 (CONDITIONAL_JUMP)  ; LAB_005c9f19
    PUSH EBX                            ; 005c9f0c
    CALL unkafter_zombie.cpp_FUN_005cc560 ; 005c9f0d
        ;   XREF to: 005cc560 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cc560()
    ADD ESP,0x4                         ; 005c9f12
    TEST EAX,EAX                        ; 005c9f15
    JZ 0x005c9f29                       ; 005c9f17
        ;   XREF to: 005c9f29 (CONDITIONAL_JUMP)  ; LAB_005c9f29
    XOR EAX,EAX                         ; 005c9f19
        ;   Label: LAB_005c9f19
    MOVZX ESI,byte ptr [ESI]            ; 005c9f1b
    MOV AL,byte ptr [EBX]               ; 005c9f1e
    SUB ESI,EAX                         ; 005c9f20
    MOV EAX,ESI                         ; 005c9f22
    POP EBP                             ; 005c9f24
    POP EDI                             ; 005c9f25
    POP ESI                             ; 005c9f26
    POP EBX                             ; 005c9f27
    RET                                 ; 005c9f28
    MOV EAX,EBP                         ; 005c9f29
        ;   Label: LAB_005c9f29
    POP EBP                             ; 005c9f2b
        ;   Label: LAB_005c9f2b
    POP EDI                             ; 005c9f2c
    POP ESI                             ; 005c9f2d
    POP EBX                             ; 005c9f2e
    RET                                 ; 005c9f2f


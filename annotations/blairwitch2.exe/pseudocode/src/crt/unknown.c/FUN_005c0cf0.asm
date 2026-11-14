; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c0cf0(int param_1,uint param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b9e10 at 005b9e2e
;
; Called Functions:
;   crt_unknown.c_FUN_005c0e50
;   crt_unknown.c_FUN_005c4260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0cf0
        ;   Label: crt_unknown.c_FUN_005c0cf0
    PUSH ESI                            ; 005c0cf1
    PUSH EDI                            ; 005c0cf2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c0cf3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c0cf7
    XOR EDI,EDI                         ; 005c0cfb
    PUSH EBX                            ; 005c0cfd
        ;   Label: LAB_005c0cfd
    CALL crt_unknown.c_FUN_005c4260     ; 005c0cfe
        ;   XREF to: 005c4260 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4260()
    ADD ESP,0x4                         ; 005c0d03
    TEST EAX,EAX                        ; 005c0d06
    JNZ 0x005c0d22                      ; 005c0d08
        ;   XREF to: 005c0d22 (CONDITIONAL_JUMP)  ; LAB_005c0d22
    TEST ESI,ESI                        ; 005c0d0a
    JBE 0x005c0d22                      ; 005c0d0c
        ;   XREF to: 005c0d22 (CONDITIONAL_JUMP)  ; LAB_005c0d22
    PUSH EBX                            ; 005c0d0e
    CALL crt_unknown.c_FUN_005c0e50     ; 005c0d0f
        ;   XREF to: 005c0e50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e50()
    ADD ESP,0x4                         ; 005c0d14
    CMP ESI,EAX                         ; 005c0d17
    JC 0x005c0d22                       ; 005c0d19
        ;   XREF to: 005c0d22 (CONDITIONAL_JUMP)  ; LAB_005c0d22
    INC EDI                             ; 005c0d1b
    SUB ESI,EAX                         ; 005c0d1c
    ADD EBX,EAX                         ; 005c0d1e
    JMP 0x005c0cfd                      ; 005c0d20
        ;   XREF to: 005c0cfd (UNCONDITIONAL_JUMP)  ; LAB_005c0cfd
    MOV EAX,EDI                         ; 005c0d22
        ;   Label: LAB_005c0d22
    POP EDI                             ; 005c0d24
    POP ESI                             ; 005c0d25
    POP EBX                             ; 005c0d26
    RET                                 ; 005c0d27


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c8fb0(int param_1,uint param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c21f0 at 005c220e
;
; Called Functions:
;   crt_unknown.c_FUN_005c9110
;   crt_unknown.c_FUN_005cc560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8fb0
        ;   Label: crt_unknown.c_FUN_005c8fb0
    PUSH ESI                            ; 005c8fb1
    PUSH EDI                            ; 005c8fb2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c8fb3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c8fb7
    XOR EDI,EDI                         ; 005c8fbb
    PUSH EBX                            ; 005c8fbd
        ;   Label: LAB_005c8fbd
    CALL crt_unknown.c_FUN_005cc560     ; 005c8fbe
        ;   XREF to: 005cc560 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cc560()
    ADD ESP,0x4                         ; 005c8fc3
    TEST EAX,EAX                        ; 005c8fc6
    JNZ 0x005c8fe2                      ; 005c8fc8
        ;   XREF to: 005c8fe2 (CONDITIONAL_JUMP)  ; LAB_005c8fe2
    TEST ESI,ESI                        ; 005c8fca
    JBE 0x005c8fe2                      ; 005c8fcc
        ;   XREF to: 005c8fe2 (CONDITIONAL_JUMP)  ; LAB_005c8fe2
    PUSH EBX                            ; 005c8fce
    CALL crt_unknown.c_FUN_005c9110     ; 005c8fcf
        ;   XREF to: 005c9110 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9110()
    ADD ESP,0x4                         ; 005c8fd4
    CMP ESI,EAX                         ; 005c8fd7
    JC 0x005c8fe2                       ; 005c8fd9
        ;   XREF to: 005c8fe2 (CONDITIONAL_JUMP)  ; LAB_005c8fe2
    INC EDI                             ; 005c8fdb
    SUB ESI,EAX                         ; 005c8fdc
    ADD EBX,EAX                         ; 005c8fde
    JMP 0x005c8fbd                      ; 005c8fe0
        ;   XREF to: 005c8fbd (UNCONDITIONAL_JUMP)  ; LAB_005c8fbd
    MOV EAX,EDI                         ; 005c8fe2
        ;   Label: LAB_005c8fe2
    POP EDI                             ; 005c8fe4
    POP ESI                             ; 005c8fe5
    POP EBX                             ; 005c8fe6
    RET                                 ; 005c8fe7


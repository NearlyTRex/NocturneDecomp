; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c9950(uint param_1)
;
;
; XREF[4]:
;   crt_unknown.c_FUN_005c97c0 at 005c9878
;   crt_unknown.c_FUN_005c9988 at 005c99a9
;   crt_unknown.c_FUN_005c9ae4 at 005c9b44
;   crt_unknown.c_FUN_005cc6e0 at 005cc74b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9950
        ;   Label: crt_unknown.c_FUN_005c9950
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c9951
    TEST BL,0x3                         ; 005c9955
    JNZ 0x005c9984                      ; 005c9958
        ;   XREF to: 005c9984 (CONDITIONAL_JUMP)  ; LAB_005c9984
    MOV ECX,0x64                        ; 005c995a
    MOV EAX,EBX                         ; 005c995f
    XOR EDX,EDX                         ; 005c9961
    DIV ECX                             ; 005c9963
    TEST EDX,EDX                        ; 005c9965
    JZ 0x005c9970                       ; 005c9967
        ;   XREF to: 005c9970 (CONDITIONAL_JUMP)  ; LAB_005c9970
    MOV EAX,0x1                         ; 005c9969
    POP EBX                             ; 005c996e
    RET                                 ; 005c996f
    MOV ECX,0x190                       ; 005c9970
        ;   Label: LAB_005c9970
    MOV EAX,EBX                         ; 005c9975
    DIV ECX                             ; 005c9977
    TEST EDX,EDX                        ; 005c9979
    JNZ 0x005c9984                      ; 005c997b
        ;   XREF to: 005c9984 (CONDITIONAL_JUMP)  ; LAB_005c9984
    MOV EAX,0x1                         ; 005c997d
    POP EBX                             ; 005c9982
    RET                                 ; 005c9983
    XOR EAX,EAX                         ; 005c9984
        ;   Label: LAB_005c9984
    POP EBX                             ; 005c9986
    RET                                 ; 005c9987


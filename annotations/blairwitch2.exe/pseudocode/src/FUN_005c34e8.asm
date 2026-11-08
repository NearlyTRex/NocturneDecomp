; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; longlong FUN_005c34e8(void)
;
;
; XREF[1]:
;   FUN_005bdcac at 005bde73
;
; *****************************************************************************

section .text

    TEST EDX,EDX                        ; 005c34e8
        ;   Label: FUN_005c34e8
    JNZ 0x005c34f3                      ; 005c34ea
        ;   XREF to: 005c34f3 (CONDITIONAL_JUMP)  ; LAB_005c34f3
    TEST ECX,ECX                        ; 005c34ec
    JNZ 0x005c34f3                      ; 005c34ee
        ;   XREF to: 005c34f3 (CONDITIONAL_JUMP)  ; LAB_005c34f3
    MUL EBX                             ; 005c34f0
    RET                                 ; 005c34f2
    PUSH EAX                            ; 005c34f3
        ;   Label: LAB_005c34f3
    PUSH EDX                            ; 005c34f4
    MUL ECX                             ; 005c34f5
    MOV ECX,EAX                         ; 005c34f7
    POP EAX                             ; 005c34f9
    MUL EBX                             ; 005c34fa
    ADD ECX,EAX                         ; 005c34fc
    POP EAX                             ; 005c34fe
    MUL EBX                             ; 005c34ff
    ADD EDX,ECX                         ; 005c3501
    RET                                 ; 005c3503


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; longlong FUN_005cb7e8(void)
;
;
; XREF[1]:
;   FUN_005c5f7c at 005c6143
;
; *****************************************************************************

section .text

    TEST EDX,EDX                        ; 005cb7e8
        ;   Label: FUN_005cb7e8
    JNZ 0x005cb7f3                      ; 005cb7ea
        ;   XREF to: 005cb7f3 (CONDITIONAL_JUMP)  ; LAB_005cb7f3
    TEST ECX,ECX                        ; 005cb7ec
    JNZ 0x005cb7f3                      ; 005cb7ee
        ;   XREF to: 005cb7f3 (CONDITIONAL_JUMP)  ; LAB_005cb7f3
    MUL EBX                             ; 005cb7f0
    RET                                 ; 005cb7f2
    PUSH EAX                            ; 005cb7f3
        ;   Label: LAB_005cb7f3
    PUSH EDX                            ; 005cb7f4
    MUL ECX                             ; 005cb7f5
    MOV ECX,EAX                         ; 005cb7f7
    POP EAX                             ; 005cb7f9
    MUL EBX                             ; 005cb7fa
    ADD ECX,EAX                         ; 005cb7fc
    POP EAX                             ; 005cb7fe
    MUL EBX                             ; 005cb7ff
    ADD EDX,ECX                         ; 005cb801
    RET                                 ; 005cb803


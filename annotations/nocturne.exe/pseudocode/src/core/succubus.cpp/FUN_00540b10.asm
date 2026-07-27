; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_succubus_cpp_FUN_00540b10(void)
;
;
; Called Functions:
;   core_succubus.cpp_FUN_00540b40
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xedd0                         ; 00540b10
        ;   Label: core_succubus.cpp_FUN_00540b10
    CALL crt_unknown.c_FUN_0056497c     ; 00540b15
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 00540b1a
    TEST EAX,EAX                        ; 00540b1d
    JNZ 0x00540b22                      ; 00540b1f
        ;   XREF to: 00540b22 (CONDITIONAL_JUMP)  ; LAB_00540b22
    RET                                 ; 00540b21
    PUSH EAX                            ; 00540b22
        ;   Label: LAB_00540b22
    CALL core_succubus.cpp_FUN_00540b40 ; 00540b23
        ;   XREF to: 00540b40 (UNCONDITIONAL_CALL)  ; undefined core_succubus.cpp_FUN_00540b40()
    ADD ESP,0x4                         ; 00540b28
    RET                                 ; 00540b2b


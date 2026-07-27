; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dynamite_cpp_FUN_0046eba0(void)
;
;
; Called Functions:
;   core_dynamite.cpp_CDynamite_ctor_FUN_0046ebd0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x584                          ; 0046eba0
        ;   Label: core_dynamite.cpp_FUN_0046eba0
    CALL crt_unknown.c_FUN_0056497c     ; 0046eba5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0046ebaa
    TEST EAX,EAX                        ; 0046ebad
    JNZ 0x0046ebb2                      ; 0046ebaf
        ;   XREF to: 0046ebb2 (CONDITIONAL_JUMP)  ; LAB_0046ebb2
    RET                                 ; 0046ebb1
    PUSH EAX                            ; 0046ebb2
        ;   Label: LAB_0046ebb2
    CALL core_dynamite.cpp_CDynamite_ctor_FUN_0046ebd0 ; 0046ebb3
        ;   XREF to: 0046ebd0 (UNCONDITIONAL_CALL)  ; undefined core_dynamite.cpp_CDynamite_ctor_FUN_0046ebd0()
    ADD ESP,0x4                         ; 0046ebb8
    RET                                 ; 0046ebbb


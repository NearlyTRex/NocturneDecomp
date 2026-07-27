; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_pendulum_cpp_FUN_004f2c00(void)
;
;
; Called Functions:
;   core_pendulum.cpp_CPendulum_ctor_FUN_004f2c30
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x43c                          ; 004f2c00
        ;   Label: core_pendulum.cpp_FUN_004f2c00
    CALL crt_unknown.c_FUN_0056497c     ; 004f2c05
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004f2c0a
    TEST EAX,EAX                        ; 004f2c0d
    JNZ 0x004f2c12                      ; 004f2c0f
        ;   XREF to: 004f2c12 (CONDITIONAL_JUMP)  ; LAB_004f2c12
    RET                                 ; 004f2c11
    PUSH EAX                            ; 004f2c12
        ;   Label: LAB_004f2c12
    CALL core_pendulum.cpp_CPendulum_ctor_FUN_004f2c30 ; 004f2c13
        ;   XREF to: 004f2c30 (UNCONDITIONAL_CALL)  ; undefined core_pendulum.cpp_CPendulum_ctor_FUN_004f2c30()
    ADD ESP,0x4                         ; 004f2c18
    RET                                 ; 004f2c1b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shovel_cpp_factoryFuncShovel_FUN_0053fdf0(void)
;
;
; Called Functions:
;   core_shovel.cpp_CShovel_ctor_FUN_0053fe20
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x6d4                          ; 0053fdf0
        ;   Label: core_shovel.cpp_factoryFuncShovel_FUN_0053fdf0
    CALL crt_unknown.c_FUN_005b8be2     ; 0053fdf5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 0053fdfa
    TEST EAX,EAX                        ; 0053fdfd
    JNZ 0x0053fe02                      ; 0053fdff
        ;   XREF to: 0053fe02 (CONDITIONAL_JUMP)  ; LAB_0053fe02
    RET                                 ; 0053fe01
    PUSH EAX                            ; 0053fe02
        ;   Label: LAB_0053fe02
    CALL core_shovel.cpp_CShovel_ctor_FUN_0053fe20 ; 0053fe03
        ;   XREF to: 0053fe20 (UNCONDITIONAL_CALL)  ; CShovel * core_shovel.cpp_CShovel_ctor_FUN_0053fe20(CShovel * this_ptr)
    ADD ESP,0x4                         ; 0053fe08
    RET                                 ; 0053fe0b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flame_cpp_factoryFuncFlame_FUN_0049f150(void)
;
;
; Called Functions:
;   core_flame.cpp_CFlame_ctor_FUN_0049f180
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x400                          ; 0049f150
        ;   Label: core_flame.cpp_factoryFuncFlame_FUN_0049f150
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 0049f155
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0049f15a
    TEST EAX,EAX                        ; 0049f15d
    JNZ 0x0049f162                      ; 0049f15f
        ;   XREF to: 0049f162 (CONDITIONAL_JUMP)  ; LAB_0049f162
    RET                                 ; 0049f161
    PUSH EAX                            ; 0049f162
        ;   Label: LAB_0049f162
    CALL core_flame.cpp_CFlame_ctor_FUN_0049f180 ; 0049f163
        ;   XREF to: 0049f180 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_0049f180(CFlame * this_ptr)
    ADD ESP,0x4                         ; 0049f168
    RET                                 ; 0049f16b


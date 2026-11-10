; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shovel_cpp_factoryFuncShovel_FUN_005623e0(void)
;
;
; Called Functions:
;   core_shovel.cpp_CShovel_ctor_FUN_00562410
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x578                          ; 005623e0
        ;   Label: core_shovel.cpp_factoryFuncShovel_FUN_005623e0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 005623e5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 005623ea
    TEST EAX,EAX                        ; 005623ed
    JNZ 0x005623f2                      ; 005623ef
        ;   XREF to: 005623f2 (CONDITIONAL_JUMP)  ; LAB_005623f2
    RET                                 ; 005623f1
    PUSH EAX                            ; 005623f2
        ;   Label: LAB_005623f2
    CALL core_shovel.cpp_CShovel_ctor_FUN_00562410 ; 005623f3
        ;   XREF to: 00562410 (UNCONDITIONAL_CALL)  ; CShovel * core_shovel.cpp_CShovel_ctor_FUN_00562410(CShovel * this_ptr)
    ADD ESP,0x4                         ; 005623f8
    RET                                 ; 005623fb


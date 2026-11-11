; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_goggles_cpp_factoryFuncGoggles_FUN_0059c030(void)
;
;
; Called Functions:
;   core_goggles.cpp_CGoggles_ctor_FUN_0059c060
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x434                          ; 0059c030
        ;   Label: core_goggles.cpp_factoryFuncGoggles_FUN_0059c030
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 0059c035
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0059c03a
    TEST EAX,EAX                        ; 0059c03d
    JNZ 0x0059c042                      ; 0059c03f
        ;   XREF to: 0059c042 (CONDITIONAL_JUMP)  ; LAB_0059c042
    RET                                 ; 0059c041
    PUSH EAX                            ; 0059c042
        ;   Label: LAB_0059c042
    CALL core_goggles.cpp_CGoggles_ctor_FUN_0059c060 ; 0059c043
        ;   XREF to: 0059c060 (UNCONDITIONAL_CALL)  ; CGoggles * core_goggles.cpp_CGoggles_ctor_FUN_0059c060(CGoggles * this_ptr)
    ADD ESP,0x4                         ; 0059c048
    RET                                 ; 0059c04b


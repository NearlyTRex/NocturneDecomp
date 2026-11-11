; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_unionzom_cpp_factoryFuncUnionZombie_FUN_005a3d00(void)
;
;
; Called Functions:
;   core_unionzom.cpp_CUnionZombie_ctor_FUN_005a3d30
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x1185c                        ; 005a3d00
        ;   Label: core_unionzom.cpp_factoryFuncUnionZombie_FUN_005a3d00
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005a3d05
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005a3d0a
    TEST EAX,EAX                        ; 005a3d0d
    JNZ 0x005a3d12                      ; 005a3d0f
        ;   XREF to: 005a3d12 (CONDITIONAL_JUMP)  ; LAB_005a3d12
    RET                                 ; 005a3d11
    PUSH EAX                            ; 005a3d12
        ;   Label: LAB_005a3d12
    CALL core_unionzom.cpp_CUnionZombie_ctor_FUN_005a3d30 ; 005a3d13
        ;   XREF to: 005a3d30 (UNCONDITIONAL_CALL)  ; CUnionZombie * core_unionzom.cpp_CUnionZombie_ctor_FUN_005a3d30(CUnionZombie * this_ptr)
    ADD ESP,0x4                         ; 005a3d18
    RET                                 ; 005a3d1b


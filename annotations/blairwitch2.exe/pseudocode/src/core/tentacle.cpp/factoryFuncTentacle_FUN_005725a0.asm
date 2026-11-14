; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTentacle * __cdecl core_tentacle_cpp_factoryFuncTentacle_FUN_005725a0(void)
;
;
; Called Functions:
;   core_tentacle.cpp_CTentacle_ctor_FUN_005725d0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10b68                        ; 005725a0
        ;   Label: core_tentacle.cpp_factoryFuncTentacle_FUN_005725a0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005725a5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005725aa
    TEST EAX,EAX                        ; 005725ad
    JNZ 0x005725b2                      ; 005725af
        ;   XREF to: 005725b2 (CONDITIONAL_JUMP)  ; LAB_005725b2
    RET                                 ; 005725b1
    PUSH EAX                            ; 005725b2
        ;   Label: LAB_005725b2
    CALL core_tentacle.cpp_CTentacle_ctor_FUN_005725d0 ; 005725b3
        ;   XREF to: 005725d0 (UNCONDITIONAL_CALL)  ; CTentacle * core_tentacle.cpp_CTentacle_ctor_FUN_005725d0(CTentacle * this_ptr)
    ADD ESP,0x4                         ; 005725b8
    RET                                 ; 005725bb


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dest_cpp_factoryFuncActorDestination_FUN_00447060(void)
;
;
; Called Functions:
;   core_dest.cpp_CActorDestination_ctor_FUN_00447090
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x350                          ; 00447060
        ;   Label: core_dest.cpp_factoryFuncActorDestination_FUN_00447060
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 00447065
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0044706a
    TEST EAX,EAX                        ; 0044706d
    JNZ 0x00447072                      ; 0044706f
        ;   XREF to: 00447072 (CONDITIONAL_JUMP)  ; LAB_00447072
    RET                                 ; 00447071
    PUSH EAX                            ; 00447072
        ;   Label: LAB_00447072
    CALL core_dest.cpp_CActorDestination_ctor_FUN_00447090 ; 00447073
        ;   XREF to: 00447090 (UNCONDITIONAL_CALL)  ; CActorDestination * core_dest.cpp_CActorDestination_ctor_FUN_00447090(CActorDestination * this_ptr)
    ADD ESP,0x4                         ; 00447078
    RET                                 ; 0044707b


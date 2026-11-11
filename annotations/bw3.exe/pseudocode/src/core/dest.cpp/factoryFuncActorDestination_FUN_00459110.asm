; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dest_cpp_factoryFuncActorDestination_FUN_00459110(void)
;
;
; Called Functions:
;   core_dest.cpp_CActorDestination_ctor_FUN_00459140
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x1f4                          ; 00459110
        ;   Label: core_dest.cpp_factoryFuncActorDestination_FUN_00459110
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00459115
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0045911a
    TEST EAX,EAX                        ; 0045911d
    JNZ 0x00459122                      ; 0045911f
        ;   XREF to: 00459122 (CONDITIONAL_JUMP)  ; LAB_00459122
    RET                                 ; 00459121
    PUSH EAX                            ; 00459122
        ;   Label: LAB_00459122
    CALL core_dest.cpp_CActorDestination_ctor_FUN_00459140 ; 00459123
        ;   XREF to: 00459140 (UNCONDITIONAL_CALL)  ; CActorDestination * core_dest.cpp_CActorDestination_ctor_FUN_00459140(CActorDestination * this_ptr)
    ADD ESP,0x4                         ; 00459128
    RET                                 ; 0045912b


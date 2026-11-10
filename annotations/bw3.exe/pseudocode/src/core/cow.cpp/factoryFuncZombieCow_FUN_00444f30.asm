; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cow_cpp_factoryFuncZombieCow_FUN_00444f30(void)
;
;
; Called Functions:
;   core_cow.cpp_CZombieCow_ctor_FUN_00444f60
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd088                         ; 00444f30
        ;   Label: core_cow.cpp_factoryFuncZombieCow_FUN_00444f30
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 00444f35
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00444f3a
    TEST EAX,EAX                        ; 00444f3d
    JNZ 0x00444f42                      ; 00444f3f
        ;   XREF to: 00444f42 (CONDITIONAL_JUMP)  ; LAB_00444f42
    RET                                 ; 00444f41
    PUSH EAX                            ; 00444f42
        ;   Label: LAB_00444f42
    CALL core_cow.cpp_CZombieCow_ctor_FUN_00444f60 ; 00444f43
        ;   XREF to: 00444f60 (UNCONDITIONAL_CALL)  ; CZombieCow * core_cow.cpp_CZombieCow_ctor_FUN_00444f60(CZombieCow * this_ptr)
    ADD ESP,0x4                         ; 00444f48
    RET                                 ; 00444f4b


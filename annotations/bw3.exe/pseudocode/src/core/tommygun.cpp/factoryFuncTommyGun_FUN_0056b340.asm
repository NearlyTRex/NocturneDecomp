; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tommygun_cpp_factoryFuncTommyGun_FUN_0056b340(void)
;
;
; Called Functions:
;   core_tommygun.cpp_CTommyGun_ctor_FUN_0056b370
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x5a0                          ; 0056b340
        ;   Label: core_tommygun.cpp_factoryFuncTommyGun_FUN_0056b340
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 0056b345
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0056b34a
    TEST EAX,EAX                        ; 0056b34d
    JNZ 0x0056b352                      ; 0056b34f
        ;   XREF to: 0056b352 (CONDITIONAL_JUMP)  ; LAB_0056b352
    RET                                 ; 0056b351
    PUSH EAX                            ; 0056b352
        ;   Label: LAB_0056b352
    CALL core_tommygun.cpp_CTommyGun_ctor_FUN_0056b370 ; 0056b353
        ;   XREF to: 0056b370 (UNCONDITIONAL_CALL)  ; CTommyGun * core_tommygun.cpp_CTommyGun_ctor_FUN_0056b370(CTommyGun * this_ptr)
    ADD ESP,0x4                         ; 0056b358
    RET                                 ; 0056b35b


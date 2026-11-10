; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_succubus_cpp_factoryFuncSuccubus_FUN_0056f290(void)
;
;
; Called Functions:
;   core_succubus.cpp_CSuccubus_ctor_FUN_0056f2c0
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x13ba4                        ; 0056f290
        ;   Label: core_succubus.cpp_factoryFuncSuccubus_FUN_0056f290
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 0056f295
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0056f29a
    TEST EAX,EAX                        ; 0056f29d
    JNZ 0x0056f2a2                      ; 0056f29f
        ;   XREF to: 0056f2a2 (CONDITIONAL_JUMP)  ; LAB_0056f2a2
    RET                                 ; 0056f2a1
    PUSH EAX                            ; 0056f2a2
        ;   Label: LAB_0056f2a2
    CALL core_succubus.cpp_CSuccubus_ctor_FUN_0056f2c0 ; 0056f2a3
        ;   XREF to: 0056f2c0 (UNCONDITIONAL_CALL)  ; CSuccubus * core_succubus.cpp_CSuccubus_ctor_FUN_0056f2c0(CSuccubus * this_ptr)
    ADD ESP,0x4                         ; 0056f2a8
    RET                                 ; 0056f2ab


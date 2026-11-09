; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spirmine_cpp_factoryFuncSpiritMine_FUN_005ad390(void)
;
;
; Called Functions:
;   core_spirmine.cpp_CSpiritMine_ctor_FUN_005ad3c0
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x838                          ; 005ad390
        ;   Label: core_spirmine.cpp_factoryFuncSpiritMine_FUN_005ad390
    CALL crt_unknown.c_FUN_005b8be2     ; 005ad395
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 005ad39a
    TEST EAX,EAX                        ; 005ad39d
    JNZ 0x005ad3a2                      ; 005ad39f
        ;   XREF to: 005ad3a2 (CONDITIONAL_JUMP)  ; LAB_005ad3a2
    RET                                 ; 005ad3a1
    PUSH EAX                            ; 005ad3a2
        ;   Label: LAB_005ad3a2
    CALL core_spirmine.cpp_CSpiritMine_ctor_FUN_005ad3c0 ; 005ad3a3
        ;   XREF to: 005ad3c0 (UNCONDITIONAL_CALL)  ; CSpiritMine * core_spirmine.cpp_CSpiritMine_ctor_FUN_005ad3c0(CSpiritMine * this_ptr)
    ADD ESP,0x4                         ; 005ad3a8
    RET                                 ; 005ad3ab


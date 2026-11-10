; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trap_cpp_factoryFuncTrap_FUN_00576420(void)
;
;
; Called Functions:
;   core_trap.cpp_CTrap_ctor_FUN_00576450
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x438                          ; 00576420
        ;   Label: core_trap.cpp_factoryFuncTrap_FUN_00576420
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 00576425
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0057642a
    TEST EAX,EAX                        ; 0057642d
    JNZ 0x00576432                      ; 0057642f
        ;   XREF to: 00576432 (CONDITIONAL_JUMP)  ; LAB_00576432
    RET                                 ; 00576431
    PUSH EAX                            ; 00576432
        ;   Label: LAB_00576432
    CALL core_trap.cpp_CTrap_ctor_FUN_00576450 ; 00576433
        ;   XREF to: 00576450 (UNCONDITIONAL_CALL)  ; CTrap * core_trap.cpp_CTrap_ctor_FUN_00576450(CTrap * this_ptr)
    ADD ESP,0x4                         ; 00576438
    RET                                 ; 0057643b


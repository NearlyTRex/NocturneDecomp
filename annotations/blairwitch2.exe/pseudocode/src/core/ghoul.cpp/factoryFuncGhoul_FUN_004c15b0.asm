; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ghoul_cpp_factoryFuncGhoul_FUN_004c15b0(void)
;
;
; Called Functions:
;   core_ghoul.cpp_CGhoul_ctor_FUN_004c15e0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10b74                        ; 004c15b0
        ;   Label: core_ghoul.cpp_factoryFuncGhoul_FUN_004c15b0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004c15b5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004c15ba
    TEST EAX,EAX                        ; 004c15bd
    JNZ 0x004c15c2                      ; 004c15bf
        ;   XREF to: 004c15c2 (CONDITIONAL_JUMP)  ; LAB_004c15c2
    RET                                 ; 004c15c1
    PUSH EAX                            ; 004c15c2
        ;   Label: LAB_004c15c2
    CALL core_ghoul.cpp_CGhoul_ctor_FUN_004c15e0 ; 004c15c3
        ;   XREF to: 004c15e0 (UNCONDITIONAL_CALL)  ; CGhoul * core_ghoul.cpp_CGhoul_ctor_FUN_004c15e0(CGhoul * this_ptr)
    ADD ESP,0x4                         ; 004c15c8
    RET                                 ; 004c15cb


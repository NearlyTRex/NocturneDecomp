; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ghoul_cpp_factoryFuncGhoul_FUN_004c68b0(void)
;
;
; Called Functions:
;   core_ghoul.cpp_CGhoul_ctor_FUN_004c68e0
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd0d0                         ; 004c68b0
        ;   Label: core_ghoul.cpp_factoryFuncGhoul_FUN_004c68b0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 004c68b5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004c68ba
    TEST EAX,EAX                        ; 004c68bd
    JNZ 0x004c68c2                      ; 004c68bf
        ;   XREF to: 004c68c2 (CONDITIONAL_JUMP)  ; LAB_004c68c2
    RET                                 ; 004c68c1
    PUSH EAX                            ; 004c68c2
        ;   Label: LAB_004c68c2
    CALL core_ghoul.cpp_CGhoul_ctor_FUN_004c68e0 ; 004c68c3
        ;   XREF to: 004c68e0 (UNCONDITIONAL_CALL)  ; CGhoul * core_ghoul.cpp_CGhoul_ctor_FUN_004c68e0(CGhoul * this_ptr)
    ADD ESP,0x4                         ; 004c68c8
    RET                                 ; 004c68cb


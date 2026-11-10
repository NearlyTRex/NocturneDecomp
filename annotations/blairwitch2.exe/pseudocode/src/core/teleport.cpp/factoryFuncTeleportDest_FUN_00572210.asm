; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_teleport_cpp_factoryFuncTeleportDest_FUN_00572210(void)
;
;
; Called Functions:
;   core_teleport.cpp_CTeleportDest_ctor_FUN_00572240
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x2b4                          ; 00572210
        ;   Label: core_teleport.cpp_factoryFuncTeleportDest_FUN_00572210
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 00572215
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0057221a
    TEST EAX,EAX                        ; 0057221d
    JNZ 0x00572222                      ; 0057221f
        ;   XREF to: 00572222 (CONDITIONAL_JUMP)  ; LAB_00572222
    RET                                 ; 00572221
    PUSH EAX                            ; 00572222
        ;   Label: LAB_00572222
    CALL core_teleport.cpp_CTeleportDest_ctor_FUN_00572240 ; 00572223
        ;   XREF to: 00572240 (UNCONDITIONAL_CALL)  ; CTeleportDest * core_teleport.cpp_CTeleportDest_ctor_FUN_00572240(CTeleportDest * this_ptr)
    ADD ESP,0x4                         ; 00572228
    RET                                 ; 0057222b


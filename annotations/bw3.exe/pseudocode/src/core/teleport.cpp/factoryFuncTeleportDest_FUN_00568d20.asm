; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_teleport_cpp_factoryFuncTeleportDest_FUN_00568d20(void)
;
;
; Called Functions:
;   core_teleport.cpp_CTeleportDest_ctor_FUN_00568d50
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x158                          ; 00568d20
        ;   Label: core_teleport.cpp_factoryFuncTeleportDest_FUN_00568d20
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 00568d25
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00568d2a
    TEST EAX,EAX                        ; 00568d2d
    JNZ 0x00568d32                      ; 00568d2f
        ;   XREF to: 00568d32 (CONDITIONAL_JUMP)  ; LAB_00568d32
    RET                                 ; 00568d31
    PUSH EAX                            ; 00568d32
        ;   Label: LAB_00568d32
    CALL core_teleport.cpp_CTeleportDest_ctor_FUN_00568d50 ; 00568d33
        ;   XREF to: 00568d50 (UNCONDITIONAL_CALL)  ; CTeleportDest * core_teleport.cpp_CTeleportDest_ctor_FUN_00568d50(CTeleportDest * this_ptr)
    ADD ESP,0x4                         ; 00568d38
    RET                                 ; 00568d3b


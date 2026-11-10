; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_passngr_cpp_factoryFuncPassenger_FUN_0050a420(void)
;
;
; Called Functions:
;   core_passngr.cpp_CPassenger_ctor_FUN_0050a450
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x21408                        ; 0050a420
        ;   Label: core_passngr.cpp_factoryFuncPassenger_FUN_0050a420
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 0050a425
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0050a42a
    TEST EAX,EAX                        ; 0050a42d
    JNZ 0x0050a432                      ; 0050a42f
        ;   XREF to: 0050a432 (CONDITIONAL_JUMP)  ; LAB_0050a432
    RET                                 ; 0050a431
    PUSH EAX                            ; 0050a432
        ;   Label: LAB_0050a432
    CALL core_passngr.cpp_CPassenger_ctor_FUN_0050a450 ; 0050a433
        ;   XREF to: 0050a450 (UNCONDITIONAL_CALL)  ; CPassenger * core_passngr.cpp_CPassenger_ctor_FUN_0050a450(CPassenger * this_ptr)
    ADD ESP,0x4                         ; 0050a438
    RET                                 ; 0050a43b


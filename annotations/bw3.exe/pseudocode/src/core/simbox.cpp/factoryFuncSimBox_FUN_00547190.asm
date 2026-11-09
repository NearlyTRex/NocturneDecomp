; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_simbox_cpp_factoryFuncSimBox_FUN_00547190(void)
;
;
; Called Functions:
;   core_simbox.cpp_CSimBox_ctor_FUN_005471c0
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x5cc                          ; 00547190
        ;   Label: core_simbox.cpp_factoryFuncSimBox_FUN_00547190
    CALL crt_unknown.c_FUN_005a3cb2     ; 00547195
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0054719a
    TEST EAX,EAX                        ; 0054719d
    JNZ 0x005471a2                      ; 0054719f
        ;   XREF to: 005471a2 (CONDITIONAL_JUMP)  ; LAB_005471a2
    RET                                 ; 005471a1
    PUSH EAX                            ; 005471a2
        ;   Label: LAB_005471a2
    CALL core_simbox.cpp_CSimBox_ctor_FUN_005471c0 ; 005471a3
        ;   XREF to: 005471c0 (UNCONDITIONAL_CALL)  ; CSimBox * core_simbox.cpp_CSimBox_ctor_FUN_005471c0(CSimBox * this_ptr)
    ADD ESP,0x4                         ; 005471a8
    RET                                 ; 005471ab


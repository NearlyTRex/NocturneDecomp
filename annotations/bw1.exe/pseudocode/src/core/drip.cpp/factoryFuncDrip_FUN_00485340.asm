; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_drip_cpp_factoryFuncDrip_FUN_00485340(void)
;
;
; Called Functions:
;   core_drip.cpp_CDrip_ctor_FUN_00485370
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x33c                          ; 00485340
        ;   Label: core_drip.cpp_factoryFuncDrip_FUN_00485340
    CALL crt_unknown.c_FUN_005c0f32     ; 00485345
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 0048534a
    TEST EAX,EAX                        ; 0048534d
    JNZ 0x00485352                      ; 0048534f
        ;   XREF to: 00485352 (CONDITIONAL_JUMP)  ; LAB_00485352
    RET                                 ; 00485351
    PUSH EAX                            ; 00485352
        ;   Label: LAB_00485352
    CALL core_drip.cpp_CDrip_ctor_FUN_00485370 ; 00485353
        ;   XREF to: 00485370 (UNCONDITIONAL_CALL)  ; CDrip * core_drip.cpp_CDrip_ctor_FUN_00485370(CDrip * this_ptr)
    ADD ESP,0x4                         ; 00485358
    RET                                 ; 0048535b


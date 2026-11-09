; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tommygun_cpp_factoryFuncTommyGun_FUN_00598350(void)
;
;
; Called Functions:
;   core_tommygun.cpp_CTommyGun_ctor_FUN_00598380
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x584                          ; 00598350
        ;   Label: core_tommygun.cpp_factoryFuncTommyGun_FUN_00598350
    CALL crt_unknown.c_FUN_005c0f32     ; 00598355
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 0059835a
    TEST EAX,EAX                        ; 0059835d
    JNZ 0x00598362                      ; 0059835f
        ;   XREF to: 00598362 (CONDITIONAL_JUMP)  ; LAB_00598362
    RET                                 ; 00598361
    PUSH EAX                            ; 00598362
        ;   Label: LAB_00598362
    CALL core_tommygun.cpp_CTommyGun_ctor_FUN_00598380 ; 00598363
        ;   XREF to: 00598380 (UNCONDITIONAL_CALL)  ; CTommyGun * core_tommygun.cpp_CTommyGun_ctor_FUN_00598380(CTommyGun * this_ptr)
    ADD ESP,0x4                         ; 00598368
    RET                                 ; 0059836b


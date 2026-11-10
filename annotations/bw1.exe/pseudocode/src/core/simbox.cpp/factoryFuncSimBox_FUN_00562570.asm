; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_simbox_cpp_factoryFuncSimBox_FUN_00562570(void)
;
;
; Called Functions:
;   core_simbox.cpp_CSimBox_ctor_FUN_005625a0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x5cc                          ; 00562570
        ;   Label: core_simbox.cpp_factoryFuncSimBox_FUN_00562570
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 00562575
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0056257a
    TEST EAX,EAX                        ; 0056257d
    JNZ 0x00562582                      ; 0056257f
        ;   XREF to: 00562582 (CONDITIONAL_JUMP)  ; LAB_00562582
    RET                                 ; 00562581
    PUSH EAX                            ; 00562582
        ;   Label: LAB_00562582
    CALL core_simbox.cpp_CSimBox_ctor_FUN_005625a0 ; 00562583
        ;   XREF to: 005625a0 (UNCONDITIONAL_CALL)  ; CSimBox * core_simbox.cpp_CSimBox_ctor_FUN_005625a0(CSimBox * this_ptr)
    ADD ESP,0x4                         ; 00562588
    RET                                 ; 0056258b


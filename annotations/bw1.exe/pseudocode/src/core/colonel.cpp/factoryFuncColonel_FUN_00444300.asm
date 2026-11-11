; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_colonel_cpp_factoryFuncColonel_FUN_00444300(void)
;
;
; Called Functions:
;   core_colonel.cpp_CColonel_ctor_FUN_00444330
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x1ffc4                        ; 00444300
        ;   Label: core_colonel.cpp_factoryFuncColonel_FUN_00444300
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00444305
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0044430a
    TEST EAX,EAX                        ; 0044430d
    JNZ 0x00444312                      ; 0044430f
        ;   XREF to: 00444312 (CONDITIONAL_JUMP)  ; LAB_00444312
    RET                                 ; 00444311
    PUSH EAX                            ; 00444312
        ;   Label: LAB_00444312
    CALL core_colonel.cpp_CColonel_ctor_FUN_00444330 ; 00444313
        ;   XREF to: 00444330 (UNCONDITIONAL_CALL)  ; CColonel * core_colonel.cpp_CColonel_ctor_FUN_00444330(CColonel * this_ptr)
    ADD ESP,0x4                         ; 00444318
    RET                                 ; 0044431b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_construc_cpp_FUN_00444520(void)
;
;
; Called Functions:
;   core_construc.cpp_CConstructBone_ctor_FUN_00444550
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd860                         ; 00444520
        ;   Label: core_construc.cpp_FUN_00444520
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00444525
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0044452a
    TEST EAX,EAX                        ; 0044452d
    JNZ 0x00444532                      ; 0044452f
        ;   XREF to: 00444532 (CONDITIONAL_JUMP)  ; LAB_00444532
    RET                                 ; 00444531
    PUSH EAX                            ; 00444532
        ;   Label: LAB_00444532
    CALL core_construc.cpp_CConstructBone_ctor_FUN_00444550 ; 00444533
        ;   XREF to: 00444550 (UNCONDITIONAL_CALL)  ; CConstructBone * core_construc.cpp_CConstructBone_ctor_FUN_00444550(CConstructBone * this_ptr)
    ADD ESP,0x4                         ; 00444538
    RET                                 ; 0044453b


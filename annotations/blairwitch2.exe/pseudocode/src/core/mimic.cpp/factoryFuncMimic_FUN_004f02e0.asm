; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mimic_cpp_factoryFuncMimic_FUN_004f02e0(void)
;
;
; Called Functions:
;   core_mimic.cpp_CMimic_ctor_FUN_004f0310
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x4c354                        ; 004f02e0
        ;   Label: core_mimic.cpp_factoryFuncMimic_FUN_004f02e0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004f02e5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004f02ea
    TEST EAX,EAX                        ; 004f02ed
    JNZ 0x004f02f2                      ; 004f02ef
        ;   XREF to: 004f02f2 (CONDITIONAL_JUMP)  ; LAB_004f02f2
    RET                                 ; 004f02f1
    PUSH EAX                            ; 004f02f2
        ;   Label: LAB_004f02f2
    CALL core_mimic.cpp_CMimic_ctor_FUN_004f0310 ; 004f02f3
        ;   XREF to: 004f0310 (UNCONDITIONAL_CALL)  ; CMimic * core_mimic.cpp_CMimic_ctor_FUN_004f0310(CMimic * this_ptr)
    ADD ESP,0x4                         ; 004f02f8
    RET                                 ; 004f02fb


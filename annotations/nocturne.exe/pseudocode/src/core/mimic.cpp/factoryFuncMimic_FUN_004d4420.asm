; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMimic * __cdecl core_mimic_cpp_factoryFuncMimic_FUN_004d4420(void)
;
;
; Called Functions:
;   core_mimic.cpp_CMimic_ctor_FUN_004d4450
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x47580                        ; 004d4420
        ;   Label: core_mimic.cpp_factoryFuncMimic_FUN_004d4420
    CALL crt_memory.c_operator_new_FUN_0056497c ; 004d4425
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 004d442a
    TEST EAX,EAX                        ; 004d442d
    JNZ 0x004d4432                      ; 004d442f
        ;   XREF to: 004d4432 (CONDITIONAL_JUMP)  ; LAB_004d4432
    RET                                 ; 004d4431
    PUSH EAX                            ; 004d4432
        ;   Label: LAB_004d4432
    CALL core_mimic.cpp_CMimic_ctor_FUN_004d4450 ; 004d4433
        ;   XREF to: 004d4450 (UNCONDITIONAL_CALL)  ; CMimic * core_mimic.cpp_CMimic_ctor_FUN_004d4450(CMimic * this_ptr)
    ADD ESP,0x4                         ; 004d4438
    RET                                 ; 004d443b


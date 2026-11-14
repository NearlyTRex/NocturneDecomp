; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMimic * __cdecl core_mimic_cpp_factoryFuncMimic_FUN_0050f090(void)
;
;
; Called Functions:
;   core_mimic.cpp_CMimic_ctor_FUN_0050f0c0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x47ac4                        ; 0050f090
        ;   Label: core_mimic.cpp_factoryFuncMimic_FUN_0050f090
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 0050f095
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0050f09a
    TEST EAX,EAX                        ; 0050f09d
    JNZ 0x0050f0a2                      ; 0050f09f
        ;   XREF to: 0050f0a2 (CONDITIONAL_JUMP)  ; LAB_0050f0a2
    RET                                 ; 0050f0a1
    PUSH EAX                            ; 0050f0a2
        ;   Label: LAB_0050f0a2
    CALL core_mimic.cpp_CMimic_ctor_FUN_0050f0c0 ; 0050f0a3
        ;   XREF to: 0050f0c0 (UNCONDITIONAL_CALL)  ; CMimic * core_mimic.cpp_CMimic_ctor_FUN_0050f0c0(CMimic * this_ptr)
    ADD ESP,0x4                         ; 0050f0a8
    RET                                 ; 0050f0ab


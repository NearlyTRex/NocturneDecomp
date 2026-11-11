; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lightsta_cpp_factoryFuncLightStaff_FUN_004e0f40(void)
;
;
; Called Functions:
;   core_lightsta.cpp_CLightStaff_ctor_FUN_004e0f70
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x608                          ; 004e0f40
        ;   Label: core_lightsta.cpp_factoryFuncLightStaff_FUN_004e0f40
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004e0f45
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004e0f4a
    TEST EAX,EAX                        ; 004e0f4d
    JNZ 0x004e0f52                      ; 004e0f4f
        ;   XREF to: 004e0f52 (CONDITIONAL_JUMP)  ; LAB_004e0f52
    RET                                 ; 004e0f51
    PUSH EAX                            ; 004e0f52
        ;   Label: LAB_004e0f52
    CALL core_lightsta.cpp_CLightStaff_ctor_FUN_004e0f70 ; 004e0f53
        ;   XREF to: 004e0f70 (UNCONDITIONAL_CALL)  ; CLightStaff * core_lightsta.cpp_CLightStaff_ctor_FUN_004e0f70(CLightStaff * this_ptr)
    ADD ESP,0x4                         ; 004e0f58
    RET                                 ; 004e0f5b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_scat_cpp_factoryFuncScat_FUN_00540aa0(void)
;
;
; Called Functions:
;   core_scat.cpp_CScat_ctor_FUN_00540ad0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x1ffd8                        ; 00540aa0
        ;   Label: core_scat.cpp_factoryFuncScat_FUN_00540aa0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00540aa5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 00540aaa
    TEST EAX,EAX                        ; 00540aad
    JNZ 0x00540ab2                      ; 00540aaf
        ;   XREF to: 00540ab2 (CONDITIONAL_JUMP)  ; LAB_00540ab2
    RET                                 ; 00540ab1
    PUSH EAX                            ; 00540ab2
        ;   Label: LAB_00540ab2
    CALL core_scat.cpp_CScat_ctor_FUN_00540ad0 ; 00540ab3
        ;   XREF to: 00540ad0 (UNCONDITIONAL_CALL)  ; CScat * core_scat.cpp_CScat_ctor_FUN_00540ad0(CScat * this_ptr)
    ADD ESP,0x4                         ; 00540ab8
    RET                                 ; 00540abb


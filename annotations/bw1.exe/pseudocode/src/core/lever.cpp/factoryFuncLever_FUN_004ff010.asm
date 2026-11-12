; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLever * __cdecl core_lever_cpp_factoryFuncLever_FUN_004ff010(void)
;
;
; Called Functions:
;   core_lever.cpp_CLever_ctor_FUN_004ff040
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x814                          ; 004ff010
        ;   Label: core_lever.cpp_factoryFuncLever_FUN_004ff010
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004ff015
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004ff01a
    TEST EAX,EAX                        ; 004ff01d
    JNZ 0x004ff022                      ; 004ff01f
        ;   XREF to: 004ff022 (CONDITIONAL_JUMP)  ; LAB_004ff022
    RET                                 ; 004ff021
    PUSH EAX                            ; 004ff022
        ;   Label: LAB_004ff022
    CALL core_lever.cpp_CLever_ctor_FUN_004ff040 ; 004ff023
        ;   XREF to: 004ff040 (UNCONDITIONAL_CALL)  ; CLever * core_lever.cpp_CLever_ctor_FUN_004ff040(CLever * this_ptr)
    ADD ESP,0x4                         ; 004ff028
    RET                                 ; 004ff02b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLever * __cdecl core_lever_cpp_factoryFuncLever_FUN_004c6010(void)
;
;
; Called Functions:
;   core_lever.cpp_CLever_ctor_FUN_004c6040
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x80c                          ; 004c6010
        ;   Label: core_lever.cpp_factoryFuncLever_FUN_004c6010
    CALL crt_memory.c_operator_new_FUN_0056497c ; 004c6015
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 004c601a
    TEST EAX,EAX                        ; 004c601d
    JNZ 0x004c6022                      ; 004c601f
        ;   XREF to: 004c6022 (CONDITIONAL_JUMP)  ; LAB_004c6022
    RET                                 ; 004c6021
    PUSH EAX                            ; 004c6022
        ;   Label: LAB_004c6022
    CALL core_lever.cpp_CLever_ctor_FUN_004c6040 ; 004c6023
        ;   XREF to: 004c6040 (UNCONDITIONAL_CALL)  ; CLever * core_lever.cpp_CLever_ctor_FUN_004c6040(CLever * this_ptr)
    ADD ESP,0x4                         ; 004c6028
    RET                                 ; 004c602b


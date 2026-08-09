; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBatman * __cdecl core_batman_cpp_factoryFuncBatman_FUN_004133b0(void)
;
;
; Called Functions:
;   core_batman.cpp_CBatman_ctor_FUN_004133e0
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbde0                         ; 004133b0
        ;   Label: core_batman.cpp_factoryFuncBatman_FUN_004133b0
    CALL crt_memory.c_operator_new_FUN_0056497c ; 004133b5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 004133ba
    TEST EAX,EAX                        ; 004133bd
    JNZ 0x004133c2                      ; 004133bf
        ;   XREF to: 004133c2 (CONDITIONAL_JUMP)  ; LAB_004133c2
    RET                                 ; 004133c1
    PUSH EAX                            ; 004133c2
        ;   Label: LAB_004133c2
    CALL core_batman.cpp_CBatman_ctor_FUN_004133e0 ; 004133c3
        ;   XREF to: 004133e0 (UNCONDITIONAL_CALL)  ; CBatman * core_batman.cpp_CBatman_ctor_FUN_004133e0(CBatman * this_ptr)
    ADD ESP,0x4                         ; 004133c8
    RET                                 ; 004133cb


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPassenger * __cdecl core_passngr_cpp_factoryFuncPassenger_FUN_004ef4b0(void)
;
;
; Called Functions:
;   core_passngr.cpp_CPassenger_ctor_FUN_004ef4e0
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x202b0                        ; 004ef4b0
        ;   Label: core_passngr.cpp_factoryFuncPassenger_FUN_004ef4b0
    CALL crt_memory.c_operator_new_FUN_0056497c ; 004ef4b5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 004ef4ba
    TEST EAX,EAX                        ; 004ef4bd
    JNZ 0x004ef4c2                      ; 004ef4bf
        ;   XREF to: 004ef4c2 (CONDITIONAL_JUMP)  ; LAB_004ef4c2
    RET                                 ; 004ef4c1
    PUSH EAX                            ; 004ef4c2
        ;   Label: LAB_004ef4c2
    CALL core_passngr.cpp_CPassenger_ctor_FUN_004ef4e0 ; 004ef4c3
        ;   XREF to: 004ef4e0 (UNCONDITIONAL_CALL)  ; CPassenger * core_passngr.cpp_CPassenger_ctor_FUN_004ef4e0(CPassenger * this_ptr)
    ADD ESP,0x4                         ; 004ef4c8
    RET                                 ; 004ef4cb


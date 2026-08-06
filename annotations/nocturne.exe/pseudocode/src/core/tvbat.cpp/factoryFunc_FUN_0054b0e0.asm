; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTVBat * __cdecl core_tvbat_cpp_factoryFunc_FUN_0054b0e0(void)
;
;
; Called Functions:
;   core_tvbat.cpp_CTVBat_ctor_FUN_0054b140
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbf5c                         ; 0054b0e0
        ;   Label: core_tvbat.cpp_factoryFunc_FUN_0054b0e0
    CALL crt_memory.c_operator_new_FUN_0056497c ; 0054b0e5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 0054b0ea
    TEST EAX,EAX                        ; 0054b0ed
    JNZ 0x0054b0f2                      ; 0054b0ef
        ;   XREF to: 0054b0f2 (CONDITIONAL_JUMP)  ; LAB_0054b0f2
    RET                                 ; 0054b0f1
    PUSH EAX                            ; 0054b0f2
        ;   Label: LAB_0054b0f2
    CALL core_tvbat.cpp_CTVBat_ctor_FUN_0054b140 ; 0054b0f3
        ;   XREF to: 0054b140 (UNCONDITIONAL_CALL)  ; CTVBat * core_tvbat.cpp_CTVBat_ctor_FUN_0054b140(CTVBat * this_ptr)
    ADD ESP,0x4                         ; 0054b0f8
    RET                                 ; 0054b0fb


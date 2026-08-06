; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBodyPart * __cdecl core_bodypart_cpp_factoryFunc_FUN_00415cf0(void)
;
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_ctor_FUN_00415d20
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xf18                          ; 00415cf0
        ;   Label: core_bodypart.cpp_factoryFunc_FUN_00415cf0
    CALL crt_memory.c_operator_new_FUN_0056497c ; 00415cf5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 00415cfa
    TEST EAX,EAX                        ; 00415cfd
    JNZ 0x00415d02                      ; 00415cff
        ;   XREF to: 00415d02 (CONDITIONAL_JUMP)  ; LAB_00415d02
    RET                                 ; 00415d01
    PUSH EAX                            ; 00415d02
        ;   Label: LAB_00415d02
    CALL core_bodypart.cpp_CBodyPart_ctor_FUN_00415d20 ; 00415d03
        ;   XREF to: 00415d20 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_CBodyPart_ctor_FUN_00415d20(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 00415d08
    RET                                 ; 00415d0b


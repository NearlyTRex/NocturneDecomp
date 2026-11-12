; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTVBat * __cdecl core_tvbat_cpp_factoryFuncTVBat_FUN_00575000(void)
;
;
; Called Functions:
;   core_tvbat.cpp_CTVBat_ctor_FUN_00575060
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd28c                         ; 00575000
        ;   Label: core_tvbat.cpp_factoryFuncTVBat_FUN_00575000
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00575005
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0057500a
    TEST EAX,EAX                        ; 0057500d
    JNZ 0x00575012                      ; 0057500f
        ;   XREF to: 00575012 (CONDITIONAL_JUMP)  ; LAB_00575012
    RET                                 ; 00575011
    PUSH EAX                            ; 00575012
        ;   Label: LAB_00575012
    CALL core_tvbat.cpp_CTVBat_ctor_FUN_00575060 ; 00575013
        ;   XREF to: 00575060 (UNCONDITIONAL_CALL)  ; CTVBat * core_tvbat.cpp_CTVBat_ctor_FUN_00575060(CTVBat * this_ptr)
    ADD ESP,0x4                         ; 00575018
    RET                                 ; 0057501b


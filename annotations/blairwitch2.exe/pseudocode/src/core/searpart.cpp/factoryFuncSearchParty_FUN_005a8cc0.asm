; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_searpart_cpp_factoryFuncSearchParty_FUN_005a8cc0(void)
;
;
; Called Functions:
;   core_searpart.cpp_CSearchParty_ctor_FUN_005a8cf0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x11850                        ; 005a8cc0
        ;   Label: core_searpart.cpp_factoryFuncSearchParty_FUN_005a8cc0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005a8cc5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005a8cca
    TEST EAX,EAX                        ; 005a8ccd
    JNZ 0x005a8cd2                      ; 005a8ccf
        ;   XREF to: 005a8cd2 (CONDITIONAL_JUMP)  ; LAB_005a8cd2
    RET                                 ; 005a8cd1
    PUSH EAX                            ; 005a8cd2
        ;   Label: LAB_005a8cd2
    CALL core_searpart.cpp_CSearchParty_ctor_FUN_005a8cf0 ; 005a8cd3
        ;   XREF to: 005a8cf0 (UNCONDITIONAL_CALL)  ; CSearchParty * core_searpart.cpp_CSearchParty_ctor_FUN_005a8cf0(CSearchParty * this_ptr)
    ADD ESP,0x4                         ; 005a8cd8
    RET                                 ; 005a8cdb


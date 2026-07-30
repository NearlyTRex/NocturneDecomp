; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBiggs * __cdecl core_biggs_cpp_factoryFunc_FUN_00415340(void)
;
;
; Called Functions:
;   core_biggs.cpp_CBiggs_ctor_FUN_00415370
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xcb38                         ; 00415340
        ;   Label: core_biggs.cpp_factoryFunc_FUN_00415340
    CALL crt_unknown.c_FUN_0056497c     ; 00415345
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0041534a
    TEST EAX,EAX                        ; 0041534d
    JNZ 0x00415352                      ; 0041534f
        ;   XREF to: 00415352 (CONDITIONAL_JUMP)  ; LAB_00415352
    RET                                 ; 00415351
    PUSH EAX                            ; 00415352
        ;   Label: LAB_00415352
    CALL core_biggs.cpp_CBiggs_ctor_FUN_00415370 ; 00415353
        ;   XREF to: 00415370 (UNCONDITIONAL_CALL)  ; CBiggs * core_biggs.cpp_CBiggs_ctor_FUN_00415370(CBiggs * this_ptr)
    ADD ESP,0x4                         ; 00415358
    RET                                 ; 0041535b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flintlck_cpp_factoryFuncFlintlock_FUN_004ae7b0(void)
;
;
; Called Functions:
;   core_flintlck.cpp_CFlintlock_ctor_FUN_004ae7e0
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x594                          ; 004ae7b0
        ;   Label: core_flintlck.cpp_factoryFuncFlintlock_FUN_004ae7b0
    CALL crt_unknown.c_FUN_005a3cb2     ; 004ae7b5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004ae7ba
    TEST EAX,EAX                        ; 004ae7bd
    JNZ 0x004ae7c2                      ; 004ae7bf
        ;   XREF to: 004ae7c2 (CONDITIONAL_JUMP)  ; LAB_004ae7c2
    RET                                 ; 004ae7c1
    PUSH EAX                            ; 004ae7c2
        ;   Label: LAB_004ae7c2
    CALL core_flintlck.cpp_CFlintlock_ctor_FUN_004ae7e0 ; 004ae7c3
        ;   XREF to: 004ae7e0 (UNCONDITIONAL_CALL)  ; CFlintlock * core_flintlck.cpp_CFlintlock_ctor_FUN_004ae7e0(CFlintlock * this_ptr)
    ADD ESP,0x4                         ; 004ae7c8
    RET                                 ; 004ae7cb


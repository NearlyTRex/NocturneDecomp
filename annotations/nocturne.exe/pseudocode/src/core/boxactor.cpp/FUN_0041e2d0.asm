; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_FUN_0041e2d0(void)
;
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041e300
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x664                          ; 0041e2d0
        ;   Label: core_boxactor.cpp_FUN_0041e2d0
    CALL crt_unknown.c_FUN_0056497c     ; 0041e2d5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0041e2da
    TEST EAX,EAX                        ; 0041e2dd
    JNZ 0x0041e2e2                      ; 0041e2df
        ;   XREF to: 0041e2e2 (CONDITIONAL_JUMP)  ; LAB_0041e2e2
    RET                                 ; 0041e2e1
    PUSH EAX                            ; 0041e2e2
        ;   Label: LAB_0041e2e2
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_0041e300 ; 0041e2e3
        ;   XREF to: 0041e300 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_CBoxActor_ctor_FUN_0041e300()
    ADD ESP,0x4                         ; 0041e2e8
    RET                                 ; 0041e2eb


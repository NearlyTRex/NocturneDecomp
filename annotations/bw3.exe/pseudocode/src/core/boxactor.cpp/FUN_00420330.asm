; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_FUN_00420330(void)
;
;
; Called Functions:
;   core_boxactor.cpp_CLightActor_ctor_FUN_00420360
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x36f4                         ; 00420330
        ;   Label: core_boxactor.cpp_FUN_00420330
    CALL crt_unknown.c_FUN_005a3cb2     ; 00420335
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0042033a
    TEST EAX,EAX                        ; 0042033d
    JNZ 0x00420342                      ; 0042033f
        ;   XREF to: 00420342 (CONDITIONAL_JUMP)  ; LAB_00420342
    RET                                 ; 00420341
    PUSH EAX                            ; 00420342
        ;   Label: LAB_00420342
    CALL core_boxactor.cpp_CLightActor_ctor_FUN_00420360 ; 00420343
        ;   XREF to: 00420360 (UNCONDITIONAL_CALL)  ; CLightActor * core_boxactor.cpp_CLightActor_ctor_FUN_00420360(CLightActor * this_ptr)
    ADD ESP,0x4                         ; 00420348
    RET                                 ; 0042034b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bird_cpp_factoryFuncBird_FUN_0040f9c0(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005a3cb2
;   unkafter_bird.cpp_CBird_ctor_FUN_0040f9f0
;
; *****************************************************************************

section .text

    PUSH 0x206bc                        ; 0040f9c0
        ;   Label: core_bird.cpp_factoryFuncBird_FUN_0040f9c0
    CALL crt_unknown.c_FUN_005a3cb2     ; 0040f9c5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0040f9ca
    TEST EAX,EAX                        ; 0040f9cd
    JNZ 0x0040f9d2                      ; 0040f9cf
        ;   XREF to: 0040f9d2 (CONDITIONAL_JUMP)  ; LAB_0040f9d2
    RET                                 ; 0040f9d1
    PUSH EAX                            ; 0040f9d2
        ;   Label: LAB_0040f9d2
    CALL unkafter_bird.cpp_CBird_ctor_FUN_0040f9f0 ; 0040f9d3
        ;   XREF to: 0040f9f0 (UNCONDITIONAL_CALL)  ; CBird * unkafter_bird.cpp_CBird_ctor_FUN_0040f9f0(CBird * this_ptr)
    ADD ESP,0x4                         ; 0040f9d8
    RET                                 ; 0040f9db


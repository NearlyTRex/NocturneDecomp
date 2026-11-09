; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_djien_cpp_factoryFuncDjien_FUN_0045fde0(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c0f32
;   unkafter_djien.cpp_CDjien_ctor_FUN_0045fe10
;
; *****************************************************************************

section .text

    PUSH 0xc9cc                         ; 0045fde0
        ;   Label: core_djien.cpp_factoryFuncDjien_FUN_0045fde0
    CALL crt_unknown.c_FUN_005c0f32     ; 0045fde5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 0045fdea
    TEST EAX,EAX                        ; 0045fded
    JNZ 0x0045fdf2                      ; 0045fdef
        ;   XREF to: 0045fdf2 (CONDITIONAL_JUMP)  ; LAB_0045fdf2
    RET                                 ; 0045fdf1
    PUSH EAX                            ; 0045fdf2
        ;   Label: LAB_0045fdf2
    CALL unkafter_djien.cpp_CDjien_ctor_FUN_0045fe10 ; 0045fdf3
        ;   XREF to: 0045fe10 (UNCONDITIONAL_CALL)  ; CDjien * unkafter_djien.cpp_CDjien_ctor_FUN_0045fe10(CDjien * this_ptr)
    ADD ESP,0x4                         ; 0045fdf8
    RET                                 ; 0045fdfb


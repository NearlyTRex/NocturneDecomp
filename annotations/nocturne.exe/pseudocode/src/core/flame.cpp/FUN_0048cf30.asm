; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flame_cpp_FUN_0048cf30(void)
;
;
; Called Functions:
;   core_flame.cpp_CFlame_ctor_FUN_0048cf60
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x29c                          ; 0048cf30
        ;   Label: core_flame.cpp_FUN_0048cf30
    CALL crt_unknown.c_FUN_0056497c     ; 0048cf35
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0048cf3a
    TEST EAX,EAX                        ; 0048cf3d
    JNZ 0x0048cf42                      ; 0048cf3f
        ;   XREF to: 0048cf42 (CONDITIONAL_JUMP)  ; LAB_0048cf42
    RET                                 ; 0048cf41
    PUSH EAX                            ; 0048cf42
        ;   Label: LAB_0048cf42
    CALL core_flame.cpp_CFlame_ctor_FUN_0048cf60 ; 0048cf43
        ;   XREF to: 0048cf60 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_0048cf60(CFlame * this_ptr)
    ADD ESP,0x4                         ; 0048cf48
    RET                                 ; 0048cf4b


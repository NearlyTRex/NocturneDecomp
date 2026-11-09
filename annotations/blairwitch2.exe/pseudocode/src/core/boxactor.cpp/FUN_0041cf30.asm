; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_FUN_0041cf30(void)
;
;
; Called Functions:
;   core_boxactor.cpp_CLightActor_ctor_FUN_0041cf60
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x37e4                         ; 0041cf30
        ;   Label: core_boxactor.cpp_FUN_0041cf30
    CALL crt_unknown.c_FUN_005b8be2     ; 0041cf35
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 0041cf3a
    TEST EAX,EAX                        ; 0041cf3d
    JNZ 0x0041cf42                      ; 0041cf3f
        ;   XREF to: 0041cf42 (CONDITIONAL_JUMP)  ; LAB_0041cf42
    RET                                 ; 0041cf41
    PUSH EAX                            ; 0041cf42
        ;   Label: LAB_0041cf42
    CALL core_boxactor.cpp_CLightActor_ctor_FUN_0041cf60 ; 0041cf43
        ;   XREF to: 0041cf60 (UNCONDITIONAL_CALL)  ; CLightActor * core_boxactor.cpp_CLightActor_ctor_FUN_0041cf60(CLightActor * this_ptr)
    ADD ESP,0x4                         ; 0041cf48
    RET                                 ; 0041cf4b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_smiley_cpp_FUN_0051fcc0(void)
;
;
; Called Functions:
;   core_smiley.cpp_CSmiley_ctor_FUN_0051fcf0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd68                         ; 0051fcc0
        ;   Label: core_smiley.cpp_FUN_0051fcc0
    CALL crt_unknown.c_FUN_0056497c     ; 0051fcc5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0051fcca
    TEST EAX,EAX                        ; 0051fccd
    JNZ 0x0051fcd2                      ; 0051fccf
        ;   XREF to: 0051fcd2 (CONDITIONAL_JUMP)  ; LAB_0051fcd2
    RET                                 ; 0051fcd1
    PUSH EAX                            ; 0051fcd2
        ;   Label: LAB_0051fcd2
    CALL core_smiley.cpp_CSmiley_ctor_FUN_0051fcf0 ; 0051fcd3
        ;   XREF to: 0051fcf0 (UNCONDITIONAL_CALL)  ; CSmiley * core_smiley.cpp_CSmiley_ctor_FUN_0051fcf0(CSmiley * this_ptr)
    ADD ESP,0x4                         ; 0051fcd8
    RET                                 ; 0051fcdb


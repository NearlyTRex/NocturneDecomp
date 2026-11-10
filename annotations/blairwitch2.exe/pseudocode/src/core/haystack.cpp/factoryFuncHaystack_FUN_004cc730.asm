; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_haystack_cpp_factoryFuncHaystack_FUN_004cc730(void)
;
;
; Called Functions:
;   core_haystack.cpp_CHaystack_ctor_FUN_004cc760
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x25658                        ; 004cc730
        ;   Label: core_haystack.cpp_factoryFuncHaystack_FUN_004cc730
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 004cc735
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 004cc73a
    TEST EAX,EAX                        ; 004cc73d
    JNZ 0x004cc742                      ; 004cc73f
        ;   XREF to: 004cc742 (CONDITIONAL_JUMP)  ; LAB_004cc742
    RET                                 ; 004cc741
    PUSH EAX                            ; 004cc742
        ;   Label: LAB_004cc742
    CALL core_haystack.cpp_CHaystack_ctor_FUN_004cc760 ; 004cc743
        ;   XREF to: 004cc760 (UNCONDITIONAL_CALL)  ; CHaystack * core_haystack.cpp_CHaystack_ctor_FUN_004cc760(CHaystack * this_ptr)
    ADD ESP,0x4                         ; 004cc748
    RET                                 ; 004cc74b


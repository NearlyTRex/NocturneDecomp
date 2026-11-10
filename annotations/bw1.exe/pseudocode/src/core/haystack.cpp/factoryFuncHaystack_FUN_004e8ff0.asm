; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_haystack_cpp_factoryFuncHaystack_FUN_004e8ff0(void)
;
;
; Called Functions:
;   core_haystack.cpp_CHaystack_ctor_FUN_004e9020
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x1ffc4                        ; 004e8ff0
        ;   Label: core_haystack.cpp_factoryFuncHaystack_FUN_004e8ff0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 004e8ff5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 004e8ffa
    TEST EAX,EAX                        ; 004e8ffd
    JNZ 0x004e9002                      ; 004e8fff
        ;   XREF to: 004e9002 (CONDITIONAL_JUMP)  ; LAB_004e9002
    RET                                 ; 004e9001
    PUSH EAX                            ; 004e9002
        ;   Label: LAB_004e9002
    CALL core_haystack.cpp_CHaystack_ctor_FUN_004e9020 ; 004e9003
        ;   XREF to: 004e9020 (UNCONDITIONAL_CALL)  ; CHaystack * core_haystack.cpp_CHaystack_ctor_FUN_004e9020(CHaystack * this_ptr)
    ADD ESP,0x4                         ; 004e9008
    RET                                 ; 004e900b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_elephant_cpp_factoryFuncElephantGun_FUN_0049dfd0(void)
;
;
; Called Functions:
;   core_elephant.cpp_CElephantGun_ctor_FUN_0049e000
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x584                          ; 0049dfd0
        ;   Label: core_elephant.cpp_factoryFuncElephantGun_FUN_0049dfd0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0049dfd5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0049dfda
    TEST EAX,EAX                        ; 0049dfdd
    JNZ 0x0049dfe2                      ; 0049dfdf
        ;   XREF to: 0049dfe2 (CONDITIONAL_JUMP)  ; LAB_0049dfe2
    RET                                 ; 0049dfe1
    PUSH EAX                            ; 0049dfe2
        ;   Label: LAB_0049dfe2
    CALL core_elephant.cpp_CElephantGun_ctor_FUN_0049e000 ; 0049dfe3
        ;   XREF to: 0049e000 (UNCONDITIONAL_CALL)  ; CElephantGun * core_elephant.cpp_CElephantGun_ctor_FUN_0049e000(CElephantGun * this_ptr)
    ADD ESP,0x4                         ; 0049dfe8
    RET                                 ; 0049dfeb


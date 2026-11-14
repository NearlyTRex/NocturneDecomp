; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGargoyle * __cdecl core_gargoyle_cpp_factoryFuncGargoyle_FUN_004dc240(void)
;
;
; Called Functions:
;   core_gargoyle.cpp_CGargoyle_ctor_FUN_004dc270
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc2c4                         ; 004dc240
        ;   Label: core_gargoyle.cpp_factoryFuncGargoyle_FUN_004dc240
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004dc245
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004dc24a
    TEST EAX,EAX                        ; 004dc24d
    JNZ 0x004dc252                      ; 004dc24f
        ;   XREF to: 004dc252 (CONDITIONAL_JUMP)  ; LAB_004dc252
    RET                                 ; 004dc251
    PUSH EAX                            ; 004dc252
        ;   Label: LAB_004dc252
    CALL core_gargoyle.cpp_CGargoyle_ctor_FUN_004dc270 ; 004dc253
        ;   XREF to: 004dc270 (UNCONDITIONAL_CALL)  ; CGargoyle * core_gargoyle.cpp_CGargoyle_ctor_FUN_004dc270(CGargoyle * this_ptr)
    ADD ESP,0x4                         ; 004dc258
    RET                                 ; 004dc25b


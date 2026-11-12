; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlame * __cdecl core_flame_cpp_factoryFuncFlame_FUN_004b7a00(void)
;
;
; Called Functions:
;   core_flame.cpp_CFlame_ctor_FUN_004b7a30
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x2a4                          ; 004b7a00
        ;   Label: core_flame.cpp_factoryFuncFlame_FUN_004b7a00
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004b7a05
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004b7a0a
    TEST EAX,EAX                        ; 004b7a0d
    JNZ 0x004b7a12                      ; 004b7a0f
        ;   XREF to: 004b7a12 (CONDITIONAL_JUMP)  ; LAB_004b7a12
    RET                                 ; 004b7a11
    PUSH EAX                            ; 004b7a12
        ;   Label: LAB_004b7a12
    CALL core_flame.cpp_CFlame_ctor_FUN_004b7a30 ; 004b7a13
        ;   XREF to: 004b7a30 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_004b7a30(CFlame * this_ptr)
    ADD ESP,0x4                         ; 004b7a18
    RET                                 ; 004b7a1b


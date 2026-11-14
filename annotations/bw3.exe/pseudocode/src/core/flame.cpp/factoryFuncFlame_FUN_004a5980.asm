; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlame * __cdecl core_flame_cpp_factoryFuncFlame_FUN_004a5980(void)
;
;
; Called Functions:
;   core_flame.cpp_CFlame_ctor_FUN_004a59b0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x2a4                          ; 004a5980
        ;   Label: core_flame.cpp_factoryFuncFlame_FUN_004a5980
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004a5985
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004a598a
    TEST EAX,EAX                        ; 004a598d
    JNZ 0x004a5992                      ; 004a598f
        ;   XREF to: 004a5992 (CONDITIONAL_JUMP)  ; LAB_004a5992
    RET                                 ; 004a5991
    PUSH EAX                            ; 004a5992
        ;   Label: LAB_004a5992
    CALL core_flame.cpp_CFlame_ctor_FUN_004a59b0 ; 004a5993
        ;   XREF to: 004a59b0 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_004a59b0(CFlame * this_ptr)
    ADD ESP,0x4                         ; 004a5998
    RET                                 ; 004a599b


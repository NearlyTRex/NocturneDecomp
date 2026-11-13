; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMeleeAxe * __cdecl core_meleeaxe_cpp_factoryFuncMeleeAxe_FUN_0059d1f0(void)
;
;
; Called Functions:
;   core_meleeaxe.cpp_CMeleeAxe_ctor_FUN_0059d220
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x828                          ; 0059d1f0
        ;   Label: core_meleeaxe.cpp_factoryFuncMeleeAxe_FUN_0059d1f0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 0059d1f5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0059d1fa
    TEST EAX,EAX                        ; 0059d1fd
    JNZ 0x0059d202                      ; 0059d1ff
        ;   XREF to: 0059d202 (CONDITIONAL_JUMP)  ; LAB_0059d202
    RET                                 ; 0059d201
    PUSH EAX                            ; 0059d202
        ;   Label: LAB_0059d202
    CALL core_meleeaxe.cpp_CMeleeAxe_ctor_FUN_0059d220 ; 0059d203
        ;   XREF to: 0059d220 (UNCONDITIONAL_CALL)  ; CMeleeAxe * core_meleeaxe.cpp_CMeleeAxe_ctor_FUN_0059d220(CMeleeAxe * this_ptr)
    ADD ESP,0x4                         ; 0059d208
    RET                                 ; 0059d20b


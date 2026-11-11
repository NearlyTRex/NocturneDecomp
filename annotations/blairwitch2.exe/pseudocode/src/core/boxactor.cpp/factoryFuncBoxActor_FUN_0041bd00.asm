; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_factoryFuncBoxActor_FUN_0041bd00(void)
;
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x7d4                          ; 0041bd00
        ;   Label: core_boxactor.cpp_factoryFuncBoxActor_FUN_0041bd00
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 0041bd05
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0041bd0a
    TEST EAX,EAX                        ; 0041bd0d
    JNZ 0x0041bd12                      ; 0041bd0f
        ;   XREF to: 0041bd12 (CONDITIONAL_JUMP)  ; LAB_0041bd12
    RET                                 ; 0041bd11
    PUSH EAX                            ; 0041bd12
        ;   Label: LAB_0041bd12
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30 ; 0041bd13
        ;   XREF to: 0041bd30 (UNCONDITIONAL_CALL)  ; CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 0041bd18
    RET                                 ; 0041bd1b


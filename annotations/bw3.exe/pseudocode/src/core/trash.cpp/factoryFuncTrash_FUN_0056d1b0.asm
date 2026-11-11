; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trash_cpp_factoryFuncTrash_FUN_0056d1b0(void)
;
;
; Called Functions:
;   core_trash.cpp_CTrash_ctor_FUN_0056d1e0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x328                          ; 0056d1b0
        ;   Label: core_trash.cpp_factoryFuncTrash_FUN_0056d1b0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0056d1b5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0056d1ba
    TEST EAX,EAX                        ; 0056d1bd
    JNZ 0x0056d1c2                      ; 0056d1bf
        ;   XREF to: 0056d1c2 (CONDITIONAL_JUMP)  ; LAB_0056d1c2
    RET                                 ; 0056d1c1
    PUSH EAX                            ; 0056d1c2
        ;   Label: LAB_0056d1c2
    CALL core_trash.cpp_CTrash_ctor_FUN_0056d1e0 ; 0056d1c3
        ;   XREF to: 0056d1e0 (UNCONDITIONAL_CALL)  ; CTrash * core_trash.cpp_CTrash_ctor_FUN_0056d1e0(CTrash * this_ptr)
    ADD ESP,0x4                         ; 0056d1c8
    RET                                 ; 0056d1cb


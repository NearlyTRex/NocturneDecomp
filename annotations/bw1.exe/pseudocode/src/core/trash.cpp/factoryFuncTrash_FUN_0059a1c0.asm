; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trash_cpp_factoryFuncTrash_FUN_0059a1c0(void)
;
;
; Called Functions:
;   core_trash.cpp_CTrash_ctor_FUN_0059a1f0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x328                          ; 0059a1c0
        ;   Label: core_trash.cpp_factoryFuncTrash_FUN_0059a1c0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 0059a1c5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0059a1ca
    TEST EAX,EAX                        ; 0059a1cd
    JNZ 0x0059a1d2                      ; 0059a1cf
        ;   XREF to: 0059a1d2 (CONDITIONAL_JUMP)  ; LAB_0059a1d2
    RET                                 ; 0059a1d1
    PUSH EAX                            ; 0059a1d2
        ;   Label: LAB_0059a1d2
    CALL core_trash.cpp_CTrash_ctor_FUN_0059a1f0 ; 0059a1d3
        ;   XREF to: 0059a1f0 (UNCONDITIONAL_CALL)  ; CTrash * core_trash.cpp_CTrash_ctor_FUN_0059a1f0(CTrash * this_ptr)
    ADD ESP,0x4                         ; 0059a1d8
    RET                                 ; 0059a1db


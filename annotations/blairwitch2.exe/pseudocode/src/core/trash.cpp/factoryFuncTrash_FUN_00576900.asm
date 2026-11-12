; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrash * __cdecl core_trash_cpp_factoryFuncTrash_FUN_00576900(void)
;
;
; Called Functions:
;   core_trash.cpp_CTrash_ctor_FUN_00576930
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x484                          ; 00576900
        ;   Label: core_trash.cpp_factoryFuncTrash_FUN_00576900
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 00576905
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0057690a
    TEST EAX,EAX                        ; 0057690d
    JNZ 0x00576912                      ; 0057690f
        ;   XREF to: 00576912 (CONDITIONAL_JUMP)  ; LAB_00576912
    RET                                 ; 00576911
    PUSH EAX                            ; 00576912
        ;   Label: LAB_00576912
    CALL core_trash.cpp_CTrash_ctor_FUN_00576930 ; 00576913
        ;   XREF to: 00576930 (UNCONDITIONAL_CALL)  ; CTrash * core_trash.cpp_CTrash_ctor_FUN_00576930(CTrash * this_ptr)
    ADD ESP,0x4                         ; 00576918
    RET                                 ; 0057691b


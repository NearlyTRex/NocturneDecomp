; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrummer * __cdecl core_tbplayer_cpp_factoryFuncDrummer_FUN_005949d0(void)
;
;
; Called Functions:
;   core_tbplayer.cpp_CDrummer_ctor_FUN_00594a00
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x1fac0                        ; 005949d0
        ;   Label: core_tbplayer.cpp_factoryFuncDrummer_FUN_005949d0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 005949d5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 005949da
    TEST EAX,EAX                        ; 005949dd
    JNZ 0x005949e2                      ; 005949df
        ;   XREF to: 005949e2 (CONDITIONAL_JUMP)  ; LAB_005949e2
    RET                                 ; 005949e1
    PUSH EAX                            ; 005949e2
        ;   Label: LAB_005949e2
    CALL core_tbplayer.cpp_CDrummer_ctor_FUN_00594a00 ; 005949e3
        ;   XREF to: 00594a00 (UNCONDITIONAL_CALL)  ; CDrummer * core_tbplayer.cpp_CDrummer_ctor_FUN_00594a00(CDrummer * this_ptr)
    ADD ESP,0x4                         ; 005949e8
    RET                                 ; 005949eb


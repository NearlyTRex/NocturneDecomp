; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTempleStone * __cdecl core_stone_cpp_factoryFuncTempleStone_FUN_00584e80(void)
;
;
; Called Functions:
;   core_stone.cpp_CTempleStone_ctor_FUN_00584eb0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x67c                          ; 00584e80
        ;   Label: core_stone.cpp_factoryFuncTempleStone_FUN_00584e80
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00584e85
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 00584e8a
    TEST EAX,EAX                        ; 00584e8d
    JNZ 0x00584e92                      ; 00584e8f
        ;   XREF to: 00584e92 (CONDITIONAL_JUMP)  ; LAB_00584e92
    RET                                 ; 00584e91
    PUSH EAX                            ; 00584e92
        ;   Label: LAB_00584e92
    CALL core_stone.cpp_CTempleStone_ctor_FUN_00584eb0 ; 00584e93
        ;   XREF to: 00584eb0 (UNCONDITIONAL_CALL)  ; CTempleStone * core_stone.cpp_CTempleStone_ctor_FUN_00584eb0(CTempleStone * this_ptr)
    ADD ESP,0x4                         ; 00584e98
    RET                                 ; 00584e9b


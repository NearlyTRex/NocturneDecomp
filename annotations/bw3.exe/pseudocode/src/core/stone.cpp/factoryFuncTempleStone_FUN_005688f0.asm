; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stone_cpp_factoryFuncTempleStone_FUN_005688f0(void)
;
;
; Called Functions:
;   core_stone.cpp_CTempleStone_ctor_FUN_00568920
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x6ec                          ; 005688f0
        ;   Label: core_stone.cpp_factoryFuncTempleStone_FUN_005688f0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 005688f5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 005688fa
    TEST EAX,EAX                        ; 005688fd
    JNZ 0x00568902                      ; 005688ff
        ;   XREF to: 00568902 (CONDITIONAL_JUMP)  ; LAB_00568902
    RET                                 ; 00568901
    PUSH EAX                            ; 00568902
        ;   Label: LAB_00568902
    CALL core_stone.cpp_CTempleStone_ctor_FUN_00568920 ; 00568903
        ;   XREF to: 00568920 (UNCONDITIONAL_CALL)  ; CTempleStone * core_stone.cpp_CTempleStone_ctor_FUN_00568920(CTempleStone * this_ptr)
    ADD ESP,0x4                         ; 00568908
    RET                                 ; 0056890b


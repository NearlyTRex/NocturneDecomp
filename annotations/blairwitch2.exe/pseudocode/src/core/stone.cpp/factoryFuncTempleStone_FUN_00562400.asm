; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stone_cpp_factoryFuncTempleStone_FUN_00562400(void)
;
;
; Called Functions:
;   core_stone.cpp_CTempleStone_ctor_FUN_00562430
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x7d8                          ; 00562400
        ;   Label: core_stone.cpp_factoryFuncTempleStone_FUN_00562400
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 00562405
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0056240a
    TEST EAX,EAX                        ; 0056240d
    JNZ 0x00562412                      ; 0056240f
        ;   XREF to: 00562412 (CONDITIONAL_JUMP)  ; LAB_00562412
    RET                                 ; 00562411
    PUSH EAX                            ; 00562412
        ;   Label: LAB_00562412
    CALL core_stone.cpp_CTempleStone_ctor_FUN_00562430 ; 00562413
        ;   XREF to: 00562430 (UNCONDITIONAL_CALL)  ; CTempleStone * core_stone.cpp_CTempleStone_ctor_FUN_00562430(CTempleStone * this_ptr)
    ADD ESP,0x4                         ; 00562418
    RET                                 ; 0056241b


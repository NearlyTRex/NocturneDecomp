; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStairs * __cdecl core_stairs_cpp_factoryFuncStairs_FUN_00561ec0(void)
;
;
; Called Functions:
;   core_stairs.cpp_CStairs_ctor_FUN_00561ef0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0xb90                          ; 00561ec0
        ;   Label: core_stairs.cpp_factoryFuncStairs_FUN_00561ec0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 00561ec5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 00561eca
    TEST EAX,EAX                        ; 00561ecd
    JNZ 0x00561ed2                      ; 00561ecf
        ;   XREF to: 00561ed2 (CONDITIONAL_JUMP)  ; LAB_00561ed2
    RET                                 ; 00561ed1
    PUSH EAX                            ; 00561ed2
        ;   Label: LAB_00561ed2
    CALL core_stairs.cpp_CStairs_ctor_FUN_00561ef0 ; 00561ed3
        ;   XREF to: 00561ef0 (UNCONDITIONAL_CALL)  ; CStairs * core_stairs.cpp_CStairs_ctor_FUN_00561ef0(CStairs * this_ptr)
    ADD ESP,0x4                         ; 00561ed8
    RET                                 ; 00561edb


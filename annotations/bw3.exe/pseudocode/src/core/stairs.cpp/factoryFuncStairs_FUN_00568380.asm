; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stairs_cpp_factoryFuncStairs_FUN_00568380(void)
;
;
; Called Functions:
;   core_stairs.cpp_CStairs_ctor_FUN_005683b0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xa34                          ; 00568380
        ;   Label: core_stairs.cpp_factoryFuncStairs_FUN_00568380
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00568385
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0056838a
    TEST EAX,EAX                        ; 0056838d
    JNZ 0x00568392                      ; 0056838f
        ;   XREF to: 00568392 (CONDITIONAL_JUMP)  ; LAB_00568392
    RET                                 ; 00568391
    PUSH EAX                            ; 00568392
        ;   Label: LAB_00568392
    CALL core_stairs.cpp_CStairs_ctor_FUN_005683b0 ; 00568393
        ;   XREF to: 005683b0 (UNCONDITIONAL_CALL)  ; CStairs * core_stairs.cpp_CStairs_ctor_FUN_005683b0(CStairs * this_ptr)
    ADD ESP,0x4                         ; 00568398
    RET                                 ; 0056839b


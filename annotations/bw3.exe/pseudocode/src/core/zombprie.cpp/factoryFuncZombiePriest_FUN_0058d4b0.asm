; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombprie_cpp_factoryFuncZombiePriest_FUN_0058d4b0(void)
;
;
; Called Functions:
;   core_zombprie.cpp_CZombiePriest_ctor_FUN_0058d4e0
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd114                         ; 0058d4b0
        ;   Label: core_zombprie.cpp_factoryFuncZombiePriest_FUN_0058d4b0
    CALL crt_unknown.c_FUN_005a3cb2     ; 0058d4b5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0058d4ba
    TEST EAX,EAX                        ; 0058d4bd
    JNZ 0x0058d4c2                      ; 0058d4bf
        ;   XREF to: 0058d4c2 (CONDITIONAL_JUMP)  ; LAB_0058d4c2
    RET                                 ; 0058d4c1
    PUSH EAX                            ; 0058d4c2
        ;   Label: LAB_0058d4c2
    CALL core_zombprie.cpp_CZombiePriest_ctor_FUN_0058d4e0 ; 0058d4c3
        ;   XREF to: 0058d4e0 (UNCONDITIONAL_CALL)  ; CZombiePriest * core_zombprie.cpp_CZombiePriest_ctor_FUN_0058d4e0(CZombiePriest * this_ptr)
    ADD ESP,0x4                         ; 0058d4c8
    RET                                 ; 0058d4cb


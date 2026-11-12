; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cow_cpp_factoryFuncZombieCow_FUN_004390b0(void)
;
;
; Called Functions:
;   core_cow.cpp_CZombieCow_ctor_FUN_004390e0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10b2c                        ; 004390b0
        ;   Label: core_cow.cpp_factoryFuncZombieCow_FUN_004390b0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004390b5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004390ba
    TEST EAX,EAX                        ; 004390bd
    JNZ 0x004390c2                      ; 004390bf
        ;   XREF to: 004390c2 (CONDITIONAL_JUMP)  ; LAB_004390c2
    RET                                 ; 004390c1
    PUSH EAX                            ; 004390c2
        ;   Label: LAB_004390c2
    CALL core_cow.cpp_CZombieCow_ctor_FUN_004390e0 ; 004390c3
        ;   XREF to: 004390e0 (UNCONDITIONAL_CALL)  ; CZombieCow * core_cow.cpp_CZombieCow_ctor_FUN_004390e0(CZombieCow * this_ptr)
    ADD ESP,0x4                         ; 004390c8
    RET                                 ; 004390cb


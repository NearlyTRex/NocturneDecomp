; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieCow * __cdecl core_cow_cpp_factoryFuncZombieCow_FUN_00448370(void)
;
;
; Called Functions:
;   core_cow.cpp_CZombieCow_ctor_FUN_004483a0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc29c                         ; 00448370
        ;   Label: core_cow.cpp_factoryFuncZombieCow_FUN_00448370
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00448375
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0044837a
    TEST EAX,EAX                        ; 0044837d
    JNZ 0x00448382                      ; 0044837f
        ;   XREF to: 00448382 (CONDITIONAL_JUMP)  ; LAB_00448382
    RET                                 ; 00448381
    PUSH EAX                            ; 00448382
        ;   Label: LAB_00448382
    CALL core_cow.cpp_CZombieCow_ctor_FUN_004483a0 ; 00448383
        ;   XREF to: 004483a0 (UNCONDITIONAL_CALL)  ; CZombieCow * core_cow.cpp_CZombieCow_ctor_FUN_004483a0(CZombieCow * this_ptr)
    ADD ESP,0x4                         ; 00448388
    RET                                 ; 0044838b


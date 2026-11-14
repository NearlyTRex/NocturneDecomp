; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlameCan * __cdecl core_flamecan_cpp_factoryFuncFlameCan_FUN_004a0690(void)
;
;
; Called Functions:
;   core_flamecan.cpp_CFlameCan_ctor_FUN_004a06c0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x8a0                          ; 004a0690
        ;   Label: core_flamecan.cpp_factoryFuncFlameCan_FUN_004a0690
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004a0695
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004a069a
    TEST EAX,EAX                        ; 004a069d
    JNZ 0x004a06a2                      ; 004a069f
        ;   XREF to: 004a06a2 (CONDITIONAL_JUMP)  ; LAB_004a06a2
    RET                                 ; 004a06a1
    PUSH EAX                            ; 004a06a2
        ;   Label: LAB_004a06a2
    CALL core_flamecan.cpp_CFlameCan_ctor_FUN_004a06c0 ; 004a06a3
        ;   XREF to: 004a06c0 (UNCONDITIONAL_CALL)  ; CFlameCan * core_flamecan.cpp_CFlameCan_ctor_FUN_004a06c0(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004a06a8
    RET                                 ; 004a06ab


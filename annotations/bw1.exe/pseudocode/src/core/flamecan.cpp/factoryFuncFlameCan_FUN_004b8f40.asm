; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlameCan * __cdecl core_flamecan_cpp_factoryFuncFlameCan_FUN_004b8f40(void)
;
;
; Called Functions:
;   core_flamecan.cpp_CFlameCan_ctor_FUN_004b8f70
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x5e8                          ; 004b8f40
        ;   Label: core_flamecan.cpp_factoryFuncFlameCan_FUN_004b8f40
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004b8f45
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004b8f4a
    TEST EAX,EAX                        ; 004b8f4d
    JNZ 0x004b8f52                      ; 004b8f4f
        ;   XREF to: 004b8f52 (CONDITIONAL_JUMP)  ; LAB_004b8f52
    RET                                 ; 004b8f51
    PUSH EAX                            ; 004b8f52
        ;   Label: LAB_004b8f52
    CALL core_flamecan.cpp_CFlameCan_ctor_FUN_004b8f70 ; 004b8f53
        ;   XREF to: 004b8f70 (UNCONDITIONAL_CALL)  ; CFlameCan * core_flamecan.cpp_CFlameCan_ctor_FUN_004b8f70(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004b8f58
    RET                                 ; 004b8f5b


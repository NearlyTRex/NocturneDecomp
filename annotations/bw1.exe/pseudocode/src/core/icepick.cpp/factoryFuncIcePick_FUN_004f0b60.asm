; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CIcePick * __cdecl core_icepick_cpp_factoryFuncIcePick_FUN_004f0b60(void)
;
;
; Called Functions:
;   core_icepick.cpp_CIcePick_ctor_FUN_004f0b90
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x1ffdc                        ; 004f0b60
        ;   Label: core_icepick.cpp_factoryFuncIcePick_FUN_004f0b60
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004f0b65
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004f0b6a
    TEST EAX,EAX                        ; 004f0b6d
    JNZ 0x004f0b72                      ; 004f0b6f
        ;   XREF to: 004f0b72 (CONDITIONAL_JUMP)  ; LAB_004f0b72
    RET                                 ; 004f0b71
    PUSH EAX                            ; 004f0b72
        ;   Label: LAB_004f0b72
    CALL core_icepick.cpp_CIcePick_ctor_FUN_004f0b90 ; 004f0b73
        ;   XREF to: 004f0b90 (UNCONDITIONAL_CALL)  ; CIcePick * core_icepick.cpp_CIcePick_ctor_FUN_004f0b90(CIcePick * this_ptr)
    ADD ESP,0x4                         ; 004f0b78
    RET                                 ; 004f0b7b


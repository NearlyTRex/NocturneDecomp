; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bat_cpp_factoryFuncBat_FUN_00410b20(void)
;
;
; Called Functions:
;   core_bat.cpp_CBat_ctor_FUN_00410b50
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x388                          ; 00410b20
        ;   Label: core_bat.cpp_factoryFuncBat_FUN_00410b20
    CALL crt_unknown.c_FUN_005c0f32     ; 00410b25
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 00410b2a
    TEST EAX,EAX                        ; 00410b2d
    JNZ 0x00410b32                      ; 00410b2f
        ;   XREF to: 00410b32 (CONDITIONAL_JUMP)  ; LAB_00410b32
    RET                                 ; 00410b31
    PUSH EAX                            ; 00410b32
        ;   Label: LAB_00410b32
    CALL core_bat.cpp_CBat_ctor_FUN_00410b50 ; 00410b33
        ;   XREF to: 00410b50 (UNCONDITIONAL_CALL)  ; CBat * core_bat.cpp_CBat_ctor_FUN_00410b50(CBat * this_ptr)
    ADD ESP,0x4                         ; 00410b38
    RET                                 ; 00410b3b


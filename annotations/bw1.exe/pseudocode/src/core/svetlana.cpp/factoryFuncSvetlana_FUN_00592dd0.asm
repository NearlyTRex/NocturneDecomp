; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_svetlana_cpp_factoryFuncSvetlana_FUN_00592dd0(void)
;
;
; Called Functions:
;   core_svetlana.cpp_CSvetlana_ctor_FUN_00592e00
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x95630                        ; 00592dd0
        ;   Label: core_svetlana.cpp_factoryFuncSvetlana_FUN_00592dd0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00592dd5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 00592dda
    TEST EAX,EAX                        ; 00592ddd
    JNZ 0x00592de2                      ; 00592ddf
        ;   XREF to: 00592de2 (CONDITIONAL_JUMP)  ; LAB_00592de2
    RET                                 ; 00592de1
    PUSH EAX                            ; 00592de2
        ;   Label: LAB_00592de2
    CALL core_svetlana.cpp_CSvetlana_ctor_FUN_00592e00 ; 00592de3
        ;   XREF to: 00592e00 (UNCONDITIONAL_CALL)  ; CSvetlana * core_svetlana.cpp_CSvetlana_ctor_FUN_00592e00(CSvetlana * this_ptr)
    ADD ESP,0x4                         ; 00592de8
    RET                                 ; 00592deb


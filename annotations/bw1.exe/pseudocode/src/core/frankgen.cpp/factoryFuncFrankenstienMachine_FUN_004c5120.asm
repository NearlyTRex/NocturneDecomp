; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFrankenstienMachine * __cdecl core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_004c5120(void)
;
;
; Called Functions:
;   core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004c5150
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x49c                          ; 004c5120
        ;   Label: core_frankgen.cpp_factoryFuncFrankenstienMachine_FUN_004c5120
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004c5125
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004c512a
    TEST EAX,EAX                        ; 004c512d
    JNZ 0x004c5132                      ; 004c512f
        ;   XREF to: 004c5132 (CONDITIONAL_JUMP)  ; LAB_004c5132
    RET                                 ; 004c5131
    PUSH EAX                            ; 004c5132
        ;   Label: LAB_004c5132
    CALL core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004c5150 ; 004c5133
        ;   XREF to: 004c5150 (UNCONDITIONAL_CALL)  ; CFrankenstienMachine * core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004c5150(CFrankenstienMachine * this_ptr)
    ADD ESP,0x4                         ; 004c5138
    RET                                 ; 004c513b


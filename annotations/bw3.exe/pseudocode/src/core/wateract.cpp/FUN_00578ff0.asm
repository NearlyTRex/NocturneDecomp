; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_FUN_00578ff0(void)
;
;
; Called Functions:
;   core_wateract.cpp_CLava_ctor_FUN_00579020
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x2b23c                        ; 00578ff0
        ;   Label: core_wateract.cpp_FUN_00578ff0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00578ff5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00578ffa
    TEST EAX,EAX                        ; 00578ffd
    JNZ 0x00579002                      ; 00578fff
        ;   XREF to: 00579002 (CONDITIONAL_JUMP)  ; LAB_00579002
    RET                                 ; 00579001
    PUSH EAX                            ; 00579002
        ;   Label: LAB_00579002
    CALL core_wateract.cpp_CLava_ctor_FUN_00579020 ; 00579003
        ;   XREF to: 00579020 (UNCONDITIONAL_CALL)  ; CLava * core_wateract.cpp_CLava_ctor_FUN_00579020(CLava * this_ptr)
    ADD ESP,0x4                         ; 00579008
    RET                                 ; 0057900b


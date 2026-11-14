; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_darkwolf_cpp_FUN_00598fb0(void)
;
;
; Called Functions:
;   core_darkwolf.cpp_CWhitewolf_ctor_FUN_00598fe0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xdc98                         ; 00598fb0
        ;   Label: core_darkwolf.cpp_FUN_00598fb0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00598fb5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00598fba
    TEST EAX,EAX                        ; 00598fbd
    JNZ 0x00598fc2                      ; 00598fbf
        ;   XREF to: 00598fc2 (CONDITIONAL_JUMP)  ; LAB_00598fc2
    RET                                 ; 00598fc1
    PUSH EAX                            ; 00598fc2
        ;   Label: LAB_00598fc2
    CALL core_darkwolf.cpp_CWhitewolf_ctor_FUN_00598fe0 ; 00598fc3
        ;   XREF to: 00598fe0 (UNCONDITIONAL_CALL)  ; CWhitewolf * core_darkwolf.cpp_CWhitewolf_ctor_FUN_00598fe0(CWhitewolf * this_ptr)
    ADD ESP,0x4                         ; 00598fc8
    RET                                 ; 00598fcb


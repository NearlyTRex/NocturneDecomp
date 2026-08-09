; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGrave * __cdecl core_grave_cpp_factoryFuncGrave_FUN_004b0b10(void)
;
;
; Called Functions:
;   core_grave.cpp_CGrave_ctor_FUN_004b0b40
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x3a8                          ; 004b0b10
        ;   Label: core_grave.cpp_factoryFuncGrave_FUN_004b0b10
    CALL crt_memory.c_operator_new_FUN_0056497c ; 004b0b15
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 004b0b1a
    TEST EAX,EAX                        ; 004b0b1d
    JNZ 0x004b0b22                      ; 004b0b1f
        ;   XREF to: 004b0b22 (CONDITIONAL_JUMP)  ; LAB_004b0b22
    RET                                 ; 004b0b21
    PUSH EAX                            ; 004b0b22
        ;   Label: LAB_004b0b22
    CALL core_grave.cpp_CGrave_ctor_FUN_004b0b40 ; 004b0b23
        ;   XREF to: 004b0b40 (UNCONDITIONAL_CALL)  ; CGrave * core_grave.cpp_CGrave_ctor_FUN_004b0b40(CGrave * this_ptr)
    ADD ESP,0x4                         ; 004b0b28
    RET                                 ; 004b0b2b


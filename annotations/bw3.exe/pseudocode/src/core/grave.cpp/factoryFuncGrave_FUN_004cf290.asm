; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_grave_cpp_factoryFuncGrave_FUN_004cf290(void)
;
;
; Called Functions:
;   core_grave.cpp_CGrave_ctor_FUN_004cf2c0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x3b0                          ; 004cf290
        ;   Label: core_grave.cpp_factoryFuncGrave_FUN_004cf290
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004cf295
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004cf29a
    TEST EAX,EAX                        ; 004cf29d
    JNZ 0x004cf2a2                      ; 004cf29f
        ;   XREF to: 004cf2a2 (CONDITIONAL_JUMP)  ; LAB_004cf2a2
    RET                                 ; 004cf2a1
    PUSH EAX                            ; 004cf2a2
        ;   Label: LAB_004cf2a2
    CALL core_grave.cpp_CGrave_ctor_FUN_004cf2c0 ; 004cf2a3
        ;   XREF to: 004cf2c0 (UNCONDITIONAL_CALL)  ; CGrave * core_grave.cpp_CGrave_ctor_FUN_004cf2c0(CGrave * this_ptr)
    ADD ESP,0x4                         ; 004cf2a8
    RET                                 ; 004cf2ab


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_grave_cpp_factoryFuncGrave_FUN_004ca0f0(void)
;
;
; Called Functions:
;   core_grave.cpp_CGrave_ctor_FUN_004ca120
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x50c                          ; 004ca0f0
        ;   Label: core_grave.cpp_factoryFuncGrave_FUN_004ca0f0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 004ca0f5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 004ca0fa
    TEST EAX,EAX                        ; 004ca0fd
    JNZ 0x004ca102                      ; 004ca0ff
        ;   XREF to: 004ca102 (CONDITIONAL_JUMP)  ; LAB_004ca102
    RET                                 ; 004ca101
    PUSH EAX                            ; 004ca102
        ;   Label: LAB_004ca102
    CALL core_grave.cpp_CGrave_ctor_FUN_004ca120 ; 004ca103
        ;   XREF to: 004ca120 (UNCONDITIONAL_CALL)  ; CGrave * core_grave.cpp_CGrave_ctor_FUN_004ca120(CGrave * this_ptr)
    ADD ESP,0x4                         ; 004ca108
    RET                                 ; 004ca10b


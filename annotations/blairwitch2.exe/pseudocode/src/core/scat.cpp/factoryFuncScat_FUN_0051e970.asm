; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_scat_cpp_factoryFuncScat_FUN_0051e970(void)
;
;
; Called Functions:
;   core_scat.cpp_CScat_ctor_FUN_0051e9a0
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x2566c                        ; 0051e970
        ;   Label: core_scat.cpp_factoryFuncScat_FUN_0051e970
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 0051e975
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0051e97a
    TEST EAX,EAX                        ; 0051e97d
    JNZ 0x0051e982                      ; 0051e97f
        ;   XREF to: 0051e982 (CONDITIONAL_JUMP)  ; LAB_0051e982
    RET                                 ; 0051e981
    PUSH EAX                            ; 0051e982
        ;   Label: LAB_0051e982
    CALL core_scat.cpp_CScat_ctor_FUN_0051e9a0 ; 0051e983
        ;   XREF to: 0051e9a0 (UNCONDITIONAL_CALL)  ; CScat * core_scat.cpp_CScat_ctor_FUN_0051e9a0(CScat * this_ptr)
    ADD ESP,0x4                         ; 0051e988
    RET                                 ; 0051e98b


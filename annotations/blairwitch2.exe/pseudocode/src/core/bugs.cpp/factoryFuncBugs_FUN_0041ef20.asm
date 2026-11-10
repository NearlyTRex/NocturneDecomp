; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_factoryFuncBugs_FUN_0041ef20(void)
;
;
; Called Functions:
;   core_bugs.cpp_CBugs_ctor_FUN_0041ef50
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x1e634                        ; 0041ef20
        ;   Label: core_bugs.cpp_factoryFuncBugs_FUN_0041ef20
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 0041ef25
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0041ef2a
    TEST EAX,EAX                        ; 0041ef2d
    JNZ 0x0041ef32                      ; 0041ef2f
        ;   XREF to: 0041ef32 (CONDITIONAL_JUMP)  ; LAB_0041ef32
    RET                                 ; 0041ef31
    PUSH EAX                            ; 0041ef32
        ;   Label: LAB_0041ef32
    CALL core_bugs.cpp_CBugs_ctor_FUN_0041ef50 ; 0041ef33
        ;   XREF to: 0041ef50 (UNCONDITIONAL_CALL)  ; CBugs * core_bugs.cpp_CBugs_ctor_FUN_0041ef50(CBugs * this_ptr)
    ADD ESP,0x4                         ; 0041ef38
    RET                                 ; 0041ef3b


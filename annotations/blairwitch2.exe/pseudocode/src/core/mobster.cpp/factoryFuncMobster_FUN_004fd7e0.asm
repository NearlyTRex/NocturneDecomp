; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mobster_cpp_factoryFuncMobster_FUN_004fd7e0(void)
;
;
; Called Functions:
;   core_mobster.cpp_CMobster_ctor_FUN_004fd810
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10bd0                        ; 004fd7e0
        ;   Label: core_mobster.cpp_factoryFuncMobster_FUN_004fd7e0
    CALL crt_unknown.c_FUN_005b8be2     ; 004fd7e5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 004fd7ea
    TEST EAX,EAX                        ; 004fd7ed
    JNZ 0x004fd7f2                      ; 004fd7ef
        ;   XREF to: 004fd7f2 (CONDITIONAL_JUMP)  ; LAB_004fd7f2
    RET                                 ; 004fd7f1
    PUSH EAX                            ; 004fd7f2
        ;   Label: LAB_004fd7f2
    CALL core_mobster.cpp_CMobster_ctor_FUN_004fd810 ; 004fd7f3
        ;   XREF to: 004fd810 (UNCONDITIONAL_CALL)  ; CMobster * core_mobster.cpp_CMobster_ctor_FUN_004fd810(CMobster * this_ptr)
    ADD ESP,0x4                         ; 004fd7f8
    RET                                 ; 004fd7fb


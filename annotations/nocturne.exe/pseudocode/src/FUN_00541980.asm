; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00541980(void)
;
;
; Called Functions:
;   core_svetlana.cpp_CSvetlana_ctor_FUN_005419b0
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x950c0                        ; 00541980
        ;   Label: FUN_00541980
    CALL FUN_0056497c                   ; 00541985
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0054198a
    TEST EAX,EAX                        ; 0054198d
    JNZ 0x00541992                      ; 0054198f
        ;   XREF to: 00541992 (CONDITIONAL_JUMP)  ; LAB_00541992
    RET                                 ; 00541991
    PUSH EAX                            ; 00541992
        ;   Label: LAB_00541992
    CALL core_svetlana.cpp_CSvetlana_ctor_FUN_005419b0 ; 00541993
        ;   XREF to: 005419b0 (UNCONDITIONAL_CALL)  ; undefined core_svetlana.cpp_CSvetlana_ctor_FUN_005419b0()
    ADD ESP,0x4                         ; 00541998
    RET                                 ; 0054199b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_script_cpp_staticInit_FUN_005430c0(void)
;
;
; Called Functions:
;   core_script.cpp_CScript_ctor_FUN_005436d0
;   crt_stdlib.c__atexit_FUN_005c1093
;   shape_edittool.cpp_CPickList_ctor_FUN_0049a620
;
; *****************************************************************************

section .text

    PUSH 0x1e818c0                      ; 005430c0
        ;   Label: core_script.cpp_staticInit_FUN_005430c0
    CALL shape_edittool.cpp_CPickList_ctor_FUN_0049a620 ; 005430c5
        ;   XREF to: 0049a620 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_0049a620(CPickList * this_ptr)
    ADD ESP,0x4                         ; 005430ca
    PUSH 0x622ab0                       ; 005430cd
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 005430d2
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005430d7
    PUSH 0x1e81c80                      ; 005430da
    CALL core_script.cpp_CScript_ctor_FUN_005436d0 ; 005430df
        ;   XREF to: 005436d0 (UNCONDITIONAL_CALL)  ; CScript * core_script.cpp_CScript_ctor_FUN_005436d0(CScript * this_ptr)
    ADD ESP,0x4                         ; 005430e4
    PUSH 0x622ac0                       ; 005430e7
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 005430ec
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005430f1
    RET                                 ; 005430f4


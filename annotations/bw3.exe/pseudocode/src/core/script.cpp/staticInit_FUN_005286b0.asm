; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_script_cpp_staticInit_FUN_005286b0(void)
;
;
; Called Functions:
;   core_script.cpp_CScript_ctor_FUN_00528ce0
;   crt_stdlib.c__atexit_FUN_005a3e13
;   shape_edittool.cpp_CPickList_ctor_FUN_004831c0
;
; *****************************************************************************

section .text

    PUSH 0x1ed7020                      ; 005286b0
        ;   Label: core_script.cpp_staticInit_FUN_005286b0
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004831c0 ; 005286b5
        ;   XREF to: 004831c0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004831c0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 005286ba
    PUSH 0x6039c0                       ; 005286bd
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 005286c2
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005286c7
    PUSH 0x1ed73e0                      ; 005286ca
    CALL core_script.cpp_CScript_ctor_FUN_00528ce0 ; 005286cf
        ;   XREF to: 00528ce0 (UNCONDITIONAL_CALL)  ; CScript * core_script.cpp_CScript_ctor_FUN_00528ce0(CScript * this_ptr)
    ADD ESP,0x4                         ; 005286d4
    PUSH 0x6039d0                       ; 005286d7
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 005286dc
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005286e1
    RET                                 ; 005286e4


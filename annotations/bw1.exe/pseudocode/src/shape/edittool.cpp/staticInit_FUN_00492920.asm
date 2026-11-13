; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_staticInit_FUN_00492920(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005c1093
;   shape_edittool.cpp_CEditorTools_ctor_FUN_00493ba0
;
; *****************************************************************************

section .text

    PUSH 0x1c3eb54                      ; 00492920
        ;   Label: shape_edittool.cpp_staticInit_FUN_00492920
    CALL shape_edittool.cpp_CEditorTools_ctor_FUN_00493ba0 ; 00492925
        ;   XREF to: 00493ba0 (UNCONDITIONAL_CALL)  ; CEditorTools * shape_edittool.cpp_CEditorTools_ctor_FUN_00493ba0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0049292a
    PUSH 0x61abb0                       ; 0049292d
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 00492932
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00492937
    RET                                 ; 0049293a


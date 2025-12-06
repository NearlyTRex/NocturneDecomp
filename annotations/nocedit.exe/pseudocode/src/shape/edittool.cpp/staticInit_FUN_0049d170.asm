; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_staticInit_FUN_0049d170(void)
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode g_CEditorToolsDestructorNode
;   CEditorTools g_CEditorToolsPtr
;
; Called Functions:
;   crt_stdlib.c_atexit_FUN_005ff060
;   shape_edittool.cpp_CEditorTools_ctor_FUN_0049df80
;
; *****************************************************************************

section .text

    PUSH 0x2cf1cd4                      ; 0049d170 | CEditorTools g_CEditorToolsPtr
        ;   Label: shape_edittool.cpp_staticInit_FUN_0049d170
    CALL shape_edittool.cpp_CEditorTools_ctor_FUN_0049df80 ; 0049d175 | CEditorTools * shape_edittool.cpp_CEditorTools_ctor_FUN_0049df80(CEditorTools * this_ptr)
        ;   XREF to: 0049df80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049d17a
    PUSH 0x678a50                       ; 0049d17d | WatcomStaticDestructorNode g_CEditorToolsDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 0049d182 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049d187
    RET                                 ; 0049d18a


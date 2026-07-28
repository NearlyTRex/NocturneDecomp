; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_staticInit_FUN_0046ef80(void)
;
;
; Called Functions:
;   crt_unknown.c__atexit_FUN_00564bb0
;   shape_edittool.cpp_CEditorTools_ctor_FUN_0046f9f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcd074                      ; 0046ef80
        ;   Label: shape_edittool.cpp_staticInit_FUN_0046ef80
    CALL shape_edittool.cpp_CEditorTools_ctor_FUN_0046f9f0 ; 0046ef85
        ;   XREF to: 0046f9f0 (UNCONDITIONAL_CALL)  ; CEditorTools * shape_edittool.cpp_CEditorTools_ctor_FUN_0046f9f0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0046ef8a
    PUSH 0x5b6d40                       ; 0046ef8d
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 0046ef92
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0046ef97
    RET                                 ; 0046ef9a


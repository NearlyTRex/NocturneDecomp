; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_staticInit_FUN_0047a430(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005b8d8c
;   shape_edittool.cpp_CEditorTools_ctor_FUN_0047b660
;
; *****************************************************************************

section .text

    PUSH 0x1c25594                      ; 0047a430
        ;   Label: shape_edittool.cpp_staticInit_FUN_0047a430
    CALL shape_edittool.cpp_CEditorTools_ctor_FUN_0047b660 ; 0047a435
        ;   XREF to: 0047b660 (UNCONDITIONAL_CALL)  ; CEditorTools * shape_edittool.cpp_CEditorTools_ctor_FUN_0047b660(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0047a43a
    PUSH 0x6138d0                       ; 0047a43d
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 0047a442
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0047a447
    RET                                 ; 0047a44a


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_staticInit_FUN_0047b4c0(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005a3e13
;   shape_edittool.cpp_CEditorTools_ctor_FUN_0047c740
;
; *****************************************************************************

section .text

    PUSH 0x1c5b0e4                      ; 0047b4c0
        ;   Label: shape_edittool.cpp_staticInit_FUN_0047b4c0
    CALL shape_edittool.cpp_CEditorTools_ctor_FUN_0047c740 ; 0047b4c5
        ;   XREF to: 0047c740 (UNCONDITIONAL_CALL)  ; CEditorTools * shape_edittool.cpp_CEditorTools_ctor_FUN_0047c740(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0047b4ca
    PUSH 0x5fb130                       ; 0047b4cd
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 0047b4d2
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 0047b4d7
    RET                                 ; 0047b4da


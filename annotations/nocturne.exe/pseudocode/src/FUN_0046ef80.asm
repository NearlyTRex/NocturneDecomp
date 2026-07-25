; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046ef80(void)
;
;
; Called Functions:
;   FUN_00564bb0
;   shape_edittool.cpp_CEditorTools_ctor_FUN_0046f9f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcd074                      ; 0046ef80
        ;   Label: FUN_0046ef80
    CALL shape_edittool.cpp_CEditorTools_ctor_FUN_0046f9f0 ; 0046ef85
        ;   XREF to: 0046f9f0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_ctor_FUN_0046f9f0()
    ADD ESP,0x4                         ; 0046ef8a
    PUSH 0x5b6d40                       ; 0046ef8d
    CALL FUN_00564bb0                   ; 0046ef92
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 0046ef97
    RET                                 ; 0046ef9a


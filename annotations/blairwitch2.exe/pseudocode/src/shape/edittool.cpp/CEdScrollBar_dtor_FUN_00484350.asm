; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdScrollBar * __cdecl shape_edittool_cpp_CEdScrollBar_dtor_FUN_00484350(CEdScrollBar *this_ptr,uint flags)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_dtor_FUN_004820b0 at 004820f3
;
; Called Functions:
;   shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_00484370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484350
        ;   Label: shape_edittool.cpp_CEdScrollBar_dtor_FUN_00484350
    MOV EBX,dword ptr [ESP + 0x8]       ; 00484351
    PUSH EBX                            ; 00484355
    CALL shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_00484370 ; 00484356
        ;   XREF to: 00484370 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_00484370(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 0048435b
    MOV EAX,EBX                         ; 0048435e
    POP EBX                             ; 00484360
    RET                                 ; 00484361


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdScrollBar * __cdecl shape_edittool_cpp_CEdScrollBar_dtor_FUN_0049c9b0(CEdScrollBar *this_ptr,uint flags)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_dtor_FUN_0049a710 at 0049a753
;
; Called Functions:
;   shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_0049c9d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c9b0
        ;   Label: shape_edittool.cpp_CEdScrollBar_dtor_FUN_0049c9b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049c9b1
    PUSH EBX                            ; 0049c9b5
    CALL shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_0049c9d0 ; 0049c9b6
        ;   XREF to: 0049c9d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_0049c9d0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 0049c9bb
    MOV EAX,EBX                         ; 0049c9be
    POP EBX                             ; 0049c9c0
    RET                                 ; 0049c9c1


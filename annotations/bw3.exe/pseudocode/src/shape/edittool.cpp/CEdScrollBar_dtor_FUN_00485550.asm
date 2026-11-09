; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdScrollBar * __cdecl shape_edittool_cpp_CEdScrollBar_dtor_FUN_00485550(CEdScrollBar *this_ptr,uint flags)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_dtor_FUN_004832b0 at 004832f3
;
; Called Functions:
;   shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_00485570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485550
        ;   Label: shape_edittool.cpp_CEdScrollBar_dtor_FUN_00485550
    MOV EBX,dword ptr [ESP + 0x8]       ; 00485551
    PUSH EBX                            ; 00485555
    CALL shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_00485570 ; 00485556
        ;   XREF to: 00485570 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_00485570(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 0048555b
    MOV EAX,EBX                         ; 0048555e
    POP EBX                             ; 00485560
    RET                                 ; 00485561


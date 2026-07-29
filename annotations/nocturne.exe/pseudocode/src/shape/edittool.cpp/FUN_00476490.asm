; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdScrollBar * __cdecl shape_edittool_cpp_FUN_00476490(CEdScrollBar *this_ptr,uint flags)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 at 00474d15
;
; Called Functions:
;   shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004764b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476490
        ;   Label: shape_edittool.cpp_FUN_00476490
    MOV EBX,dword ptr [ESP + 0x8]       ; 00476491
    PUSH EBX                            ; 00476495
    CALL shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004764b0 ; 00476496
        ;   XREF to: 004764b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004764b0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 0047649b
    MOV EAX,EBX                         ; 0047649e
    POP EBX                             ; 004764a0
    RET                                 ; 004764a1


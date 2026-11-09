; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdScrollBar * __cdecl shape_edittool_cpp_CEdScrollBar_ctor_FUN_0049c970(CEdScrollBar *this_ptr)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_ctor_FUN_0049a620 at 0049a636
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049c970
        ;   Label: shape_edittool.cpp_CEdScrollBar_ctor_FUN_0049c970
    MOV dword ptr [EAX + 0x4],0x1       ; 0049c974
    MOV dword ptr [EAX],0x0             ; 0049c97b
    MOV dword ptr [EAX + 0x8],0x1       ; 0049c981
    MOV dword ptr [EAX + 0x20],0x0      ; 0049c988
    MOV dword ptr [EAX + 0xc],0x1       ; 0049c98f
    MOV dword ptr [EAX + 0x10],0x0      ; 0049c996
    MOV EDX,dword ptr [EAX + 0x20]      ; 0049c99d
    MOV dword ptr [EAX + 0x1c],EDX      ; 0049c9a0
    MOV dword ptr [EAX + 0x18],EDX      ; 0049c9a3
    MOV dword ptr [EAX + 0x14],EDX      ; 0049c9a6
    RET                                 ; 0049c9a9


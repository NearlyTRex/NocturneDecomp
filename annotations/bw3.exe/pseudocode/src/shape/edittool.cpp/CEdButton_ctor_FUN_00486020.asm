; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdButton * __cdecl shape_edittool_cpp_CEdButton_ctor_FUN_00486020(CEdButton *this_ptr)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   shape_edittool.cpp_CPickList_ctor_FUN_004831c0 at 004831e2
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0 at 0047ca47
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c3fe
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00486020
        ;   Label: shape_edittool.cpp_CEdButton_ctor_FUN_00486020
    MOV byte ptr [EAX + 0x4],0x0        ; 00486024
    MOV byte ptr [EAX + 0x1c],0x0       ; 00486028
    MOV dword ptr [EAX + 0x14],0x0      ; 0048602c
    MOV dword ptr [EAX + 0x18],0x0      ; 00486033
    MOV dword ptr [EAX],0x0             ; 0048603a
    MOV EDX,dword ptr [EAX + 0x14]      ; 00486040
    MOV dword ptr [EAX + 0x10],EDX      ; 00486043
    MOV dword ptr [EAX + 0xc],EDX       ; 00486046
    MOV dword ptr [EAX + 0x8],EDX       ; 00486049
    RET                                 ; 0048604c


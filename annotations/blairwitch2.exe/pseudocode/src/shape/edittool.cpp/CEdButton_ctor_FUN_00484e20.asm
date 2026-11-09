; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdButton * __cdecl shape_edittool_cpp_CEdButton_ctor_FUN_00484e20(CEdButton *this_ptr)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   shape_edittool.cpp_CPickList_ctor_FUN_00481fc0 at 00481fe2
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800 at 0047b967
;   shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0 at 0047b32e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00484e20
        ;   Label: shape_edittool.cpp_CEdButton_ctor_FUN_00484e20
    MOV byte ptr [EAX + 0x4],0x0        ; 00484e24
    MOV byte ptr [EAX + 0x1c],0x0       ; 00484e28
    MOV dword ptr [EAX + 0x14],0x0      ; 00484e2c
    MOV dword ptr [EAX + 0x18],0x0      ; 00484e33
    MOV dword ptr [EAX],0x0             ; 00484e3a
    MOV EDX,dword ptr [EAX + 0x14]      ; 00484e40
    MOV dword ptr [EAX + 0x10],EDX      ; 00484e43
    MOV dword ptr [EAX + 0xc],EDX       ; 00484e46
    MOV dword ptr [EAX + 0x8],EDX       ; 00484e49
    RET                                 ; 00484e4c


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_getFontSpaceCharWidth_FUN_004a6f10(CBitFont *font_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   font_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a6f10
        ;   Label: shape_edittool.cpp_getFontSpaceCharWidth_FUN_004a6f10
    MOV EAX,dword ptr [EAX + 0x25e8]    ; 004a6f14
    RET                                 ; 004a6f1a


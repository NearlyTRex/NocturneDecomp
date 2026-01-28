; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uchar __cdecl shape_quantize_cpp_CBitmap_getBitDepth_FUN_00556dc0(CBitmap *this_ptr)
;
; Parameters:
; CBitmap *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00556dc0
        ;   Label: shape_quantize.cpp_CBitmap_getBitDepth_FUN_00556dc0
    MOV AL,byte ptr [EAX + 0x1a]        ; 00556dc4
    RET                                 ; 00556dc7


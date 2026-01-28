; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl short __cdecl shape_quantize_cpp_CBitmap_getHeight_FUN_00556da0(CBitmap *this_ptr)
;
; Parameters:
; CBitmap *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00556da0
        ;   Label: shape_quantize.cpp_CBitmap_getHeight_FUN_00556da0
    MOV AX,word ptr [EAX + 0x16]        ; 00556da4
    RET                                 ; 00556da8


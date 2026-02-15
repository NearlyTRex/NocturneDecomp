; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; short __cdecl shape_quantize_cpp_CBitmap_getWidth_FUN_00556d90(CBitmap *this_ptr)
;
; Parameters:
; CBitmap *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00556d90
        ;   Label: shape_quantize.cpp_CBitmap_getWidth_FUN_00556d90
    MOV AX,word ptr [EAX + 0x14]        ; 00556d94
    RET                                 ; 00556d98


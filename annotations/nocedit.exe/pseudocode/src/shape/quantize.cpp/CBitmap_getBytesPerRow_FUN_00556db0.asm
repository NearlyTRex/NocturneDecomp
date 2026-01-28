; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl short __cdecl shape_quantize_cpp_CBitmap_getBytesPerRow_FUN_00556db0(CBitmap *this_ptr)
;
; Parameters:
; CBitmap *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00556db0
        ;   Label: shape_quantize.cpp_CBitmap_getBytesPerRow_FUN_00556db0
    MOV AX,word ptr [EAX + 0x18]        ; 00556db4
    RET                                 ; 00556db8


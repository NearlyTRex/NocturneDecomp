; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * shape_quantize.cpp_CBitmap_getPalette_FUN_00556de0(CBitmap * this_ptr)
;
; Parameters:
; CBitmap *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00556de0
        ;   Label: shape_quantize.cpp_CBitmap_getPalette_FUN_00556de0
    MOV EAX,dword ptr [EAX + 0x24]      ; 00556de4
    RET                                 ; 00556de7


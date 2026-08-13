; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getWidth_FUN_004f5cf0(CPackedBitmap *this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f5cf0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_getWidth_FUN_004f5cf0
    MOV EAX,dword ptr [EAX + 0x18]      ; 004f5cf4
    RET                                 ; 004f5cf7


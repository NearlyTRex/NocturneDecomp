; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_pkbmpset_cpp_CPackedBitmap_getHeight_FUN_004f5d00(CPackedBitmap *this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f5d00
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmap_getHeight_FUN_004f5d00
    MOV EAX,dword ptr [EAX + 0x1c]      ; 004f5d04
    RET                                 ; 004f5d07


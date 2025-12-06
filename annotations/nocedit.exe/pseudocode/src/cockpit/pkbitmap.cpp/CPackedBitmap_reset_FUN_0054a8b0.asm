; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0(CPackedBitmap * this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0054a820 at 0054a826
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0 at 0054a912
;   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0054a840 at 0054a849
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054a8b0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0
    MOV dword ptr [EAX + 0x18],0x0      ; 0054a8b4
    MOV dword ptr [EAX + 0x1c],0x0      ; 0054a8bb
    MOV dword ptr [EAX + 0x20],0x0      ; 0054a8c2
    MOV dword ptr [EAX + 0x14],0x0      ; 0054a8c9
    RET                                 ; 0054a8d0


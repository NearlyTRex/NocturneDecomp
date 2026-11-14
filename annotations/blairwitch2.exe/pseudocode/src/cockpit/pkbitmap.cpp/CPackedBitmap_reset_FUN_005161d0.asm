; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_005161d0(CPackedBitmap *this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_00516140 at 00516146
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_00516200 at 0051621a
;   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_00516160 at 00516169
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005161d0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_005161d0
    MOV dword ptr [EAX + 0x18],0x0      ; 005161d4
    MOV dword ptr [EAX + 0x1c],0x0      ; 005161db
    MOV dword ptr [EAX + 0x20],0x0      ; 005161e2
    MOV dword ptr [EAX + 0x14],0x0      ; 005161e9
    RET                                 ; 005161f0


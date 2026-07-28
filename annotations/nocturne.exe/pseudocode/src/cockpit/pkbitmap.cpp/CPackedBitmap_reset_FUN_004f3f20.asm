; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_004f3f20(CPackedBitmap *this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_004f3e90 at 004f3e96
;   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_004f3eb0 at 004f3eb9
;   cockpit_pkbitmap.cpp_FUN_004f3f50 at 004f3f6a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3f20
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_004f3f20
    MOV dword ptr [EAX + 0x18],0x0      ; 004f3f24
    MOV dword ptr [EAX + 0x1c],0x0      ; 004f3f2b
    MOV dword ptr [EAX + 0x20],0x0      ; 004f3f32
    MOV dword ptr [EAX + 0x14],0x0      ; 004f3f39
    RET                                 ; 004f3f40


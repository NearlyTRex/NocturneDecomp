; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_0050f200(CPackedBitmap *this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0050f170 at 0050f176
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0050f230 at 0050f24a
;   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0050f190 at 0050f199
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050f200
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0050f200
    MOV dword ptr [EAX + 0x18],0x0      ; 0050f204
    MOV dword ptr [EAX + 0x1c],0x0      ; 0050f20b
    MOV dword ptr [EAX + 0x20],0x0      ; 0050f212
    MOV dword ptr [EAX + 0x14],0x0      ; 0050f219
    RET                                 ; 0050f220


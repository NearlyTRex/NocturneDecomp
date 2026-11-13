; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_00537520(CPackedBitmap *this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_00537490 at 00537496
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_00537550 at 0053756a
;   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_005374b0 at 005374b9
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00537520
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_00537520
    MOV dword ptr [EAX + 0x18],0x0      ; 00537524
    MOV dword ptr [EAX + 0x1c],0x0      ; 0053752b
    MOV dword ptr [EAX + 0x20],0x0      ; 00537532
    MOV dword ptr [EAX + 0x14],0x0      ; 00537539
    RET                                 ; 00537540


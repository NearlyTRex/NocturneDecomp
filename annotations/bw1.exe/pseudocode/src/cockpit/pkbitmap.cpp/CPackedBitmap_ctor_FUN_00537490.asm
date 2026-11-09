; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_00537490(CPackedBitmap *this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_FUN_005385d0 at 005386fd
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_00537520
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537490
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_00537490
    MOV EBX,dword ptr [ESP + 0x8]       ; 00537491
    PUSH EBX                            ; 00537495
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_00537520 ; 00537496
        ;   XREF to: 00537520 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_00537520(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0053749b
    PUSH 0x14                           ; 0053749e
    PUSH 0x0                            ; 005374a0
    PUSH EBX                            ; 005374a2
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005374a3
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005374a8
    MOV EAX,EBX                         ; 005374ab
    POP EBX                             ; 005374ad
    RET                                 ; 005374ae


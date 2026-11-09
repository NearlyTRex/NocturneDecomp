; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_0050f170(CPackedBitmap *this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_FUN_005102b0 at 005103dd
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0050f200
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f170
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0050f170
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050f171
    PUSH EBX                            ; 0050f175
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0050f200 ; 0050f176
        ;   XREF to: 0050f200 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0050f200(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0050f17b
    PUSH 0x14                           ; 0050f17e
    PUSH 0x0                            ; 0050f180
    PUSH EBX                            ; 0050f182
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0050f183
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0050f188
    MOV EAX,EBX                         ; 0050f18b
    POP EBX                             ; 0050f18d
    RET                                 ; 0050f18e


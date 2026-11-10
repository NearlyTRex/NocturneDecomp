; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_00516140(CPackedBitmap *this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_00517280 at 005173ad
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_005161d0
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516140
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_00516140
    MOV EBX,dword ptr [ESP + 0x8]       ; 00516141
    PUSH EBX                            ; 00516145
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_005161d0 ; 00516146
        ;   XREF to: 005161d0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_005161d0(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0051614b
    PUSH 0x14                           ; 0051614e
    PUSH 0x0                            ; 00516150
    PUSH EBX                            ; 00516152
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00516153
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00516158
    MOV EAX,EBX                         ; 0051615b
    POP EBX                             ; 0051615d
    RET                                 ; 0051615e


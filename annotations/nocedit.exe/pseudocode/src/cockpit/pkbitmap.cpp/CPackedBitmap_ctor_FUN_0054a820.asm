; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPackedBitmap * cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0054a820(CPackedBitmap * this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0 at 0054bae7
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a820
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0054a820
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054a821
    PUSH EBX                            ; 0054a825
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0 ; 0054a826 | void cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0(CPackedBitmap * this_ptr)
        ;   XREF to: 0054a8b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054a82b
    PUSH 0x14                           ; 0054a82e
    PUSH 0x0                            ; 0054a830
    PUSH EBX                            ; 0054a832
    CALL crt_memory.c_memset_FUN_005fde40 ; 0054a833 | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054a838
    MOV EAX,EBX                         ; 0054a83b
    POP EBX                             ; 0054a83d
    RET                                 ; 0054a83e


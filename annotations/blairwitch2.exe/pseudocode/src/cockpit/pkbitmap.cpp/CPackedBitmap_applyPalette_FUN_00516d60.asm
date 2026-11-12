; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_00516d60(CPackedBitmap *this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_00516960 at 005169a1
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00517130 at 005171c4
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_005168e0 at 00516944
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_00516cb0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00516d60
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_00516d60
    PUSH EAX                            ; 00516d64
    PUSH EAX                            ; 00516d65
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_00516cb0 ; 00516d66
        ;   XREF to: 00516cb0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_00516cb0(CPackedBitmap * this_ptr, char * act_filename)
    ADD ESP,0x8                         ; 00516d6b
    RET                                 ; 00516d6e


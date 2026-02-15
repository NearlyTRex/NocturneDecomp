; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_0054b4a0(CPackedBitmap *this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080 at 0054b0cb
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860 at 0054b8fe
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000 at 0054b06e
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_0054c660 at 0054c67e
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_0054b3f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054b4a0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
    PUSH EAX                            ; 0054b4a4
    PUSH EAX                            ; 0054b4a5
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_0054b3f0 ; 0054b4a6
        ;   XREF to: 0054b3f0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_0054b3f0(CPackedBitmap * this_ptr, char * act_filename)
    ADD ESP,0x8                         ; 0054b4ab
    RET                                 ; 0054b4ae


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_0050fd90(CPackedBitmap *this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0050f990 at 0050f9d1
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00510160 at 005101f4
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0050f910 at 0050f974
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_0050fce0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050fd90
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0050fd90
    PUSH EAX                            ; 0050fd94
    PUSH EAX                            ; 0050fd95
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_0050fce0 ; 0050fd96
        ;   XREF to: 0050fce0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_0050fce0(CPackedBitmap * this_ptr, char * act_filename)
    ADD ESP,0x8                         ; 0050fd9b
    RET                                 ; 0050fd9e


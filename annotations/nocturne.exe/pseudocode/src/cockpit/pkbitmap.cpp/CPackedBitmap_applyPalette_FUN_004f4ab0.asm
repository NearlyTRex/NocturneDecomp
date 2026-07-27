; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_004f4ab0(undefined4 param_1)
;
;
; XREF[4]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0 at 004f46f1
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_004f4e40 at 004f4ed4
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630 at 004f4694
;   cockpit_pkbmpset.cpp_FUN_004f5bb0 at 004f5bce
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_004f4a00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f4ab0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_004f4ab0
    PUSH EAX                            ; 004f4ab4
    PUSH EAX                            ; 004f4ab5
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_004f4a00 ; 004f4ab6
        ;   XREF to: 004f4a00 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_004f4a00()
    ADD ESP,0x8                         ; 004f4abb
    RET                                 ; 004f4abe


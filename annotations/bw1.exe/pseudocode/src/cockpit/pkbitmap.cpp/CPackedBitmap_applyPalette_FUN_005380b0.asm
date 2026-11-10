; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_005380b0(CPackedBitmap *this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00538480 at 00538514
;   cockpit_pkbitmap.cpp_FUN_00537c30 at 00537c94
;   cockpit_pkbitmap.cpp_FUN_00537cb0 at 00537cf1
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_00538000
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005380b0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_005380b0
    PUSH EAX                            ; 005380b4
    PUSH EAX                            ; 005380b5
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_00538000 ; 005380b6
        ;   XREF to: 00538000 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_00538000(CPackedBitmap * this_ptr, char * act_filename)
    ADD ESP,0x8                         ; 005380bb
    RET                                 ; 005380be


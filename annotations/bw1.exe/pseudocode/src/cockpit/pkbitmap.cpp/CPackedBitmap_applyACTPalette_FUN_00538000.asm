; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyACTPalette_FUN_00538000(CPackedBitmap *this_ptr,char *act_filename)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   act_filename
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_005380b0 at 005380b6
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00437400
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00538050
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 00538000
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_00538000
    MOV EAX,ESP                         ; 00538006
    PUSH EAX                            ; 00538008
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00538009
    PUSH EDX                            ; 00538010
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00437400 ; 00538011
        ;   XREF to: 00437400 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00437400(char * filename, uchar * output_palette)
    ADD ESP,0x8                         ; 00538016
    MOV EAX,ESP                         ; 00538019
    PUSH EAX                            ; 0053801b
    MOV ECX,dword ptr [ESP + 0x108]     ; 0053801c
    PUSH ECX                            ; 00538023
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00538050 ; 00538024
        ;   XREF to: 00538050 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00538050(CPackedBitmap * this_ptr, uchar * palette_buffer)
    ADD ESP,0x8                         ; 00538029
    ADD ESP,0x100                       ; 0053802c
    LEA EAX,[EAX]                       ; 00538032
    LEA EDX,[EDX]                       ; 00538038
    MOV EAX,EAX                         ; 0053803e
    RET                                 ; 00538040


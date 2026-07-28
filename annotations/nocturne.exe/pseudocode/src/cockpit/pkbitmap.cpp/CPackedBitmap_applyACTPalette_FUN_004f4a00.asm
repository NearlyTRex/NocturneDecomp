; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyACTPalette_FUN_004f4a00(CPackedBitmap *this_ptr,char *act_filename)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   act_filename
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_004f4ab0 at 004f4ab6
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042d3f0
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 004f4a00
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_004f4a00
    MOV EAX,ESP                         ; 004f4a06
    PUSH EAX                            ; 004f4a08
    MOV EDX,dword ptr [ESP + 0x10c]     ; 004f4a09
    PUSH EDX                            ; 004f4a10
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042d3f0 ; 004f4a11
        ;   XREF to: 0042d3f0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042d3f0(char * filename, uchar * output_palette)
    ADD ESP,0x8                         ; 004f4a16
    MOV EAX,ESP                         ; 004f4a19
    PUSH EAX                            ; 004f4a1b
    MOV ECX,dword ptr [ESP + 0x108]     ; 004f4a1c
    PUSH ECX                            ; 004f4a23
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50 ; 004f4a24
        ;   XREF to: 004f4a50 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50(CPackedBitmap * this_ptr, uchar * palette_buffer)
    ADD ESP,0x8                         ; 004f4a29
    ADD ESP,0x100                       ; 004f4a2c
    LEA EAX,[EAX]                       ; 004f4a32
    LEA EDX,[EDX]                       ; 004f4a38
    MOV EAX,EAX                         ; 004f4a3e
    RET                                 ; 004f4a40


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_FUN_00516cb0(CPackedBitmap *this_ptr,char *act_filename)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   act_filename
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_00516d60 at 00516d66
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042c6f0
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00516d00
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 00516cb0
        ;   Label: cockpit_pkbitmap.cpp_FUN_00516cb0
    MOV EAX,ESP                         ; 00516cb6
    PUSH EAX                            ; 00516cb8
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00516cb9
    PUSH EDX                            ; 00516cc0
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042c6f0 ; 00516cc1
        ;   XREF to: 0042c6f0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042c6f0(char * filename, uchar * output_palette)
    ADD ESP,0x8                         ; 00516cc6
    MOV EAX,ESP                         ; 00516cc9
    PUSH EAX                            ; 00516ccb
    MOV ECX,dword ptr [ESP + 0x108]     ; 00516ccc
    PUSH ECX                            ; 00516cd3
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00516d00 ; 00516cd4
        ;   XREF to: 00516d00 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00516d00(CPackedBitmap * this_ptr, uchar * palette_buffer)
    ADD ESP,0x8                         ; 00516cd9
    ADD ESP,0x100                       ; 00516cdc
    LEA EAX,[EAX]                       ; 00516ce2
    LEA EDX,[EDX]                       ; 00516ce8
    MOV EAX,EAX                         ; 00516cee
    RET                                 ; 00516cf0


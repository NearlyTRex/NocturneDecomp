; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00517e40(CPackedBitmapSet *this_ptr,char *act_filename)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   act_filename
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00517f80 at 00517f89
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042c6f0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00517e90
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 00517e40
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00517e40
    MOV EAX,ESP                         ; 00517e46
    PUSH EAX                            ; 00517e48
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00517e49
    PUSH EDX                            ; 00517e50
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042c6f0 ; 00517e51
        ;   XREF to: 0042c6f0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042c6f0(char * filename, uchar * output_palette)
    ADD ESP,0x8                         ; 00517e56
    MOV EAX,ESP                         ; 00517e59
    PUSH EAX                            ; 00517e5b
    MOV ECX,dword ptr [ESP + 0x108]     ; 00517e5c
    PUSH ECX                            ; 00517e63
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00517e90 ; 00517e64
        ;   XREF to: 00517e90 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00517e90(CPackedBitmapSet * this_ptr, char * palette_data)
    ADD ESP,0x8                         ; 00517e69
    ADD ESP,0x100                       ; 00517e6c
    LEA EAX,[EAX]                       ; 00517e72
    LEA EDX,[EDX]                       ; 00517e78
    MOV EAX,EAX                         ; 00517e7e
    RET                                 ; 00517e80


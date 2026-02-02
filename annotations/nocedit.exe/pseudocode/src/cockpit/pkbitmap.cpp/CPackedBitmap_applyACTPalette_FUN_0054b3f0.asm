; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyACTPalette_FUN_0054b3f0 (CPackedBitmap *this_ptr,char *act_filename)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   act_filename
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0 at 0054b4a6
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 0054b3f0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_0054b3f0
    MOV EAX,ESP                         ; 0054b3f6
    PUSH EAX                            ; 0054b3f8
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0054b3f9
    PUSH EDX                            ; 0054b400
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30 ; 0054b401
        ;   XREF to: 00431a30 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30(char * filename, char * output_palette)
    ADD ESP,0x8                         ; 0054b406
    MOV EAX,ESP                         ; 0054b409
    PUSH EAX                            ; 0054b40b
    MOV ECX,dword ptr [ESP + 0x108]     ; 0054b40c
    PUSH ECX                            ; 0054b413
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440 ; 0054b414
        ;   XREF to: 0054b440 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440(CPackedBitmap * this_ptr, uchar * palette_buffer)
    ADD ESP,0x8                         ; 0054b419
    ADD ESP,0x100                       ; 0054b41c
    LEA EAX,[EAX]                       ; 0054b422
    LEA EDX,[EDX]                       ; 0054b428
    MOV EAX,EAX                         ; 0054b42e
    RET                                 ; 0054b430


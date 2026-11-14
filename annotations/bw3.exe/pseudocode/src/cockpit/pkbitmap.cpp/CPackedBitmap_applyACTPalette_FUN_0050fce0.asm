; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyACTPalette_FUN_0050fce0(CPackedBitmap *this_ptr,char *act_filename)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   act_filename
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0050fd90 at 0050fd96
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00435010
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0050fd30
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 0050fce0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_0050fce0
    MOV EAX,ESP                         ; 0050fce6
    PUSH EAX                            ; 0050fce8
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0050fce9
    PUSH EDX                            ; 0050fcf0
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00435010 ; 0050fcf1
        ;   XREF to: 00435010 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00435010(char * filename, uchar * output_palette)
    ADD ESP,0x8                         ; 0050fcf6
    MOV EAX,ESP                         ; 0050fcf9
    PUSH EAX                            ; 0050fcfb
    MOV ECX,dword ptr [ESP + 0x108]     ; 0050fcfc
    PUSH ECX                            ; 0050fd03
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0050fd30 ; 0050fd04
        ;   XREF to: 0050fd30 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0050fd30(CPackedBitmap * this_ptr, uchar * palette_buffer)
    ADD ESP,0x8                         ; 0050fd09
    ADD ESP,0x100                       ; 0050fd0c
    LEA EAX,[EAX]                       ; 0050fd12
    LEA EDX,[EDX]                       ; 0050fd18
    MOV EAX,EAX                         ; 0050fd1e
    RET                                 ; 0050fd20


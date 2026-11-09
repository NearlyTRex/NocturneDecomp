; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadPBMFile_FUN_00510210(CPackedBitmap *this_ptr,int apply_palette_flag)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   apply_palette_flag
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0050fda0 at 0050fdf3
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00510160
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00510210
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_loadPBMFile_FUN_00510210
    MOV EDX,dword ptr [ESP + 0x8]       ; 00510214
    PUSH EDX                            ; 00510218
    PUSH EAX                            ; 00510219
    PUSH EAX                            ; 0051021a
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00510160 ; 0051021b
        ;   XREF to: 00510160 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00510160(CPackedBitmap * this_ptr, char * filename, int apply_palette_flag)
    ADD ESP,0xc                         ; 00510220
    RET                                 ; 00510223


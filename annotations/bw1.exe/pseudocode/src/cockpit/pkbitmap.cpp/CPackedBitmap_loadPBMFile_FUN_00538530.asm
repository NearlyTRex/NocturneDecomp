; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadPBMFile_FUN_00538530(CPackedBitmap *this_ptr,int apply_palette_flag)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   apply_palette_flag
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_005380c0 at 00538113
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00538480
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00538530
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_loadPBMFile_FUN_00538530
    MOV EDX,dword ptr [ESP + 0x8]       ; 00538534
    PUSH EDX                            ; 00538538
    PUSH EAX                            ; 00538539
    PUSH EAX                            ; 0053853a
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00538480 ; 0053853b
        ;   XREF to: 00538480 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00538480(CPackedBitmap * this_ptr, char * filename, int apply_palette_flag)
    ADD ESP,0xc                         ; 00538540
    RET                                 ; 00538543


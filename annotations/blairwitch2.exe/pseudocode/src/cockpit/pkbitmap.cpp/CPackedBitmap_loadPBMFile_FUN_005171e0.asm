; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadPBMFile_FUN_005171e0(CPackedBitmap *this_ptr,int apply_palette_flag)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   apply_palette_flag
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_00516d70 at 00516dc3
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00517130
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005171e0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_loadPBMFile_FUN_005171e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005171e4
    PUSH EDX                            ; 005171e8
    PUSH EAX                            ; 005171e9
    PUSH EAX                            ; 005171ea
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00517130 ; 005171eb
        ;   XREF to: 00517130 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00517130(CPackedBitmap * this_ptr, char * filename, int apply_palette_flag)
    ADD ESP,0xc                         ; 005171f0
    RET                                 ; 005171f3


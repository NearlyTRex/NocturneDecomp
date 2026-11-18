; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00510d70(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   apply_palette_flag
; int              Stack[0xc]:4   bitmap_index
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_00510da0 at 00510e4d
;
; Called Functions:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00510d20
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00510670
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510d70
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00510d70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00510d71
    PUSH EBX                            ; 00510d75
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00510670 ; 00510d76
        ;   XREF to: 00510670 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00510670(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00510d7b
    PUSH 0x0                            ; 00510d7e
    MOV EDX,dword ptr [EBX + 0x24]      ; 00510d80
    PUSH EDX                            ; 00510d83
    MOV ECX,dword ptr [ESP + 0x14]      ; 00510d84
    PUSH ECX                            ; 00510d88
    LEA EAX,[EBX + 0x8]                 ; 00510d89
    PUSH EAX                            ; 00510d8c
    PUSH EBX                            ; 00510d8d
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00510d20 ; 00510d8e
        ;   XREF to: 00510d20 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00510d20(CPackedBitmapSet * this_ptr, char * pbg_filename, int apply_palette_flag, int frames_per_bitmap, ...)
    ADD ESP,0x14                        ; 00510d93
    POP EBX                             ; 00510d96
    RET                                 ; 00510d97


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   apply_palette_flag
; int              Stack[0xc]:4   bitmap_index
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500 at 0054c5ad
;
; Called Functions:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c4d0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054c4d1
    PUSH EBX                            ; 0054c4d5
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60 ; 0054c4d6
        ;   XREF to: 0054bd60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 0054c4db
    PUSH 0x0                            ; 0054c4de
    MOV EDX,dword ptr [EBX + 0x24]      ; 0054c4e0
    PUSH EDX                            ; 0054c4e3
    MOV ECX,dword ptr [ESP + 0x14]      ; 0054c4e4
    PUSH ECX                            ; 0054c4e8
    LEA EAX,[EBX + 0x8]                 ; 0054c4e9
    PUSH EAX                            ; 0054c4ec
    PUSH EBX                            ; 0054c4ed
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480 ; 0054c4ee
        ;   XREF to: 0054c480 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480(CPackedBitmapSet * this_ptr, char * pbg_filename, int apply_palette_flag, int frames_per_bitmap, ...)
    ADD ESP,0x14                        ; 0054c4f3
    POP EBX                             ; 0054c4f6
    RET                                 ; 0054c4f7


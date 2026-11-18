; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00539090(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   apply_palette_flag
; int              Stack[0xc]:4   bitmap_index
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_005390c0 at 0053916d
;
; Called Functions:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00539040
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00538990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00539090
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00539090
    MOV EBX,dword ptr [ESP + 0x8]       ; 00539091
    PUSH EBX                            ; 00539095
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00538990 ; 00539096
        ;   XREF to: 00538990 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00538990(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 0053909b
    PUSH 0x0                            ; 0053909e
    MOV EDX,dword ptr [EBX + 0x24]      ; 005390a0
    PUSH EDX                            ; 005390a3
    MOV ECX,dword ptr [ESP + 0x14]      ; 005390a4
    PUSH ECX                            ; 005390a8
    LEA EAX,[EBX + 0x8]                 ; 005390a9
    PUSH EAX                            ; 005390ac
    PUSH EBX                            ; 005390ad
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00539040 ; 005390ae
        ;   XREF to: 00539040 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00539040(CPackedBitmapSet * this_ptr, char * pbg_filename, int apply_palette_flag, int frames_per_bitmap, ...)
    ADD ESP,0x14                        ; 005390b3
    POP EBX                             ; 005390b6
    RET                                 ; 005390b7


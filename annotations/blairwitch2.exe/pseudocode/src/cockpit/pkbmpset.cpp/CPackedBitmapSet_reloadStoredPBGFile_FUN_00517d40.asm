; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00517d40(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   apply_palette_flag
; int              Stack[0xc]:4   bitmap_index
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_00517d70 at 00517e1d
;
; Called Functions:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00517cf0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00517640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517d40
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00517d40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00517d41
    PUSH EBX                            ; 00517d45
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00517640 ; 00517d46
        ;   XREF to: 00517640 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00517640(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00517d4b
    PUSH 0x0                            ; 00517d4e
    MOV EDX,dword ptr [EBX + 0x24]      ; 00517d50
    PUSH EDX                            ; 00517d53
    MOV ECX,dword ptr [ESP + 0x14]      ; 00517d54
    PUSH ECX                            ; 00517d58
    LEA EAX,[EBX + 0x8]                 ; 00517d59
    PUSH EAX                            ; 00517d5c
    PUSH EBX                            ; 00517d5d
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00517cf0 ; 00517d5e
        ;   XREF to: 00517cf0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00517cf0(CPackedBitmapSet * this_ptr, char * pbg_filename, int apply_palette_flag, int frames_per_bitmap, ...)
    ADD ESP,0x14                        ; 00517d63
    POP EBX                             ; 00517d66
    RET                                 ; 00517d67


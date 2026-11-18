; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00517cf0(CPackedBitmapSet *this_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pbg_filename
; int              Stack[0xc]:4   apply_palette_flag
; int              Stack[0x10]:4   frames_per_bitmap
; int              Stack[0x14]:4   skip_data_load
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00517d40 at 00517d5e
;
; Called Functions:
;   cockpit_pkbitmap.cpp_loadPBGFile_FUN_00517400
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_005175e0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00517640
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00517f60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517cf0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00517cf0
    PUSH ESI                            ; 00517cf1
    PUSH EDI                            ; 00517cf2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00517cf3
    PUSH EBX                            ; 00517cf7
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00517640 ; 00517cf8
        ;   XREF to: 00517640 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00517640(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00517cfd
    PUSH -0x1                           ; 00517d00
    MOV EDX,dword ptr [ESP + 0x24]      ; 00517d02
    PUSH EDX                            ; 00517d06
    MOV ECX,dword ptr [ESP + 0x24]      ; 00517d07
    PUSH ECX                            ; 00517d0b
    MOV ESI,dword ptr [ESP + 0x24]      ; 00517d0c
    PUSH ESI                            ; 00517d10
    MOV EDI,dword ptr [ESP + 0x24]      ; 00517d11
    PUSH EDI                            ; 00517d15
    PUSH EBX                            ; 00517d16
    CALL cockpit_pkbitmap.cpp_loadPBGFile_FUN_00517400 ; 00517d17
        ;   XREF to: 00517400 (UNCONDITIONAL_CALL)  ; CPackedBitmap * cockpit_pkbitmap.cpp_loadPBGFile_FUN_00517400(CPackedBitmapSet * bitmap_set_ptr, char * pbg_filename, int apply_palette_flag, int frames_per_bitmap, ...)
    ADD ESP,0x18                        ; 00517d1c
    PUSH EDI                            ; 00517d1f
    PUSH EBX                            ; 00517d20
    MOV dword ptr [EBX + 0x4],EAX       ; 00517d21
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00517f60 ; 00517d24
        ;   XREF to: 00517f60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00517f60(CPackedBitmapSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00517d29
    PUSH EBX                            ; 00517d2c
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_005175e0 ; 00517d2d
        ;   XREF to: 005175e0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_005175e0(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00517d32
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00517d35
    MOV dword ptr [EBX + 0x24],EAX      ; 00517d39
    POP EDI                             ; 00517d3c
    POP ESI                             ; 00517d3d
    POP EBX                             ; 00517d3e
    RET                                 ; 00517d3f


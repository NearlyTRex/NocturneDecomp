; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00510d20(CPackedBitmapSet *this_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pbg_filename
; int              Stack[0xc]:4   apply_palette_flag
; int              Stack[0x10]:4   frames_per_bitmap
; int              Stack[0x14]:4   skip_data_load
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00510d70 at 00510d8e
;
; Called Functions:
;   cockpit_pkbitmap.cpp_loadPBGFile_FUN_00510430
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_00510610
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00510670
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00510f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510d20
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_00510d20
    PUSH ESI                            ; 00510d21
    PUSH EDI                            ; 00510d22
    MOV EBX,dword ptr [ESP + 0x10]      ; 00510d23
    PUSH EBX                            ; 00510d27
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00510670 ; 00510d28
        ;   XREF to: 00510670 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00510670(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00510d2d
    PUSH -0x1                           ; 00510d30
    MOV EDX,dword ptr [ESP + 0x24]      ; 00510d32
    PUSH EDX                            ; 00510d36
    MOV ECX,dword ptr [ESP + 0x24]      ; 00510d37
    PUSH ECX                            ; 00510d3b
    MOV ESI,dword ptr [ESP + 0x24]      ; 00510d3c
    PUSH ESI                            ; 00510d40
    MOV EDI,dword ptr [ESP + 0x24]      ; 00510d41
    PUSH EDI                            ; 00510d45
    PUSH EBX                            ; 00510d46
    CALL cockpit_pkbitmap.cpp_loadPBGFile_FUN_00510430 ; 00510d47
        ;   XREF to: 00510430 (UNCONDITIONAL_CALL)  ; CPackedBitmap * cockpit_pkbitmap.cpp_loadPBGFile_FUN_00510430(CPackedBitmapSet * bitmap_set_ptr, char * pbg_filename, int apply_palette_flag, int frames_per_bitmap, ...)
    ADD ESP,0x18                        ; 00510d4c
    PUSH EDI                            ; 00510d4f
    PUSH EBX                            ; 00510d50
    MOV dword ptr [EBX + 0x4],EAX       ; 00510d51
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00510f90 ; 00510d54
        ;   XREF to: 00510f90 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00510f90(CPackedBitmapSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00510d59
    PUSH EBX                            ; 00510d5c
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_00510610 ; 00510d5d
        ;   XREF to: 00510610 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_00510610(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00510d62
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00510d65
    MOV dword ptr [EBX + 0x24],EAX      ; 00510d69
    POP EDI                             ; 00510d6c
    POP ESI                             ; 00510d6d
    POP EBX                             ; 00510d6e
    RET                                 ; 00510d6f


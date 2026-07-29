; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_004f59d0(CPackedBitmapSet *this_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pbg_filename
; int              Stack[0xc]:4   apply_palette_flag
; int              Stack[0x10]:4   frames_per_bitmap
; int              Stack[0x14]:4   skip_data_load
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_004f5a20 at 004f5a3e
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_004f5110
;   cockpit_pkbitmap.cpp_FUN_004f52c0
;   cockpit_pkbitmap.cpp_FUN_004f5320
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_004f5c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f59d0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_004f59d0
    PUSH ESI                            ; 004f59d1
    PUSH EDI                            ; 004f59d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f59d3
    PUSH EBX                            ; 004f59d7
    CALL cockpit_pkbitmap.cpp_FUN_004f5320 ; 004f59d8
        ;   XREF to: 004f5320 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_004f5320()
    ADD ESP,0x4                         ; 004f59dd
    PUSH -0x1                           ; 004f59e0
    MOV EDX,dword ptr [ESP + 0x24]      ; 004f59e2
    PUSH EDX                            ; 004f59e6
    MOV ECX,dword ptr [ESP + 0x24]      ; 004f59e7
    PUSH ECX                            ; 004f59eb
    MOV ESI,dword ptr [ESP + 0x24]      ; 004f59ec
    PUSH ESI                            ; 004f59f0
    MOV EDI,dword ptr [ESP + 0x24]      ; 004f59f1
    PUSH EDI                            ; 004f59f5
    PUSH EBX                            ; 004f59f6
    CALL cockpit_pkbitmap.cpp_FUN_004f5110 ; 004f59f7
        ;   XREF to: 004f5110 (UNCONDITIONAL_CALL)  ; CPackedBitmap * cockpit_pkbitmap.cpp_FUN_004f5110(CPackedBitmapSet * bitmap_set_ptr, char * pbg_filename, int apply_palette_flag, int frames_per_bitmap, ...)
    ADD ESP,0x18                        ; 004f59fc
    PUSH EDI                            ; 004f59ff
    PUSH EBX                            ; 004f5a00
    MOV dword ptr [EBX + 0x4],EAX       ; 004f5a01
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_004f5c40 ; 004f5a04
        ;   XREF to: 004f5c40 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_004f5c40(CPackedBitmapSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004f5a09
    PUSH EBX                            ; 004f5a0c
    CALL cockpit_pkbitmap.cpp_FUN_004f52c0 ; 004f5a0d
        ;   XREF to: 004f52c0 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_004f52c0()
    ADD ESP,0x4                         ; 004f5a12
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f5a15
    MOV dword ptr [EBX + 0x24],EAX      ; 004f5a19
    POP EDI                             ; 004f5a1c
    POP ESI                             ; 004f5a1d
    POP EBX                             ; 004f5a1e
    RET                                 ; 004f5a1f


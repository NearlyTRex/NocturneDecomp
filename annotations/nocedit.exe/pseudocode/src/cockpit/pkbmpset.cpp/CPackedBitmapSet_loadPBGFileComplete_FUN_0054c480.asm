; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480 (CPackedBitmapSet *this_ptr,char *pbg_filename,char *palette_filename,int param3, int param4,int additional_param)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pbg_filename
; char *           Stack[0xc]:4   palette_filename
; int              Stack[0x10]:4   param3
; int              Stack[0x14]:4   param4
; int              Stack[0x18]:4   additional_param
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0 at 0054c4ee
;
; Called Functions:
;   cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c480
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480
    PUSH ESI                            ; 0054c481
    PUSH EDI                            ; 0054c482
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054c483
    PUSH EBX                            ; 0054c487
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60 ; 0054c488
        ;   XREF to: 0054bd60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 0054c48d
    PUSH -0x1                           ; 0054c490
    MOV EDX,dword ptr [ESP + 0x24]      ; 0054c492
    PUSH EDX                            ; 0054c496
    MOV ECX,dword ptr [ESP + 0x24]      ; 0054c497
    PUSH ECX                            ; 0054c49b
    MOV ESI,dword ptr [ESP + 0x24]      ; 0054c49c
    PUSH ESI                            ; 0054c4a0
    MOV EDI,dword ptr [ESP + 0x24]      ; 0054c4a1
    PUSH EDI                            ; 0054c4a5
    PUSH EBX                            ; 0054c4a6
    CALL cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40 ; 0054c4a7
        ;   XREF to: 0054bb40 (UNCONDITIONAL_CALL)  ; int cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40(CPackedBitmapSet * bitmap_set, char * pbg_filename, char * palette_filename, int param3, ...)
    ADD ESP,0x18                        ; 0054c4ac
    PUSH EDI                            ; 0054c4af
    PUSH EBX                            ; 0054c4b0
    MOV dword ptr [EBX + 0x4],EAX       ; 0054c4b1
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0 ; 0054c4b4
        ;   XREF to: 0054c6f0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0(CPackedBitmapSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0054c4b9
    PUSH EBX                            ; 0054c4bc
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00 ; 0054c4bd
        ;   XREF to: 0054bd00 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 0054c4c2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0054c4c5
    MOV dword ptr [EBX + 0x24],EAX      ; 0054c4c9
    POP EDI                             ; 0054c4cc
    POP ESI                             ; 0054c4cd
    POP EBX                             ; 0054c4ce
    RET                                 ; 0054c4cf


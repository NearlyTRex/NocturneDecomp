; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990(CPackedBitmap * this_ptr, char * filename)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[3]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860 at 0054b878
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000 at 0054b01b
;   cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40 at 0054bbc5
;
; Called Functions:
;   crt_string.c_strncpy_FUN_00600f40
;
; *****************************************************************************

section .text

    PUSH 0x13                           ; 0054a990
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990
    MOV EDX,dword ptr [ESP + 0xc]       ; 0054a992
    PUSH EDX                            ; 0054a996
    MOV ECX,dword ptr [ESP + 0xc]       ; 0054a997
    PUSH ECX                            ; 0054a99b
    CALL crt_string.c_strncpy_FUN_00600f40 ; 0054a99c
        ;   XREF to: 00600f40 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strncpy_FUN_00600f40(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 0054a9a1
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054a9a4
    MOV byte ptr [EAX + 0x13],0x0       ; 0054a9a8
    RET                                 ; 0054a9ac


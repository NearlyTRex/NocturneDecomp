; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_makePath_FUN_004610a0(char *full_path,char *drive,char *directory,char *filename,char *extension)
;
; Parameters:
; char *           Stack[0x4]:4   full_path
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   directory
; char *           Stack[0x10]:4   filename
; char *           Stack[0x14]:4   extension
;
; XREF[13]:
;   engine_dosio.cpp_FUN_004610d0 at 00461120
;   engine_dosio.cpp_changeFileExtension_FUN_004611a0 at 004611f3
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004a7d00 at 004a7e6d
;   engine_font.cpp_FUN_004a7fe2 at 004a810e
;   engine_texture.cpp_FUN_0057514e at 005752b6
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0047c970 at 0047ca24
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00481620 at 004816be
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00481870 at 00481954
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00481a70 at 00481b54
;   shape_edittool.cpp_FUN_0047cb1e at 0047ccba
;   ... and 3 more
;
; Called Functions:
;   crt_file.c_makepath_FUN_005b9f4c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004610a0
        ;   Label: engine_dosio.cpp_makePath_FUN_004610a0
    PUSH ESI                            ; 004610a1
    PUSH EDI                            ; 004610a2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004610a3
    PUSH EDX                            ; 004610a7
    MOV ECX,dword ptr [ESP + 0x20]      ; 004610a8
    PUSH ECX                            ; 004610ac
    MOV EBX,dword ptr [ESP + 0x20]      ; 004610ad
    PUSH EBX                            ; 004610b1
    MOV ESI,dword ptr [ESP + 0x20]      ; 004610b2
    PUSH ESI                            ; 004610b6
    MOV EDI,dword ptr [ESP + 0x20]      ; 004610b7
    PUSH EDI                            ; 004610bb
    CALL crt_file.c_makepath_FUN_005b9f4c ; 004610bc
        ;   XREF to: 005b9f4c (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005b9f4c(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004610c1
    POP EDI                             ; 004610c4
    POP ESI                             ; 004610c5
    POP EBX                             ; 004610c6
    RET                                 ; 004610c7


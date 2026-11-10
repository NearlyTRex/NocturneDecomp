; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_makePath_FUN_004795b0(char *full_path,char *drive,char *directory,char *filename,char *extension)
;
; Parameters:
; char *           Stack[0x4]:4   full_path
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   directory
; char *           Stack[0x10]:4   filename
; char *           Stack[0x14]:4   extension
;
; XREF[13]:
;   engine_dosio.cpp_FUN_004795e0 at 00479630
;   engine_dosio.cpp_changeFileExtension_FUN_004796b0 at 00479703
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004c0cd0 at 004c0e3d
;   engine_font.cpp_FUN_004c0fa0 at 004c10f2
;   engine_texture.cpp_FUN_00597d6e at 00597ed8
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00494fd0 at 00495084
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00499c80 at 00499d1e
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00499ed0 at 00499fb4
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_0049a0d0 at 0049a1b4
;   shape_edittool.cpp_FUN_0049517e at 0049531a
;   ... and 3 more
;
; Called Functions:
;   crt_file.c_makepath_FUN_005c232c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004795b0
        ;   Label: engine_dosio.cpp_makePath_FUN_004795b0
    PUSH ESI                            ; 004795b1
    PUSH EDI                            ; 004795b2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004795b3
    PUSH EDX                            ; 004795b7
    MOV ECX,dword ptr [ESP + 0x20]      ; 004795b8
    PUSH ECX                            ; 004795bc
    MOV EBX,dword ptr [ESP + 0x20]      ; 004795bd
    PUSH EBX                            ; 004795c1
    MOV ESI,dword ptr [ESP + 0x20]      ; 004795c2
    PUSH ESI                            ; 004795c6
    MOV EDI,dword ptr [ESP + 0x20]      ; 004795c7
    PUSH EDI                            ; 004795cb
    CALL crt_file.c_makepath_FUN_005c232c ; 004795cc
        ;   XREF to: 005c232c (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005c232c(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004795d1
    POP EDI                             ; 004795d4
    POP ESI                             ; 004795d5
    POP EBX                             ; 004795d6
    RET                                 ; 004795d7


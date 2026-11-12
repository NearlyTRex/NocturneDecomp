; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_makePath_FUN_00465e80(char *full_path,char *drive,char *directory,char *filename,char *extension)
;
; Parameters:
; char *           Stack[0x4]:4   full_path
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   directory
; char *           Stack[0x10]:4   filename
; char *           Stack[0x14]:4   extension
;
; XREF[13]:
;   engine_dosio.cpp_FUN_00465eb0 at 00465f00
;   engine_dosio.cpp_FUN_00466040 at 0046612f
;   engine_dosio.cpp_changeFileExtension_FUN_00465f80 at 00465fd3
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004af920 at 004afa8d
;   engine_font.cpp_FUN_004afbf0 at 004afd42
;   engine_texture.cpp_FUN_0056ad5e at 0056aec8
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0047db70 at 0047dc24
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00482820 at 004828be
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00482a70 at 00482b54
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00482c70 at 00482d54
;   ... and 3 more
;
; Called Functions:
;   crt_file.c_makepath_FUN_005a521c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465e80
        ;   Label: engine_dosio.cpp_makePath_FUN_00465e80
    PUSH ESI                            ; 00465e81
    PUSH EDI                            ; 00465e82
    MOV EDX,dword ptr [ESP + 0x20]      ; 00465e83
    PUSH EDX                            ; 00465e87
    MOV ECX,dword ptr [ESP + 0x20]      ; 00465e88
    PUSH ECX                            ; 00465e8c
    MOV EBX,dword ptr [ESP + 0x20]      ; 00465e8d
    PUSH EBX                            ; 00465e91
    MOV ESI,dword ptr [ESP + 0x20]      ; 00465e92
    PUSH ESI                            ; 00465e96
    MOV EDI,dword ptr [ESP + 0x20]      ; 00465e97
    PUSH EDI                            ; 00465e9b
    CALL crt_file.c_makepath_FUN_005a521c ; 00465e9c
        ;   XREF to: 005a521c (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005a521c(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00465ea1
    POP EDI                             ; 00465ea4
    POP ESI                             ; 00465ea5
    POP EBX                             ; 00465ea6
    RET                                 ; 00465ea7


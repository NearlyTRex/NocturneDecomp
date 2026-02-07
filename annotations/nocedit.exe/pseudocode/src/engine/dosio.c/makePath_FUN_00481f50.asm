; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_dosio_c_makePath_FUN_00481f50 (char *full_path,char *drive,char *directory,char *filename,char *extension)
;
; Parameters:
; char *           Stack[0x4]:4   full_path
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   directory
; char *           Stack[0x10]:4   filename
; char *           Stack[0x14]:4   extension
;
; XREF[29]:
;   core_msnedit.cpp_CDemonMission_saveWithNewName_FUN_00537f60 at 0053801a
;   core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0 at 0057a104
;   core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20 at 00578b81
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 005796dd
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584cf9
;   engine_dosio.c_changeFileExtension_FUN_00482050 at 004820a3
;   engine_dosio.c_ensureTrailingSlash_FUN_00481f80 at 00481fd0
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b3a43
;   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 at 004b50c4
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b42d7
;   ... and 19 more
;
; Called Functions:
;   crt_file.c_makepath_FUN_005febfc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481f50
        ;   Label: engine_dosio.c_makePath_FUN_00481f50
    PUSH ESI                            ; 00481f51
    PUSH EDI                            ; 00481f52
    MOV EDX,dword ptr [ESP + 0x20]      ; 00481f53
    PUSH EDX                            ; 00481f57
    MOV ECX,dword ptr [ESP + 0x20]      ; 00481f58
    PUSH ECX                            ; 00481f5c
    MOV EBX,dword ptr [ESP + 0x20]      ; 00481f5d
    PUSH EBX                            ; 00481f61
    MOV ESI,dword ptr [ESP + 0x20]      ; 00481f62
    PUSH ESI                            ; 00481f66
    MOV EDI,dword ptr [ESP + 0x20]      ; 00481f67
    PUSH EDI                            ; 00481f6b
    CALL crt_file.c_makepath_FUN_005febfc ; 00481f6c
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00481f71
    POP EDI                             ; 00481f74
    POP ESI                             ; 00481f75
    POP EBX                             ; 00481f76
    RET                                 ; 00481f77


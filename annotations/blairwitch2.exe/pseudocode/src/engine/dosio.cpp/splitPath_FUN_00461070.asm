; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_splitPath_FUN_00461070(char *full_path,char *drive,char *directory,char *filename,char *extension)
;
; Parameters:
; char *           Stack[0x4]:4   full_path
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   directory
; char *           Stack[0x10]:4   filename
; char *           Stack[0x14]:4   extension
;
; XREF[27]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0048e7e0 at 0048f7e8
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004a41b0 at 004a4c49
;   core_fldnotes.cpp_FUN_004a5700 at 004a5c36
;   core_fldnotes.cpp_SPageResourceBitmap_ctorFromFile_FUN_004a2170 at 004a21b1
;   core_game.cpp_FUN_004b5190 at 004b56be
;   core_script.cpp_FUN_00522350 at 0052457d
;   core_set.cpp_CDemonSet_load_FUN_0052c0e0 at 0052c50e
;   engine_dosio.cpp_FUN_004610d0 at 00461102
;   engine_dosio.cpp_changeFileExtension_FUN_004611a0 at 004611c6
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004a7d00 at 004a7e46
;   ... and 17 more
;
; Called Functions:
;   crt_string.c_splitpath_FUN_005b9e58
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461070
        ;   Label: engine_dosio.cpp_splitPath_FUN_00461070
    PUSH ESI                            ; 00461071
    PUSH EDI                            ; 00461072
    MOV EDX,dword ptr [ESP + 0x20]      ; 00461073
    PUSH EDX                            ; 00461077
    MOV ECX,dword ptr [ESP + 0x20]      ; 00461078
    PUSH ECX                            ; 0046107c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0046107d
    PUSH EBX                            ; 00461081
    MOV ESI,dword ptr [ESP + 0x20]      ; 00461082
    PUSH ESI                            ; 00461086
    MOV EDI,dword ptr [ESP + 0x20]      ; 00461087
    PUSH EDI                            ; 0046108b
    CALL crt_string.c_splitpath_FUN_005b9e58 ; 0046108c
        ;   XREF to: 005b9e58 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005b9e58(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00461091
    POP EDI                             ; 00461094
    POP ESI                             ; 00461095
    POP EBX                             ; 00461096
    RET                                 ; 00461097


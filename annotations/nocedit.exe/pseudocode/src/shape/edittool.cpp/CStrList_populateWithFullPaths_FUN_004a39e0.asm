; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_004a39e0(CStrList *this_ptr,char *base_path,char *search_path)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   base_path
; char *           Stack[0xc]:4   search_path
; Local Variables:
; undefined1       Stack[-0x828]:1  local_828
; undefined1       Stack[-0x714]:1  local_714
; undefined1       Stack[-0x610]:1  local_610
; undefined1       Stack[-0x50c]:1  local_50c
; undefined1       Stack[-0x408]:1  local_408
; undefined1       Stack[-0x308]:1  local_308
; undefined1       Stack[-0x208]:1  local_208
; undefined1       Stack[-0x108]:1  local_108
; undefined1       Stack[-0x8]:1  local_8
;
; XREF[4]:
;   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 at 004bd77f
;   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 at 004ba00d
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b87b2
;   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 at 004bc682
;
; Called Functions:
;   engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
;   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
;   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
;   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
;   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
;   engine_dosio.c_getFullPath_FUN_004820c0
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_dosio.c_splitPath_FUN_00481f20
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a39e0
        ;   Label: shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0
    SUB ESP,0x824                       ; 004a39e1
    MOV EBX,dword ptr [ESP + 0x82c]     ; 004a39e7
    LEA EAX,[ESP + 0x420]               ; 004a39ee
    PUSH EAX                            ; 004a39f5
    LEA EAX,[ESP + 0x624]               ; 004a39f6
    PUSH EAX                            ; 004a39fd
    LEA EAX,[ESP + 0x728]               ; 004a39fe
    PUSH EAX                            ; 004a3a05
    LEA EAX,[ESP + 0x82c]               ; 004a3a06
    PUSH EAX                            ; 004a3a0d
    MOV EDX,dword ptr [ESP + 0x840]     ; 004a3a0e
    PUSH EDX                            ; 004a3a15
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 004a3a16
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a3a1b
    LEA EAX,[ESP + 0x420]               ; 004a3a1e
    PUSH EAX                            ; 004a3a25
    LEA EAX,[ESP + 0x624]               ; 004a3a26
    PUSH EAX                            ; 004a3a2d
    LEA EAX,[ESP + 0x728]               ; 004a3a2e
    PUSH EAX                            ; 004a3a35
    PUSH 0x0                            ; 004a3a36
    LEA EAX,[ESP + 0x530]               ; 004a3a38
    PUSH EAX                            ; 004a3a3f
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004a3a40
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a3a45
    LEA EAX,[ESP + 0x420]               ; 004a3a48
    PUSH EAX                            ; 004a3a4f
    LEA EAX,[ESP + 0x624]               ; 004a3a50
    PUSH EAX                            ; 004a3a57
    PUSH 0x0                            ; 004a3a58
    PUSH 0x0                            ; 004a3a5a
    MOV ECX,dword ptr [ESP + 0x844]     ; 004a3a5c
    PUSH ECX                            ; 004a3a63
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 004a3a64
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a3a69
    LEA EAX,[ESP + 0x420]               ; 004a3a6c
    PUSH EAX                            ; 004a3a73
    LEA EAX,[ESP + 0x624]               ; 004a3a74
    PUSH EAX                            ; 004a3a7b
    LEA EAX,[ESP + 0x528]               ; 004a3a7c
    PUSH EAX                            ; 004a3a83
    LEA EAX,[ESP + 0x82c]               ; 004a3a84
    PUSH EAX                            ; 004a3a8b
    LEA EAX,[ESP + 0x32c]               ; 004a3a8c
    PUSH EAX                            ; 004a3a93
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004a3a94
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a3a99
    MOV EAX,ESP                         ; 004a3a9c
    PUSH EAX                            ; 004a3a9e
    CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30 ; 004a3a9f
        ;   XREF to: 00481c30 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.c_CFileFinder_ctor_FUN_00481c30(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004a3aa4
    LEA EAX,[ESP + 0x31c]               ; 004a3aa7
    PUSH EAX                            ; 004a3aae
    LEA EAX,[ESP + 0x4]                 ; 004a3aaf
    PUSH EAX                            ; 004a3ab3
    CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70 ; 004a3ab4
        ;   XREF to: 00481c70 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_CFileFinder_openSearch_FUN_00481c70(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 004a3ab9
    CMP byte ptr [ESP],0x0              ; 004a3abc
    JZ 0x004a3b60                       ; 004a3ac0
        ;   XREF to: 004a3b60 (CONDITIONAL_JUMP)  ; LAB_004a3b60
    LEA EAX,[ESP + 0x420]               ; 004a3ac6
        ;   Label: LAB_004a3ac6
    PUSH EAX                            ; 004a3acd
    LEA EAX,[ESP + 0x624]               ; 004a3ace
    PUSH EAX                            ; 004a3ad5
    PUSH 0x0                            ; 004a3ad6
    PUSH 0x0                            ; 004a3ad8
    LEA EAX,[ESP + 0x10]                ; 004a3ada
    PUSH EAX                            ; 004a3ade
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 004a3adf
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a3ae4
    LEA EAX,[ESP + 0x420]               ; 004a3ae7
    PUSH EAX                            ; 004a3aee
    LEA EAX,[ESP + 0x624]               ; 004a3aef
    PUSH EAX                            ; 004a3af6
    LEA EAX,[ESP + 0x528]               ; 004a3af7
    PUSH EAX                            ; 004a3afe
    LEA EAX,[ESP + 0x82c]               ; 004a3aff
    PUSH EAX                            ; 004a3b06
    LEA EAX,[ESP + 0x228]               ; 004a3b07
    PUSH EAX                            ; 004a3b0e
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004a3b0f
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a3b14
    LEA EAX,[ESP + 0x218]               ; 004a3b17
    PUSH EAX                            ; 004a3b1e
    LEA EAX,[ESP + 0x118]               ; 004a3b1f
    PUSH EAX                            ; 004a3b26
    CALL engine_dosio.c_getFullPath_FUN_004820c0 ; 004a3b27
        ;   XREF to: 004820c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFullPath_FUN_004820c0(char * output_path, char * input_path)
    ADD ESP,0x8                         ; 004a3b2c
    LEA EAX,[ESP + 0x114]               ; 004a3b2f
    PUSH EAX                            ; 004a3b36
    PUSH EBX                            ; 004a3b37
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004a3b38
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a3b3d
    MOV EAX,ESP                         ; 004a3b40
    PUSH EAX                            ; 004a3b42
    CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0 ; 004a3b43
        ;   XREF to: 00481cf0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_CFileFinder_findNext_FUN_00481cf0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004a3b48
    CMP byte ptr [ESP],0x0              ; 004a3b4b
    JNZ 0x004a3ac6                      ; 004a3b4f
        ;   XREF to: 004a3ac6 (CONDITIONAL_JUMP)  ; LAB_004a3ac6
    LEA EAX,[EAX]                       ; 004a3b55
    LEA EDX,[EDX]                       ; 004a3b5b
    MOV EBX,EBX                         ; 004a3b5e
    MOV EAX,ESP                         ; 004a3b60
        ;   Label: LAB_004a3b60
    PUSH EAX                            ; 004a3b62
    CALL engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70 ; 004a3b63
        ;   XREF to: 00481d70 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004a3b68
    PUSH 0x0                            ; 004a3b6b
    LEA EAX,[ESP + 0x4]                 ; 004a3b6d
    PUSH EAX                            ; 004a3b71
    CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50 ; 004a3b72
        ;   XREF to: 00481c50 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.c_CFileFinder_dtor_FUN_00481c50(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a3b77
    ADD ESP,0x824                       ; 004a3b7a
    POP EBX                             ; 004a3b80
    RET                                 ; 004a3b81


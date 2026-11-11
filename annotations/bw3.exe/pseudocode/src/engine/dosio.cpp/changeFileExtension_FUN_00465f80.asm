; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_changeFileExtension_FUN_00465f80(char *path,char *new_extension)
;
; Parameters:
; char *           Stack[0x4]:4   path
; char *           Stack[0x8]:4   new_extension
; Local Variables:
; undefined        Stack[-0x208]:1  local_208
; undefined        Stack[-0x108]:1  local_108
; undefined        Stack[-0x8]:1  local_8
;
; XREF[2]:
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004aa810 at 004ab4d0
;   engine_texture.cpp_CTextureCache_loadTexture_FUN_00569790 at 005698cd
;
; Called Functions:
;   engine_dosio.cpp_makePath_FUN_00465e80
;   engine_dosio.cpp_splitPath_FUN_00465e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465f80
        ;   Label: engine_dosio.cpp_changeFileExtension_FUN_00465f80
    SUB ESP,0x204                       ; 00465f81
    PUSH 0x0                            ; 00465f87
    LEA EAX,[ESP + 0x4]                 ; 00465f89
    PUSH EAX                            ; 00465f8d
    LEA EAX,[ESP + 0x108]               ; 00465f8e
    PUSH EAX                            ; 00465f95
    LEA EAX,[ESP + 0x20c]               ; 00465f96
    PUSH EAX                            ; 00465f9d
    MOV EDX,dword ptr [ESP + 0x21c]     ; 00465f9e
    PUSH EDX                            ; 00465fa5
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 00465fa6
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00465fab
    MOV ECX,dword ptr [ESP + 0x210]     ; 00465fae
    PUSH ECX                            ; 00465fb5
    LEA EAX,[ESP + 0x4]                 ; 00465fb6
    PUSH EAX                            ; 00465fba
    LEA EAX,[ESP + 0x108]               ; 00465fbb
    PUSH EAX                            ; 00465fc2
    LEA EAX,[ESP + 0x20c]               ; 00465fc3
    PUSH EAX                            ; 00465fca
    MOV EBX,dword ptr [ESP + 0x21c]     ; 00465fcb
    PUSH EBX                            ; 00465fd2
    CALL engine_dosio.cpp_makePath_FUN_00465e80 ; 00465fd3
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00465fd8
    ADD ESP,0x204                       ; 00465fdb
    POP EBX                             ; 00465fe1
    RET                                 ; 00465fe2


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_writeArtFileEntries_FUN_004bc9f0(char *filename,_FILE **raw_file,_FILE **act_file)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; _FILE * *        Stack[0x8]:4   raw_file
; _FILE * *        Stack[0xc]:4   act_file
; Local Variables:
; char[256]        Stack[-0x104]:256  local_104
;
; Referenced Globals:
;   TerminatedCString s_ART_s_RAW_006291bc
;   TerminatedCString s_ART_s_ACT_006291c8
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   engine_dosio.cpp_splitPath_FUN_00481f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc9f0
        ;   Label: engine_fileio.cpp_writeArtFileEntries_FUN_004bc9f0
    SUB ESP,0x100                       ; 004bc9f1
    PUSH 0x0                            ; 004bc9f7
    LEA EAX,[ESP + 0x4]                 ; 004bc9f9
    PUSH EAX                            ; 004bc9fd
    PUSH 0x0                            ; 004bc9fe
    PUSH 0x0                            ; 004bca00
    MOV EDX,dword ptr [ESP + 0x11c]     ; 004bca02
    PUSH EDX                            ; 004bca09
    CALL engine_dosio.cpp_splitPath_FUN_00481f20 ; 004bca0a
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004bca0f
    MOV EAX,ESP                         ; 004bca12
    PUSH EAX                            ; 004bca14
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004bca15
    PUSH 0x6291bc                       ; 004bca1c | = "ART\\%s.RAW\n"
    MOV ECX,dword ptr [EAX]             ; 004bca21
    PUSH ECX                            ; 004bca23
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004bca24
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004bca29
    MOV EAX,ESP                         ; 004bca2c
    PUSH EAX                            ; 004bca2e
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004bca2f
    PUSH 0x6291c8                       ; 004bca36 | = "ART\\%s.ACT\n"
    MOV EBX,dword ptr [EAX]             ; 004bca3b
    PUSH EBX                            ; 004bca3d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004bca3e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004bca43
    ADD ESP,0x100                       ; 004bca46
    POP EBX                             ; 004bca4c
    RET                                 ; 004bca4d


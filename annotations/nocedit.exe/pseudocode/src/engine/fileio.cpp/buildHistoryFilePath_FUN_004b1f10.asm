; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_fileio.cpp_buildHistoryFilePath_FUN_004b1f10(char * filename, char * extension, char * dest_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char *           Stack[0x8]:4   extension
; char *           Stack[0xc]:4   dest_buffer
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
; undefined1       Stack[-0x213]:1  local_213
; undefined        Stack[-0x110]:1  local_110
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_006260a3
;   TerminatedCString s_versionControlDirectory__006260b8
;   TerminatedCString s_history_s_s_006260d9
;   char[264] g_VersionControlDirectory
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
;   engine_dosio.c_makePath_FUN_00481f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1f10
        ;   Label: engine_fileio.cpp_buildHistoryFilePath_FUN_004b1f10
    PUSH ESI                            ; 004b1f11
    PUSH EDI                            ; 004b1f12
    SUB ESP,0x208                       ; 004b1f13
    MOV EDI,dword ptr [ESP + 0x220]     ; 004b1f19
    CMP byte ptr [0x02d12ac8],0x0       ; 004b1f20 | char[264] g_VersionControlDirectory
    JZ 0x004b1fb7                       ; 004b1f27 | LAB_004b1fb7
        ;   XREF to: 004b1fb7 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x21c]     ; 004b1f2d
        ;   Label: LAB_004b1f2d
    PUSH EBX                            ; 004b1f34
    MOV ESI,dword ptr [ESP + 0x21c]     ; 004b1f35
    PUSH ESI                            ; 004b1f3c
    PUSH 0x6260d9                       ; 004b1f3d | = "history\\%s.%s" | s_history_s_s_006260d9 = history\%s.%s
    LEA ESI,[ESP + 0xc]                 ; 004b1f42
    PUSH ESI                            ; 004b1f46
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b1f47 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b1f4c
    LEA ESI,[ESP + 0x104]               ; 004b1f4f
    PUSH ESI                            ; 004b1f56
    LEA ESI,[ESP + 0x208]               ; 004b1f57
    PUSH ESI                            ; 004b1f5e
    PUSH 0x2d12ac8                      ; 004b1f5f | char[264] g_VersionControlDirectory
    CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80 ; 004b1f64 | void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b1f69
    PUSH 0x0                            ; 004b1f6c
    PUSH 0x0                            ; 004b1f6e
    LEA ESI,[ESP + 0x10c]               ; 004b1f70
    PUSH ESI                            ; 004b1f77
    LEA ESI,[ESP + 0x210]               ; 004b1f78
    PUSH ESI                            ; 004b1f7f
    PUSH EDI                            ; 004b1f80
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b1f81 | void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b1f86
    MOV ESI,ESP                         ; 004b1f89
    PUSH EDI                            ; 004b1f8b
    SUB ECX,ECX                         ; 004b1f8c
    DEC ECX                             ; 004b1f8e
    MOV AL,0x0                          ; 004b1f8f
    SCASB.REPNE ES:EDI                  ; 004b1f91
    DEC EDI                             ; 004b1f93
    MOV AL,byte ptr [ESI]               ; 004b1f94
        ;   Label: LAB_004b1f94
    MOV byte ptr [EDI],AL               ; 004b1f96
    CMP AL,0x0                          ; 004b1f98
    JZ 0x004b1fac                       ; 004b1f9a | LAB_004b1fac
        ;   XREF to: 004b1fac (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b1f9c
    ADD ESI,0x2                         ; 004b1f9f
    MOV byte ptr [EDI + 0x1],AL         ; 004b1fa2
    ADD EDI,0x2                         ; 004b1fa5
    CMP AL,0x0                          ; 004b1fa8
    JNZ 0x004b1f94                      ; 004b1faa | LAB_004b1f94
        ;   XREF to: 004b1f94 (CONDITIONAL_JUMP)
    POP EDI                             ; 004b1fac
        ;   Label: LAB_004b1fac
    ADD ESP,0x208                       ; 004b1fad
    POP EDI                             ; 004b1fb3
    POP ESI                             ; 004b1fb4
    POP EBX                             ; 004b1fb5
    RET                                 ; 004b1fb6
    MOV EDX,0x6260a3                    ; 004b1fb7 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_006260a3 = ..\engine\fileio.cpp
        ;   Label: LAB_004b1fb7
    MOV ECX,0xe7                        ; 004b1fbc
    PUSH 0x6260b8                       ; 004b1fc1 | = "versionControlDirectory not set!" | s_versionControlDirectory__006260b8 = versionControlDirectory not set!
    MOV dword ptr [0x02f0ca48],EDX      ; 004b1fc6 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004b1fcc | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b1fd2 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b1fd7
    JMP 0x004b1f2d                      ; 004b1fda | LAB_004b1f2d
        ;   XREF to: 004b1f2d (UNCONDITIONAL_JUMP)


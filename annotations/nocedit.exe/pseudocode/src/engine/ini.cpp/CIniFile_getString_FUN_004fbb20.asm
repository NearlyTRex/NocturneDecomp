; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_CIniFile_getString_FUN_004fbb20(CIniFile *this_ptr,char *key,char *output_buffer,int buffer_size,char *default_value )
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   key
; char *           Stack[0xc]:4   output_buffer
; int              Stack[0x10]:4   buffer_size
; char *           Stack[0x14]:4   default_value
;
; XREF[5]:
;   core_inivar.cpp_readIniData_FUN_004fbd90 at 004fbe6b
;   core_setedit.cpp_CDemonSet_readIni_FUN_00584900 at 00584914
;   engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0 at 004fbd03
;   engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 at 004fbc5f
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005abf8b
;
; Referenced Globals:
;   TerminatedCString s_engine_ini_cpp_0062fc91
;   TerminatedCString s_CIniFile_getString_filen_0062fca3
;   TerminatedCString s_engine_ini_cpp_0062fccd
;   TerminatedCString s_CIniFile_getString_secti_0062fcdf
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_ini.cpp_getProfileString_FUN_004fb960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fbb20
        ;   Label: engine_ini.cpp_CIniFile_getString_FUN_004fbb20
    PUSH EBP                            ; 004fbb21
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fbb22
    CMP byte ptr [EBX],0x0              ; 004fbb26
    JZ 0x004fbb57                       ; 004fbb29
        ;   XREF to: 004fbb57 (CONDITIONAL_JUMP)  ; LAB_004fbb57
    CMP byte ptr [EBX + 0x100],0x0      ; 004fbb2b
        ;   Label: LAB_004fbb2b
    JZ 0x004fbb7c                       ; 004fbb32
        ;   XREF to: 004fbb7c (CONDITIONAL_JUMP)  ; LAB_004fbb7c
    PUSH EBX                            ; 004fbb34
        ;   Label: LAB_004fbb34
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004fbb35
    PUSH EBP                            ; 004fbb39
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fbb3a
    PUSH EAX                            ; 004fbb3e
    PUSH EAX                            ; 004fbb3f
    MOV ECX,dword ptr [ESP + 0x20]      ; 004fbb40
    PUSH ECX                            ; 004fbb44
    ADD EBX,0x100                       ; 004fbb45
    PUSH EBX                            ; 004fbb4b
    CALL engine_ini.cpp_getProfileString_FUN_004fb960 ; 004fbb4c
        ;   XREF to: 004fb960 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_getProfileString_FUN_004fb960(char * section, char * key, char * default_value, char * output_buffer, ...)
    ADD ESP,0x18                        ; 004fbb51
    POP EBP                             ; 004fbb54
    POP EBX                             ; 004fbb55
    RET                                 ; 004fbb56
    MOV EDX,0x62fc91                    ; 004fbb57 | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004fbb57
    MOV ECX,0x26f                       ; 004fbb5c
    PUSH 0x62fca3                       ; 004fbb61 | = "CIniFile::getString - filename not wr..."
    MOV dword ptr [0x02f0ca48],EDX      ; 004fbb66 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004fbb6c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004fbb72
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004fbb77
    JMP 0x004fbb2b                      ; 004fbb7a
        ;   XREF to: 004fbb2b (UNCONDITIONAL_JUMP)  ; LAB_004fbb2b
    PUSH EDI                            ; 004fbb7c
        ;   Label: LAB_004fbb7c
    PUSH ESI                            ; 004fbb7d
    MOV ESI,0x62fccd                    ; 004fbb7e | = "..\\engine\\ini.cpp"
    MOV EDI,0x270                       ; 004fbb83
    PUSH 0x62fcdf                       ; 004fbb88 | = "CIniFile::getString - section not write!"
    MOV dword ptr [0x02f0ca48],ESI      ; 004fbb8d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004fbb93 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004fbb99
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004fbb9e
    POP ESI                             ; 004fbba1
    POP EDI                             ; 004fbba2
    JMP 0x004fbb34                      ; 004fbba3
        ;   XREF to: 004fbb34 (UNCONDITIONAL_JUMP)  ; LAB_004fbb34


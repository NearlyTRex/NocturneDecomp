; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_CIniFile_setString_FUN_004fbbb0(CIniFile *this_ptr,char *key,char *value)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   key
; char *           Stack[0xc]:4   value
;
; XREF[5]:
;   core_inivar.cpp_writeIniData_FUN_004fc510 at 004fc5b8
;   core_setedit.cpp_CDemonSet_writeIni_FUN_00584920 at 0058492f
;   engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30 at 004fbd5c
;   engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 at 004fbcb8
;   sound_sndmain.cpp_writeIni_FUN_005ac220 at 005ac29a
;
; Referenced Globals:
;   TerminatedCString s_engine_ini_cpp_0062fd08
;   TerminatedCString s_CIniFile_setString_filen_0062fd1a
;   TerminatedCString s_engine_ini_cpp_0062fd44
;   TerminatedCString s_CIniFile_setString_secti_0062fd56
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_ini.cpp_writeProfileString_FUN_004fba40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fbbb0
        ;   Label: engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
    PUSH EBP                            ; 004fbbb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fbbb2
    CMP byte ptr [EBX],0x0              ; 004fbbb6
    JZ 0x004fbbe1                       ; 004fbbb9
        ;   XREF to: 004fbbe1 (CONDITIONAL_JUMP)  ; LAB_004fbbe1
    CMP byte ptr [EBX + 0x100],0x0      ; 004fbbbb
        ;   Label: LAB_004fbbbb
    JZ 0x004fbc06                       ; 004fbbc2
        ;   XREF to: 004fbc06 (CONDITIONAL_JUMP)  ; LAB_004fbc06
    PUSH EBX                            ; 004fbbc4
        ;   Label: LAB_004fbbc4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004fbbc5
    PUSH EBP                            ; 004fbbc9
    MOV EAX,dword ptr [ESP + 0x18]      ; 004fbbca
    PUSH EAX                            ; 004fbbce
    ADD EBX,0x100                       ; 004fbbcf
    PUSH EBX                            ; 004fbbd5
    CALL engine_ini.cpp_writeProfileString_FUN_004fba40 ; 004fbbd6
        ;   XREF to: 004fba40 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_writeProfileString_FUN_004fba40(char * section, char * key, char * value, char * filename)
    ADD ESP,0x10                        ; 004fbbdb
    POP EBP                             ; 004fbbde
    POP EBX                             ; 004fbbdf
    RET                                 ; 004fbbe0
    MOV EDX,0x62fd08                    ; 004fbbe1 | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004fbbe1
    MOV ECX,0x275                       ; 004fbbe6
    PUSH 0x62fd1a                       ; 004fbbeb | = "CIniFile::setString - filename not wr..."
    MOV dword ptr [0x02f0ca48],EDX      ; 004fbbf0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004fbbf6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004fbbfc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004fbc01
    JMP 0x004fbbbb                      ; 004fbc04
        ;   XREF to: 004fbbbb (UNCONDITIONAL_JUMP)  ; LAB_004fbbbb
    PUSH EDI                            ; 004fbc06
        ;   Label: LAB_004fbc06
    PUSH ESI                            ; 004fbc07
    MOV ESI,0x62fd44                    ; 004fbc08 | = "..\\engine\\ini.cpp"
    MOV EDI,0x276                       ; 004fbc0d
    PUSH 0x62fd56                       ; 004fbc12 | = "CIniFile::setString - section not write!"
    MOV dword ptr [0x02f0ca48],ESI      ; 004fbc17 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004fbc1d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004fbc23
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004fbc28
    POP ESI                             ; 004fbc2b
    POP EDI                             ; 004fbc2c
    JMP 0x004fbbc4                      ; 004fbc2d
        ;   XREF to: 004fbbc4 (UNCONDITIONAL_JUMP)  ; LAB_004fbbc4


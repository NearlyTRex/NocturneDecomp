; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_CIniFile_setFloatValue_FUN_004fbd30(CIniFile *this_ptr,char *key,float value)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   key
; float            Stack[0xc]:4   value
; Local Variables:
; char[100]        Stack[-0x64]:100  local_64
;
; XREF[1]:
;   sound_sndmain.cpp_writeIni_FUN_005ac220 at 005ac3d1
;
; Referenced Globals:
;   TerminatedCString s_g_0062fd8e
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
;
; *****************************************************************************

section .text

    SUB ESP,0x64                        ; 004fbd30
        ;   Label: engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30
    FLD float ptr [ESP + 0x70]          ; 004fbd33
    SUB ESP,0x8                         ; 004fbd37
    FSTP double ptr [ESP]               ; 004fbd3a
    PUSH 0x62fd8e                       ; 004fbd3d | = "%g"
    LEA EAX,[ESP + 0xc]                 ; 004fbd42
    PUSH EAX                            ; 004fbd46
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004fbd47
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004fbd4c
    MOV EAX,ESP                         ; 004fbd4f
    PUSH EAX                            ; 004fbd51
    MOV EDX,dword ptr [ESP + 0x70]      ; 004fbd52
    PUSH EDX                            ; 004fbd56
    MOV ECX,dword ptr [ESP + 0x70]      ; 004fbd57
    PUSH ECX                            ; 004fbd5b
    CALL engine_ini.cpp_CIniFile_setString_FUN_004fbbb0 ; 004fbd5c
        ;   XREF to: 004fbbb0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setString_FUN_004fbbb0(CIniFile * this_ptr, char * key, char * value)
    ADD ESP,0xc                         ; 004fbd61
    ADD ESP,0x64                        ; 004fbd64
    RET                                 ; 004fbd67


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile *this_ptr,char *key,int value)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   key
; int              Stack[0xc]:4   value
; Local Variables:
; char[12]         Stack[-0x68]:12  local_68
; char             Stack[-0x5c]:1  local_5c
;
; XREF[6]:
;   core_inivar.cpp_writeIniData_FUN_004fc510 at 004fc740
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 00507665
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 00507345
;   core_msnedit.cpp_CDemonMission_writeIni_FUN_005375d0 at 005375e6
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055ef72
;   sound_sndmain.cpp_writeIni_FUN_005ac220 at 005ac2e6
;
; Referenced Globals:
;   TerminatedCString s_d_0062fd85
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fbc90
        ;   Label: engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
    SUB ESP,0x64                        ; 004fbc91
    MOV EDX,dword ptr [ESP + 0x74]      ; 004fbc94
    PUSH EDX                            ; 004fbc98
    PUSH 0x62fd85                       ; 004fbc99 | = "%d"
    LEA EAX,[ESP + 0x8]                 ; 004fbc9e
    PUSH EAX                            ; 004fbca2
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004fbca3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004fbca8
    MOV EAX,ESP                         ; 004fbcab
    PUSH EAX                            ; 004fbcad
    MOV ECX,dword ptr [ESP + 0x74]      ; 004fbcae
    PUSH ECX                            ; 004fbcb2
    MOV EBX,dword ptr [ESP + 0x74]      ; 004fbcb3
    PUSH EBX                            ; 004fbcb7
    CALL engine_ini.cpp_CIniFile_setString_FUN_004fbbb0 ; 004fbcb8
        ;   XREF to: 004fbbb0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setString_FUN_004fbbb0(CIniFile * this_ptr, char * key, char * value)
    ADD ESP,0xc                         ; 004fbcbd
    ADD ESP,0x64                        ; 004fbcc0
    POP EBX                             ; 004fbcc3
    RET                                 ; 004fbcc4


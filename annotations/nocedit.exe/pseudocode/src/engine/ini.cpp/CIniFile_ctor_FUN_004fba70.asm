; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CIniFile * engine_ini.cpp_CIniFile_ctor_FUN_004fba70(CIniFile * this_ptr, char * filename, int read_mode)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   read_mode
;
; XREF[6]:
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e1dac
;   core_inivar.cpp_readIniData_FUN_004fbd90 at 004fbdc0
;   core_inivar.cpp_writeIniData_FUN_004fc510 at 004fc526
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005073d5
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 00507109
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055d23d
;
; Called Functions:
;   engine_ini.cpp_CIniFile_init_FUN_004fbaa0
;   engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fba70
        ;   Label: engine_ini.cpp_CIniFile_ctor_FUN_004fba70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fba71
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fba75
    PUSH EDX                            ; 004fba79
    PUSH EBX                            ; 004fba7a
    CALL engine_ini.cpp_CIniFile_init_FUN_004fbaa0 ; 004fba7b
        ;   XREF to: 004fbaa0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_init_FUN_004fbaa0(char * dest, char * source)
    ADD ESP,0x8                         ; 004fba80
    MOV ECX,dword ptr [ESP + 0x10]      ; 004fba83
    PUSH ECX                            ; 004fba87
    PUSH EBX                            ; 004fba88
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0 ; 004fba89
        ;   XREF to: 004fbae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004fba8e
    MOV EAX,EBX                         ; 004fba91
    POP EBX                             ; 004fba93
    RET                                 ; 004fba94


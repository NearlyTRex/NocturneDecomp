; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   ini_file
; char *           Stack[0x8]:4   key_name
; int *            Stack[0xc]:4   value_ptr
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
;
; XREF[7]:
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e1e21
;   core_inivar.cpp_readIniData_FUN_004fbd90 at 004fbe21
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005073f8
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 0050712c
;   core_msnedit.cpp_readIni_FUN_00537530 at 00537561
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055d27a
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005ac0c7
;
; Referenced Globals:
;   TerminatedCString s_d_0062fd7f
;   TerminatedCString s_d_0062fd82
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdio.c_sscanf_FUN_0060013c
;   engine_ini.cpp_CIniFile_getString_FUN_004fbb20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fbc30
        ;   Label: engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
    PUSH ESI                            ; 004fbc31
    SUB ESP,0x64                        ; 004fbc32
    MOV EAX,dword ptr [ESP + 0x78]      ; 004fbc35
    MOV EDX,dword ptr [EAX]             ; 004fbc39
    PUSH EDX                            ; 004fbc3b
    PUSH 0x62fd7f                       ; 004fbc3c | = "%d"
    LEA EAX,[ESP + 0x8]                 ; 004fbc41
    PUSH EAX                            ; 004fbc45
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004fbc46
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004fbc4b
    PUSH 0x64                           ; 004fbc4e
    LEA EAX,[ESP + 0x4]                 ; 004fbc50
    PUSH EAX                            ; 004fbc54
    MOV ECX,dword ptr [ESP + 0x7c]      ; 004fbc55
    PUSH ECX                            ; 004fbc59
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004fbc5a
    PUSH EBX                            ; 004fbc5e
    CALL engine_ini.cpp_CIniFile_getString_FUN_004fbb20 ; 004fbc5f
        ;   XREF to: 004fbb20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getString_FUN_004fbb20(CIniFile * this, char * key, char * output_buffer, int buffer_size, ...)
    ADD ESP,0x10                        ; 004fbc64
    MOV ESI,dword ptr [ESP + 0x78]      ; 004fbc67
    PUSH ESI                            ; 004fbc6b
    PUSH 0x62fd82                       ; 004fbc6c | = "%d"
    LEA EAX,[ESP + 0x8]                 ; 004fbc71
    PUSH EAX                            ; 004fbc75
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004fbc76
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 004fbc7b
    ADD ESP,0x64                        ; 004fbc7e
    POP ESI                             ; 004fbc81
    POP EBX                             ; 004fbc82
    RET                                 ; 004fbc83


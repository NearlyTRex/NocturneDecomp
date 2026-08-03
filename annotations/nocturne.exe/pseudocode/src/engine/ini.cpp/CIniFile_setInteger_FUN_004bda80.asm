; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(CIniFile *this_ptr,char *key,int value)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   key
; int              Stack[0xc]:4   value
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
;
; XREF[3]:
;   core_inivar.cpp_writeIniData_FUN_004be2d0 at 004be312
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00503a2c
;   sound_sndmain.cpp_writeIni_FUN_00528c80 at 00528d30
;
; Referenced Globals:
;   TerminatedCString s_d_00586738
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_ini.cpp_CIniFile_setString_FUN_004bd9a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bda80
        ;   Label: engine_ini.cpp_CIniFile_setInteger_FUN_004bda80
    SUB ESP,0x64                        ; 004bda81
    MOV EDX,dword ptr [ESP + 0x74]      ; 004bda84
    PUSH EDX                            ; 004bda88
    PUSH 0x586738                       ; 004bda89 | = "%d"
    LEA EAX,[ESP + 0x8]                 ; 004bda8e
    PUSH EAX                            ; 004bda92
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004bda93
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004bda98
    MOV EAX,ESP                         ; 004bda9b
    PUSH EAX                            ; 004bda9d
    MOV ECX,dword ptr [ESP + 0x74]      ; 004bda9e
    PUSH ECX                            ; 004bdaa2
    MOV EBX,dword ptr [ESP + 0x74]      ; 004bdaa3
    PUSH EBX                            ; 004bdaa7
    CALL engine_ini.cpp_CIniFile_setString_FUN_004bd9a0 ; 004bdaa8
        ;   XREF to: 004bd9a0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setString_FUN_004bd9a0(CIniFile * this_ptr, char * key, char * value)
    ADD ESP,0xc                         ; 004bdaad
    ADD ESP,0x64                        ; 004bdab0
    POP EBX                             ; 004bdab3
    RET                                 ; 004bdab4


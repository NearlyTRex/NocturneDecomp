; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_CIniFile_setFloatValue_FUN_004bdb20(CIniFile *this_ptr,char *key,float value)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   key
; float            Stack[0xc]:4   value
; Local Variables:
; undefined8       Stack[-0x6c]:8  local_6c
; undefined        Stack[-0x64]:1  local_64
;
; XREF[1]:
;   sound_sndmain.cpp_writeIni_FUN_00528c80 at 00528d97
;
; Referenced Globals:
;   TerminatedCString s_g_00586741
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_ini.cpp_CIniFile_setString_FUN_004bd9a0
;
; *****************************************************************************

section .text

    SUB ESP,0x64                        ; 004bdb20
        ;   Label: engine_ini.cpp_CIniFile_setFloatValue_FUN_004bdb20
    FLD float ptr [ESP + 0x70]          ; 004bdb23
    SUB ESP,0x8                         ; 004bdb27
    FSTP double ptr [ESP]               ; 004bdb2a
    PUSH 0x586741                       ; 004bdb2d | = "%g"
    LEA EAX,[ESP + 0xc]                 ; 004bdb32
    PUSH EAX                            ; 004bdb36
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004bdb37
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 004bdb3c
    MOV EAX,ESP                         ; 004bdb3f
    PUSH EAX                            ; 004bdb41
    MOV EDX,dword ptr [ESP + 0x70]      ; 004bdb42
    PUSH EDX                            ; 004bdb46
    MOV ECX,dword ptr [ESP + 0x70]      ; 004bdb47
    PUSH ECX                            ; 004bdb4b
    CALL engine_ini.cpp_CIniFile_setString_FUN_004bd9a0 ; 004bdb4c
        ;   XREF to: 004bd9a0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setString_FUN_004bd9a0(CIniFile * this_ptr, char * key, char * value)
    ADD ESP,0xc                         ; 004bdb51
    ADD ESP,0x64                        ; 004bdb54
    RET                                 ; 004bdb57


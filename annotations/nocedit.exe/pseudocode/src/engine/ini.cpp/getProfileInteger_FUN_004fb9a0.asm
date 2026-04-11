; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ini_cpp_getProfileInteger_FUN_004fb9a0(char *section,char *key,int default_value,char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   section
; char *           Stack[0x8]:4   key
; int              Stack[0xc]:4   default_value
; char *           Stack[0x10]:4   filename
; Local Variables:
; char[256]        Stack[-0x20c]:256  local_20c
; char[256]        Stack[-0x10c]:256  local_10c
;
; Referenced Globals:
;   TerminatedCString s_d_0062fc6e
;   TerminatedCString s_engine_ini_cpp_0062fc71
;   TerminatedCString s_Bad_ini_read_0062fc83
;   CIni g_CIniInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdlib.c_atoi_FUN_005ffef0
;   engine_ini.cpp_CIni_getProfileString_FUN_004fb250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb9a0
        ;   Label: engine_ini.cpp_getProfileInteger_FUN_004fb9a0
    PUSH ESI                            ; 004fb9a1
    PUSH EBP                            ; 004fb9a2
    SUB ESP,0x200                       ; 004fb9a3
    MOV EDX,dword ptr [ESP + 0x218]     ; 004fb9a9
    PUSH EDX                            ; 004fb9b0
    PUSH 0x62fc6e                       ; 004fb9b1 | = "%d"
    LEA EAX,[ESP + 0x108]               ; 004fb9b6
    PUSH EAX                            ; 004fb9bd
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004fb9be
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004fb9c3
    MOV ECX,dword ptr [ESP + 0x21c]     ; 004fb9c6
    PUSH ECX                            ; 004fb9cd
    PUSH 0xff                           ; 004fb9ce
    LEA EAX,[ESP + 0x8]                 ; 004fb9d3
    PUSH EAX                            ; 004fb9d7
    LEA EAX,[ESP + 0x10c]               ; 004fb9d8
    PUSH EAX                            ; 004fb9df
    MOV EBX,dword ptr [ESP + 0x224]     ; 004fb9e0
    PUSH EBX                            ; 004fb9e7
    MOV ESI,dword ptr [ESP + 0x224]     ; 004fb9e8
    PUSH ESI                            ; 004fb9ef
    PUSH 0x2db8a60                      ; 004fb9f0 | g_CIniInstance
    CALL engine_ini.cpp_CIni_getProfileString_FUN_004fb250 ; 004fb9f5
        ;   XREF to: 004fb250 (UNCONDITIONAL_CALL)  ; int engine_ini.cpp_CIni_getProfileString_FUN_004fb250(CIni * this_ptr, char * section, char * key, char * default_value, ...)
    ADD ESP,0x1c                        ; 004fb9fa
    TEST EAX,EAX                        ; 004fb9fd
    JZ 0x004fba16                       ; 004fb9ff
        ;   XREF to: 004fba16 (CONDITIONAL_JUMP)  ; LAB_004fba16
    MOV EAX,ESP                         ; 004fba01
        ;   Label: LAB_004fba01
    PUSH EAX                            ; 004fba03
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 004fba04
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 004fba09
    ADD ESP,0x200                       ; 004fba0c
    POP EBP                             ; 004fba12
    POP ESI                             ; 004fba13
    POP EBX                             ; 004fba14
    RET                                 ; 004fba15
    PUSH EDI                            ; 004fba16
        ;   Label: LAB_004fba16
    MOV EDI,0x62fc71                    ; 004fba17 | = "..\\engine\\ini.cpp"
    MOV EBP,0x235                       ; 004fba1c
    PUSH 0x62fc83                       ; 004fba21 | = "Bad ini read!"
    MOV dword ptr [0x02f0ca48],EDI      ; 004fba26 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004fba2c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004fba32
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004fba37
    POP EDI                             ; 004fba3a
    JMP 0x004fba01                      ; 004fba3b
        ;   XREF to: 004fba01 (UNCONDITIONAL_JUMP)  ; LAB_004fba01


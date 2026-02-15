; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_getProfileString_FUN_004fb960(char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   section
; char *           Stack[0x8]:4   key
; char *           Stack[0xc]:4   default_value
; char *           Stack[0x10]:4   output_buffer
; int              Stack[0x14]:4   buffer_size
; char *           Stack[0x18]:4   filename
;
; XREF[1]:
;   engine_ini.cpp_CIniFile_getString_FUN_004fbb20 at 004fbb4c
;
; Referenced Globals:
;   CIni g_CIniInstance
;
; Called Functions:
;   engine_ini.cpp_CIni_getProfileString_FUN_004fb250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb960
        ;   Label: engine_ini.cpp_getProfileString_FUN_004fb960
    PUSH ESI                            ; 004fb961
    PUSH EDI                            ; 004fb962
    PUSH EBP                            ; 004fb963
    MOV EDX,dword ptr [ESP + 0x28]      ; 004fb964
    PUSH EDX                            ; 004fb968
    MOV ECX,dword ptr [ESP + 0x28]      ; 004fb969
    PUSH ECX                            ; 004fb96d
    MOV EBX,dword ptr [ESP + 0x28]      ; 004fb96e
    PUSH EBX                            ; 004fb972
    MOV ESI,dword ptr [ESP + 0x28]      ; 004fb973
    PUSH ESI                            ; 004fb977
    MOV EDI,dword ptr [ESP + 0x28]      ; 004fb978
    PUSH EDI                            ; 004fb97c
    MOV EBP,dword ptr [ESP + 0x28]      ; 004fb97d
    PUSH EBP                            ; 004fb981
    PUSH 0x2db8a60                      ; 004fb982 | g_CIniInstance
    CALL engine_ini.cpp_CIni_getProfileString_FUN_004fb250 ; 004fb987
        ;   XREF to: 004fb250 (UNCONDITIONAL_CALL)  ; int engine_ini.cpp_CIni_getProfileString_FUN_004fb250(CIni * this_ptr, char * section, char * key, char * default_value, ...)
    ADD ESP,0x1c                        ; 004fb98c
    POP EBP                             ; 004fb98f
    POP EDI                             ; 004fb990
    POP ESI                             ; 004fb991
    POP EBX                             ; 004fb992
    RET                                 ; 004fb993


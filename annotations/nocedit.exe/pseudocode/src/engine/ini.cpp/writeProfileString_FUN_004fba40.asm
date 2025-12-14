; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_ini.cpp_writeProfileString_FUN_004fba40(char * section, char * key, char * value, char * filename)
;
; Parameters:
; char *           Stack[0x4]:4   section
; char *           Stack[0x8]:4   key
; char *           Stack[0xc]:4   value
; char *           Stack[0x10]:4   filename
;
; XREF[1]:
;   engine_ini.cpp_CIniFile_setString_FUN_004fbbb0 at 004fbbd6
;
; Referenced Globals:
;   CIni g_CIniInstance
;
; Called Functions:
;   engine_ini.cpp_CIni_writeProfileString_FUN_004fb660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fba40
        ;   Label: engine_ini.cpp_writeProfileString_FUN_004fba40
    PUSH ESI                            ; 004fba41
    MOV EDX,dword ptr [ESP + 0x18]      ; 004fba42
    PUSH EDX                            ; 004fba46
    MOV ECX,dword ptr [ESP + 0x18]      ; 004fba47
    PUSH ECX                            ; 004fba4b
    MOV EBX,dword ptr [ESP + 0x18]      ; 004fba4c
    PUSH EBX                            ; 004fba50
    MOV ESI,dword ptr [ESP + 0x18]      ; 004fba51
    PUSH ESI                            ; 004fba55
    PUSH 0x2db8a60                      ; 004fba56 | g_CIniInstance
    CALL engine_ini.cpp_CIni_writeProfileString_FUN_004fb660 ; 004fba5b
        ;   XREF to: 004fb660 (UNCONDITIONAL_CALL)  ; int engine_ini.cpp_CIni_writeProfileString_FUN_004fb660(CIni * this_ptr, char * section, char * key, char * value, ...)
    ADD ESP,0x14                        ; 004fba60
    POP ESI                             ; 004fba63
    POP EBX                             ; 004fba64
    RET                                 ; 004fba65


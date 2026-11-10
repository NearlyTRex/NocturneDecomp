; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_writeProfileString_FUN_004f4ad0(char *section,char *key,char *value,char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   section
; char *           Stack[0x8]:4   key
; char *           Stack[0xc]:4   value
; char *           Stack[0x10]:4   filename
;
; XREF[1]:
;   engine_ini.cpp_CIniFile_setString_FUN_004f4c90 at 004f4cb6
;
; Called Functions:
;   engine_ini.cpp_CIni_writeProfileString_FUN_004f4720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4ad0
        ;   Label: engine_ini.cpp_writeProfileString_FUN_004f4ad0
    PUSH ESI                            ; 004f4ad1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f4ad2
    PUSH EDX                            ; 004f4ad6
    MOV ECX,dword ptr [ESP + 0x18]      ; 004f4ad7
    PUSH ECX                            ; 004f4adb
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f4adc
    PUSH EBX                            ; 004f4ae0
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f4ae1
    PUSH ESI                            ; 004f4ae5
    PUSH 0x1d06d64                      ; 004f4ae6
    CALL engine_ini.cpp_CIni_writeProfileString_FUN_004f4720 ; 004f4aeb
        ;   XREF to: 004f4720 (UNCONDITIONAL_CALL)  ; int engine_ini.cpp_CIni_writeProfileString_FUN_004f4720(CIni * this_ptr, char * section, char * key, char * value, ...)
    ADD ESP,0x14                        ; 004f4af0
    POP ESI                             ; 004f4af3
    POP EBX                             ; 004f4af4
    RET                                 ; 004f4af5


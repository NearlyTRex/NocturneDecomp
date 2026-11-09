; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_writeProfileString_FUN_004d88e0(char *section,char *key,char *value,char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   section
; char *           Stack[0x8]:4   key
; char *           Stack[0xc]:4   value
; char *           Stack[0x10]:4   filename
;
; XREF[1]:
;   engine_ini.cpp_FUN_004d8aa0 at 004d8ac6
;
; Called Functions:
;   engine_ini.cpp_CIni_writeProfileString_FUN_004d8530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d88e0
        ;   Label: engine_ini.cpp_writeProfileString_FUN_004d88e0
    PUSH ESI                            ; 004d88e1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004d88e2
    PUSH EDX                            ; 004d88e6
    MOV ECX,dword ptr [ESP + 0x18]      ; 004d88e7
    PUSH ECX                            ; 004d88eb
    MOV EBX,dword ptr [ESP + 0x18]      ; 004d88ec
    PUSH EBX                            ; 004d88f0
    MOV ESI,dword ptr [ESP + 0x18]      ; 004d88f1
    PUSH ESI                            ; 004d88f5
    PUSH 0x1cee1a4                      ; 004d88f6
    CALL engine_ini.cpp_CIni_writeProfileString_FUN_004d8530 ; 004d88fb
        ;   XREF to: 004d8530 (UNCONDITIONAL_CALL)  ; int engine_ini.cpp_CIni_writeProfileString_FUN_004d8530(CIni * this_ptr, char * section, char * key, char * value, ...)
    ADD ESP,0x14                        ; 004d8900
    POP ESI                             ; 004d8903
    POP EBX                             ; 004d8904
    RET                                 ; 004d8905


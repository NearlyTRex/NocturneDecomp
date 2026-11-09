; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_writeProfileString_FUN_004d89f0(char *section,char *key,char *value,char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   section
; char *           Stack[0x8]:4   key
; char *           Stack[0xc]:4   value
; char *           Stack[0x10]:4   filename
;
; XREF[1]:
;   engine_ini.cpp_FUN_004d8bb0 at 004d8bd6
;
; Called Functions:
;   engine_ini.cpp_CIni_writeProfileString_FUN_004d8640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d89f0
        ;   Label: engine_ini.cpp_writeProfileString_FUN_004d89f0
    PUSH ESI                            ; 004d89f1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004d89f2
    PUSH EDX                            ; 004d89f6
    MOV ECX,dword ptr [ESP + 0x18]      ; 004d89f7
    PUSH ECX                            ; 004d89fb
    MOV EBX,dword ptr [ESP + 0x18]      ; 004d89fc
    PUSH EBX                            ; 004d8a00
    MOV ESI,dword ptr [ESP + 0x18]      ; 004d8a01
    PUSH ESI                            ; 004d8a05
    PUSH 0x1d5bc78                      ; 004d8a06
    CALL engine_ini.cpp_CIni_writeProfileString_FUN_004d8640 ; 004d8a0b
        ;   XREF to: 004d8640 (UNCONDITIONAL_CALL)  ; int engine_ini.cpp_CIni_writeProfileString_FUN_004d8640(CIni * this_ptr, char * section, char * key, char * value, ...)
    ADD ESP,0x14                        ; 004d8a10
    POP ESI                             ; 004d8a13
    POP EBX                             ; 004d8a14
    RET                                 ; 004d8a15


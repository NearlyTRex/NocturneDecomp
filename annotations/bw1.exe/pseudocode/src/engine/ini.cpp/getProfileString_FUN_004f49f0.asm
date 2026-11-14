; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_getProfileString_FUN_004f49f0(char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)
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
;   engine_ini.cpp_CIniFile_getString_FUN_004f4c00 at 004f4c2c
;
; Called Functions:
;   engine_ini.cpp_CIni_getProfileString_FUN_004f4370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f49f0
        ;   Label: engine_ini.cpp_getProfileString_FUN_004f49f0
    PUSH ESI                            ; 004f49f1
    PUSH EDI                            ; 004f49f2
    PUSH EBP                            ; 004f49f3
    MOV EDX,dword ptr [ESP + 0x28]      ; 004f49f4
    PUSH EDX                            ; 004f49f8
    MOV ECX,dword ptr [ESP + 0x28]      ; 004f49f9
    PUSH ECX                            ; 004f49fd
    MOV EBX,dword ptr [ESP + 0x28]      ; 004f49fe
    PUSH EBX                            ; 004f4a02
    MOV ESI,dword ptr [ESP + 0x28]      ; 004f4a03
    PUSH ESI                            ; 004f4a07
    MOV EDI,dword ptr [ESP + 0x28]      ; 004f4a08
    PUSH EDI                            ; 004f4a0c
    MOV EBP,dword ptr [ESP + 0x28]      ; 004f4a0d
    PUSH EBP                            ; 004f4a11
    PUSH 0x1d06d64                      ; 004f4a12
    CALL engine_ini.cpp_CIni_getProfileString_FUN_004f4370 ; 004f4a17
        ;   XREF to: 004f4370 (UNCONDITIONAL_CALL)  ; int engine_ini.cpp_CIni_getProfileString_FUN_004f4370(CIni * this_ptr, char * section, char * key, char * default_value, ...)
    ADD ESP,0x1c                        ; 004f4a1c
    POP EBP                             ; 004f4a1f
    POP EDI                             ; 004f4a20
    POP ESI                             ; 004f4a21
    POP EBX                             ; 004f4a22
    RET                                 ; 004f4a23


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_getProfileString_FUN_004d8910(char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)
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
;   engine_ini.cpp_FUN_004d8b20 at 004d8b4c
;
; Called Functions:
;   engine_ini.cpp_FUN_004d8290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8910
        ;   Label: engine_ini.cpp_getProfileString_FUN_004d8910
    PUSH ESI                            ; 004d8911
    PUSH EDI                            ; 004d8912
    PUSH EBP                            ; 004d8913
    MOV EDX,dword ptr [ESP + 0x28]      ; 004d8914
    PUSH EDX                            ; 004d8918
    MOV ECX,dword ptr [ESP + 0x28]      ; 004d8919
    PUSH ECX                            ; 004d891d
    MOV EBX,dword ptr [ESP + 0x28]      ; 004d891e
    PUSH EBX                            ; 004d8922
    MOV ESI,dword ptr [ESP + 0x28]      ; 004d8923
    PUSH ESI                            ; 004d8927
    MOV EDI,dword ptr [ESP + 0x28]      ; 004d8928
    PUSH EDI                            ; 004d892c
    MOV EBP,dword ptr [ESP + 0x28]      ; 004d892d
    PUSH EBP                            ; 004d8931
    PUSH 0x1d5bc78                      ; 004d8932
    CALL engine_ini.cpp_FUN_004d8290    ; 004d8937
        ;   XREF to: 004d8290 (UNCONDITIONAL_CALL)  ; int engine_ini.cpp_FUN_004d8290(CIni * this_ptr, char * section, char * key, char * default_value, ...)
    ADD ESP,0x1c                        ; 004d893c
    POP EBP                             ; 004d893f
    POP EDI                             ; 004d8940
    POP ESI                             ; 004d8941
    POP EBX                             ; 004d8942
    RET                                 ; 004d8943


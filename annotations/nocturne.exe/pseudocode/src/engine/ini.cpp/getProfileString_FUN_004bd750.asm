; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_getProfileString_FUN_004bd750(char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)
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
;   engine_ini.cpp_CIniFile_getString_FUN_004bd910 at 004bd93c
;
; Called Functions:
;   engine_ini.cpp_CIni_getProfileString_FUN_004bd0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd750
        ;   Label: engine_ini.cpp_getProfileString_FUN_004bd750
    PUSH ESI                            ; 004bd751
    PUSH EDI                            ; 004bd752
    PUSH EBP                            ; 004bd753
    MOV EDX,dword ptr [ESP + 0x28]      ; 004bd754
    PUSH EDX                            ; 004bd758
    MOV ECX,dword ptr [ESP + 0x28]      ; 004bd759
    PUSH ECX                            ; 004bd75d
    MOV EBX,dword ptr [ESP + 0x28]      ; 004bd75e
    PUSH EBX                            ; 004bd762
    MOV ESI,dword ptr [ESP + 0x28]      ; 004bd763
    PUSH ESI                            ; 004bd767
    MOV EDI,dword ptr [ESP + 0x28]      ; 004bd768
    PUSH EDI                            ; 004bd76c
    MOV EBP,dword ptr [ESP + 0x28]      ; 004bd76d
    PUSH EBP                            ; 004bd771
    PUSH 0x1cae378                      ; 004bd772
    CALL engine_ini.cpp_CIni_getProfileString_FUN_004bd0a0 ; 004bd777
        ;   XREF to: 004bd0a0 (UNCONDITIONAL_CALL)  ; int engine_ini.cpp_CIni_getProfileString_FUN_004bd0a0(CIni * this_ptr, char * section, char * key, char * default_value, ...)
    ADD ESP,0x1c                        ; 004bd77c
    POP EBP                             ; 004bd77f
    POP EDI                             ; 004bd780
    POP ESI                             ; 004bd781
    POP EBX                             ; 004bd782
    RET                                 ; 004bd783


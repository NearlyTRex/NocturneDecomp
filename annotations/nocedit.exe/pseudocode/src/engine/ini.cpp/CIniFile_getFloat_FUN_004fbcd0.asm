; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004fbcd0(CIniFile *this_ptr,char *key,float *output)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   key
; float *          Stack[0xc]:4   output
; Local Variables:
; char[100]        Stack[-0x68]:100  local_68
;
; XREF[1]:
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005ac06c
;
; Referenced Globals:
;   TerminatedCString s_g_0062fd88
;   TerminatedCString s_f_0062fd8b
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_sscanf_FUN_0060013c
;   engine_ini.cpp_CIniFile_getString_FUN_004fbb20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fbcd0
        ;   Label: engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0
    SUB ESP,0x64                        ; 004fbcd1
    MOV EAX,dword ptr [ESP + 0x74]      ; 004fbcd4
    SUB ESP,0x8                         ; 004fbcd8
    FLD float ptr [EAX]                 ; 004fbcdb
    FSTP double ptr [ESP]               ; 004fbcdd
    PUSH 0x62fd88                       ; 004fbce0 | = "%g"
    LEA EAX,[ESP + 0xc]                 ; 004fbce5
    PUSH EAX                            ; 004fbce9
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004fbcea
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004fbcef
    PUSH 0x64                           ; 004fbcf2
    LEA EAX,[ESP + 0x4]                 ; 004fbcf4
    PUSH EAX                            ; 004fbcf8
    MOV EDX,dword ptr [ESP + 0x78]      ; 004fbcf9
    PUSH EDX                            ; 004fbcfd
    MOV ECX,dword ptr [ESP + 0x78]      ; 004fbcfe
    PUSH ECX                            ; 004fbd02
    CALL engine_ini.cpp_CIniFile_getString_FUN_004fbb20 ; 004fbd03
        ;   XREF to: 004fbb20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getString_FUN_004fbb20(CIniFile * this_ptr, char * key, char * output_buffer, int buffer_size)
    ADD ESP,0x10                        ; 004fbd08
    MOV EBX,dword ptr [ESP + 0x74]      ; 004fbd0b
    PUSH EBX                            ; 004fbd0f
    PUSH 0x62fd8b                       ; 004fbd10 | = "%f"
    LEA EAX,[ESP + 0x8]                 ; 004fbd15
    PUSH EAX                            ; 004fbd19
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004fbd1a
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 004fbd1f
    ADD ESP,0x64                        ; 004fbd22
    POP EBX                             ; 004fbd25
    RET                                 ; 004fbd26


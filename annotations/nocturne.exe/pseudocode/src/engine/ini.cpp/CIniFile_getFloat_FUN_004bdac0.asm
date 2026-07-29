; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004bdac0(CIniFile *this_ptr,char *key,float *output)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   key
; float *          Stack[0xc]:4   output
; Local Variables:
; undefined8       Stack[-0x70]:8  local_70
; undefined        Stack[-0x68]:1  local_68
;
; XREF[1]:
;   sound_sndmain.cpp_FUN_005289f0 at 00528b32
;
; Referenced Globals:
;   TerminatedCString s_g_0058673b
;   TerminatedCString s_f_0058673e
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdio.c_sscanf_FUN_00566b5c
;   engine_ini.cpp_CIniFile_getString_FUN_004bd910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bdac0
        ;   Label: engine_ini.cpp_CIniFile_getFloat_FUN_004bdac0
    SUB ESP,0x64                        ; 004bdac1
    MOV EAX,dword ptr [ESP + 0x74]      ; 004bdac4
    SUB ESP,0x8                         ; 004bdac8
    FLD float ptr [EAX]                 ; 004bdacb
    FSTP double ptr [ESP]               ; 004bdacd
    PUSH 0x58673b                       ; 004bdad0 | = "%g"
    LEA EAX,[ESP + 0xc]                 ; 004bdad5
    PUSH EAX                            ; 004bdad9
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004bdada
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 004bdadf
    PUSH 0x64                           ; 004bdae2
    LEA EAX,[ESP + 0x4]                 ; 004bdae4
    PUSH EAX                            ; 004bdae8
    MOV EDX,dword ptr [ESP + 0x78]      ; 004bdae9
    PUSH EDX                            ; 004bdaed
    MOV ECX,dword ptr [ESP + 0x78]      ; 004bdaee
    PUSH ECX                            ; 004bdaf2
    CALL engine_ini.cpp_CIniFile_getString_FUN_004bd910 ; 004bdaf3
        ;   XREF to: 004bd910 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getString_FUN_004bd910(CIniFile * this_ptr, char * key, char * output_buffer, int buffer_size)
    ADD ESP,0x10                        ; 004bdaf8
    MOV EBX,dword ptr [ESP + 0x74]      ; 004bdafb
    PUSH EBX                            ; 004bdaff
    PUSH 0x58673e                       ; 004bdb00 | = "%f"
    LEA EAX,[ESP + 0x8]                 ; 004bdb05
    PUSH EAX                            ; 004bdb09
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 004bdb0a
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0xc                         ; 004bdb0f
    ADD ESP,0x64                        ; 004bdb12
    POP EBX                             ; 004bdb15
    RET                                 ; 004bdb16


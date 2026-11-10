; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004f4d10(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[5]:
;   core_game.cpp_FUN_004d7250 at 004d733b
;   core_inivar.cpp_readIniData_FUN_004f4f50 at 004f4fab
;   core_script.cpp_CScript_step_FUN_00544460 at 005475cc
;   sound_sndmain.cpp_readIni_FUN_005760b0 at 005761c4
;   unkafter_winrun.cpp_FUN_005b464c at 005b4699
;
; Referenced Globals:
;   undefined4 DAT_005e58e8
;   undefined4 DAT_005e58eb
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005c2cac
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4d10
        ;   Label: engine_ini.cpp_FUN_004f4d10
    PUSH ESI                            ; 004f4d11
    SUB ESP,0x64                        ; 004f4d12
    MOV EAX,dword ptr [ESP + 0x78]      ; 004f4d15
    MOV EDX,dword ptr [EAX]             ; 004f4d19
    PUSH EDX                            ; 004f4d1b
    PUSH 0x5e58e8                       ; 004f4d1c | DAT_005e58e8
    LEA EAX,[ESP + 0x8]                 ; 004f4d21
    PUSH EAX                            ; 004f4d25
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004f4d26
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004f4d2b
    PUSH 0x64                           ; 004f4d2e
    LEA EAX,[ESP + 0x4]                 ; 004f4d30
    PUSH EAX                            ; 004f4d34
    MOV ECX,dword ptr [ESP + 0x7c]      ; 004f4d35
    MOV EDX,dword ptr [ESP + 0x78]      ; 004f4d39
    PUSH ECX                            ; 004f4d3d
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004f4d3e
    MOV EDX,dword ptr [EDX + 0x200]     ; 004f4d42
    PUSH EBX                            ; 004f4d48
    CALL dword ptr [EDX + 0x4]          ; 004f4d49
    ADD ESP,0x10                        ; 004f4d4c
    MOV ESI,dword ptr [ESP + 0x78]      ; 004f4d4f
    PUSH ESI                            ; 004f4d53
    PUSH 0x5e58eb                       ; 004f4d54 | DAT_005e58eb
    LEA EAX,[ESP + 0x8]                 ; 004f4d59
    PUSH EAX                            ; 004f4d5d
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004f4d5e
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 004f4d63
    ADD ESP,0x64                        ; 004f4d66
    POP ESI                             ; 004f4d69
    POP EBX                             ; 004f4d6a
    RET                                 ; 004f4d6b


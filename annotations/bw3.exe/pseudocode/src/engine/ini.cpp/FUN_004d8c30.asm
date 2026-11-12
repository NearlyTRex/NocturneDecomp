; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004d8c30(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[5]:
;   core_game.cpp_FUN_004be8d0 at 004be9c2
;   core_inivar.cpp_readIniData_FUN_004d8e70 at 004d8ecb
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052ccb9
;   sound_sndmain.cpp_readIni_FUN_00559220 at 00559334
;   wincore_winrun.cpp_FUN_0058282c at 00582879
;
; Referenced Globals:
;   undefined4 DAT_005c58ae
;   undefined4 DAT_005c58b1
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005a5b9c
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8c30
        ;   Label: engine_ini.cpp_FUN_004d8c30
    PUSH ESI                            ; 004d8c31
    SUB ESP,0x64                        ; 004d8c32
    MOV EAX,dword ptr [ESP + 0x78]      ; 004d8c35
    MOV EDX,dword ptr [EAX]             ; 004d8c39
    PUSH EDX                            ; 004d8c3b
    PUSH 0x5c58ae                       ; 004d8c3c | DAT_005c58ae
    LEA EAX,[ESP + 0x8]                 ; 004d8c41
    PUSH EAX                            ; 004d8c45
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004d8c46
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004d8c4b
    PUSH 0x64                           ; 004d8c4e
    LEA EAX,[ESP + 0x4]                 ; 004d8c50
    PUSH EAX                            ; 004d8c54
    MOV ECX,dword ptr [ESP + 0x7c]      ; 004d8c55
    MOV EDX,dword ptr [ESP + 0x78]      ; 004d8c59
    PUSH ECX                            ; 004d8c5d
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004d8c5e
    MOV EDX,dword ptr [EDX + 0x200]     ; 004d8c62
    PUSH EBX                            ; 004d8c68
    CALL dword ptr [EDX + 0x4]          ; 004d8c69
    ADD ESP,0x10                        ; 004d8c6c
    MOV ESI,dword ptr [ESP + 0x78]      ; 004d8c6f
    PUSH ESI                            ; 004d8c73
    PUSH 0x5c58b1                       ; 004d8c74 | DAT_005c58b1
    LEA EAX,[ESP + 0x8]                 ; 004d8c79
    PUSH EAX                            ; 004d8c7d
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004d8c7e
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 004d8c83
    ADD ESP,0x64                        ; 004d8c86
    POP ESI                             ; 004d8c89
    POP EBX                             ; 004d8c8a
    RET                                 ; 004d8c8b


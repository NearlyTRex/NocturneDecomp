; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004d8b20(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[5]:
;   core_game.cpp_FUN_004bc840 at 004bc91f
;   core_inivar.cpp_readIniData_FUN_004d8d60 at 004d8dbb
;   core_script.cpp_CScript_step_FUN_00522350 at 00525669
;   sound_sndmain.cpp_readIni_FUN_00553680 at 00553794
;   wincore_winrun.cpp_FUN_00590b10 at 00590b59
;
; Referenced Globals:
;   undefined4 DAT_005dad87
;   undefined4 DAT_005dad8a
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8b20
        ;   Label: engine_ini.cpp_FUN_004d8b20
    PUSH ESI                            ; 004d8b21
    SUB ESP,0x64                        ; 004d8b22
    MOV EAX,dword ptr [ESP + 0x78]      ; 004d8b25
    MOV EDX,dword ptr [EAX]             ; 004d8b29
    PUSH EDX                            ; 004d8b2b
    PUSH 0x5dad87                       ; 004d8b2c | DAT_005dad87
    LEA EAX,[ESP + 0x8]                 ; 004d8b31
    PUSH EAX                            ; 004d8b35
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004d8b36
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004d8b3b
    PUSH 0x64                           ; 004d8b3e
    LEA EAX,[ESP + 0x4]                 ; 004d8b40
    PUSH EAX                            ; 004d8b44
    MOV ECX,dword ptr [ESP + 0x7c]      ; 004d8b45
    MOV EDX,dword ptr [ESP + 0x78]      ; 004d8b49
    PUSH ECX                            ; 004d8b4d
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004d8b4e
    MOV EDX,dword ptr [EDX + 0x200]     ; 004d8b52
    PUSH EBX                            ; 004d8b58
    CALL dword ptr [EDX + 0x4]          ; 004d8b59
    ADD ESP,0x10                        ; 004d8b5c
    MOV ESI,dword ptr [ESP + 0x78]      ; 004d8b5f
    PUSH ESI                            ; 004d8b63
    PUSH 0x5dad8a                       ; 004d8b64 | DAT_005dad8a
    LEA EAX,[ESP + 0x8]                 ; 004d8b69
    PUSH EAX                            ; 004d8b6d
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 004d8b6e
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 004d8b73
    ADD ESP,0x64                        ; 004d8b76
    POP ESI                             ; 004d8b79
    POP EBX                             ; 004d8b7a
    RET                                 ; 004d8b7b


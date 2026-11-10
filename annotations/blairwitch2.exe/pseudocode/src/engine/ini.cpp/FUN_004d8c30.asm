; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004d8c30(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x70]:8  local_70
; undefined        Stack[-0x68]:1  local_68
;
; XREF[1]:
;   sound_sndmain.cpp_writeIni_FUN_00553980 at 00553a9b
;
; Referenced Globals:
;   undefined4 DAT_005dad96
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8c30
        ;   Label: engine_ini.cpp_FUN_004d8c30
    SUB ESP,0x64                        ; 004d8c31
    FLD float ptr [ESP + 0x74]          ; 004d8c34
    SUB ESP,0x8                         ; 004d8c38
    FSTP double ptr [ESP]               ; 004d8c3b
    PUSH 0x5dad96                       ; 004d8c3e | DAT_005dad96
    LEA EAX,[ESP + 0xc]                 ; 004d8c43
    PUSH EAX                            ; 004d8c47
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004d8c48
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d8c4d
    MOV EAX,ESP                         ; 004d8c50
    PUSH EAX                            ; 004d8c52
    MOV ECX,dword ptr [ESP + 0x74]      ; 004d8c53
    MOV EDX,dword ptr [ESP + 0x70]      ; 004d8c57
    PUSH ECX                            ; 004d8c5b
    MOV EBX,dword ptr [ESP + 0x74]      ; 004d8c5c
    MOV EDX,dword ptr [EDX + 0x200]     ; 004d8c60
    PUSH EBX                            ; 004d8c66
    CALL dword ptr [EDX + 0x8]          ; 004d8c67
    ADD ESP,0xc                         ; 004d8c6a
    ADD ESP,0x64                        ; 004d8c6d
    POP EBX                             ; 004d8c70
    RET                                 ; 004d8c71


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004d8d40(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x70]:8  local_70
; undefined        Stack[-0x68]:1  local_68
;
; XREF[1]:
;   sound_sndmain.cpp_writeIni_FUN_00559520 at 0055963b
;
; Referenced Globals:
;   undefined4 DAT_005c58bd
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8d40
        ;   Label: engine_ini.cpp_FUN_004d8d40
    SUB ESP,0x64                        ; 004d8d41
    FLD float ptr [ESP + 0x74]          ; 004d8d44
    SUB ESP,0x8                         ; 004d8d48
    FSTP double ptr [ESP]               ; 004d8d4b
    PUSH 0x5c58bd                       ; 004d8d4e | DAT_005c58bd
    LEA EAX,[ESP + 0xc]                 ; 004d8d53
    PUSH EAX                            ; 004d8d57
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004d8d58
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d8d5d
    MOV EAX,ESP                         ; 004d8d60
    PUSH EAX                            ; 004d8d62
    MOV ECX,dword ptr [ESP + 0x74]      ; 004d8d63
    MOV EDX,dword ptr [ESP + 0x70]      ; 004d8d67
    PUSH ECX                            ; 004d8d6b
    MOV EBX,dword ptr [ESP + 0x74]      ; 004d8d6c
    MOV EDX,dword ptr [EDX + 0x200]     ; 004d8d70
    PUSH EBX                            ; 004d8d76
    CALL dword ptr [EDX + 0x8]          ; 004d8d77
    ADD ESP,0xc                         ; 004d8d7a
    ADD ESP,0x64                        ; 004d8d7d
    POP EBX                             ; 004d8d80
    RET                                 ; 004d8d81


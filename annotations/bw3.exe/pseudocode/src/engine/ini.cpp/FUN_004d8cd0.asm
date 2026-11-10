; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004d8cd0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x74]:8  local_74
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[1]:
;   sound_sndmain.cpp_readIni_FUN_00559220 at 00559374
;
; Referenced Globals:
;   undefined4 DAT_005c58b7
;   undefined4 DAT_005c58ba
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005a5b9c
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8cd0
        ;   Label: engine_ini.cpp_FUN_004d8cd0
    PUSH ESI                            ; 004d8cd1
    SUB ESP,0x64                        ; 004d8cd2
    MOV EAX,dword ptr [ESP + 0x78]      ; 004d8cd5
    SUB ESP,0x8                         ; 004d8cd9
    FLD float ptr [EAX]                 ; 004d8cdc
    FSTP double ptr [ESP]               ; 004d8cde
    PUSH 0x5c58b7                       ; 004d8ce1 | DAT_005c58b7
    LEA EAX,[ESP + 0xc]                 ; 004d8ce6
    PUSH EAX                            ; 004d8cea
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004d8ceb
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d8cf0
    PUSH 0x64                           ; 004d8cf3
    LEA EAX,[ESP + 0x4]                 ; 004d8cf5
    PUSH EAX                            ; 004d8cf9
    MOV ECX,dword ptr [ESP + 0x7c]      ; 004d8cfa
    MOV EDX,dword ptr [ESP + 0x78]      ; 004d8cfe
    PUSH ECX                            ; 004d8d02
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004d8d03
    MOV EDX,dword ptr [EDX + 0x200]     ; 004d8d07
    PUSH EBX                            ; 004d8d0d
    CALL dword ptr [EDX + 0x4]          ; 004d8d0e
    ADD ESP,0x10                        ; 004d8d11
    MOV ESI,dword ptr [ESP + 0x78]      ; 004d8d14
    PUSH ESI                            ; 004d8d18
    PUSH 0x5c58ba                       ; 004d8d19 | DAT_005c58ba
    LEA EAX,[ESP + 0x8]                 ; 004d8d1e
    PUSH EAX                            ; 004d8d22
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004d8d23
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 004d8d28
    ADD ESP,0x64                        ; 004d8d2b
    POP ESI                             ; 004d8d2e
    POP EBX                             ; 004d8d2f
    RET                                 ; 004d8d30


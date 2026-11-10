; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004f4db0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x74]:8  local_74
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[1]:
;   sound_sndmain.cpp_readIni_FUN_005760b0 at 00576204
;
; Referenced Globals:
;   undefined4 DAT_005e58f1
;   undefined4 DAT_005e58f4
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005c2cac
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4db0
        ;   Label: engine_ini.cpp_FUN_004f4db0
    PUSH ESI                            ; 004f4db1
    SUB ESP,0x64                        ; 004f4db2
    MOV EAX,dword ptr [ESP + 0x78]      ; 004f4db5
    SUB ESP,0x8                         ; 004f4db9
    FLD float ptr [EAX]                 ; 004f4dbc
    FSTP double ptr [ESP]               ; 004f4dbe
    PUSH 0x5e58f1                       ; 004f4dc1 | DAT_005e58f1
    LEA EAX,[ESP + 0xc]                 ; 004f4dc6
    PUSH EAX                            ; 004f4dca
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004f4dcb
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004f4dd0
    PUSH 0x64                           ; 004f4dd3
    LEA EAX,[ESP + 0x4]                 ; 004f4dd5
    PUSH EAX                            ; 004f4dd9
    MOV ECX,dword ptr [ESP + 0x7c]      ; 004f4dda
    MOV EDX,dword ptr [ESP + 0x78]      ; 004f4dde
    PUSH ECX                            ; 004f4de2
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004f4de3
    MOV EDX,dword ptr [EDX + 0x200]     ; 004f4de7
    PUSH EBX                            ; 004f4ded
    CALL dword ptr [EDX + 0x4]          ; 004f4dee
    ADD ESP,0x10                        ; 004f4df1
    MOV ESI,dword ptr [ESP + 0x78]      ; 004f4df4
    PUSH ESI                            ; 004f4df8
    PUSH 0x5e58f4                       ; 004f4df9 | DAT_005e58f4
    LEA EAX,[ESP + 0x8]                 ; 004f4dfe
    PUSH EAX                            ; 004f4e02
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004f4e03
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 004f4e08
    ADD ESP,0x64                        ; 004f4e0b
    POP ESI                             ; 004f4e0e
    POP EBX                             ; 004f4e0f
    RET                                 ; 004f4e10


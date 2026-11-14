; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004f4e20(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x70]:8  local_70
; undefined        Stack[-0x68]:1  local_68
;
; XREF[1]:
;   sound_sndmain.cpp_writeIni_FUN_005763b0 at 005764cb
;
; Referenced Globals:
;   undefined4 DAT_005e58f7
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4e20
        ;   Label: engine_ini.cpp_FUN_004f4e20
    SUB ESP,0x64                        ; 004f4e21
    FLD float ptr [ESP + 0x74]          ; 004f4e24
    SUB ESP,0x8                         ; 004f4e28
    FSTP double ptr [ESP]               ; 004f4e2b
    PUSH 0x5e58f7                       ; 004f4e2e | DAT_005e58f7
    LEA EAX,[ESP + 0xc]                 ; 004f4e33
    PUSH EAX                            ; 004f4e37
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004f4e38
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004f4e3d
    MOV EAX,ESP                         ; 004f4e40
    PUSH EAX                            ; 004f4e42
    MOV ECX,dword ptr [ESP + 0x74]      ; 004f4e43
    MOV EDX,dword ptr [ESP + 0x70]      ; 004f4e47
    PUSH ECX                            ; 004f4e4b
    MOV EBX,dword ptr [ESP + 0x74]      ; 004f4e4c
    MOV EDX,dword ptr [EDX + 0x200]     ; 004f4e50
    PUSH EBX                            ; 004f4e56
    CALL dword ptr [EDX + 0x8]          ; 004f4e57
    ADD ESP,0xc                         ; 004f4e5a
    ADD ESP,0x64                        ; 004f4e5d
    POP EBX                             ; 004f4e60
    RET                                 ; 004f4e61


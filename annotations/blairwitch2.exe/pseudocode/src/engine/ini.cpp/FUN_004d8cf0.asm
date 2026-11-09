; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004d8cf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8cf0
        ;   Label: engine_ini.cpp_FUN_004d8cf0
    PUSH ESI                            ; 004d8cf1
    SUB ESP,0x64                        ; 004d8cf2
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004d8cf5
    PUSH EDX                            ; 004d8cf9
    MOV ECX,dword ptr [ESP + 0x7c]      ; 004d8cfa
    PUSH ECX                            ; 004d8cfe
    PUSH 0x5dada1                       ; 004d8cff
    LEA EAX,[ESP + 0xc]                 ; 004d8d04
    PUSH EAX                            ; 004d8d08
    CALL crt_unknown.c_FUN_005b7790     ; 004d8d09
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 004d8d0e
    MOV EAX,ESP                         ; 004d8d11
    PUSH EAX                            ; 004d8d13
    MOV EBX,dword ptr [ESP + 0x78]      ; 004d8d14
    MOV EDX,dword ptr [ESP + 0x74]      ; 004d8d18
    PUSH EBX                            ; 004d8d1c
    MOV ESI,dword ptr [ESP + 0x78]      ; 004d8d1d
    MOV EDX,dword ptr [EDX + 0x200]     ; 004d8d21
    PUSH ESI                            ; 004d8d27
    CALL dword ptr [EDX + 0x8]          ; 004d8d28
    ADD ESP,0xc                         ; 004d8d2b
    ADD ESP,0x64                        ; 004d8d2e
    POP ESI                             ; 004d8d31
    POP EBX                             ; 004d8d32
    RET                                 ; 004d8d33


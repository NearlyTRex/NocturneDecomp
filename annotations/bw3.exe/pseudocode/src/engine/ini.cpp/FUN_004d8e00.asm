; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004d8e00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8e00
        ;   Label: engine_ini.cpp_FUN_004d8e00
    PUSH ESI                            ; 004d8e01
    SUB ESP,0x64                        ; 004d8e02
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004d8e05
    PUSH EDX                            ; 004d8e09
    MOV ECX,dword ptr [ESP + 0x7c]      ; 004d8e0a
    PUSH ECX                            ; 004d8e0e
    PUSH 0x5c58c8                       ; 004d8e0f
    LEA EAX,[ESP + 0xc]                 ; 004d8e14
    PUSH EAX                            ; 004d8e18
    CALL crt_unknown.c_FUN_005a28c0     ; 004d8e19
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004d8e1e
    MOV EAX,ESP                         ; 004d8e21
    PUSH EAX                            ; 004d8e23
    MOV EBX,dword ptr [ESP + 0x78]      ; 004d8e24
    MOV EDX,dword ptr [ESP + 0x74]      ; 004d8e28
    PUSH EBX                            ; 004d8e2c
    MOV ESI,dword ptr [ESP + 0x78]      ; 004d8e2d
    MOV EDX,dword ptr [EDX + 0x200]     ; 004d8e31
    PUSH ESI                            ; 004d8e37
    CALL dword ptr [EDX + 0x8]          ; 004d8e38
    ADD ESP,0xc                         ; 004d8e3b
    ADD ESP,0x64                        ; 004d8e3e
    POP ESI                             ; 004d8e41
    POP EBX                             ; 004d8e42
    RET                                 ; 004d8e43


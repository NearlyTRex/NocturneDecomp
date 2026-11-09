; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004f4ee0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4ee0
        ;   Label: engine_ini.cpp_FUN_004f4ee0
    PUSH ESI                            ; 004f4ee1
    SUB ESP,0x64                        ; 004f4ee2
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004f4ee5
    PUSH EDX                            ; 004f4ee9
    MOV ECX,dword ptr [ESP + 0x7c]      ; 004f4eea
    PUSH ECX                            ; 004f4eee
    PUSH 0x5e5902                       ; 004f4eef
    LEA EAX,[ESP + 0xc]                 ; 004f4ef4
    PUSH EAX                            ; 004f4ef8
    CALL crt_unknown.c_FUN_005bfb40     ; 004f4ef9
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 004f4efe
    MOV EAX,ESP                         ; 004f4f01
    PUSH EAX                            ; 004f4f03
    MOV EBX,dword ptr [ESP + 0x78]      ; 004f4f04
    MOV EDX,dword ptr [ESP + 0x74]      ; 004f4f08
    PUSH EBX                            ; 004f4f0c
    MOV ESI,dword ptr [ESP + 0x78]      ; 004f4f0d
    MOV EDX,dword ptr [EDX + 0x200]     ; 004f4f11
    PUSH ESI                            ; 004f4f17
    CALL dword ptr [EDX + 0x8]          ; 004f4f18
    ADD ESP,0xc                         ; 004f4f1b
    ADD ESP,0x64                        ; 004f4f1e
    POP ESI                             ; 004f4f21
    POP EBX                             ; 004f4f22
    RET                                 ; 004f4f23


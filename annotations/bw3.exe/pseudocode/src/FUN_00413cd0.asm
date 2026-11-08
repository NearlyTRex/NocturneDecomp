; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00413cd0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)
;
;
; Called Functions:
;   FUN_0040d460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413cd0
        ;   Label: FUN_00413cd0
    PUSH ESI                            ; 00413cd1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00413cd2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00413cd6
    PUSH EDX                            ; 00413cda
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00413cdb
    PUSH ECX                            ; 00413cdf
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00413ce0
    MOV EDX,dword ptr [ESP + 0x18]      ; 00413ce4
    PUSH EBX                            ; 00413ce8
    LEA EBX,[EDX*0x4 + 0x0]             ; 00413ce9
    SUB EBX,EDX                         ; 00413cf0
    SHL EBX,0x2                         ; 00413cf2
    SUB EBX,EDX                         ; 00413cf5
    LEA EAX,[ESI + 0x70]                ; 00413cf7
    SHL EBX,0x2                         ; 00413cfa
    ADD EAX,EBX                         ; 00413cfd
    PUSH EAX                            ; 00413cff
    CALL FUN_0040d460                   ; 00413d00
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 00413d05
    LEA EAX,[ESI + EBX*0x1]             ; 00413d08
    MOV EDX,dword ptr [ESP + 0x20]      ; 00413d0b
    MOV dword ptr [EAX + 0x84],EDX      ; 00413d0f
    MOV EDX,dword ptr [ESP + 0x24]      ; 00413d15
    MOV dword ptr [EAX + 0x88],EDX      ; 00413d19
    MOV EDX,dword ptr [ESP + 0x28]      ; 00413d1f
    MOV dword ptr [EAX + 0x8c],EDX      ; 00413d23
    MOV EDX,dword ptr [ESP + 0x18]      ; 00413d29
    MOV dword ptr [EAX + 0x90],EDX      ; 00413d2d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00413d33
    MOV dword ptr [EAX + 0x94],EDX      ; 00413d37
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00413d3d
    MOV dword ptr [EAX + 0x98],EDX      ; 00413d41
    INC dword ptr [ESI + 0x20]          ; 00413d47
    POP ESI                             ; 00413d4a
    POP EBX                             ; 00413d4b
    RET                                 ; 00413d4c


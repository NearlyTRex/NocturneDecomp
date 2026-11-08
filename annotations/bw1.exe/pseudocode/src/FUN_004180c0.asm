; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004180c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)
;
;
; Called Functions:
;   FUN_0040d220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004180c0
        ;   Label: FUN_004180c0
    PUSH ESI                            ; 004180c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004180c2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004180c6
    PUSH EDX                            ; 004180ca
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004180cb
    PUSH ECX                            ; 004180cf
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004180d0
    MOV EDX,dword ptr [ESP + 0x18]      ; 004180d4
    PUSH EBX                            ; 004180d8
    LEA EBX,[EDX*0x4 + 0x0]             ; 004180d9
    SUB EBX,EDX                         ; 004180e0
    SHL EBX,0x2                         ; 004180e2
    SUB EBX,EDX                         ; 004180e5
    LEA EAX,[ESI + 0x70]                ; 004180e7
    SHL EBX,0x2                         ; 004180ea
    ADD EAX,EBX                         ; 004180ed
    PUSH EAX                            ; 004180ef
    CALL FUN_0040d220                   ; 004180f0
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d220()
    ADD ESP,0x10                        ; 004180f5
    LEA EAX,[ESI + EBX*0x1]             ; 004180f8
    MOV EDX,dword ptr [ESP + 0x20]      ; 004180fb
    MOV dword ptr [EAX + 0x84],EDX      ; 004180ff
    MOV EDX,dword ptr [ESP + 0x24]      ; 00418105
    MOV dword ptr [EAX + 0x88],EDX      ; 00418109
    MOV EDX,dword ptr [ESP + 0x28]      ; 0041810f
    MOV dword ptr [EAX + 0x8c],EDX      ; 00418113
    MOV EDX,dword ptr [ESP + 0x18]      ; 00418119
    MOV dword ptr [EAX + 0x90],EDX      ; 0041811d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00418123
    MOV dword ptr [EAX + 0x94],EDX      ; 00418127
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0041812d
    MOV dword ptr [EAX + 0x98],EDX      ; 00418131
    INC dword ptr [ESI + 0x20]          ; 00418137
    POP ESI                             ; 0041813a
    POP EBX                             ; 0041813b
    RET                                 ; 0041813c


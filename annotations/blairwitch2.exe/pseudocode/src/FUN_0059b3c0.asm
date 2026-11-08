; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059b3c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)
;
;
; Called Functions:
;   FUN_0040d5a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b3c0
        ;   Label: FUN_0059b3c0
    PUSH ESI                            ; 0059b3c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0059b3c2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0059b3c6
    PUSH EDX                            ; 0059b3ca
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0059b3cb
    PUSH ECX                            ; 0059b3cf
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0059b3d0
    MOV EDX,dword ptr [ESP + 0x18]      ; 0059b3d4
    PUSH EBX                            ; 0059b3d8
    LEA EBX,[EDX*0x4 + 0x0]             ; 0059b3d9
    SUB EBX,EDX                         ; 0059b3e0
    SHL EBX,0x2                         ; 0059b3e2
    SUB EBX,EDX                         ; 0059b3e5
    LEA EAX,[ESI + 0x4c]                ; 0059b3e7
    SHL EBX,0x2                         ; 0059b3ea
    ADD EAX,EBX                         ; 0059b3ed
    PUSH EAX                            ; 0059b3ef
    CALL FUN_0040d5a0                   ; 0059b3f0
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d5a0()
    ADD ESP,0x10                        ; 0059b3f5
    LEA EAX,[ESI + EBX*0x1]             ; 0059b3f8
    MOV EDX,dword ptr [ESP + 0x20]      ; 0059b3fb
    MOV dword ptr [EAX + 0x60],EDX      ; 0059b3ff
    MOV EDX,dword ptr [ESP + 0x24]      ; 0059b402
    MOV dword ptr [EAX + 0x64],EDX      ; 0059b406
    MOV EDX,dword ptr [ESP + 0x28]      ; 0059b409
    MOV dword ptr [EAX + 0x68],EDX      ; 0059b40d
    MOV EDX,dword ptr [ESP + 0x18]      ; 0059b410
    MOV dword ptr [EAX + 0x6c],EDX      ; 0059b414
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0059b417
    MOV dword ptr [EAX + 0x70],EDX      ; 0059b41b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0059b41e
    MOV dword ptr [EAX + 0x74],EDX      ; 0059b422
    INC dword ptr [ESI + 0x1c]          ; 0059b425
    POP ESI                             ; 0059b428
    POP EBX                             ; 0059b429
    RET                                 ; 0059b42a


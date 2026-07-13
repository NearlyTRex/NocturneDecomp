; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e00b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
;
;
; Called Functions:
;   FUN_004df290
;   FUN_004df2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e00b0
        ;   Label: FUN_004e00b0
    PUSH ESI                            ; 004e00b1
    PUSH EDI                            ; 004e00b2
    PUSH EBP                            ; 004e00b3
    MOV EDX,dword ptr [ESP + 0x18]      ; 004e00b4
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e00b8
    SUB EAX,EDX                         ; 004e00bf
    SHL EAX,0x6                         ; 004e00c1
    ADD EAX,EDX                         ; 004e00c4
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e00c6
    SHL EAX,0x3                         ; 004e00ca
    ADD EBX,EAX                         ; 004e00cd
    PUSH EBX                            ; 004e00cf
    CALL FUN_004df290                   ; 004e00d0
        ;   XREF to: 004df290 (UNCONDITIONAL_CALL)  ; undefined FUN_004df290()
    ADD ESP,0x4                         ; 004e00d5
    MOV EDX,dword ptr [ESP + 0x30]      ; 004e00d8
    PUSH EDX                            ; 004e00dc
    MOV ECX,dword ptr [ESP + 0x30]      ; 004e00dd
    PUSH ECX                            ; 004e00e1
    PUSH 0x3c                           ; 004e00e2
    MOV ESI,dword ptr [ESP + 0x34]      ; 004e00e4
    PUSH ESI                            ; 004e00e8
    MOV EDI,dword ptr [ESP + 0x34]      ; 004e00e9
    PUSH EDI                            ; 004e00ed
    MOV EBP,dword ptr [ESP + 0x34]      ; 004e00ee
    PUSH EBP                            ; 004e00f2
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e00f3
    PUSH EAX                            ; 004e00f7
    PUSH EBX                            ; 004e00f8
    CALL FUN_004df2f0                   ; 004e00f9
        ;   XREF to: 004df2f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004df2f0()
    ADD ESP,0x20                        ; 004e00fe
    POP EBP                             ; 004e0101
    POP EDI                             ; 004e0102
    POP ESI                             ; 004e0103
    POP EBX                             ; 004e0104
    RET                                 ; 004e0105


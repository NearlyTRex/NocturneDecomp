; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0057fe80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5 ,undefined4 param_6)
;
;
; Called Functions:
;   FUN_0057fed0
;   FUN_00580110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057fe80
        ;   Label: FUN_0057fe80
    PUSH EBP                            ; 0057fe81
    MOV EBX,dword ptr [ESP + 0xc]       ; 0057fe82
    PUSH -0x1                           ; 0057fe86
    PUSH -0x1                           ; 0057fe88
    PUSH EBX                            ; 0057fe8a
    CALL FUN_00580110                   ; 0057fe8b
        ;   XREF to: 00580110 (UNCONDITIONAL_CALL)  ; undefined FUN_00580110()
    ADD ESP,0xc                         ; 0057fe90
    TEST EAX,EAX                        ; 0057fe93
    JNZ 0x0057fe9a                      ; 0057fe95
        ;   XREF to: 0057fe9a (CONDITIONAL_JUMP)  ; LAB_0057fe9a
    POP EBP                             ; 0057fe97
    POP EBX                             ; 0057fe98
    RET                                 ; 0057fe99
    PUSH EDI                            ; 0057fe9a
        ;   Label: LAB_0057fe9a
    PUSH ESI                            ; 0057fe9b
    MOV EDX,dword ptr [ESP + 0x28]      ; 0057fe9c
    PUSH EDX                            ; 0057fea0
    MOV ECX,dword ptr [ESP + 0x28]      ; 0057fea1
    PUSH ECX                            ; 0057fea5
    MOV ESI,dword ptr [ESP + 0x28]      ; 0057fea6
    PUSH ESI                            ; 0057feaa
    MOV EDI,dword ptr [ESP + 0x28]      ; 0057feab
    PUSH EDI                            ; 0057feaf
    MOV EBP,dword ptr [ESP + 0x28]      ; 0057feb0
    PUSH EBP                            ; 0057feb4
    MOV EAX,dword ptr [EBX + 0x6a48]    ; 0057feb5
    PUSH EAX                            ; 0057febb
    PUSH EBX                            ; 0057febc
    CALL FUN_0057fed0                   ; 0057febd
        ;   XREF to: 0057fed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057fed0()
    ADD ESP,0x1c                        ; 0057fec2
    XOR EAX,EAX                         ; 0057fec5
    POP ESI                             ; 0057fec7
    POP EDI                             ; 0057fec8
    POP EBP                             ; 0057fec9
    POP EBX                             ; 0057feca
    RET                                 ; 0057fecb


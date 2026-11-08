; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005374b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Called Functions:
;   FUN_00537520
;   FUN_00537c30
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005374b0
        ;   Label: FUN_005374b0
    PUSH ESI                            ; 005374b1
    PUSH EDI                            ; 005374b2
    PUSH EBP                            ; 005374b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005374b4
    PUSH EBX                            ; 005374b8
    CALL FUN_00537520                   ; 005374b9
        ;   XREF to: 00537520 (UNCONDITIONAL_CALL)  ; undefined FUN_00537520()
    ADD ESP,0x4                         ; 005374be
    PUSH 0x14                           ; 005374c1
    PUSH 0x0                            ; 005374c3
    PUSH EBX                            ; 005374c5
    CALL FUN_005bfb70                   ; 005374c6
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 005374cb
    MOV EDX,dword ptr [ESP + 0x28]      ; 005374ce
    PUSH EDX                            ; 005374d2
    MOV ECX,dword ptr [ESP + 0x28]      ; 005374d3
    PUSH ECX                            ; 005374d7
    MOV ESI,dword ptr [ESP + 0x28]      ; 005374d8
    PUSH ESI                            ; 005374dc
    MOV EDI,dword ptr [ESP + 0x28]      ; 005374dd
    PUSH EDI                            ; 005374e1
    MOV EBP,dword ptr [ESP + 0x28]      ; 005374e2
    PUSH EBP                            ; 005374e6
    PUSH EBX                            ; 005374e7
    CALL FUN_00537c30                   ; 005374e8
        ;   XREF to: 00537c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00537c30()
    ADD ESP,0x18                        ; 005374ed
    MOV EAX,EBX                         ; 005374f0
    POP EBP                             ; 005374f2
    POP EDI                             ; 005374f3
    POP ESI                             ; 005374f4
    POP EBX                             ; 005374f5
    RET                                 ; 005374f6


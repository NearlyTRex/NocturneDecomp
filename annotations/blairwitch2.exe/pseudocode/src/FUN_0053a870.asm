; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053a870(int param_1)
;
;
; XREF[1]:
;   FUN_0053a8e0 at 0053a8f9
;
; Called Functions:
;   FUN_0053a830
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a870
        ;   Label: FUN_0053a870
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053a871
    PUSH EBX                            ; 0053a875
    CALL FUN_0053a830                   ; 0053a876
        ;   XREF to: 0053a830 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a830()
    ADD ESP,0x4                         ; 0053a87b
    PUSH 0x1a4                          ; 0053a87e
    PUSH 0x0                            ; 0053a883
    PUSH EBX                            ; 0053a885
    CALL FUN_005b77c0                   ; 0053a886
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    MOV dword ptr [EBX + 0x144],0x41e00000 ; 0053a88b
    MOV dword ptr [EBX + 0x180],0xc3960000 ; 0053a895
    MOV dword ptr [EBX + 0x184],0x0     ; 0053a89f
    MOV dword ptr [EBX + 0x190],0x43960000 ; 0053a8a9
    MOV dword ptr [EBX + 0x140],0x0     ; 0053a8b3
    ADD ESP,0xc                         ; 0053a8bd
    FLD float ptr [EBX + 0x190]         ; 0053a8c0
    MOV EAX,dword ptr [EBX + 0x180]     ; 0053a8c6
    MOV dword ptr [EBX + 0x17c],EAX     ; 0053a8cc
    FST float ptr [EBX + 0x18c]         ; 0053a8d2
    FSTP float ptr [EBX + 0x188]        ; 0053a8d8
    POP EBX                             ; 0053a8de
    RET                                 ; 0053a8df


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d0500(int *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_004d0610 at 004d0717
;
; Referenced Globals:
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;
; Called Functions:
;   FUN_00569520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0500
        ;   Label: FUN_004d0500
    PUSH ESI                            ; 004d0501
    PUSH EDI                            ; 004d0502
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d0503
    MOV EAX,dword ptr [ESP + 0x18]      ; 004d0507
    IMUL EAX,dword ptr [EBX]            ; 004d050b
    MOV ECX,dword ptr [ESP + 0x14]      ; 004d050e
    MOV EDX,dword ptr [EBX + 0x24]      ; 004d0512
    ADD EAX,ECX                         ; 004d0515
    MOV AX,word ptr [EDX + EAX*0x4 + 0x2] ; 004d0517
    AND EAX,0xffff                      ; 004d051c
    PUSH EAX                            ; 004d0521
    MOV ESI,dword ptr [EBX + 0x28]      ; 004d0522
    PUSH ESI                            ; 004d0525
    CALL FUN_00569520                   ; 004d0526
        ;   XREF to: 00569520 (UNCONDITIONAL_CALL)  ; undefined FUN_00569520()
    MOV EDX,dword ptr [EBX + 0x50]      ; 004d052b
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d052e
    SUB EAX,EDX                         ; 004d0535
    SHL EAX,0x4                         ; 004d0537
    MOV EDI,0xf80000                    ; 004d053a
    MOV dword ptr [EAX + 0x60b02c],EDI  ; 004d053f | DAT_0060b02c
    MOV EDX,dword ptr [EBX + 0x50]      ; 004d0545
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d0548
    SUB EAX,EDX                         ; 004d054f
    SHL EAX,0x4                         ; 004d0551
    MOV dword ptr [EAX + 0x60b030],EDI  ; 004d0554 | DAT_0060b030
    MOV EDX,dword ptr [EBX + 0x4c]      ; 004d055a
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d055d
    SUB EAX,EDX                         ; 004d0564
    SHL EAX,0x4                         ; 004d0566
    MOV dword ptr [EAX + 0x60b02c],0x80000 ; 004d0569 | DAT_0060b02c
    MOV EDX,dword ptr [EBX + 0x4c]      ; 004d0573
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d0576
    SUB EAX,EDX                         ; 004d057d
    SHL EAX,0x4                         ; 004d057f
    MOV dword ptr [EAX + 0x60b030],EDI  ; 004d0582 | DAT_0060b030
    MOV EDX,dword ptr [EBX + 0x58]      ; 004d0588
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d058b
    SUB EAX,EDX                         ; 004d0592
    SHL EAX,0x4                         ; 004d0594
    MOV ESI,0x80000                     ; 004d0597
    MOV dword ptr [EAX + 0x60b02c],ESI  ; 004d059c | DAT_0060b02c
    MOV EDX,dword ptr [EBX + 0x58]      ; 004d05a2
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d05a5
    SUB EAX,EDX                         ; 004d05ac
    SHL EAX,0x4                         ; 004d05ae
    MOV dword ptr [EAX + 0x60b030],ESI  ; 004d05b1 | DAT_0060b030
    MOV EDX,dword ptr [EBX + 0x54]      ; 004d05b7
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d05ba
    SUB EAX,EDX                         ; 004d05c1
    SHL EAX,0x4                         ; 004d05c3
    MOV dword ptr [EAX + 0x60b02c],EDI  ; 004d05c6 | DAT_0060b02c
    MOV EDX,dword ptr [EBX + 0x54]      ; 004d05cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d05cf
    SUB EAX,EDX                         ; 004d05d6
    SHL EAX,0x4                         ; 004d05d8
    ADD ESP,0x8                         ; 004d05db
    MOV dword ptr [EAX + 0x60b030],ESI  ; 004d05de | DAT_0060b030
    POP EDI                             ; 004d05e4
    POP ESI                             ; 004d05e5
    POP EBX                             ; 004d05e6
    RET                                 ; 004d05e7


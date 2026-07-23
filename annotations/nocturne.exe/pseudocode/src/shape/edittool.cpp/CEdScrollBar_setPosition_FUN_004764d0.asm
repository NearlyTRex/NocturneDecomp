; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004764d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)
;
;
; XREF[1]:
;   FUN_00475470 at 00475873
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057f06e
;   TerminatedCString s_CEdScrollBar_setPosition_0057f084
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004764d0
        ;   Label: shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004764d0
    PUSH ESI                            ; 004764d1
    PUSH EBP                            ; 004764d2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004764d3
    MOV EDX,dword ptr [ESP + 0x14]      ; 004764d7
    MOV dword ptr [EAX + 0x14],EDX      ; 004764db
    MOV EDX,dword ptr [ESP + 0x18]      ; 004764de
    MOV dword ptr [EAX + 0x18],EDX      ; 004764e2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004764e5
    INC EDX                             ; 004764e9
    MOV dword ptr [EAX + 0x1c],EDX      ; 004764ea
    MOV EDX,dword ptr [ESP + 0x20]      ; 004764ed
    INC EDX                             ; 004764f1
    MOV dword ptr [EAX + 0x20],EDX      ; 004764f2
    MOV ECX,dword ptr [EAX + 0x1c]      ; 004764f5
    MOV EDX,dword ptr [EAX + 0x14]      ; 004764f8
    MOV EBX,dword ptr [EAX + 0x18]      ; 004764fb
    SUB ECX,EDX                         ; 004764fe
    MOV EDX,dword ptr [EAX + 0x20]      ; 00476500
    SUB EDX,EBX                         ; 00476503
    CMP ECX,EDX                         ; 00476505
    JG 0x0047653d                       ; 00476507
        ;   XREF to: 0047653d (CONDITIONAL_JUMP)  ; LAB_0047653d
    MOV EBX,dword ptr [EAX + 0x18]      ; 00476509
    ADD EBX,ECX                         ; 0047650c
    DEC EBX                             ; 0047650e
    MOV dword ptr [EAX + 0x24],EBX      ; 0047650f
    MOV EBX,dword ptr [EAX + 0x20]      ; 00476512
    SUB EBX,ECX                         ; 00476515
    MOV dword ptr [EAX + 0x10],0x0      ; 00476517
    INC EBX                             ; 0047651e
        ;   Label: LAB_0047651e
    MOV dword ptr [EAX + 0x28],EBX      ; 0047651f
    CMP ECX,0x4                         ; 00476522
    JL 0x00476554                       ; 00476525
        ;   XREF to: 00476554 (CONDITIONAL_JUMP)  ; LAB_00476554
    CMP EDX,0x4                         ; 00476527
    JL 0x00476554                       ; 0047652a
        ;   XREF to: 00476554 (CONDITIONAL_JUMP)  ; LAB_00476554
    MOV ESI,dword ptr [EAX + 0x24]      ; 0047652c
    MOV EDX,dword ptr [EAX + 0x28]      ; 0047652f
    SUB EDX,ESI                         ; 00476532
    CMP EDX,0x4                         ; 00476534
    JL 0x00476554                       ; 00476537
        ;   XREF to: 00476554 (CONDITIONAL_JUMP)  ; LAB_00476554
    POP EBP                             ; 00476539
    POP ESI                             ; 0047653a
    POP EBX                             ; 0047653b
    RET                                 ; 0047653c
    MOV EBX,dword ptr [EAX + 0x14]      ; 0047653d
        ;   Label: LAB_0047653d
    ADD EBX,EDX                         ; 00476540
    DEC EBX                             ; 00476542
    MOV dword ptr [EAX + 0x24],EBX      ; 00476543
    MOV EBX,dword ptr [EAX + 0x1c]      ; 00476546
    SUB EBX,EDX                         ; 00476549
    MOV dword ptr [EAX + 0x10],0x1      ; 0047654b
    JMP 0x0047651e                      ; 00476552
        ;   XREF to: 0047651e (UNCONDITIONAL_JUMP)  ; LAB_0047651e
    PUSH EDI                            ; 00476554
        ;   Label: LAB_00476554
    MOV EDI,0x57f06e                    ; 00476555 | = "..\\shape\\edittool.cpp"
    MOV EBP,0xeac                       ; 0047655a
    PUSH 0x57f084                       ; 0047655f | = "CEdScrollBar::setPosition - invalid d..."
    MOV dword ptr [0x01cc4800],EDI      ; 00476564 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 0047656a | DAT_01cc4804
    CALL FUN_004c8440                   ; 00476570
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00476575
    POP EDI                             ; 00476578
    POP EBP                             ; 00476579
    POP ESI                             ; 0047657a
    POP EBX                             ; 0047657b
    RET                                 ; 0047657c


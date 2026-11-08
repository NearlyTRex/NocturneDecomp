; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00482540(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   FUN_00554ac0 at 00554c9f
;   FUN_00554d30 at 005550c0
;   FUN_005a9f10 at 005aa4fc
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01bc1240
;   undefined4 DAT_01bc1244
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   FUN_00403920
;   FUN_00481aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482540
        ;   Label: FUN_00482540
    PUSH EBP                            ; 00482541
    SUB ESP,0x4                         ; 00482542
    MOV EBX,dword ptr [ESP + 0x10]      ; 00482545
    CMP dword ptr [EBX + 0xc],0x0       ; 00482549
    JNZ 0x004825d0                      ; 0048254d
        ;   XREF to: 004825d0 (CONDITIONAL_JUMP)  ; LAB_004825d0
    PUSH EDI                            ; 00482553
        ;   Label: LAB_00482553
    PUSH ESI                            ; 00482554
    MOV ECX,dword ptr [EBX + 0x4]       ; 00482555
    TEST ECX,ECX                        ; 00482558
    JZ 0x004825e9                       ; 0048255a
        ;   XREF to: 004825e9 (CONDITIONAL_JUMP)  ; LAB_004825e9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482560
    MOV EDI,dword ptr [EAX + 0x4]       ; 00482564
    XOR EDX,EDX                         ; 00482567
    TEST EDI,EDI                        ; 00482569
    JLE 0x00482590                      ; 0048256b
        ;   XREF to: 00482590 (CONDITIONAL_JUMP)  ; LAB_00482590
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0048256d
    XOR EAX,EAX                         ; 00482571
    MOV ESI,dword ptr [ECX + 0x18]      ; 00482573
        ;   Label: LAB_00482573
    MOV dword ptr [EAX + 0x1bc1240],ESI ; 00482576 | DAT_01bc1240 | DAT_01bc1244
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048257c
    ADD EAX,0x4                         ; 00482580
    INC EDX                             ; 00482583
    MOV EBP,dword ptr [ESI + 0x4]       ; 00482584
    ADD ECX,0xc                         ; 00482587
    CMP EDX,EBP                         ; 0048258a
    JL 0x00482573                       ; 0048258c
        ;   XREF to: 00482573 (CONDITIONAL_JUMP)  ; LAB_00482573
    MOV EAX,EAX                         ; 0048258e
    CMP dword ptr [EBX + 0x4],0x0       ; 00482590
        ;   Label: LAB_00482590
    JZ 0x00482642                       ; 00482594
        ;   XREF to: 00482642 (CONDITIONAL_JUMP)  ; LAB_00482642
    XOR EDX,EDX                         ; 0048259a
    MOV EAX,0x486e26                    ; 0048259c | LAB_00486e26
    MOV dword ptr [0x01c51d14],EDX      ; 004825a1 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDX      ; 004825a7 | DAT_01c51d18
    MOV [0x01c4f02c],EAX                ; 004825ad | DAT_01c4f02c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004825b2
        ;   Label: LAB_004825b2
    PUSH 0x1bc1240                      ; 004825b6 | DAT_01bc1240
    MOV ESI,dword ptr [EAX + 0x4]       ; 004825bb
    PUSH ESI                            ; 004825be
    PUSH EBX                            ; 004825bf
    CALL FUN_00481aa0                   ; 004825c0
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00481aa0()
    ADD ESP,0xc                         ; 004825c5
    POP ESI                             ; 004825c8
    POP EDI                             ; 004825c9
    ADD ESP,0x4                         ; 004825ca
        ;   Label: LAB_004825ca
    POP EBP                             ; 004825cd
    POP EBX                             ; 004825ce
    RET                                 ; 004825cf
    MOV EAX,dword ptr [ESP + 0x14]      ; 004825d0
        ;   Label: LAB_004825d0
    ADD EAX,0x8                         ; 004825d4
    PUSH EAX                            ; 004825d7
    CALL FUN_00403920                   ; 004825d8
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 004825dd
    TEST EAX,EAX                        ; 004825e0
    JZ 0x004825ca                       ; 004825e2
        ;   XREF to: 004825ca (CONDITIONAL_JUMP)  ; LAB_004825ca
    JMP 0x00482553                      ; 004825e4
        ;   XREF to: 00482553 (UNCONDITIONAL_JUMP)  ; LAB_00482553
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004825e9
        ;   Label: LAB_004825e9
    CMP dword ptr [EAX + 0x4],0x0       ; 004825ed
    JLE 0x00482590                      ; 004825f1
        ;   XREF to: 00482590 (CONDITIONAL_JUMP)  ; LAB_00482590
    XOR EDX,EDX                         ; 004825f3
    MOV EDI,dword ptr [EBX + 0x20]      ; 004825f5
        ;   Label: LAB_004825f5
    MOV ESI,dword ptr [EAX + 0x18]      ; 004825f8
    TEST EDI,EDI                        ; 004825fb
    JZ 0x0048261d                       ; 004825fd
        ;   XREF to: 0048261d (CONDITIONAL_JUMP)  ; LAB_0048261d
    MOV dword ptr [EDX + 0x1bc1240],ESI ; 004825ff | DAT_01bc1240 | DAT_01bc1244
        ;   Label: LAB_004825ff
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00482605
    ADD EAX,0xc                         ; 00482609
    INC ECX                             ; 0048260c
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048260d
    ADD EDX,0x4                         ; 00482610
    CMP ECX,EBP                         ; 00482613
    JGE 0x00482590                      ; 00482615
        ;   XREF to: 00482590 (CONDITIONAL_JUMP)  ; LAB_00482590
    JMP 0x004825f5                      ; 0048261b
        ;   XREF to: 004825f5 (UNCONDITIONAL_JUMP)  ; LAB_004825f5
    IMUL EDI,ESI,0x30                   ; 0048261d
        ;   Label: LAB_0048261d
    MOV dword ptr [ESP + 0x8],EDI       ; 00482620
    MOV EBP,dword ptr [ESP + 0x8]       ; 00482624
    MOV EDI,dword ptr [EBX]             ; 00482628
    ADD EDI,EBP                         ; 0048262a
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0048262c
    MOV dword ptr [EDI + 0x18],EBP      ; 0048262f
    MOV EDI,dword ptr [ESP + 0x8]       ; 00482632
    MOV EBP,dword ptr [EBX]             ; 00482636
    ADD EBP,EDI                         ; 00482638
    MOV EDI,dword ptr [EAX + 0x20]      ; 0048263a
    MOV dword ptr [EBP + 0x1c],EDI      ; 0048263d
    JMP 0x004825ff                      ; 00482640
        ;   XREF to: 004825ff (UNCONDITIONAL_JUMP)  ; LAB_004825ff
    CMP dword ptr [0x0061b4a0],0x20     ; 00482642 | DAT_0061b4a0
        ;   Label: LAB_00482642
    JNZ 0x00482670                      ; 00482649
        ;   XREF to: 00482670 (CONDITIONAL_JUMP)  ; LAB_00482670
    MOV dword ptr [0x01c4f02c],0x57de01 ; 0048264b | DAT_01c4f02c | LAB_0057de01
    MOV EBP,0x6                         ; 00482655
        ;   Label: LAB_00482655
    MOV EDI,0x2cd                       ; 0048265a
    MOV dword ptr [0x01c51d18],EBP      ; 0048265f | DAT_01c51d18
    MOV dword ptr [0x01c51d14],EDI      ; 00482665 | DAT_01c51d14
    JMP 0x004825b2                      ; 0048266b
        ;   XREF to: 004825b2 (UNCONDITIONAL_JUMP)  ; LAB_004825b2
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00482670 | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_00482670
    JMP 0x00482655                      ; 0048267a
        ;   XREF to: 00482655 (UNCONDITIONAL_JUMP)  ; LAB_00482655


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00432560(void)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00432550 = 004325c2
;   undefined1* PTR_caseD_3_0043255c = 004325ec
;   undefined4 DAT_007bfd04
;   undefined4 DAT_007bfd08
;   undefined4 DAT_007c090c
;   undefined4 DAT_007c0910
;   undefined4 DAT_007c0914
;   undefined4 DAT_007c0f0c
;   undefined1 DAT_007c0f10
;
; Called Functions:
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00432070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432560
        ;   Label: FUN_00432560
    PUSH ESI                            ; 00432561
    PUSH EDI                            ; 00432562
    PUSH EBP                            ; 00432563
    SUB ESP,0x4                         ; 00432564
    XOR EDX,EDX                         ; 00432567
    MOV ECX,dword ptr [0x007bfd04]      ; 00432569 | DAT_007bfd04
    MOV dword ptr [ESP],EDX             ; 0043256f
    TEST ECX,ECX                        ; 00432572
    JLE 0x00432604                      ; 00432574
        ;   XREF to: 00432604 (CONDITIONAL_JUMP)  ; LAB_00432604
    MOV EBX,0x7c090c                    ; 0043257a
    MOV EAX,dword ptr [ESP]             ; 0043257f
        ;   Label: LAB_0043257f
    MOV EBP,dword ptr [0x007bfd04]      ; 00432582 | DAT_007bfd04
    INC EAX                             ; 00432588
    CMP EAX,EBP                         ; 00432589
    JNZ 0x0043258f                      ; 0043258b
        ;   XREF to: 0043258f (CONDITIONAL_JUMP)  ; LAB_0043258f
    XOR EAX,EBP                         ; 0043258d
    IMUL EAX,EAX,0x30                   ; 0043258f
        ;   Label: LAB_0043258f
    MOV EBP,0x7c090c                    ; 00432592 | DAT_007c090c
    MOV EDX,EBX                         ; 00432597
    MOV EDI,dword ptr [EBX + 0x4]       ; 00432599
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043259c
    ADD EBP,EAX                         ; 0043259f
    XOR EAX,EAX                         ; 004325a1
    CMP EDI,ECX                         ; 004325a3
    JL 0x004325ac                       ; 004325a5
        ;   XREF to: 004325ac (CONDITIONAL_JUMP)  ; LAB_004325ac
    MOV EAX,0x1                         ; 004325a7
    MOV ESI,dword ptr [EBP + 0x8]       ; 004325ac | DAT_007c0914
        ;   Label: LAB_004325ac
    CMP ESI,dword ptr [EBP + 0x4]       ; 004325af | DAT_007c0910
    JG 0x004325b6                       ; 004325b2
        ;   XREF to: 004325b6 (CONDITIONAL_JUMP)  ; LAB_004325b6
    OR AL,0x2                           ; 004325b4
    CMP EAX,0x3                         ; 004325b6
        ;   Label: LAB_004325b6
    JA 0x004325ec                       ; 004325b9
        ;   XREF to: 004325ec (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x432550]  ; 004325bb | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007bfd08],0x30 ; 004325c2 | DAT_007bfd08
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 004325c9
    MOV ESI,EDX                         ; 004325ce
    ADD EDI,0x7c0f0c                    ; 004325d0 | DAT_007c0f0c
    PUSH EDI                            ; 004325d6
    MOV EAX,ECX                         ; 004325d7
    SHR ECX,0x2                         ; 004325d9
    MOVSD.REP ES:EDI,ESI                ; 004325dc | DAT_007c0f0c | DAT_007c0f10
    MOV CL,AL                           ; 004325de
    AND CL,0x3                          ; 004325e0
    MOVSB.REP ES:EDI,ESI                ; 004325e3 | DAT_007c0f10
    POP EDI                             ; 004325e5
    INC dword ptr [0x007bfd08]          ; 004325e6 | DAT_007bfd08
    MOV ESI,dword ptr [ESP]             ; 004325ec
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x007bfd04]      ; 004325ef | DAT_007bfd04
    INC ESI                             ; 004325f5
    ADD EBX,0x30                        ; 004325f6
    MOV dword ptr [ESP],ESI             ; 004325f9
    CMP ESI,EDI                         ; 004325fc
    JL 0x0043257f                       ; 004325fe
        ;   XREF to: 0043257f (CONDITIONAL_JUMP)  ; LAB_0043257f
    ADD ESP,0x4                         ; 00432604
        ;   Label: LAB_00432604
    POP EBP                             ; 00432607
    POP EDI                             ; 00432608
    POP ESI                             ; 00432609
    POP EBX                             ; 0043260a
    RET                                 ; 0043260b
    IMUL EAX,dword ptr [0x007bfd08],0x30 ; 0043260c | DAT_007bfd08
        ;   Label: caseD_1
    ADD EAX,0x7c0f0c                    ; 00432613 | DAT_007c0f0c
    PUSH EAX                            ; 00432618
    PUSH EDX                            ; 00432619
    PUSH EBP                            ; 0043261a
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00432070 ; 0043261b
        ;   XREF to: 00432070 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00432070(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007bfd08]      ; 00432620 | DAT_007bfd08
    INC ESI                             ; 00432626
    ADD ESP,0xc                         ; 00432627
    MOV dword ptr [0x007bfd08],ESI      ; 0043262a | DAT_007bfd08
    JMP 0x004325ec                      ; 00432630
        ;   XREF to: 004325ec (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007bfd08],0x30 ; 00432632 | DAT_007bfd08
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00432639
    MOV ESI,EDX                         ; 0043263e
    ADD EDI,0x7c0f0c                    ; 00432640 | DAT_007c0f0c
    PUSH EDI                            ; 00432646
    MOV EAX,ECX                         ; 00432647
    SHR ECX,0x2                         ; 00432649
    MOVSD.REP ES:EDI,ESI                ; 0043264c | DAT_007c0f0c | DAT_007c0f10
    MOV CL,AL                           ; 0043264e
    AND CL,0x3                          ; 00432650
    MOVSB.REP ES:EDI,ESI                ; 00432653 | DAT_007c0f10
    POP EDI                             ; 00432655
    MOV ECX,dword ptr [0x007bfd08]      ; 00432656 | DAT_007bfd08
    INC ECX                             ; 0043265c
    MOV dword ptr [0x007bfd08],ECX      ; 0043265d | DAT_007bfd08
    IMUL EAX,ECX,0x30                   ; 00432663
    ADD EAX,0x7c0f0c                    ; 00432666 | DAT_007c0f0c
    PUSH EAX                            ; 0043266b
    PUSH EBP                            ; 0043266c
    PUSH EDX                            ; 0043266d
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00432070 ; 0043266e
        ;   XREF to: 00432070 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00432070(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007bfd08]      ; 00432673 | DAT_007bfd08
    INC EDI                             ; 00432679
    ADD ESP,0xc                         ; 0043267a
    MOV dword ptr [0x007bfd08],EDI      ; 0043267d | DAT_007bfd08
    JMP 0x004325ec                      ; 00432683
        ;   XREF to: 004325ec (UNCONDITIONAL_JUMP)  ; caseD_3


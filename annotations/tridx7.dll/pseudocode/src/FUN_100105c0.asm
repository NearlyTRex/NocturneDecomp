; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_100105c0(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_10010360 at 10010425
;
; Referenced Globals:
;   undefined4 DAT_10018528
;   undefined4 DAT_100185c0
;   undefined4 DAT_100185c4
;   undefined4 DAT_100185c8
;   undefined4 DAT_100185d0
;   undefined4 DAT_100185d4
;   undefined4 DAT_100185d8
;   undefined4 DAT_100185dc
;   undefined4 DAT_100185e0
;   undefined4 DAT_10018614
;   undefined4 DAT_10018618
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0xc]       ; 100105c0
        ;   Label: FUN_100105c0
    SUB ESP,0x4                         ; 100105c4
    CMP dword ptr [ESP + 0xc],0x1       ; 100105c7
    PUSH EBX                            ; 100105cc
    PUSH ESI                            ; 100105cd
    PUSH EDI                            ; 100105ce
    PUSH EBP                            ; 100105cf
    JNZ 0x10010660                      ; 100105d0
        ;   XREF to: 10010660 (CONDITIONAL_JUMP)  ; LAB_10010660
    MOV EBX,ECX                         ; 100105d6
    MOV EDI,dword ptr [ESP + 0x24]      ; 100105d8
    AND EBX,0x3                         ; 100105dc
    JNZ 0x100105ea                      ; 100105df
        ;   XREF to: 100105ea (CONDITIONAL_JUMP)  ; LAB_100105ea
    MOV ESI,dword ptr [EDI*0x4 + 0x100185dc] ; 100105e1 | DAT_100185dc
    JMP 0x100105f1                      ; 100105e8
        ;   XREF to: 100105f1 (UNCONDITIONAL_JUMP)  ; LAB_100105f1
    MOV ESI,dword ptr [EDI*0x4 + 0x10018614] ; 100105ea | DAT_10018614
        ;   Label: LAB_100105ea
    INC ESI                             ; 100105f1
        ;   Label: LAB_100105f1
    LEA EDX,[ECX + -0x1]                ; 100105f2
    SAR EDX,0x2                         ; 100105f5
    LEA EAX,[ECX + ECX*0x8]             ; 100105f8
    LEA EBP,[ECX + EAX*0x8]             ; 100105fb
    LEA EAX,[EBP + EBP*0x4]             ; 100105fe
    MOV EBP,0x7                         ; 10010602
    ADD EDX,EAX                         ; 10010607
    LEA EAX,[EDX + ESI*0x1 + 0xffff9c25] ; 10010609
    CDQ                                 ; 10010610
    IDIV EBP                            ; 10010611
    MOV EAX,dword ptr [ESP + 0x28]      ; 10010613
    CMP dword ptr [ESP + 0x2c],EDX      ; 10010617
    JLE 0x1001062d                      ; 1001061b
        ;   XREF to: 1001062d (CONDITIONAL_JUMP)  ; LAB_1001062d
    LEA EBP,[EAX + -0x1]                ; 1001061d
    MOV dword ptr [ESP + 0x10],EBP      ; 10010620
    SHL EBP,0x3                         ; 10010624
    SUB EBP,dword ptr [ESP + 0x10]      ; 10010627
    JMP 0x10010636                      ; 1001062b
        ;   XREF to: 10010636 (UNCONDITIONAL_JUMP)  ; LAB_10010636
    LEA EBP,[EAX*0x8 + 0x0]             ; 1001062d
        ;   Label: LAB_1001062d
    SUB EBP,EAX                         ; 10010634
    SUB EBP,EDX                         ; 10010636
        ;   Label: LAB_10010636
    ADD EBP,dword ptr [ESP + 0x2c]      ; 10010638
    ADD ESI,EBP                         ; 1001063c
    CMP EAX,0x5                         ; 1001063e
    JNZ 0x1001067d                      ; 10010641
        ;   XREF to: 1001067d (CONDITIONAL_JUMP)  ; LAB_1001067d
    TEST EBX,EBX                        ; 10010643
    JNZ 0x10010650                      ; 10010645
        ;   XREF to: 10010650 (CONDITIONAL_JUMP)  ; LAB_10010650
    MOV EAX,dword ptr [EDI*0x4 + 0x100185e0] ; 10010647 | DAT_100185e0
    JMP 0x10010657                      ; 1001064e
        ;   XREF to: 10010657 (UNCONDITIONAL_JUMP)  ; LAB_10010657
    MOV EAX,dword ptr [EDI*0x4 + 0x10018618] ; 10010650 | DAT_10018618
        ;   Label: LAB_10010650
    CMP ESI,EAX                         ; 10010657
        ;   Label: LAB_10010657
    JLE 0x1001067d                      ; 10010659
        ;   XREF to: 1001067d (CONDITIONAL_JUMP)  ; LAB_1001067d
    SUB ESI,0x7                         ; 1001065b
    JMP 0x1001067d                      ; 1001065e
        ;   XREF to: 1001067d (UNCONDITIONAL_JUMP)  ; LAB_1001067d
    TEST CL,0x3                         ; 10010660
        ;   Label: LAB_10010660
    MOV EDI,dword ptr [ESP + 0x24]      ; 10010663
    JNZ 0x10010672                      ; 10010667
        ;   XREF to: 10010672 (CONDITIONAL_JUMP)  ; LAB_10010672
    MOV ESI,dword ptr [EDI*0x4 + 0x100185dc] ; 10010669 | DAT_100185dc
    JMP 0x10010679                      ; 10010670
        ;   XREF to: 10010679 (UNCONDITIONAL_JUMP)  ; LAB_10010679
    MOV ESI,dword ptr [EDI*0x4 + 0x10018614] ; 10010672 | DAT_10018614
        ;   Label: LAB_10010672
    ADD ESI,dword ptr [ESP + 0x30]      ; 10010679
        ;   Label: LAB_10010679
    CMP dword ptr [ESP + 0x18],0x1      ; 1001067d
        ;   Label: LAB_1001067d
    JNZ 0x100106cc                      ; 10010682
        ;   XREF to: 100106cc (CONDITIONAL_JUMP)  ; LAB_100106cc
    MOV EAX,dword ptr [ESP + 0x34]      ; 10010684
    MOV dword ptr [0x100185c4],ESI      ; 10010688 | DAT_100185c4
    SHL EAX,0x2                         ; 1001068e
    LEA EDX,[EAX + EAX*0x2]             ; 10010691
    LEA EDX,[EDX + EDX*0x4]             ; 10010694
    ADD EDX,dword ptr [ESP + 0x38]      ; 10010697
    SHL EDX,0x2                         ; 1001069b
    LEA EAX,[EDX + EDX*0x2]             ; 1001069e
    LEA EDX,[EAX + EAX*0x4]             ; 100106a1
    ADD EDX,dword ptr [ESP + 0x3c]      ; 100106a4
    MOV dword ptr [0x100185c0],ECX      ; 100106a8 | DAT_100185c0
    LEA EAX,[EDX + EDX*0x4]             ; 100106ae
    LEA EDX,[EAX + EAX*0x4]             ; 100106b1
    MOV EAX,dword ptr [ESP + 0x40]      ; 100106b4
    POP EBP                             ; 100106b8
    POP EDI                             ; 100106b9
    LEA EBX,[EDX + EDX*0x4]             ; 100106ba
    POP ESI                             ; 100106bd
    LEA EDX,[EAX + EBX*0x8]             ; 100106be
    POP EBX                             ; 100106c1
    ADD ESP,0x4                         ; 100106c2
    MOV dword ptr [0x100185c8],EDX      ; 100106c5 | DAT_100185c8
    RET                                 ; 100106cb
    MOV EAX,dword ptr [ESP + 0x34]      ; 100106cc
        ;   Label: LAB_100106cc
    MOV dword ptr [0x100185d4],ESI      ; 100106d0 | DAT_100185d4
    SHL EAX,0x2                         ; 100106d6
    LEA EDX,[EAX + EAX*0x2]             ; 100106d9
    LEA EDX,[EDX + EDX*0x4]             ; 100106dc
    ADD EDX,dword ptr [ESP + 0x38]      ; 100106df
    SHL EDX,0x2                         ; 100106e3
    LEA EAX,[EDX + EDX*0x2]             ; 100106e6
    LEA EDX,[EAX + EAX*0x4]             ; 100106e9
    ADD EDX,dword ptr [0x10018528]      ; 100106ec | DAT_10018528
    ADD EDX,dword ptr [ESP + 0x3c]      ; 100106f2
    LEA EBX,[EDX + EDX*0x4]             ; 100106f6
    LEA EAX,[EBX + EBX*0x4]             ; 100106f9
    MOV EBX,dword ptr [ESP + 0x40]      ; 100106fc
    LEA EDX,[EAX + EAX*0x4]             ; 10010700
    LEA EAX,[EBX + EDX*0x8]             ; 10010703
    MOV [0x100185d8],EAX                ; 10010706 | DAT_100185d8
    TEST EAX,EAX                        ; 1001070b
    JGE 0x10010721                      ; 1001070d
        ;   XREF to: 10010721 (CONDITIONAL_JUMP)  ; LAB_10010721
    ADD dword ptr [0x100185d8],0x5265c00 ; 1001070f | DAT_100185d8
    DEC dword ptr [0x100185d8]          ; 10010719 | DAT_100185d8
    JMP 0x1001073d                      ; 1001071f
        ;   XREF to: 1001073d (UNCONDITIONAL_JUMP)  ; LAB_1001073d
    CMP dword ptr [0x100185d8],0x5265c00 ; 10010721 | DAT_100185d8
        ;   Label: LAB_10010721
    JL 0x1001073d                       ; 1001072b
        ;   XREF to: 1001073d (CONDITIONAL_JUMP)  ; LAB_1001073d
    SUB dword ptr [0x100185d8],0x5265c00 ; 1001072d | DAT_100185d8
    INC dword ptr [0x100185d8]          ; 10010737 | DAT_100185d8
    POP EBP                             ; 1001073d
        ;   Label: LAB_1001073d
    MOV dword ptr [0x100185d0],ECX      ; 1001073e | DAT_100185d0
    POP EDI                             ; 10010744
    POP ESI                             ; 10010745
    POP EBX                             ; 10010746
    ADD ESP,0x4                         ; 10010747
    RET                                 ; 1001074a


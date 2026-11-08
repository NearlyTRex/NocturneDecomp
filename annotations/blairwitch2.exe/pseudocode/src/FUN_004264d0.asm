; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004264d0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00424bd0 at 00424bfc
;
; Referenced Globals:
;   undefined4 DAT_005ccd9e
;   undefined4 DAT_005f4080
;   undefined4 DAT_00609acc
;   undefined4 DAT_0060b280
;   undefined4 DAT_007bdc9c
;   undefined4 DAT_007bdca0
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_0046ca00
;   FUN_00547170
;   FUN_00547810
;   FUN_00547890
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004264d0
        ;   Label: FUN_004264d0
    PUSH ESI                            ; 004264d1
    PUSH EDI                            ; 004264d2
    PUSH EBP                            ; 004264d3
    MOV EBP,ESP                         ; 004264d4
    SUB ESP,0x20                        ; 004264d6
    AND ESP,0xfffffff8                  ; 004264d9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004264dc
    CMP dword ptr [EAX + 0x3564],0x0    ; 004264df
    JNZ 0x004264ef                      ; 004264e6
        ;   XREF to: 004264ef (CONDITIONAL_JUMP)  ; LAB_004264ef
    MOV ESP,EBP                         ; 004264e8
    POP EBP                             ; 004264ea
    POP EDI                             ; 004264eb
    POP ESI                             ; 004264ec
    POP EBX                             ; 004264ed
    RET                                 ; 004264ee
    PUSH 0x609acc                       ; 004264ef | DAT_00609acc
        ;   Label: LAB_004264ef
    MOV ECX,dword ptr [0x0060b280]      ; 004264f4 | DAT_0060b280
    PUSH ECX                            ; 004264fa | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 004264fb
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 00426500
    MOV EAX,dword ptr [EBP + 0x14]      ; 00426503
    MOV EDI,dword ptr [EBP + 0x14]      ; 00426506
    MOV EBX,dword ptr [EAX + 0x10224]   ; 00426509
    ADD EDI,0x2b4                       ; 0042650f
    TEST EBX,EBX                        ; 00426515
    JNZ 0x00426684                      ; 00426517
        ;   XREF to: 00426684 (CONDITIONAL_JUMP)  ; LAB_00426684
    PUSH EDI                            ; 0042651d
    CALL FUN_00547890                   ; 0042651e
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 00426523
    PUSH EDI                            ; 00426526
    MOV ESI,EAX                         ; 00426527
    MOV EBX,EAX                         ; 00426529
    CALL FUN_00547810                   ; 0042652b
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    ADD ESP,0x4                         ; 00426530
    MOV dword ptr [ESP + 0x10],EAX      ; 00426533
    MOV EAX,dword ptr [EBP + 0x14]      ; 00426537
    MOV EAX,dword ptr [EAX + 0x24e4]    ; 0042653a
    MOV EDI,dword ptr [ESI + 0x1d1f8]   ; 00426540
    MOV dword ptr [ESP + 0x8],EAX       ; 00426546
    XOR EAX,EAX                         ; 0042654a
    TEST EDI,EDI                        ; 0042654c
    JLE 0x00426570                      ; 0042654e
        ;   XREF to: 00426570 (CONDITIONAL_JUMP)  ; LAB_00426570
    XOR EDX,EDX                         ; 00426550
    XOR ECX,ECX                         ; 00426552
        ;   Label: LAB_00426552
    MOV dword ptr [EDX + 0x7bdc9c],ECX  ; 00426554 | DAT_007bdc9c | DAT_007bdca0
    INC EAX                             ; 0042655a
    MOV ESI,dword ptr [EBX + 0x1d1f8]   ; 0042655b
    ADD EDX,0x4                         ; 00426561
    CMP EAX,ESI                         ; 00426564
    JL 0x00426552                       ; 00426566
        ;   XREF to: 00426552 (CONDITIONAL_JUMP)  ; LAB_00426552
    LEA EAX,[EAX]                       ; 00426568
    MOV EDX,EDX                         ; 0042656e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00426570
        ;   Label: LAB_00426570
    MOV EDI,dword ptr [EAX + 0x3564]    ; 00426573
    XOR ECX,ECX                         ; 00426579
    TEST EDI,EDI                        ; 0042657b
    JLE 0x004265c4                      ; 0042657d
        ;   XREF to: 004265c4 (CONDITIONAL_JUMP)  ; LAB_004265c4
    FLD float ptr [0x005f4080]          ; 0042657f | DAT_005f4080
    FLD double ptr [0x005ccd9e]         ; 00426585 | DAT_005ccd9e
    MOV EDX,EAX                         ; 0042658b
    FLD float ptr [EDX + 0x3584]        ; 0042658d
        ;   Label: LAB_0042658d
    MOV EAX,dword ptr [EDX + 0x3574]    ; 00426593
    FMUL ST1                            ; 00426599
    FLD float ptr [EAX*0x4 + 0x7bdc9c]  ; 0042659b | DAT_007bdc9c
    FLD ST3                             ; 004265a2
    FDIVP ST2,ST0                       ; 004265a4
    FADDP                               ; 004265a6
    FSTP float ptr [EAX*0x4 + 0x7bdc9c] ; 004265a8 | DAT_007bdc9c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004265af
    INC ECX                             ; 004265b2
    MOV ESI,dword ptr [EAX + 0x3564]    ; 004265b3
    ADD EDX,0x18                        ; 004265b9
    CMP ECX,ESI                         ; 004265bc
    JL 0x0042658d                       ; 004265be
        ;   XREF to: 0042658d (CONDITIONAL_JUMP)  ; LAB_0042658d
    FSTP ST0                            ; 004265c0
    FSTP ST0                            ; 004265c2
    MOV EDI,dword ptr [EBX + 0x1d1f8]   ; 004265c4
        ;   Label: LAB_004265c4
    XOR ECX,ECX                         ; 004265ca
    XOR EDX,EDX                         ; 004265cc
    TEST EDI,EDI                        ; 004265ce
    JLE 0x00426601                      ; 004265d0
        ;   XREF to: 00426601 (CONDITIONAL_JUMP)  ; LAB_00426601
    MOV EDI,dword ptr [ESP + 0x10]      ; 004265d2
    FLD float ptr [ECX*0x4 + 0x7bdc9c]  ; 004265d6 | DAT_007bdc9c | DAT_007bdca0
        ;   Label: LAB_004265d6
    FCOMP double ptr [0x005ccd9e]       ; 004265dd | DAT_005ccd9e
    FNSTSW AX                           ; 004265e3
    SAHF                                ; 004265e5
    JC 0x004265e9                       ; 004265e6
        ;   XREF to: 004265e9 (CONDITIONAL_JUMP)  ; LAB_004265e9
    INC EDX                             ; 004265e8
    CMP dword ptr [EDI + 0x288c],-0x1   ; 004265e9
        ;   Label: LAB_004265e9
    JNZ 0x004265f3                      ; 004265f0
        ;   XREF to: 004265f3 (CONDITIONAL_JUMP)  ; LAB_004265f3
    INC EDX                             ; 004265f2
    INC ECX                             ; 004265f3
        ;   Label: LAB_004265f3
    MOV EAX,dword ptr [EBX + 0x1d1f8]   ; 004265f4
    ADD EDI,0x4                         ; 004265fa
    CMP ECX,EAX                         ; 004265fd
    JL 0x004265d6                       ; 004265ff
        ;   XREF to: 004265d6 (CONDITIONAL_JUMP)  ; LAB_004265d6
    CMP EDX,dword ptr [EBX + 0x1d1f8]   ; 00426601
        ;   Label: LAB_00426601
    JZ 0x0042669f                       ; 00426607
        ;   XREF to: 0042669f (CONDITIONAL_JUMP)  ; LAB_0042669f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042660d
        ;   Label: LAB_0042660d
    XOR EDI,EDI                         ; 00426611
    SHL EAX,0x2                         ; 00426613
    MOV dword ptr [ESP + 0x14],EDI      ; 00426616
    MOV dword ptr [ESP + 0x18],EDI      ; 0042661a
    MOV dword ptr [ESP + 0xc],EAX       ; 0042661e
    MOV EAX,dword ptr [ESP + 0x10]      ; 00426622
        ;   Label: LAB_00426622
    ADD EAX,dword ptr [ESP + 0xc]       ; 00426626
    CMP EDI,dword ptr [EAX + 0x2c]      ; 0042662a
    JGE 0x00426708                      ; 0042662d
        ;   XREF to: 00426708 (CONDITIONAL_JUMP)  ; LAB_00426708
    MOV ESI,dword ptr [EAX + 0x40]      ; 00426633
    XOR EBX,EBX                         ; 00426636
    MOV EAX,dword ptr [ESP + 0x14]      ; 00426638
    XOR EDX,EDX                         ; 0042663c
    ADD ESI,EAX                         ; 0042663e
    MOV dword ptr [ESP],EBX             ; 00426640
    MOV ECX,ESI                         ; 00426643
    MOV EBX,ESI                         ; 00426645
    XOR EAX,EAX                         ; 00426647
        ;   Label: LAB_00426647
    MOV AL,byte ptr [ESI]               ; 00426649
    CMP EDX,EAX                         ; 0042664b
    JGE 0x004266bb                      ; 0042664d
        ;   XREF to: 004266bb (CONDITIONAL_JUMP)  ; LAB_004266bb
    XOR EAX,EAX                         ; 00426653
    MOV AL,byte ptr [EBX + 0x1]         ; 00426655
    FLD float ptr [ECX + 0x4]           ; 00426658
    FMUL float ptr [EAX*0x4 + 0x7bdc9c] ; 0042665b | DAT_007bdc9c
    CALL FUN_005b7ff0                   ; 00426662
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x1c]        ; 00426667
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042666b
    ADD ECX,0x4                         ; 0042666f
    MOV dword ptr [ESP + 0x1c],EAX      ; 00426672
    INC EBX                             ; 00426676
    FILD dword ptr [ESP + 0x1c]         ; 00426677
    FADD float ptr [ESP]                ; 0042667b
    INC EDX                             ; 0042667e
    FSTP float ptr [ESP]                ; 0042667f
    JMP 0x00426647                      ; 00426682
        ;   XREF to: 00426647 (UNCONDITIONAL_JUMP)  ; LAB_00426647
    PUSH 0x1                            ; 00426684
        ;   Label: LAB_00426684
    PUSH 0x0                            ; 00426686
    PUSH 0xc9                           ; 00426688
    PUSH -0x1                           ; 0042668d
    PUSH EDI                            ; 0042668f
    CALL FUN_00547170                   ; 00426690
        ;   XREF to: 00547170 (UNCONDITIONAL_CALL)  ; undefined FUN_00547170()
    ADD ESP,0x14                        ; 00426695
    MOV ESP,EBP                         ; 00426698
    POP EBP                             ; 0042669a
    POP EDI                             ; 0042669b
    POP ESI                             ; 0042669c
    POP EBX                             ; 0042669d
    RET                                 ; 0042669e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042669f
        ;   Label: LAB_0042669f
    MOV dword ptr [EAX + 0x10228],0x3f800000 ; 004266a2
    MOV dword ptr [EAX + 0x10224],0x1   ; 004266ac
    JMP 0x0042660d                      ; 004266b6
        ;   XREF to: 0042660d (UNCONDITIONAL_JUMP)  ; LAB_0042660d
    FLD float ptr [ESP]                 ; 004266bb
        ;   Label: LAB_004266bb
    FCOMP double ptr [0x005ccd9e]       ; 004266be | DAT_005ccd9e
    FNSTSW AX                           ; 004266c4
    SAHF                                ; 004266c6
    JBE 0x004266d0                      ; 004266c7
        ;   XREF to: 004266d0 (CONDITIONAL_JUMP)  ; LAB_004266d0
    MOV dword ptr [ESP],0x477fff00      ; 004266c9
    FLD float ptr [ESP]                 ; 004266d0
        ;   Label: LAB_004266d0
    MOV ECX,dword ptr [ESP + 0x18]      ; 004266d3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004266d7
    MOV EAX,[0x0060b280]                ; 004266db | DAT_0060b280
    CALL FUN_005b7ff0                   ; 004266e0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    INC EDI                             ; 004266e5
    FISTP dword ptr [ESP + 0x1c]        ; 004266e6
    ADD EBX,0x34                        ; 004266ea
    MOV EDX,dword ptr [EAX]             ; 004266ed
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004266ef
    ADD EDX,ECX                         ; 004266f3
    MOV dword ptr [ESP + 0x14],EBX      ; 004266f5
    LEA ESI,[ECX + 0x30]                ; 004266f9
    MOV dword ptr [EDX + 0x2c],EAX      ; 004266fc
    MOV dword ptr [ESP + 0x18],ESI      ; 004266ff
    JMP 0x00426622                      ; 00426703
        ;   XREF to: 00426622 (UNCONDITIONAL_JUMP)  ; LAB_00426622
    PUSH 0x1                            ; 00426708
        ;   Label: LAB_00426708
    PUSH 0x0                            ; 0042670a
    PUSH 0x163                          ; 0042670c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00426711
    PUSH -0x1                           ; 00426714
    ADD EAX,0x2b4                       ; 00426716
    PUSH EAX                            ; 0042671b
    CALL FUN_00547170                   ; 0042671c
        ;   XREF to: 00547170 (UNCONDITIONAL_CALL)  ; undefined FUN_00547170()
    ADD ESP,0x14                        ; 00426721
    MOV ESP,EBP                         ; 00426724
    POP EBP                             ; 00426726
    POP EDI                             ; 00426727
    POP ESI                             ; 00426728
    POP EBX                             ; 00426729
    RET                                 ; 0042672a


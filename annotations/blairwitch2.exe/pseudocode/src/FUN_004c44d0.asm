; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c44d0(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004c44b4 = 004c455b
;   undefined4 DAT_005d924f
;   undefined4 DAT_005d9257
;   undefined4 DAT_005d925f
;   undefined4 DAT_01cb821c
;   undefined4 DAT_01cb8230
;   undefined4 DAT_01cb8234
;   undefined4 DAT_01cb8240
;   undefined4 DAT_01cb8244
;
; Called Functions:
;   FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c44d0
        ;   Label: FUN_004c44d0
    PUSH ESI                            ; 004c44d1
    PUSH EDI                            ; 004c44d2
    PUSH EBP                            ; 004c44d3
    MOV EBP,ESP                         ; 004c44d4
    SUB ESP,0x8c                        ; 004c44d6
    AND ESP,0xfffffff8                  ; 004c44dc
    MOV EDX,dword ptr [0x01cb8240]      ; 004c44df | DAT_01cb8240
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c44e5
    PUSH EDX                            ; 004c44e8
    ADD EAX,0x2b4                       ; 004c44e9
    PUSH EAX                            ; 004c44ee
    LEA ESI,[ESP + 0x20]                ; 004c44ef
    LEA EDI,[ESP + 0x2c]                ; 004c44f3
    CALL FUN_00546a90                   ; 004c44f7
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA ESI,[ESP + 0x20]                ; 004c44fc
    ADD ESP,0x8                         ; 004c4500
    LEA EAX,[ESP + 0x24]                ; 004c4503
    MOV ECX,dword ptr [EBP + 0x18]      ; 004c4507
    MOVSD ES:EDI,ESI                    ; 004c450a
    MOVSD ES:EDI,ESI                    ; 004c450b
    MOVSD ES:EDI,ESI                    ; 004c450c
    CMP EAX,ECX                         ; 004c450d
    JNZ 0x004c463f                      ; 004c450f
        ;   XREF to: 004c463f (CONDITIONAL_JUMP)  ; LAB_004c463f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c4515
        ;   Label: LAB_004c4515
    MOV EBX,0x1                         ; 004c4518
    XOR ESI,ESI                         ; 004c451d
    ADD EAX,0x2b4                       ; 004c451f
    MOV dword ptr [ESP + 0x84],ESI      ; 004c4524
    MOV dword ptr [ESP + 0x88],EAX      ; 004c452b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c4532
        ;   Label: LAB_004c4532
    MOV EDX,dword ptr [ESP + 0x84]      ; 004c4535
    ADD EDX,dword ptr [EAX + 0x6c]      ; 004c453c
    MOV ESI,0x4                         ; 004c453f
    MOV EAX,EDX                         ; 004c4544
    SAR EDX,0x1f                        ; 004c4546
    IDIV ESI                            ; 004c4549
    CMP EDX,0x3                         ; 004c454b
    JA 0x004c461e                       ; 004c454e
        ;   XREF to: 004c461e (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4c44b4]  ; 004c4554 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c455b
        ;   Label: caseD_0
    MOV EAX,dword ptr [EAX + 0x10b1c]   ; 004c455e
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c4564
    SHL EAX,0x2                         ; 004c4567
    ADD EAX,EDX                         ; 004c456a
    CMP dword ptr [EAX + 0x23f4],0x0    ; 004c456c
    JZ 0x004c461e                       ; 004c4573
        ;   XREF to: 004c461e (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [0x01cb8230]      ; 004c4579 | DAT_01cb8230
    PUSH ESI                            ; 004c457f
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004c4580
    PUSH EDI                            ; 004c4587
    LEA ESI,[ESP + 0x44]                ; 004c4588
    CALL FUN_00546a90                   ; 004c458c
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA EDI,[ESP + 0x68]                ; 004c4591
    LEA ESI,[ESP + 0x44]                ; 004c4595
    LEA EDX,[ESP + 0x68]                ; 004c4599
    ADD ESP,0x8                         ; 004c459d
    LEA EAX,[ESP + 0x30]                ; 004c45a0
    MOVSD ES:EDI,ESI                    ; 004c45a4
    MOVSD ES:EDI,ESI                    ; 004c45a5
    MOVSD ES:EDI,ESI                    ; 004c45a6
    CMP EAX,EDX                         ; 004c45a7
    JZ 0x004c45c3                       ; 004c45a9
        ;   XREF to: 004c45c3 (CONDITIONAL_JUMP)  ; LAB_004c45c3
    MOV EAX,dword ptr [ESP + 0x60]      ; 004c45ab
    MOV dword ptr [ESP + 0x30],EAX      ; 004c45af
    MOV EAX,dword ptr [ESP + 0x64]      ; 004c45b3
    MOV dword ptr [ESP + 0x34],EAX      ; 004c45b7
    MOV EAX,dword ptr [ESP + 0x68]      ; 004c45bb
    MOV dword ptr [ESP + 0x38],EAX      ; 004c45bf
        ;   Label: LAB_004c45bf
    IMUL EDX,EBX,0xc                    ; 004c45c3
        ;   Label: LAB_004c45c3
    FLD double ptr [0x005d924f]         ; 004c45c6 | DAT_005d924f
    FLD float ptr [ESP + 0x30]          ; 004c45cc
    FMUL ST1                            ; 004c45d0
    FLD float ptr [ESP + 0x34]          ; 004c45d2
    FMUL double ptr [0x005d9257]        ; 004c45d6 | DAT_005d9257
    FLD float ptr [ESP + 0x24]          ; 004c45dc
    FMULP ST3                           ; 004c45e0
    FLD float ptr [ESP + 0x28]          ; 004c45e2
    FMUL double ptr [0x005d925f]        ; 004c45e6 | DAT_005d925f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c45ec
    FADDP                               ; 004c45ef
    FXCH ST2                            ; 004c45f1
    FADDP                               ; 004c45f3
    FXCH                                ; 004c45f5
    FSTP float ptr [ESP + 0x34]         ; 004c45f7
    ADD EDX,EAX                         ; 004c45fb
    LEA EAX,[ESP + 0x30]                ; 004c45fd
    FSTP float ptr [ESP + 0x30]         ; 004c4601
    CMP EDX,EAX                         ; 004c4605
    JZ 0x004c461d                       ; 004c4607
        ;   XREF to: 004c461d (CONDITIONAL_JUMP)  ; LAB_004c461d
    MOV EAX,dword ptr [ESP + 0x30]      ; 004c4609
    MOV dword ptr [EDX],EAX             ; 004c460d
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c460f
    MOV dword ptr [EDX + 0x4],EAX       ; 004c4613
    MOV EAX,dword ptr [ESP + 0x38]      ; 004c4616
    MOV dword ptr [EDX + 0x8],EAX       ; 004c461a
        ;   Label: LAB_004c461a
    INC EBX                             ; 004c461d
        ;   Label: LAB_004c461d
    MOV EDX,dword ptr [ESP + 0x84]      ; 004c461e
        ;   Label: default
    INC EDX                             ; 004c4625
    MOV dword ptr [ESP + 0x84],EDX      ; 004c4626
    CMP EDX,0x4                         ; 004c462d
    JL 0x004c4532                       ; 004c4630
        ;   XREF to: 004c4532 (CONDITIONAL_JUMP)  ; LAB_004c4532
    MOV EAX,EBX                         ; 004c4636
    MOV ESP,EBP                         ; 004c4638
    POP EBP                             ; 004c463a
    POP EDI                             ; 004c463b
    POP ESI                             ; 004c463c
    POP EBX                             ; 004c463d
    RET                                 ; 004c463e
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c463f
        ;   Label: LAB_004c463f
    MOV dword ptr [ECX],EAX             ; 004c4643
    MOV EAX,dword ptr [ESP + 0x28]      ; 004c4645
    MOV dword ptr [ECX + 0x4],EAX       ; 004c4649
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004c464c
    MOV dword ptr [ECX + 0x8],EAX       ; 004c4650
    JMP 0x004c4515                      ; 004c4653
        ;   XREF to: 004c4515 (UNCONDITIONAL_JUMP)  ; LAB_004c4515
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c4658
        ;   Label: caseD_1
    MOV EAX,dword ptr [EAX + 0x10b24]   ; 004c465b
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c4661
    SHL EAX,0x2                         ; 004c4664
    ADD EAX,EDX                         ; 004c4667
    CMP dword ptr [EAX + 0x23f4],0x0    ; 004c4669
    JZ 0x004c461e                       ; 004c4670
        ;   XREF to: 004c461e (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [0x01cb8234]      ; 004c4672 | DAT_01cb8234
    PUSH ESI                            ; 004c4678
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004c4679
    PUSH EDI                            ; 004c4680
    LEA ESI,[ESP + 0x74]                ; 004c4681
    CALL FUN_00546a90                   ; 004c4685
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA EDI,[ESP + 0x14]                ; 004c468a
    LEA ESI,[ESP + 0x74]                ; 004c468e
    LEA EDX,[ESP + 0x14]                ; 004c4692
    ADD ESP,0x8                         ; 004c4696
    LEA EAX,[ESP + 0x30]                ; 004c4699
    MOVSD ES:EDI,ESI                    ; 004c469d
    MOVSD ES:EDI,ESI                    ; 004c469e
    MOVSD ES:EDI,ESI                    ; 004c469f
    CMP EAX,EDX                         ; 004c46a0
    JZ 0x004c45c3                       ; 004c46a2
        ;   XREF to: 004c45c3 (CONDITIONAL_JUMP)  ; LAB_004c45c3
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c46a8
    MOV dword ptr [ESP + 0x30],EAX      ; 004c46ac
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c46b0
    MOV dword ptr [ESP + 0x34],EAX      ; 004c46b4
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c46b8
    JMP 0x004c45bf                      ; 004c46bc
        ;   XREF to: 004c45bf (UNCONDITIONAL_JUMP)  ; LAB_004c45bf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c46c1
        ;   Label: caseD_2
    MOV EAX,dword ptr [EAX + 0x10b44]   ; 004c46c4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c46ca
    SHL EAX,0x2                         ; 004c46cd
    ADD EAX,EDX                         ; 004c46d0
    CMP dword ptr [EAX + 0x23f4],0x0    ; 004c46d2
    JZ 0x004c461e                       ; 004c46d9
        ;   XREF to: 004c461e (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [0x01cb821c]      ; 004c46df | DAT_01cb821c
    PUSH ESI                            ; 004c46e5
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004c46e6
    PUSH EDI                            ; 004c46ed
    LEA ESI,[ESP + 0x8]                 ; 004c46ee
    CALL FUN_00546a90                   ; 004c46f2
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    IMUL EDX,EBX,0xc                    ; 004c46f7
    ADD ESP,0x8                         ; 004c46fa
    LEA EDI,[ESP + 0x78]                ; 004c46fd
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c4701
    MOV ESI,ESP                         ; 004c4704
    ADD EDX,EAX                         ; 004c4706
    LEA EAX,[ESP + 0x78]                ; 004c4708
    MOVSD ES:EDI,ESI                    ; 004c470c
    MOVSD ES:EDI,ESI                    ; 004c470d
    MOVSD ES:EDI,ESI                    ; 004c470e
    CMP EDX,EAX                         ; 004c470f
    JZ 0x004c461d                       ; 004c4711
        ;   XREF to: 004c461d (CONDITIONAL_JUMP)  ; LAB_004c461d
    MOV EAX,dword ptr [ESP + 0x78]      ; 004c4717
    MOV dword ptr [EDX],EAX             ; 004c471b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004c471d
    MOV dword ptr [EDX + 0x4],EAX       ; 004c4721
    MOV EAX,dword ptr [ESP + 0x80]      ; 004c4724
    JMP 0x004c461a                      ; 004c472b
        ;   XREF to: 004c461a (UNCONDITIONAL_JUMP)  ; LAB_004c461a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c4730
        ;   Label: caseD_3
    MOV EAX,dword ptr [EAX + 0x10b40]   ; 004c4733
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c4739
    SHL EAX,0x2                         ; 004c473c
    ADD EAX,EDX                         ; 004c473f
    CMP dword ptr [EAX + 0x23f4],0x0    ; 004c4741
    JZ 0x004c461e                       ; 004c4748
        ;   XREF to: 004c461e (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [0x01cb8244]      ; 004c474e | DAT_01cb8244
    PUSH ESI                            ; 004c4754
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004c4755
    PUSH EDI                            ; 004c475c
    LEA ESI,[ESP + 0x50]                ; 004c475d
    CALL FUN_00546a90                   ; 004c4761
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    IMUL EDX,EBX,0xc                    ; 004c4766
    ADD ESP,0x8                         ; 004c4769
    LEA EDI,[ESP + 0x54]                ; 004c476c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c4770
    LEA ESI,[ESP + 0x48]                ; 004c4773
    ADD EDX,EAX                         ; 004c4777
    LEA EAX,[ESP + 0x54]                ; 004c4779
    MOVSD ES:EDI,ESI                    ; 004c477d
    MOVSD ES:EDI,ESI                    ; 004c477e
    MOVSD ES:EDI,ESI                    ; 004c477f
    CMP EDX,EAX                         ; 004c4780
    JZ 0x004c461d                       ; 004c4782
        ;   XREF to: 004c461d (CONDITIONAL_JUMP)  ; LAB_004c461d
    MOV EAX,dword ptr [ESP + 0x54]      ; 004c4788
    MOV dword ptr [EDX],EAX             ; 004c478c
    MOV EAX,dword ptr [ESP + 0x58]      ; 004c478e
    MOV dword ptr [EDX + 0x4],EAX       ; 004c4792
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004c4795
    JMP 0x004c461a                      ; 004c4799
        ;   XREF to: 004c461a (UNCONDITIONAL_JUMP)  ; LAB_004c461a


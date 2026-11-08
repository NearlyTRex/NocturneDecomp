; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00505560(int param_1,int param_2,float param_3)
;
;
; XREF[1]:
;   FUN_00504400 at 00504427
;
; Referenced Globals:
;   undefined4 DAT_00603440
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_00506200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505560
        ;   Label: FUN_00505560
    PUSH ESI                            ; 00505561
    PUSH EBP                            ; 00505562
    MOV ESI,dword ptr [ESP + 0x10]      ; 00505563
    MOV ECX,dword ptr [ESP + 0x14]      ; 00505567
    LEA EAX,[ECX*0x4 + 0x0]             ; 0050556b
    SUB EAX,ECX                         ; 00505572
    SHL EAX,0x3                         ; 00505574
    ADD EAX,ECX                         ; 00505577
    LEA EBX,[ESI + 0x5f0]               ; 00505579
    SHL EAX,0x2                         ; 0050557f
    ADD EBX,EAX                         ; 00505582
    CMP dword ptr [EBX],0x0             ; 00505584
    JNZ 0x00505596                      ; 00505587
        ;   XREF to: 00505596 (CONDITIONAL_JUMP)  ; LAB_00505596
    CMP dword ptr [EBX],0x0             ; 00505589
        ;   Label: LAB_00505589
    JZ 0x005056db                       ; 0050558c
        ;   XREF to: 005056db (CONDITIONAL_JUMP)  ; LAB_005056db
    POP EBP                             ; 00505592
    POP ESI                             ; 00505593
    POP EBX                             ; 00505594
    RET                                 ; 00505595
    FLD float ptr [EBX + 0x8]           ; 00505596
        ;   Label: LAB_00505596
    FMUL float ptr [ESP + 0x18]         ; 00505599
    FDIV float ptr [0x00603440]         ; 0050559d | DAT_00603440
    FADD float ptr [EBX + 0x4]          ; 005055a3
    FST float ptr [EBX + 0x4]           ; 005055a6
    FLDZ                                ; 005055a9
    FCOMPP                              ; 005055ab
    FNSTSW AX                           ; 005055ad
    SAHF                                ; 005055af
    JBE 0x005055c0                      ; 005055b0
        ;   XREF to: 005055c0 (CONDITIONAL_JUMP)  ; LAB_005055c0
    MOV dword ptr [EBX + 0x8],0x0       ; 005055b2
    MOV dword ptr [EBX + 0x4],0x0       ; 005055b9
    FLD float ptr [EBX + 0x4]           ; 005055c0
        ;   Label: LAB_005055c0
    FLD1                                ; 005055c3
    FCOMPP                              ; 005055c5
    FNSTSW AX                           ; 005055c7
    SAHF                                ; 005055c9
    JA 0x00505589                       ; 005055ca
        ;   XREF to: 00505589 (CONDITIONAL_JUMP)  ; LAB_00505589
    PUSH EDI                            ; 005055cc
    PUSH ECX                            ; 005055cd
    PUSH ESI                            ; 005055ce
    CALL FUN_00506200                   ; 005055cf
        ;   XREF to: 00506200 (UNCONDITIONAL_CALL)  ; undefined FUN_00506200()
    MOV EDX,EAX                         ; 005055d4
    SHL EAX,0x2                         ; 005055d6
    SUB EAX,EDX                         ; 005055d9
    SHL EAX,0x3                         ; 005055db
    ADD EAX,EDX                         ; 005055de
    ADD ESI,0x5f0                       ; 005055e0
    SHL EAX,0x2                         ; 005055e6
    ADD ESI,EAX                         ; 005055e9
    MOV EDI,dword ptr [ESI]             ; 005055eb
    ADD ESP,0x8                         ; 005055ed
    TEST EDI,EDI                        ; 005055f0
    JZ 0x00505616                       ; 005055f2
        ;   XREF to: 00505616 (CONDITIONAL_JUMP)  ; LAB_00505616
    MOV EBP,0x5e7485                    ; 005055f4
    MOV EAX,0x45d                       ; 005055f9
    PUSH 0x5e7498                       ; 005055fe
    MOV dword ptr [0x01d1d400],EBP      ; 00505603 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00505609 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0050560e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00505613
    MOV EAX,ESI                         ; 00505616
        ;   Label: LAB_00505616
    MOV ECX,dword ptr [EBX]             ; 00505618
    MOV EDX,EBX                         ; 0050561a
    MOV dword ptr [ESI],ECX             ; 0050561c
    LEA EDI,[EBX + 0xc]                 ; 0050561e
    FLD float ptr [EBX + 0x4]           ; 00505621
    LEA ECX,[ESI + 0xc]                 ; 00505624
    FSTP float ptr [ESI + 0x4]          ; 00505627
    MOV EBP,dword ptr [EBX + 0x8]       ; 0050562a
    MOV dword ptr [ESI + 0x8],EBP       ; 0050562d
    CMP ECX,EDI                         ; 00505630
    JZ 0x00505644                       ; 00505632
        ;   XREF to: 00505644 (CONDITIONAL_JUMP)  ; LAB_00505644
    MOV EBP,dword ptr [EDI]             ; 00505634
    MOV dword ptr [ECX],EBP             ; 00505636
    MOV EBP,dword ptr [EDI + 0x4]       ; 00505638
    MOV dword ptr [ECX + 0x4],EBP       ; 0050563b
    MOV EBP,dword ptr [EDI + 0x8]       ; 0050563e
    MOV dword ptr [ECX + 0x8],EBP       ; 00505641
    LEA ECX,[EDX + 0x18]                ; 00505644
        ;   Label: LAB_00505644
    LEA EDI,[EAX + 0x18]                ; 00505647
    CMP EDI,ECX                         ; 0050564a
    JZ 0x0050565e                       ; 0050564c
        ;   XREF to: 0050565e (CONDITIONAL_JUMP)  ; LAB_0050565e
    MOV EBP,dword ptr [ECX]             ; 0050564e
    MOV dword ptr [EDI],EBP             ; 00505650
    MOV EBP,dword ptr [ECX + 0x4]       ; 00505652
    MOV dword ptr [EDI + 0x4],EBP       ; 00505655
    MOV EBP,dword ptr [ECX + 0x8]       ; 00505658
    MOV dword ptr [EDI + 0x8],EBP       ; 0050565b
    MOV ECX,dword ptr [EDX + 0x24]      ; 0050565e
        ;   Label: LAB_0050565e
    MOV dword ptr [EAX + 0x24],ECX      ; 00505661
    MOV ECX,dword ptr [EDX + 0x28]      ; 00505664
    MOV dword ptr [EAX + 0x28],ECX      ; 00505667
    MOV ECX,dword ptr [EDX + 0x2c]      ; 0050566a
    MOV dword ptr [EAX + 0x2c],ECX      ; 0050566d
    MOV ECX,dword ptr [EDX + 0x30]      ; 00505670
    MOV dword ptr [EAX + 0x30],ECX      ; 00505673
    MOV ECX,dword ptr [EDX + 0x34]      ; 00505676
    MOV dword ptr [EAX + 0x34],ECX      ; 00505679
    MOV ECX,dword ptr [EDX + 0x38]      ; 0050567c
    MOV dword ptr [EAX + 0x38],ECX      ; 0050567f
    MOV ECX,dword ptr [EDX + 0x3c]      ; 00505682
    MOV dword ptr [EAX + 0x3c],ECX      ; 00505685
    MOV ECX,dword ptr [EDX + 0x40]      ; 00505688
    MOV dword ptr [EAX + 0x40],ECX      ; 0050568b
    MOV ECX,dword ptr [EDX + 0x44]      ; 0050568e
    MOV dword ptr [EAX + 0x44],ECX      ; 00505691
    MOV ECX,dword ptr [EDX + 0x48]      ; 00505694
    MOV dword ptr [EAX + 0x48],ECX      ; 00505697
    MOV ECX,dword ptr [EDX + 0x4c]      ; 0050569a
    MOV dword ptr [EAX + 0x4c],ECX      ; 0050569d
    MOV ECX,dword ptr [EDX + 0x50]      ; 005056a0
    MOV dword ptr [EAX + 0x50],ECX      ; 005056a3
    ADD EAX,0x58                        ; 005056a6
    MOV ECX,dword ptr [EDX + 0x54]      ; 005056a9
    ADD EDX,0x58                        ; 005056ac
    MOV dword ptr [EAX + -0x4],ECX      ; 005056af
    CMP EAX,EDX                         ; 005056b2
    JZ 0x005056c6                       ; 005056b4
        ;   XREF to: 005056c6 (CONDITIONAL_JUMP)  ; LAB_005056c6
    MOV ECX,dword ptr [EDX]             ; 005056b6
    MOV dword ptr [EAX],ECX             ; 005056b8
    MOV ECX,dword ptr [EDX + 0x4]       ; 005056ba
    MOV dword ptr [EAX + 0x4],ECX       ; 005056bd
    MOV ECX,dword ptr [EDX + 0x8]       ; 005056c0
    MOV dword ptr [EAX + 0x8],ECX       ; 005056c3
    MOV dword ptr [ESI + 0x8],0x0       ; 005056c6
        ;   Label: LAB_005056c6
    MOV dword ptr [ESI + 0x4],0x0       ; 005056cd
    MOV dword ptr [EBX],0x0             ; 005056d4
    POP EDI                             ; 005056da
    MOV dword ptr [EBX + 0x8],0x0       ; 005056db
        ;   Label: LAB_005056db
    MOV dword ptr [EBX + 0x4],0x0       ; 005056e2
    POP EBP                             ; 005056e9
    POP ESI                             ; 005056ea
    POP EBX                             ; 005056eb
    RET                                 ; 005056ec


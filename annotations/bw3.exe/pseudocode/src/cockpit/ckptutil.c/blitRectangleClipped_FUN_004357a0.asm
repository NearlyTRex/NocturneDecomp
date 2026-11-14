; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int cockpit_ckptutil_c_blitRectangleClipped_FUN_004357a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5b0
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_00434e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004357a0
        ;   Label: cockpit_ckptutil.c_blitRectangleClipped_FUN_004357a0
    PUSH ESI                            ; 004357a1
    PUSH EDI                            ; 004357a2
    PUSH EBP                            ; 004357a3
    SUB ESP,0x1c                        ; 004357a4
    MOV EBX,dword ptr [ESP + 0x30]      ; 004357a7
    MOV EBP,dword ptr [ESP + 0x34]      ; 004357ab
    MOV EAX,[0x01c6b5b0]                ; 004357af | DAT_01c6b5b0
    SUB EAX,EBP                         ; 004357b4
    MOV EDX,dword ptr [0x01c5faec]      ; 004357b6 | DAT_01c5faec
    MOV dword ptr [ESP],EAX             ; 004357bc
    MOV EAX,[0x01c5faf0]                ; 004357bf | DAT_01c5faf0
    MOV ESI,dword ptr [0x01c6b5a8]      ; 004357c4 | DAT_01c6b5a8
    SUB EAX,EDX                         ; 004357ca
    SUB ESI,EBP                         ; 004357cc
    MOV dword ptr [ESP + 0x14],EAX      ; 004357ce
    TEST EBX,EBX                        ; 004357d2
    JNZ 0x004357e8                      ; 004357d4
        ;   XREF to: 004357e8 (CONDITIONAL_JUMP)  ; LAB_004357e8
    LEA EAX,[EAX]                       ; 004357d6
    LEA EDX,[EDX]                       ; 004357dc
    ADD ESP,0x1c                        ; 004357e0
        ;   Label: LAB_004357e0
    POP EBP                             ; 004357e3
    POP EDI                             ; 004357e4
    POP ESI                             ; 004357e5
    POP EBX                             ; 004357e6
    RET                                 ; 004357e7
    CALL cockpit_ckptutil.c_FUN_00434e80 ; 004357e8
        ;   XREF to: 00434e80 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00434e80()
        ;   Label: LAB_004357e8
    MOV ECX,dword ptr [ESP + 0x38]      ; 004357ed
    MOV EDI,dword ptr [0x005fba20]      ; 004357f1 | DAT_005fba20
    MOV dword ptr [ESP + 0x18],EAX      ; 004357f7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004357fb
    SHL ECX,0x2                         ; 004357ff
    DEC EAX                             ; 00435802
    CMP EDI,0x8                         ; 00435803
    JNZ 0x0043586d                      ; 00435806
        ;   XREF to: 0043586d (CONDITIONAL_JUMP)  ; LAB_0043586d
    MOV EDI,dword ptr [ECX + 0x1c5faec] ; 00435808
    MOV ECX,EAX                         ; 0043580e
    ADD EDI,EBP                         ; 00435810
    XOR EBP,EBP                         ; 00435812
    TEST ESI,ESI                        ; 00435814
    JLE 0x0043581e                      ; 00435816
        ;   XREF to: 0043581e (CONDITIONAL_JUMP)  ; LAB_0043581e
    CMP EAX,ESI                         ; 00435818
    JL 0x004357e0                       ; 0043581a
        ;   XREF to: 004357e0 (CONDITIONAL_JUMP)  ; LAB_004357e0
    MOV EBP,ESI                         ; 0043581c
    MOV EDX,dword ptr [ESP]             ; 0043581e
        ;   Label: LAB_0043581e
    CMP ECX,EDX                         ; 00435821
    JLE 0x0043582b                      ; 00435823
        ;   XREF to: 0043582b (CONDITIONAL_JUMP)  ; LAB_0043582b
    CMP EBP,EDX                         ; 00435825
    JG 0x004357e0                       ; 00435827
        ;   XREF to: 004357e0 (CONDITIONAL_JUMP)  ; LAB_004357e0
    MOV ECX,EDX                         ; 00435829
    MOV EAX,dword ptr [ESP + 0x40]      ; 0043582b
        ;   Label: LAB_0043582b
    XOR ESI,ESI                         ; 0043582f
    TEST EAX,EAX                        ; 00435831
    JLE 0x004357e0                      ; 00435833
        ;   XREF to: 004357e0 (CONDITIONAL_JUMP)  ; LAB_004357e0
    SUB ECX,EBP                         ; 00435835
    INC ECX                             ; 00435837
    MOV dword ptr [ESP + 0x4],ECX       ; 00435838
    MOV ECX,dword ptr [ESP + 0x4]       ; 0043583c
        ;   Label: LAB_0043583c
    PUSH ECX                            ; 00435840
    LEA EAX,[EBX + EBP*0x1]             ; 00435841
    PUSH EAX                            ; 00435844
    LEA EAX,[EDI + EBP*0x1]             ; 00435845
    PUSH EAX                            ; 00435848
    CALL dword ptr [ESP + 0x24]         ; 00435849
    ADD ESP,0xc                         ; 0043584d
    INC ESI                             ; 00435850
    MOV EAX,dword ptr [ESP + 0x14]      ; 00435851
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00435855
    MOV ECX,dword ptr [ESP + 0x40]      ; 00435859
    ADD EDI,EAX                         ; 0043585d
    ADD EBX,EDX                         ; 0043585f
    CMP ESI,ECX                         ; 00435861
    JL 0x0043583c                       ; 00435863
        ;   XREF to: 0043583c (CONDITIONAL_JUMP)  ; LAB_0043583c
    ADD ESP,0x1c                        ; 00435865
    POP EBP                             ; 00435868
    POP EDI                             ; 00435869
    POP ESI                             ; 0043586a
    POP EBX                             ; 0043586b
    RET                                 ; 0043586c
    MOV EDI,dword ptr [ECX + 0x1c5faec] ; 0043586d
        ;   Label: LAB_0043586d
    ADD EBP,EBP                         ; 00435873
    MOV ECX,EAX                         ; 00435875
    ADD EDI,EBP                         ; 00435877
    XOR EBP,EBP                         ; 00435879
    TEST ESI,ESI                        ; 0043587b
    JLE 0x00435889                      ; 0043587d
        ;   XREF to: 00435889 (CONDITIONAL_JUMP)  ; LAB_00435889
    CMP EAX,ESI                         ; 0043587f
    JL 0x004357e0                       ; 00435881
        ;   XREF to: 004357e0 (CONDITIONAL_JUMP)  ; LAB_004357e0
    MOV EBP,ESI                         ; 00435887
    MOV EAX,dword ptr [ESP]             ; 00435889
        ;   Label: LAB_00435889
    CMP ECX,EAX                         ; 0043588c
    JLE 0x0043589a                      ; 0043588e
        ;   XREF to: 0043589a (CONDITIONAL_JUMP)  ; LAB_0043589a
    CMP EBP,EAX                         ; 00435890
    JG 0x004357e0                       ; 00435892
        ;   XREF to: 004357e0 (CONDITIONAL_JUMP)  ; LAB_004357e0
    MOV ECX,EAX                         ; 00435898
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043589a
        ;   Label: LAB_0043589a
    MOV EDX,EAX                         ; 0043589e
    SAR EDX,0x1f                        ; 004358a0
    SUB EAX,EDX                         ; 004358a3
    SAR EAX,0x1                         ; 004358a5
    MOV dword ptr [ESP + 0x14],EAX      ; 004358a7
    MOV EAX,dword ptr [ESP + 0x40]      ; 004358ab
    XOR ESI,ESI                         ; 004358af
    TEST EAX,EAX                        ; 004358b1
    JLE 0x004357e0                      ; 004358b3
        ;   XREF to: 004357e0 (CONDITIONAL_JUMP)  ; LAB_004357e0
    SUB ECX,EBP                         ; 004358b9
    LEA EAX,[EBP + EBP*0x1]             ; 004358bb
    MOV dword ptr [ESP + 0xc],EAX       ; 004358bf
    MOV EAX,dword ptr [ESP + 0x14]      ; 004358c3
    INC ECX                             ; 004358c7
    ADD EAX,EAX                         ; 004358c8
    MOV dword ptr [ESP + 0x10],ECX      ; 004358ca
    MOV dword ptr [ESP + 0x8],EAX       ; 004358ce
    MOV EDX,dword ptr [ESP + 0x10]      ; 004358d2
        ;   Label: LAB_004358d2
    PUSH EDX                            ; 004358d6
    LEA EAX,[EBX + EBP*0x1]             ; 004358d7
    PUSH EAX                            ; 004358da
    MOV EAX,dword ptr [ESP + 0x14]      ; 004358db
    ADD EAX,EDI                         ; 004358df
    PUSH EAX                            ; 004358e1
    CALL dword ptr [ESP + 0x24]         ; 004358e2
    ADD ESP,0xc                         ; 004358e6
    INC ESI                             ; 004358e9
    MOV ECX,dword ptr [ESP + 0x8]       ; 004358ea
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004358ee
    MOV EDX,dword ptr [ESP + 0x40]      ; 004358f2
    ADD EDI,ECX                         ; 004358f6
    ADD EBX,EAX                         ; 004358f8
    CMP ESI,EDX                         ; 004358fa
    JL 0x004358d2                       ; 004358fc
        ;   XREF to: 004358d2 (CONDITIONAL_JUMP)  ; LAB_004358d2
    ADD ESP,0x1c                        ; 004358fe
    POP EBP                             ; 00435901
    POP EDI                             ; 00435902
    POP ESI                             ; 00435903
    POP EBX                             ; 00435904
    RET                                 ; 00435905


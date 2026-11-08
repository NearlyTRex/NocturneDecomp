; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00401620(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   FUN_00401c70 at 00401cc1
;   FUN_00401d00 at 00401d4a
;
; Referenced Globals:
;   undefined4 DAT_005e8840
;   undefined4 DAT_005e8841
;   undefined4 DAT_005e8842
;   undefined4 DAT_005e8843
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401620
        ;   Label: FUN_00401620
    PUSH EDI                            ; 00401621
    PUSH EBP                            ; 00401622
    SUB ESP,0x10                        ; 00401623
    MOV EDI,dword ptr [ESP + 0x28]      ; 00401626
    MOV EDX,dword ptr [ESP + 0x20]      ; 0040162a
    SUB EDX,0x20                        ; 0040162e
    LEA EAX,[EDX*0x8 + 0x0]             ; 00401631
    ADD EAX,EDX                         ; 00401638
    SHL EAX,0x4                         ; 0040163a
    ADD EAX,EDX                         ; 0040163d
    MOV ECX,dword ptr [ESP + 0x24]      ; 0040163f
    ADD EAX,0x5e8840                    ; 00401643 | DAT_005e8840
    XOR EDX,EDX                         ; 00401648
    MOV EBX,dword ptr [0x01c6b5a8]      ; 0040164a | DAT_01c6b5a8
    MOV DL,byte ptr [EAX]               ; 00401650 | DAT_005e8840
    CMP ECX,EBX                         ; 00401652
    JL 0x004016fb                       ; 00401654
        ;   XREF to: 004016fb (CONDITIONAL_JUMP)  ; LAB_004016fb
    CMP EDI,dword ptr [0x01c6b5ac]      ; 0040165a | DAT_01c6b5ac
    JL 0x004016fb                       ; 00401660
        ;   XREF to: 004016fb (CONDITIONAL_JUMP)  ; LAB_004016fb
    MOV ECX,dword ptr [0x01c6b5b0]      ; 00401666 | DAT_01c6b5b0
    INC ECX                             ; 0040166c
    MOV EBP,dword ptr [ESP + 0x24]      ; 0040166d
    SUB ECX,EDX                         ; 00401671
    CMP ECX,EBP                         ; 00401673
    JL 0x004016fb                       ; 00401675
        ;   XREF to: 004016fb (CONDITIONAL_JUMP)  ; LAB_004016fb
    MOV ECX,dword ptr [0x01c6b5b4]      ; 0040167b | DAT_01c6b5b4
    SUB ECX,0xa                         ; 00401681
    CMP EDI,ECX                         ; 00401684
    JG 0x004016fb                       ; 00401686
        ;   XREF to: 004016fb (CONDITIONAL_JUMP)  ; LAB_004016fb
    PUSH ESI                            ; 0040168c
    MOV ECX,dword ptr [0x005fba20]      ; 0040168d | DAT_005fba20
    SHL EDI,0x2                         ; 00401693
    INC EAX                             ; 00401696
    LEA EBP,[EDI + 0x2c]                ; 00401697
    CMP ECX,0x8                         ; 0040169a
    JZ 0x004016ff                       ; 0040169d
        ;   XREF to: 004016ff (CONDITIONAL_JUMP)  ; LAB_004016ff
    CMP ECX,0x10                        ; 0040169f
    JNZ 0x00401731                      ; 004016a2
        ;   XREF to: 00401731 (CONDITIONAL_JUMP)  ; LAB_00401731
    MOV ECX,dword ptr [ESP + 0x28]      ; 004016a8
    ADD ECX,ECX                         ; 004016ac
    MOV dword ptr [ESP + 0x10],ECX      ; 004016ae
    MOV dword ptr [ESP + 0x8],EBP       ; 004016b2
    MOV EBP,dword ptr [ESP + 0x10]      ; 004016b6
    MOV ECX,dword ptr [EDI + 0x1c5faec] ; 004016ba | DAT_01c5faec | DAT_01c5faf0
        ;   Label: LAB_004016ba
    XOR EBX,EBX                         ; 004016c0
    ADD ECX,EBP                         ; 004016c2
    TEST EDX,EDX                        ; 004016c4
    JLE 0x004016e0                      ; 004016c6
        ;   XREF to: 004016e0 (CONDITIONAL_JUMP)  ; LAB_004016e0
    MOVZX ESI,byte ptr [EAX]            ; 004016c8 | DAT_005e8841 | DAT_005e8842 | DAT_005e8843
        ;   Label: LAB_004016c8
    INC EAX                             ; 004016cb
    ADD ECX,0x2                         ; 004016cc
    MOV SI,word ptr [ESI*0x2 + 0x1c6a070] ; 004016cf
    INC EBX                             ; 004016d7
    MOV word ptr [ECX + -0x2],SI        ; 004016d8
    CMP EBX,EDX                         ; 004016dc
    JL 0x004016c8                       ; 004016de
        ;   XREF to: 004016c8 (CONDITIONAL_JUMP)  ; LAB_004016c8
    ADD EDI,0x4                         ; 004016e0
        ;   Label: LAB_004016e0
    MOV word ptr [ECX],0x0              ; 004016e3
    CMP EDI,dword ptr [ESP + 0x8]       ; 004016e8
    JNZ 0x004016ba                      ; 004016ec
        ;   XREF to: 004016ba (CONDITIONAL_JUMP)  ; LAB_004016ba
    LEA ECX,[EDX + 0x1]                 ; 004016ee
        ;   Label: LAB_004016ee
    POP ESI                             ; 004016f1
    MOV EAX,ECX                         ; 004016f2
        ;   Label: LAB_004016f2
    ADD ESP,0x10                        ; 004016f4
    POP EBP                             ; 004016f7
    POP EDI                             ; 004016f8
    POP EBX                             ; 004016f9
    RET                                 ; 004016fa
    XOR ECX,ECX                         ; 004016fb
        ;   Label: LAB_004016fb
    JMP 0x004016f2                      ; 004016fd
        ;   XREF to: 004016f2 (UNCONDITIONAL_JUMP)  ; LAB_004016f2
    MOV dword ptr [ESP + 0xc],EBP       ; 004016ff
        ;   Label: LAB_004016ff
    MOV EBX,dword ptr [ESP + 0x28]      ; 00401703
        ;   Label: LAB_00401703
    MOV ECX,dword ptr [EDI + 0x1c5faec] ; 00401707 | DAT_01c5faec | DAT_01c5faf0
    XOR ESI,ESI                         ; 0040170d
    ADD ECX,EBX                         ; 0040170f
    TEST EDX,EDX                        ; 00401711
    JLE 0x00401721                      ; 00401713
        ;   XREF to: 00401721 (CONDITIONAL_JUMP)  ; LAB_00401721
    INC ECX                             ; 00401715
        ;   Label: LAB_00401715
    MOV BL,byte ptr [EAX]               ; 00401716 | DAT_005e8841 | DAT_005e8842 | DAT_005e8843
    INC EAX                             ; 00401718
    INC ESI                             ; 00401719
    MOV byte ptr [ECX + -0x1],BL        ; 0040171a
    CMP ESI,EDX                         ; 0040171d
    JL 0x00401715                       ; 0040171f
        ;   XREF to: 00401715 (CONDITIONAL_JUMP)  ; LAB_00401715
    MOV ESI,dword ptr [ESP + 0xc]       ; 00401721
        ;   Label: LAB_00401721
    ADD EDI,0x4                         ; 00401725
    MOV byte ptr [ECX],0x0              ; 00401728
    CMP EDI,ESI                         ; 0040172b
    JZ 0x004016ee                       ; 0040172d
        ;   XREF to: 004016ee (CONDITIONAL_JUMP)  ; LAB_004016ee
    JMP 0x00401703                      ; 0040172f
        ;   XREF to: 00401703 (UNCONDITIONAL_JUMP)  ; LAB_00401703
    MOV ECX,dword ptr [ESP + 0x28]      ; 00401731
        ;   Label: LAB_00401731
    SHL ECX,0x2                         ; 00401735
    MOV dword ptr [ESP + 0x4],ECX       ; 00401738
    MOV ESI,dword ptr [ESP + 0x4]       ; 0040173c
        ;   Label: LAB_0040173c
    MOV ECX,dword ptr [EDI + 0x1c5faec] ; 00401740 | DAT_01c5faec | DAT_01c5faf0
    XOR EBX,EBX                         ; 00401746
    ADD ECX,ESI                         ; 00401748
    TEST EDX,EDX                        ; 0040174a
    JLE 0x00401764                      ; 0040174c
        ;   XREF to: 00401764 (CONDITIONAL_JUMP)  ; LAB_00401764
    MOVZX ESI,byte ptr [EAX]            ; 0040174e | DAT_005e8841 | DAT_005e8842 | DAT_005e8843
        ;   Label: LAB_0040174e
    INC EAX                             ; 00401751
    ADD ECX,0x4                         ; 00401752
    MOV ESI,dword ptr [ESI*0x4 + 0x1c6a270] ; 00401755
    INC EBX                             ; 0040175c
    MOV dword ptr [ECX + -0x4],ESI      ; 0040175d
    CMP EBX,EDX                         ; 00401760
    JL 0x0040174e                       ; 00401762
        ;   XREF to: 0040174e (CONDITIONAL_JUMP)  ; LAB_0040174e
    ADD EDI,0x4                         ; 00401764
        ;   Label: LAB_00401764
    MOV dword ptr [ECX],0x0             ; 00401767
    CMP EDI,EBP                         ; 0040176d
    JZ 0x004016ee                       ; 0040176f
        ;   XREF to: 004016ee (CONDITIONAL_JUMP)  ; LAB_004016ee
    JMP 0x0040173c                      ; 00401775
        ;   XREF to: 0040173c (UNCONDITIONAL_JUMP)  ; LAB_0040173c


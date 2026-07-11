; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00403570(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00403630 at 004036c6
;
; Referenced Globals:
;   undefined4 DAT_0057723c
;   undefined4 DAT_006af638
;   undefined4 DAT_01bf7720
;   undefined4 DAT_01c00648
;   undefined4 DAT_01c0064c
;   undefined4 DAT_01c0064d
;
; Called Functions:
;   FUN_00401850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403570
        ;   Label: FUN_00403570
    PUSH ESI                            ; 00403571
    PUSH EDI                            ; 00403572
    PUSH EBP                            ; 00403573
    SUB ESP,0x10                        ; 00403574
    XOR EBX,EBX                         ; 00403577
    XOR ESI,ESI                         ; 00403579
    FLD double ptr [0x0057723c]         ; 0040357b | DAT_0057723c
    XOR EAX,EAX                         ; 00403581
        ;   Label: LAB_00403581
    MOV AL,byte ptr [EBX + 0x1c00648]   ; 00403583 | DAT_01c00648
    MOV dword ptr [ESP + 0xc],EAX       ; 00403589
    XOR EAX,EAX                         ; 0040358d
    FILD word ptr [ESP + 0xc]           ; 0040358f
    MOV AL,byte ptr [EBX + 0x1c00649]   ; 00403593 | DAT_01c0064c
    FLD ST0                             ; 00403599
    MOV dword ptr [ESP + 0xc],EAX       ; 0040359b
    FMULP                               ; 0040359f
    FILD word ptr [ESP + 0xc]           ; 004035a1
    XOR EAX,EAX                         ; 004035a5
    FLD ST0                             ; 004035a7
    MOV AL,byte ptr [EBX + 0x1c0064a]   ; 004035a9 | DAT_01c0064d
    FMULP                               ; 004035af
    MOV dword ptr [ESP + 0xc],EAX       ; 004035b1
    FADDP                               ; 004035b5
    FILD word ptr [ESP + 0xc]           ; 004035b7
    FMUL ST0                            ; 004035bb
    FADDP                               ; 004035bd
    FSQRT                               ; 004035bf
    FMUL ST1                            ; 004035c1
    ADD ESI,0x4                         ; 004035c3
    ADD EBX,0x3                         ; 004035c6
    FSTP float ptr [ESI + 0x6af634]     ; 004035c9 | DAT_006af638
    CMP ESI,0x400                       ; 004035cf
    JNZ 0x00403581                      ; 004035d5
        ;   XREF to: 00403581 (CONDITIONAL_JUMP)  ; LAB_00403581
    FSTP ST0                            ; 004035d7
    MOV ESI,0x1bf7720                   ; 004035d9
    XOR EBP,EBP                         ; 004035de
    XOR EDI,EDI                         ; 004035e0
        ;   Label: LAB_004035e0
    XOR EBX,EBX                         ; 004035e2
        ;   Label: LAB_004035e2
    PUSH 0xe5                           ; 004035e4
        ;   Label: LAB_004035e4
    PUSH 0xa                            ; 004035e9
    PUSH EBX                            ; 004035eb
    PUSH EDI                            ; 004035ec
    PUSH EBP                            ; 004035ed
    INC ESI                             ; 004035ee
    ADD EBX,0x8                         ; 004035ef
    CALL FUN_00401850                   ; 004035f2
        ;   XREF to: 00401850 (UNCONDITIONAL_CALL)  ; undefined FUN_00401850()
    ADD ESP,0x14                        ; 004035f7
    MOV byte ptr [ESI + -0x1],AL        ; 004035fa | DAT_01bf7720
    CMP EBX,0x100                       ; 004035fd
    JL 0x004035e4                       ; 00403603
        ;   XREF to: 004035e4 (CONDITIONAL_JUMP)  ; LAB_004035e4
    ADD EDI,0x8                         ; 00403605
    CMP EDI,0x100                       ; 00403608
    JL 0x004035e2                       ; 0040360e
        ;   XREF to: 004035e2 (CONDITIONAL_JUMP)  ; LAB_004035e2
    ADD EBP,0x8                         ; 00403610
    CMP EBP,0x100                       ; 00403613
    JL 0x004035e0                       ; 00403619
        ;   XREF to: 004035e0 (CONDITIONAL_JUMP)  ; LAB_004035e0
    XOR AH,AH                           ; 0040361b
    MOV byte ptr [0x01bf7720],AH        ; 0040361d | DAT_01bf7720
    ADD ESP,0x10                        ; 00403623
    POP EBP                             ; 00403626
    POP EDI                             ; 00403627
    POP ESI                             ; 00403628
    POP EBX                             ; 00403629
    RET                                 ; 0040362a


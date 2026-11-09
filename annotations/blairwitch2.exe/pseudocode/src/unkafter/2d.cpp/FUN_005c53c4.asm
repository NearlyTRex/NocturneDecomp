; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double unkafter_2d_cpp_FUN_005c53c4(void)
;
;
; XREF[1]:
;   unkafter_morph.cpp_FUN_005c3a30 at 005c3a88
;
; Referenced Globals:
;   undefined4 DAT_0061ee9d
;
; *****************************************************************************

section .text

    XOR ECX,0x80000000                  ; 005c53c4
        ;   Label: unkafter_2d.cpp_FUN_005c53c4
    OR EBX,EBX                          ; 005c53ca
    JNZ 0x005c53d4                      ; 005c53cc
        ;   XREF to: 005c53d4 (CONDITIONAL_JUMP)  ; LAB_005c53d4
    ADD ECX,ECX                         ; 005c53ce
    JZ 0x005c53e0                       ; 005c53d0
        ;   XREF to: 005c53e0 (CONDITIONAL_JUMP)  ; LAB_005c53e0
    RCR ECX,0x1                         ; 005c53d2
    OR EAX,EAX                          ; 005c53d4
        ;   Label: LAB_005c53d4
    JNZ 0x005c53e3                      ; 005c53d6
        ;   XREF to: 005c53e3 (CONDITIONAL_JUMP)  ; LAB_005c53e3
    ADD EDX,EDX                         ; 005c53d8
    JNZ 0x005c53e1                      ; 005c53da
        ;   XREF to: 005c53e1 (CONDITIONAL_JUMP)  ; LAB_005c53e1
    MOV EDX,ECX                         ; 005c53dc
    MOV EAX,EBX                         ; 005c53de
    RET                                 ; 005c53e0
        ;   Label: LAB_005c53e0
    RCR EDX,0x1                         ; 005c53e1
        ;   Label: LAB_005c53e1
    CMP byte ptr [0x0061ee9d],0x0       ; 005c53e3 | DAT_0061ee9d
        ;   Label: LAB_005c53e3
    JZ 0x005c540d                       ; 005c53ea
        ;   XREF to: 005c540d (CONDITIONAL_JUMP)  ; LAB_005c540d
    PUSH EDX                            ; 005c53ec
    PUSH EAX                            ; 005c53ed
    FLD double ptr [ESP]                ; 005c53ee
    PUSH ECX                            ; 005c53f1
    PUSH EBX                            ; 005c53f2
    FADD double ptr [ESP]               ; 005c53f3
    FSTP double ptr [ESP + 0x8]         ; 005c53f6
        ;   Label: LAB_005c53f6
    ADD ESP,0x8                         ; 005c53fa
    WAIT                                ; 005c53fd
    POP EAX                             ; 005c53fe
    POP EDX                             ; 005c53ff
    CMP EDX,0x80000000                  ; 005c5400
    JNZ 0x005c540c                      ; 005c5406
        ;   XREF to: 005c540c (CONDITIONAL_JUMP)  ; LAB_005c540c
    SUB EDX,EDX                         ; 005c5408
    MOV EAX,EDX                         ; 005c540a
    RET                                 ; 005c540c
        ;   Label: LAB_005c540c
    PUSH EBP                            ; 005c540d
        ;   Label: LAB_005c540d
    PUSH EDI                            ; 005c540e
    PUSH ESI                            ; 005c540f
    MOV EDI,EDX                         ; 005c5410
    MOV ESI,ECX                         ; 005c5412
    SAR EDI,0x14                        ; 005c5414
    SAR ECX,0x14                        ; 005c5417
    AND EDI,0x800007ff                  ; 005c541a
    AND ECX,0x800007ff                  ; 005c5420
    MOV EBP,ECX                         ; 005c5426
    ROL EDI,0x10                        ; 005c5428
    ROL ECX,0x10                        ; 005c542b
    ADD CX,DI                           ; 005c542e
    ROL EDI,0x10                        ; 005c5431
    ROL ECX,0x10                        ; 005c5434
    AND EDX,0xfffff                     ; 005c5437
    AND ESI,0xfffff                     ; 005c543d
    OR DI,DI                            ; 005c5443
    JZ 0x005c544e                       ; 005c5446
        ;   XREF to: 005c544e (CONDITIONAL_JUMP)  ; LAB_005c544e
    OR EDX,0x100000                     ; 005c5448
    OR CX,CX                            ; 005c544e
        ;   Label: LAB_005c544e
    JZ 0x005c5459                       ; 005c5451
        ;   XREF to: 005c5459 (CONDITIONAL_JUMP)  ; LAB_005c5459
    OR ESI,0x100000                     ; 005c5453
    ADD EAX,EAX                         ; 005c5459
        ;   Label: LAB_005c5459
    ADC EDX,EDX                         ; 005c545b
    ADD EBX,EBX                         ; 005c545d
    ADC ESI,ESI                         ; 005c545f
    SUB CX,DI                           ; 005c5461
    JZ 0x005c5495                       ; 005c5464
        ;   XREF to: 005c5495 (CONDITIONAL_JUMP)  ; LAB_005c5495
    JNC 0x005c5470                      ; 005c5466
        ;   XREF to: 005c5470 (CONDITIONAL_JUMP)  ; LAB_005c5470
    MOV EBP,EDI                         ; 005c5468
    NEG CX                              ; 005c546a
    XCHG EAX,EBX                        ; 005c546d
    XCHG EDX,ESI                        ; 005c546e
    CMP CX,0x36                         ; 005c5470
        ;   Label: LAB_005c5470
    JBE 0x005c5495                      ; 005c5474
        ;   XREF to: 005c5495 (CONDITIONAL_JUMP)  ; LAB_005c5495
    MOV EDX,ESI                         ; 005c5476
    MOV EAX,EBX                         ; 005c5478
    ADD EBP,EBP                         ; 005c547a
    RCR EDX,0x1                         ; 005c547c
    RCR EAX,0x1                         ; 005c547e
    AND EDX,0x800fffff                  ; 005c5480
    ROR EBP,0xd                         ; 005c5486
    AND EBP,0x7ff00000                  ; 005c5489
    OR EDX,EBP                          ; 005c548f
    POP ESI                             ; 005c5491
    POP EDI                             ; 005c5492
    POP EBP                             ; 005c5493
    RET                                 ; 005c5494
    OR ECX,ECX                          ; 005c5495
        ;   Label: LAB_005c5495
    JNS 0x005c54a6                      ; 005c5497
        ;   XREF to: 005c54a6 (CONDITIONAL_JUMP)  ; LAB_005c54a6
    NEG ESI                             ; 005c5499
    NEG EBX                             ; 005c549b
    SBB ESI,0x0                         ; 005c549d
    XOR EBP,0x80000000                  ; 005c54a0
    SUB EDI,EDI                         ; 005c54a6
        ;   Label: LAB_005c54a6
    CMP CL,0x0                          ; 005c54a8
    JZ 0x005c54d0                       ; 005c54ab
        ;   XREF to: 005c54d0 (CONDITIONAL_JUMP)  ; LAB_005c54d0
    PUSH EBX                            ; 005c54ad
    SUB EBX,EBX                         ; 005c54ae
    CMP CL,0x20                         ; 005c54b0
    JC 0x005c54c2                       ; 005c54b3
        ;   XREF to: 005c54c2 (CONDITIONAL_JUMP)  ; LAB_005c54c2
    OR EAX,EAX                          ; 005c54b5
    SETNZ BL                            ; 005c54b7
    MOV EDI,EBX                         ; 005c54ba
    SUB EBX,EBX                         ; 005c54bc
    MOV EAX,EDX                         ; 005c54be
    SUB EDX,EDX                         ; 005c54c0
    SHRD EBX,EAX,CL                     ; 005c54c2
        ;   Label: LAB_005c54c2
    OR EDI,EBX                          ; 005c54c5
    SUB EBX,EBX                         ; 005c54c7
    SHRD EAX,EDX,CL                     ; 005c54c9
    SHRD EDX,EBX,CL                     ; 005c54cc
    POP EBX                             ; 005c54cf
    ADD EAX,EBX                         ; 005c54d0
        ;   Label: LAB_005c54d0
    ADC EDX,ESI                         ; 005c54d2
    JNS 0x005c54f9                      ; 005c54d4
        ;   XREF to: 005c54f9 (CONDITIONAL_JUMP)  ; LAB_005c54f9
    CMP CL,0x35                         ; 005c54d6
    JC 0x005c54ec                       ; 005c54d9
        ;   XREF to: 005c54ec (CONDITIONAL_JUMP)  ; LAB_005c54ec
    TEST EDI,0x7fffffff                 ; 005c54db
    SETNZ BL                            ; 005c54e1
    SHR EBX,0x1                         ; 005c54e4
    ADC EAX,0x0                         ; 005c54e6
    ADC EDX,0x0                         ; 005c54e9
    NEG EDX                             ; 005c54ec
        ;   Label: LAB_005c54ec
    NEG EAX                             ; 005c54ee
    SBB EDX,0x0                         ; 005c54f0
    XOR EBP,0x80000000                  ; 005c54f3
    MOV EBX,EAX                         ; 005c54f9
        ;   Label: LAB_005c54f9
    OR EBX,EDX                          ; 005c54fb
    JZ 0x005c5569                       ; 005c54fd
        ;   XREF to: 005c5569 (CONDITIONAL_JUMP)  ; LAB_005c5569
    OR BP,BP                            ; 005c54ff
    JZ 0x005c556d                       ; 005c5502
        ;   XREF to: 005c556d (CONDITIONAL_JUMP)  ; LAB_005c556d
    TEST EDX,0x7fe00000                 ; 005c5504
        ;   Label: LAB_005c5504
    JNZ 0x005c5516                      ; 005c550a
        ;   XREF to: 005c5516 (CONDITIONAL_JUMP)  ; LAB_005c5516
    DEC BP                              ; 005c550c
    JZ 0x005c556d                       ; 005c550e
        ;   XREF to: 005c556d (CONDITIONAL_JUMP)  ; LAB_005c556d
    ADD EAX,EAX                         ; 005c5510
    ADC EDX,EDX                         ; 005c5512
    JMP 0x005c5504                      ; 005c5514
        ;   XREF to: 005c5504 (UNCONDITIONAL_JUMP)  ; LAB_005c5504
    TEST EDX,0x400000                   ; 005c5516
        ;   Label: LAB_005c5516
    JZ 0x005c552e                       ; 005c551c
        ;   XREF to: 005c552e (CONDITIONAL_JUMP)  ; LAB_005c552e
    SHR EDX,0x1                         ; 005c551e
    RCR EAX,0x1                         ; 005c5520
    ADC EDI,0x0                         ; 005c5522
    INC BP                              ; 005c5525
    CMP BP,0x7ff                        ; 005c5527
    JZ 0x005c5577                       ; 005c552c
        ;   XREF to: 005c5577 (CONDITIONAL_JUMP)  ; LAB_005c5577
    SHR EDX,0x1                         ; 005c552e
        ;   Label: LAB_005c552e
    RCR EAX,0x1                         ; 005c5530
    JNC 0x005c5558                      ; 005c5532
        ;   XREF to: 005c5558 (CONDITIONAL_JUMP)  ; LAB_005c5558
    OR EDI,EDI                          ; 005c5534
    SETNZ BL                            ; 005c5536
    OR EBX,EAX                          ; 005c5539
    SHR EBX,0x1                         ; 005c553b
    ADC EAX,0x0                         ; 005c553d
    ADC EDX,0x0                         ; 005c5540
    TEST EDX,0x200000                   ; 005c5543
    JZ 0x005c5558                       ; 005c5549
        ;   XREF to: 005c5558 (CONDITIONAL_JUMP)  ; LAB_005c5558
    SHR EDX,0x1                         ; 005c554b
    RCR EAX,0x1                         ; 005c554d
    INC BP                              ; 005c554f
    CMP BP,0x7ff                        ; 005c5551
    JZ 0x005c5577                       ; 005c5556
        ;   XREF to: 005c5577 (CONDITIONAL_JUMP)  ; LAB_005c5577
    AND EDX,0xfffff                     ; 005c5558
        ;   Label: LAB_005c5558
    MOV ECX,EBP                         ; 005c555e
    SHL EBP,0x15                        ; 005c5560
    ADD ECX,ECX                         ; 005c5563
    RCR EBP,0x1                         ; 005c5565
    OR EDX,EBP                          ; 005c5567
    POP ESI                             ; 005c5569
        ;   Label: LAB_005c5569
    POP EDI                             ; 005c556a
    POP EBP                             ; 005c556b
    RET                                 ; 005c556c
    ADD EBP,EBP                         ; 005c556d
        ;   Label: LAB_005c556d
    RCR EDX,0x1                         ; 005c556f
    RCR EAX,0x1                         ; 005c5571
    POP ESI                             ; 005c5573
    POP EDI                             ; 005c5574
    POP EBP                             ; 005c5575
    RET                                 ; 005c5576
    MOV EAX,EBP                         ; 005c5577
        ;   Label: LAB_005c5577
    POP ESI                             ; 005c5579
    POP EDI                             ; 005c557a
    POP EBP                             ; 005c557b
    JMP 0x005c5dcb                      ; 005c557c
        ;   XREF to: 005c5dcb (UNCONDITIONAL_JUMP)  ; LAB_005c5dcb


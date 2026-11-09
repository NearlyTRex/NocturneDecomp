; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavInDevice_setMode_FUN_00558440(CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int stereo_flag)
;
; Parameters:
; CWavInDevice *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bits_per_sample
; int              Stack[0xc]:4   channels
; int              Stack[0x10]:4   sample_rate
; int              Stack[0x14]:4   stereo_flag
;
; Referenced Globals:
;   void* PTR_waveInGetDevCapsA_005c8458 = 001c894a
;   void* PTR_waveInOpen_005c845c = 001c895e
;   void* PTR_GlobalAlloc_005c85c8 = 001c8f8e
;   void* PTR_GlobalLock_005c85d0 = 001c8faa
;   TerminatedCString s_WavInDevice_setMode_Can_005ea664
;   undefined4 DAT_0061bf84
;   undefined4 DAT_0061bf88
;   undefined4 DAT_0061bf8c
;   undefined4 DAT_0061bf90
;   undefined4 DAT_0061bf94
;   undefined4 DAT_0061bf98
;   undefined4 DAT_0061bf9c
;   undefined4 DAT_0061bfa0
;   undefined4 DAT_0061bfa4
;   undefined4 DAT_0061bfa8
;   ... and 11 more
;
; Called Functions:
;   GlobalAlloc
;   GlobalLock
;   sound_sndmain.cpp_FUN_005549c0
;   waveInGetDevCapsA
;   waveInOpen
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558440
        ;   Label: sound_sndwav.cpp_CWavInDevice_setMode_FUN_00558440
    PUSH ESI                            ; 00558441
    PUSH EDI                            ; 00558442
    PUSH EBP                            ; 00558443
    SUB ESP,0x48                        ; 00558444
    MOV EDI,dword ptr [0x0264b268]      ; 00558447 | DAT_0264b268
    MOV EBP,dword ptr [0x0264b264]      ; 0055844d | DAT_0264b264
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00558453
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00558457
    PUSH EDX                            ; 0055845b
    MOV EAX,dword ptr [EAX]             ; 0055845c
    CALL dword ptr [EAX]                ; 0055845e
    ADD ESP,0x4                         ; 00558460
    TEST EAX,EAX                        ; 00558463
    JNZ 0x00558475                      ; 00558465
        ;   XREF to: 00558475 (CONDITIONAL_JUMP)  ; LAB_00558475
    MOV EDI,dword ptr [0x0264b268]      ; 00558467 | DAT_0264b268
        ;   Label: LAB_00558467
    ADD ESP,0x48                        ; 0055846d
    POP EBP                             ; 00558470
    POP EDI                             ; 00558471
    POP ESI                             ; 00558472
    POP EBX                             ; 00558473
    RET                                 ; 00558474
    PUSH 0x30                           ; 00558475
        ;   Label: LAB_00558475
    LEA EAX,[ESP + 0x4]                 ; 00558477
    PUSH EAX                            ; 0055847b
    MOV ECX,dword ptr [0x0061bf88]      ; 0055847c | DAT_0061bf88
    PUSH ECX                            ; 00558482
    CALL dword ptr CS:[0x5c8458]        ; 00558483 | PTR_waveInGetDevCapsA_005c8458
    TEST EAX,EAX                        ; 0055848a
    JNZ 0x00558680                      ; 0055848c
        ;   XREF to: 00558680 (CONDITIONAL_JUMP)  ; LAB_00558680
    MOV EDI,dword ptr [ESP + 0x64]      ; 00558492
    MOV EAX,dword ptr [ESP + 0x68]      ; 00558496
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0055849a
    MOV EBP,dword ptr [ESP + 0x60]      ; 0055849e
    MOV [0x0264b26c],EAX                ; 005584a2 | DAT_0264b26c
    TEST EBX,EBX                        ; 005584a7
    SETNZ AL                            ; 005584a9
    AND EAX,0xff                        ; 005584ac
    MOV [0x0264b270],EAX                ; 005584b1 | DAT_0264b270
    MOV EAX,dword ptr [ESP + 0x28]      ; 005584b6
    MOV dword ptr [ESP + 0x40],EAX      ; 005584ba
    MOV EAX,0xffffffff                  ; 005584be
        ;   Label: LAB_005584be
    MOV ESI,0x1869f                     ; 005584c3
    XOR EDX,EDX                         ; 005584c8
    XOR EBX,EBX                         ; 005584ca
    MOV dword ptr [ESP + 0x44],EAX      ; 005584cc
    MOV ECX,dword ptr [ESP + 0x40]      ; 005584d0
        ;   Label: LAB_005584d0
    TEST dword ptr [EBX + 0x61bf8c],ECX ; 005584d4 | DAT_0061bf8c | DAT_0061bf9c
    JZ 0x00558542                       ; 005584da
        ;   XREF to: 00558542 (CONDITIONAL_JUMP)  ; LAB_00558542
    MOV ECX,dword ptr [EBX + 0x61bf90]  ; 005584e0 | DAT_0061bf90 | DAT_0061bfa0
    XOR EAX,EAX                         ; 005584e6
    CMP ECX,EBP                         ; 005584e8
    JLE 0x005584f1                      ; 005584ea
        ;   XREF to: 005584f1 (CONDITIONAL_JUMP)  ; LAB_005584f1
    MOV EAX,0x1                         ; 005584ec
    MOV ECX,dword ptr [EBX + 0x61bf90]  ; 005584f1 | DAT_0061bf90 | DAT_0061bfa0
        ;   Label: LAB_005584f1
    CMP ECX,EBP                         ; 005584f7
    JGE 0x005584fe                      ; 005584f9
        ;   XREF to: 005584fe (CONDITIONAL_JUMP)  ; LAB_005584fe
    ADD EAX,0x2                         ; 005584fb
    MOV ECX,dword ptr [EBX + 0x61bf98]  ; 005584fe | DAT_0061bf98 | DAT_0061bfa8
        ;   Label: LAB_005584fe
    CMP ECX,dword ptr [0x0264b26c]      ; 00558504 | DAT_0264b26c
    JLE 0x0055850d                      ; 0055850a
        ;   XREF to: 0055850d (CONDITIONAL_JUMP)  ; LAB_0055850d
    INC EAX                             ; 0055850c
    MOV ECX,dword ptr [EBX + 0x61bf98]  ; 0055850d | DAT_0061bf98 | DAT_0061bfa8
        ;   Label: LAB_0055850d
    CMP ECX,dword ptr [0x0264b26c]      ; 00558513 | DAT_0264b26c
    JGE 0x0055851e                      ; 00558519
        ;   XREF to: 0055851e (CONDITIONAL_JUMP)  ; LAB_0055851e
    ADD EAX,0x2                         ; 0055851b
    MOV ECX,dword ptr [EBX + 0x61bf94]  ; 0055851e | DAT_0061bf94 | DAT_0061bfa4
        ;   Label: LAB_0055851e
    CMP ECX,EDI                         ; 00558524
    JLE 0x0055852b                      ; 00558526
        ;   XREF to: 0055852b (CONDITIONAL_JUMP)  ; LAB_0055852b
    ADD EAX,0x2                         ; 00558528
    MOV ECX,dword ptr [EBX + 0x61bf94]  ; 0055852b | DAT_0061bf94 | DAT_0061bfa4
        ;   Label: LAB_0055852b
    CMP ECX,EDI                         ; 00558531
    JGE 0x00558538                      ; 00558533
        ;   XREF to: 00558538 (CONDITIONAL_JUMP)  ; LAB_00558538
    ADD EAX,0x3                         ; 00558535
    CMP EAX,ESI                         ; 00558538
        ;   Label: LAB_00558538
    JGE 0x00558542                      ; 0055853a
        ;   XREF to: 00558542 (CONDITIONAL_JUMP)  ; LAB_00558542
    MOV dword ptr [ESP + 0x44],EDX      ; 0055853c
    MOV ESI,EAX                         ; 00558540
    INC EDX                             ; 00558542
        ;   Label: LAB_00558542
    ADD EBX,0x10                        ; 00558543
    CMP EDX,0xc                         ; 00558546
    JL 0x005584d0                       ; 00558549
        ;   XREF to: 005584d0 (CONDITIONAL_JUMP)  ; LAB_005584d0
    MOV EBX,dword ptr [ESP + 0x44]      ; 0055854b
    MOV dword ptr [0x0264b268],EDI      ; 0055854f | DAT_0264b268
    MOV dword ptr [0x0264b264],EBP      ; 00558555 | DAT_0264b264
    TEST EBX,EBX                        ; 0055855b
    JL 0x00558690                       ; 0055855d
        ;   XREF to: 00558690 (CONDITIONAL_JUMP)  ; LAB_00558690
    MOV EAX,EBX                         ; 00558563
    SHL EAX,0x4                         ; 00558565
    MOV EDX,dword ptr [EAX + 0x61bf90]  ; 00558568 | DAT_0061bf90
    MOV dword ptr [0x0264b24c],EDX      ; 0055856e | DAT_0264b24c
    MOV ESI,dword ptr [0x0264b24c]      ; 00558574 | DAT_0264b24c
    MOV EDX,dword ptr [EAX + 0x61bf94]  ; 0055857a | DAT_0061bf94
    MOV EAX,dword ptr [EAX + 0x61bf98]  ; 00558580 | DAT_0061bf98
    MOV dword ptr [0x0264b250],EDX      ; 00558586 | DAT_0264b250
    MOV [0x0264b254],EAX                ; 0055858c | DAT_0264b254
    CMP ESI,0x8                         ; 00558591
    SETZ AL                             ; 00558594
    MOV ECX,0x14                        ; 00558597
    AND EAX,0xff                        ; 0055859c
    MOV EDX,dword ptr [0x0264b254]      ; 005585a1 | DAT_0264b254
    MOV [0x0264b258],EAX                ; 005585a7 | DAT_0264b258
    MOV EAX,EDX                         ; 005585ac
    SAR EDX,0x1f                        ; 005585ae
    IDIV ECX                            ; 005585b1
    MOV EDX,dword ptr [0x0264b254]      ; 005585b3 | DAT_0264b254
    MOV [0x0264b25c],EAX                ; 005585b9 | DAT_0264b25c
    ADD EDX,EDX                         ; 005585be
    MOV ECX,EAX                         ; 005585c0
    MOV EAX,EDX                         ; 005585c2
    SAR EDX,0x1f                        ; 005585c4
    IDIV ECX                            ; 005585c7
    MOV [0x0264b260],EAX                ; 005585c9 | DAT_0264b260
    CMP EAX,0x14                        ; 005585ce
    JLE 0x005585dd                      ; 005585d1
        ;   XREF to: 005585dd (CONDITIONAL_JUMP)  ; LAB_005585dd
    MOV dword ptr [0x0264b260],0x14     ; 005585d3 | DAT_0264b260
    MOV ECX,dword ptr [0x0264b260]      ; 005585dd | DAT_0264b260
        ;   Label: LAB_005585dd
    MOV dword ptr [0x0264b268],EDI      ; 005585e3 | DAT_0264b268
    MOV dword ptr [0x0264b264],EBP      ; 005585e9 | DAT_0264b264
    XOR ESI,ESI                         ; 005585ef
    TEST ECX,ECX                        ; 005585f1
    JLE 0x00558632                      ; 005585f3
        ;   XREF to: 00558632 (CONDITIONAL_JUMP)  ; LAB_00558632
    XOR EBX,EBX                         ; 005585f5
    MOV EAX,[0x0264b24c]                ; 005585f7 | DAT_0264b24c
        ;   Label: LAB_005585f7
    MOV EDX,EAX                         ; 005585fc
    SAR EDX,0x1f                        ; 005585fe
    SHL EDX,0x3                         ; 00558601
    SBB EAX,EDX                         ; 00558604
    SAR EAX,0x3                         ; 00558606
    IMUL EAX,dword ptr [0x0264b25c]     ; 00558609 | DAT_0264b25c
    IMUL EAX,dword ptr [0x0264b250]     ; 00558610 | DAT_0264b250
    PUSH EAX                            ; 00558617
    PUSH 0x2002                         ; 00558618
    CALL dword ptr CS:[0x5c85c8]        ; 0055861d | PTR_GlobalAlloc_005c85c8
    MOV dword ptr [EBX + 0x264b1ac],EAX ; 00558624
    TEST EAX,EAX                        ; 0055862a
    JNZ 0x005586ad                      ; 0055862c
        ;   XREF to: 005586ad (CONDITIONAL_JUMP)  ; LAB_005586ad
    CMP ESI,dword ptr [0x0264b260]      ; 00558632 | DAT_0264b260
        ;   Label: LAB_00558632
    JGE 0x0055870a                      ; 00558638
        ;   XREF to: 0055870a (CONDITIONAL_JUMP)  ; LAB_0055870a
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0055863e
        ;   Label: LAB_0055863e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00558642
    PUSH EDX                            ; 00558646
    MOV EAX,dword ptr [EAX]             ; 00558647
    CALL dword ptr [EAX]                ; 00558649
    ADD ESP,0x4                         ; 0055864b
    TEST EAX,EAX                        ; 0055864e
    JZ 0x00558467                       ; 00558650
        ;   XREF to: 00558467 (CONDITIONAL_JUMP)  ; LAB_00558467
    MOV EAX,dword ptr [ESP + 0x44]      ; 00558656
    SHL EAX,0x4                         ; 0055865a
    MOV EAX,dword ptr [EAX + 0x61bf8c]  ; 0055865d | DAT_0061bf8c
    MOV ECX,dword ptr [ESP + 0x40]      ; 00558663
    NOT EAX                             ; 00558667
    MOV EBP,dword ptr [0x0264b264]      ; 00558669 | DAT_0264b264
    AND ECX,EAX                         ; 0055866f
    MOV EDI,dword ptr [0x0264b268]      ; 00558671 | DAT_0264b268
    MOV dword ptr [ESP + 0x40],ECX      ; 00558677
    JMP 0x005584be                      ; 0055867b
        ;   XREF to: 005584be (UNCONDITIONAL_JUMP)  ; LAB_005584be
    XOR EAX,EAX                         ; 00558680
        ;   Label: LAB_00558680
    MOV EDI,dword ptr [0x0264b268]      ; 00558682 | DAT_0264b268
    ADD ESP,0x48                        ; 00558688
    POP EBP                             ; 0055868b
    POP EDI                             ; 0055868c
    POP ESI                             ; 0055868d
    POP EBX                             ; 0055868e
    RET                                 ; 0055868f
    PUSH 0x5ea664                       ; 00558690 | = "WavInDevice::setMode - Can't set any ..."
        ;   Label: LAB_00558690
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00558695
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 0055869a
    XOR EAX,EAX                         ; 0055869d
    MOV EDI,dword ptr [0x0264b268]      ; 0055869f | DAT_0264b268
    ADD ESP,0x48                        ; 005586a5
    POP EBP                             ; 005586a8
    POP EDI                             ; 005586a9
    POP ESI                             ; 005586aa
    POP EBX                             ; 005586ab
    RET                                 ; 005586ac
    PUSH EAX                            ; 005586ad
        ;   Label: LAB_005586ad
    CALL dword ptr CS:[0x5c85d0]        ; 005586ae | PTR_GlobalLock_005c85d0
    MOV dword ptr [EBX + 0x264b1fc],EAX ; 005586b5
    TEST EAX,EAX                        ; 005586bb
    JZ 0x00558632                       ; 005586bd
        ;   XREF to: 00558632 (CONDITIONAL_JUMP)  ; LAB_00558632
    PUSH 0x20                           ; 005586c3
    PUSH 0x2002                         ; 005586c5
    CALL dword ptr CS:[0x5c85c8]        ; 005586ca | PTR_GlobalAlloc_005c85c8
    MOV dword ptr [EBX + 0x264b10c],EAX ; 005586d1
    TEST EAX,EAX                        ; 005586d7
    JZ 0x00558632                       ; 005586d9
        ;   XREF to: 00558632 (CONDITIONAL_JUMP)  ; LAB_00558632
    MOV EAX,dword ptr [EBX + 0x264b10c] ; 005586df
    PUSH EAX                            ; 005586e5
    ADD EBX,0x4                         ; 005586e6
    INC ESI                             ; 005586e9
    CALL dword ptr CS:[0x5c85d0]        ; 005586ea | PTR_GlobalLock_005c85d0
    MOV EDX,dword ptr [0x0264b260]      ; 005586f1 | DAT_0264b260
    MOV dword ptr [EBX + 0x264b158],EAX ; 005586f7
    CMP ESI,EDX                         ; 005586fd
    JL 0x005585f7                       ; 005586ff
        ;   XREF to: 005585f7 (CONDITIONAL_JUMP)  ; LAB_005585f7
    JMP 0x00558632                      ; 00558705
        ;   XREF to: 00558632 (UNCONDITIONAL_JUMP)  ; LAB_00558632
    MOV EDX,0x1                         ; 0055870a
        ;   Label: LAB_0055870a
    MOV AX,[0x0264b24c]                 ; 0055870f | DAT_0264b24c
    MOV word ptr [ESP + 0x30],DX        ; 00558715
    MOV word ptr [ESP + 0x3e],AX        ; 0055871a
    XOR EDX,EDX                         ; 0055871f
    MOV AX,[0x0264b250]                 ; 00558721 | DAT_0264b250
    MOV DX,word ptr [ESP + 0x3e]        ; 00558727
    MOV word ptr [ESP + 0x32],AX        ; 0055872c
    MOV EAX,EDX                         ; 00558731
    SAR EDX,0x1f                        ; 00558733
    SHL EDX,0x3                         ; 00558736
    SBB EAX,EDX                         ; 00558739
    SAR EAX,0x3                         ; 0055873b
    XOR EDX,EDX                         ; 0055873e
    MOV DX,word ptr [ESP + 0x32]        ; 00558740
    IMUL EAX,EDX                        ; 00558745
    MOV word ptr [ESP + 0x3c],AX        ; 00558748
    MOV EAX,[0x0264b254]                ; 0055874d | DAT_0264b254
    MOV dword ptr [ESP + 0x34],EAX      ; 00558752
    XOR EAX,EAX                         ; 00558756
    MOV EDX,dword ptr [ESP + 0x34]      ; 00558758
    MOV AX,word ptr [ESP + 0x3c]        ; 0055875c
    IMUL EDX,EAX                        ; 00558761
    PUSH 0x0                            ; 00558764
    PUSH 0x0                            ; 00558766
    PUSH 0x0                            ; 00558768
    LEA EAX,[ESP + 0x3c]                ; 0055876a
    PUSH EAX                            ; 0055876e
    MOV ESI,dword ptr [0x0061bf84]      ; 0055876f | DAT_0061bf84
    PUSH ESI                            ; 00558775
    PUSH 0x264b108                      ; 00558776 | DAT_0264b108
    MOV dword ptr [ESP + 0x50],EDX      ; 0055877b
    CALL dword ptr CS:[0x5c845c]        ; 0055877f | PTR_waveInOpen_005c845c
    TEST EAX,EAX                        ; 00558786
    JNZ 0x0055863e                      ; 00558788
        ;   XREF to: 0055863e (CONDITIONAL_JUMP)  ; LAB_0055863e
    MOV EAX,0x1                         ; 0055878e
    MOV EDI,dword ptr [0x0264b268]      ; 00558793 | DAT_0264b268
    ADD ESP,0x48                        ; 00558799
    POP EBP                             ; 0055879c
    POP EDI                             ; 0055879d
    POP ESI                             ; 0055879e
    POP EBX                             ; 0055879f
    RET                                 ; 005587a0


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndwav_cpp_CWavOutDevice_setMode_FUN_0052c460(undefined4 *param_1,uint param_2,int param_3,uint *param_4)
;
;
; Referenced Globals:
;   void* PTR_waveOutOpen_005753f8 = 0017587e
;   void* PTR_GlobalAlloc_00575544 = 00175e26
;   void* PTR_GlobalLock_0057554c = 00175e42
;   TerminatedCString s_waveOutOpen_failed_00594942
;   undefined4 DAT_005bed44
;   undefined4 DAT_02dc93a4
;   undefined4 DAT_02dc9428
;   undefined4 DAT_02dc942c
;   undefined4 DAT_02dc9430
;   undefined4 DAT_02dc9434
;   undefined4 DAT_02dc9438
;   undefined4 DAT_02dc943c
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   FUN_00529980
;   GlobalAlloc
;   GlobalLock
;   sound_sndmain.cpp_getMaxSwLatency_FUN_00528970
;   waveOutOpen
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c460
        ;   Label: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_0052c460
    PUSH ESI                            ; 0052c461
    PUSH EDI                            ; 0052c462
    PUSH EBP                            ; 0052c463
    SUB ESP,0x14                        ; 0052c464
    MOV EDI,dword ptr [ESP + 0x28]      ; 0052c467
    PUSH EDI                            ; 0052c46b
    MOV EAX,dword ptr [EDI]             ; 0052c46c
    CALL dword ptr [EAX]                ; 0052c46e
    ADD ESP,0x4                         ; 0052c470
    TEST EAX,EAX                        ; 0052c473
    JNZ 0x0052c47f                      ; 0052c475
        ;   XREF to: 0052c47f (CONDITIONAL_JUMP)  ; LAB_0052c47f
    ADD ESP,0x14                        ; 0052c477
    POP EBP                             ; 0052c47a
    POP EDI                             ; 0052c47b
    POP ESI                             ; 0052c47c
    POP EBX                             ; 0052c47d
    RET                                 ; 0052c47e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0052c47f
        ;   Label: LAB_0052c47f
    MOV [0x02dc9428],EAX                ; 0052c483 | DAT_02dc9428
    MOV EAX,dword ptr [ESP + 0x34]      ; 0052c488
    MOV EDX,0x4                         ; 0052c48c
    MOV [0x02dc942c],EAX                ; 0052c491 | DAT_02dc942c
    MOV EAX,dword ptr [ESP + 0x30]      ; 0052c496
    MOV dword ptr [0x02dc943c],EDX      ; 0052c49a | DAT_02dc943c
    MOV [0x02dc9430],EAX                ; 0052c4a0 | DAT_02dc9430
    CALL sound_sndmain.cpp_getMaxSwLatency_FUN_00528970 ; 0052c4a5
        ;   XREF to: 00528970 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getMaxSwLatency_FUN_00528970()
    MOV dword ptr [ESP + 0x10],EAX      ; 0052c4aa
    FLD float ptr [ESP + 0x10]          ; 0052c4ae
    FILD dword ptr [0x02dc942c]         ; 0052c4b2 | DAT_02dc942c
    FMULP                               ; 0052c4b8
    FILD dword ptr [0x02dc943c]         ; 0052c4ba | DAT_02dc943c
    FDIVP                               ; 0052c4c0
    CALL crt_math.c_round_FUN_00563a30  ; 0052c4c2
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [0x02dc9434]        ; 0052c4c7 | DAT_02dc9434
    MOV EAX,[0x02dc9434]                ; 0052c4cd | DAT_02dc9434
    ADD EAX,0xf                         ; 0052c4d2
    AND AL,0xf0                         ; 0052c4d5
    MOV [0x02dc9434],EAX                ; 0052c4d7 | DAT_02dc9434
    MOV EAX,[0x02dc9428]                ; 0052c4dc | DAT_02dc9428
    MOV EDX,EAX                         ; 0052c4e1
    SAR EDX,0x1f                        ; 0052c4e3
    SHL EDX,0x3                         ; 0052c4e6
    SBB EAX,EDX                         ; 0052c4e9
    SAR EAX,0x3                         ; 0052c4eb
    MOV EDX,dword ptr [0x02dc9434]      ; 0052c4ee | DAT_02dc9434
    IMUL EDX,EAX                        ; 0052c4f4
    MOV EAX,[0x02dc9430]                ; 0052c4f7 | DAT_02dc9430
    IMUL EDX,EAX                        ; 0052c4fc
    XOR ESI,ESI                         ; 0052c4ff
    MOV ECX,dword ptr [0x02dc943c]      ; 0052c501 | DAT_02dc943c
    MOV dword ptr [0x02dc9438],EDX      ; 0052c507 | DAT_02dc9438
    TEST ECX,ECX                        ; 0052c50d
    JLE 0x0052c587                      ; 0052c50f
        ;   XREF to: 0052c587 (CONDITIONAL_JUMP)  ; LAB_0052c587
    XOR EBX,EBX                         ; 0052c511
    MOV ECX,dword ptr [0x02dc9438]      ; 0052c513 | DAT_02dc9438
        ;   Label: LAB_0052c513
    PUSH ECX                            ; 0052c519
    PUSH 0x2002                         ; 0052c51a
    CALL dword ptr CS:[0x575544]        ; 0052c51f | PTR_GlobalAlloc_00575544
    MOV dword ptr [EBX + 0x2dc93e8],EAX ; 0052c526
    TEST EAX,EAX                        ; 0052c52c
    JZ 0x0052c613                       ; 0052c52e
        ;   XREF to: 0052c613 (CONDITIONAL_JUMP)  ; LAB_0052c613
    PUSH EAX                            ; 0052c534
    CALL dword ptr CS:[0x57554c]        ; 0052c535 | PTR_GlobalLock_0057554c
    MOV dword ptr [EBX + 0x2dc93c8],EAX ; 0052c53c
    TEST EAX,EAX                        ; 0052c542
    JZ 0x0052c613                       ; 0052c544
        ;   XREF to: 0052c613 (CONDITIONAL_JUMP)  ; LAB_0052c613
    PUSH 0x20                           ; 0052c54a
    PUSH 0x2002                         ; 0052c54c
    CALL dword ptr CS:[0x575544]        ; 0052c551 | PTR_GlobalAlloc_00575544
    MOV dword ptr [EBX + 0x2dc9408],EAX ; 0052c558
    TEST EAX,EAX                        ; 0052c55e
    JZ 0x0052c613                       ; 0052c560
        ;   XREF to: 0052c613 (CONDITIONAL_JUMP)  ; LAB_0052c613
    MOV EBP,dword ptr [EBX + 0x2dc9408] ; 0052c566
    PUSH EBP                            ; 0052c56c
    INC ESI                             ; 0052c56d
    CALL dword ptr CS:[0x57554c]        ; 0052c56e | PTR_GlobalLock_0057554c
    MOV dword ptr [EBX + 0x2dc93a8],EAX ; 0052c575
    MOV EAX,[0x02dc943c]                ; 0052c57b | DAT_02dc943c
    ADD EBX,0x4                         ; 0052c580
    CMP ESI,EAX                         ; 0052c583
    JL 0x0052c513                       ; 0052c585
        ;   XREF to: 0052c513 (CONDITIONAL_JUMP)  ; LAB_0052c513
    MOV EDX,0x1                         ; 0052c587
        ;   Label: LAB_0052c587
    MOV AX,[0x02dc9428]                 ; 0052c58c | DAT_02dc9428
    MOV word ptr [ESP],DX               ; 0052c592
    MOV word ptr [ESP + 0xe],AX         ; 0052c596
    XOR EDX,EDX                         ; 0052c59b
    MOV AX,[0x02dc9430]                 ; 0052c59d | DAT_02dc9430
    MOV DX,word ptr [ESP + 0xe]         ; 0052c5a3
    MOV word ptr [ESP + 0x2],AX         ; 0052c5a8
    MOV EAX,EDX                         ; 0052c5ad
    SAR EDX,0x1f                        ; 0052c5af
    SHL EDX,0x3                         ; 0052c5b2
    SBB EAX,EDX                         ; 0052c5b5
    SAR EAX,0x3                         ; 0052c5b7
    XOR EDX,EDX                         ; 0052c5ba
    MOV DX,word ptr [ESP + 0x2]         ; 0052c5bc
    IMUL EAX,EDX                        ; 0052c5c1
    MOV word ptr [ESP + 0xc],AX         ; 0052c5c4
    MOV EAX,[0x02dc942c]                ; 0052c5c9 | DAT_02dc942c
    MOV dword ptr [ESP + 0x4],EAX       ; 0052c5ce
    XOR EAX,EAX                         ; 0052c5d2
    MOV EDX,dword ptr [ESP + 0x4]       ; 0052c5d4
    MOV AX,word ptr [ESP + 0xc]         ; 0052c5d8
    IMUL EDX,EAX                        ; 0052c5dd
    PUSH 0x0                            ; 0052c5e0
    PUSH 0x0                            ; 0052c5e2
    PUSH 0x0                            ; 0052c5e4
    LEA EAX,[ESP + 0xc]                 ; 0052c5e6
    PUSH EAX                            ; 0052c5ea
    MOV dword ptr [ESP + 0x18],EDX      ; 0052c5eb
    MOV EDX,dword ptr [0x005bed44]      ; 0052c5ef | DAT_005bed44
    PUSH EDX                            ; 0052c5f5
    PUSH 0x2dc93a4                      ; 0052c5f6 | DAT_02dc93a4
    CALL dword ptr CS:[0x5753f8]        ; 0052c5fb | PTR_waveOutOpen_005753f8
    TEST EAX,EAX                        ; 0052c602
    JZ 0x0052c625                       ; 0052c604
        ;   XREF to: 0052c625 (CONDITIONAL_JUMP)  ; LAB_0052c625
    PUSH 0x594942                       ; 0052c606 | = "waveOutOpen failed"
    CALL FUN_00529980                   ; 0052c60b
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052c610
    PUSH EDI                            ; 0052c613
        ;   Label: LAB_0052c613
    MOV EAX,dword ptr [EDI]             ; 0052c614
    CALL dword ptr [EAX]                ; 0052c616
    ADD ESP,0x4                         ; 0052c618
    XOR EAX,EAX                         ; 0052c61b
    ADD ESP,0x14                        ; 0052c61d
    POP EBP                             ; 0052c620
    POP EDI                             ; 0052c621
    POP ESI                             ; 0052c622
    POP EBX                             ; 0052c623
    RET                                 ; 0052c624
    MOV EDX,dword ptr [ESP + 0x38]      ; 0052c625
        ;   Label: LAB_0052c625
    MOV EAX,[0x02dc9434]                ; 0052c629 | DAT_02dc9434
    MOV dword ptr [EDX],EAX             ; 0052c62e
    MOV EAX,0x1                         ; 0052c630
    ADD ESP,0x14                        ; 0052c635
    POP EBP                             ; 0052c638
    POP EDI                             ; 0052c639
    POP ESI                             ; 0052c63a
    POP EBX                             ; 0052c63b
    RET                                 ; 0052c63c


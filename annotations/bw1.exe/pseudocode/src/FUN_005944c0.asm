; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005944c0(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_svet_die_wav_005f7626
;   TerminatedCString s_svet_hurt_wav_005f7633
;   undefined4 DAT_00606408
;   undefined4 DAT_0061d95c
;   undefined4 DAT_0061dca4
;   undefined4 DAT_01ccf57c
;   undefined4 DAT_01ccf5d8
;
; Called Functions:
;   FUN_004319e0
;   FUN_004e64d0
;   FUN_00524770
;   FUN_005247c0
;   FUN_005735a0
;   FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005944c0
        ;   Label: FUN_005944c0
    PUSH ESI                            ; 005944c1
    PUSH EDI                            ; 005944c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005944c3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005944c7
    TEST dword ptr [EBX + 0xc1d0],0x7fffffff ; 005944cb
    JNZ 0x00594577                      ; 005944d5
        ;   XREF to: 00594577 (CONDITIONAL_JUMP)  ; LAB_00594577
    MOV EAX,[0x0061d95c]                ; 005944db | DAT_0061d95c
        ;   Label: LAB_005944db
    CMP dword ptr [EAX + 0x1ec],0x0     ; 005944e0 | DAT_01ccf57c
    JZ 0x005944f0                       ; 005944e7
        ;   XREF to: 005944f0 (CONDITIONAL_JUMP)  ; LAB_005944f0
    MOV dword ptr [EDI + 0x4],0x0       ; 005944e9
    MOV EAX,[0x0061d95c]                ; 005944f0 | DAT_0061d95c
        ;   Label: LAB_005944f0
    MOV ESI,dword ptr [EAX + 0x248]     ; 005944f5 | DAT_01ccf5d8
    TEST ESI,ESI                        ; 005944fb
    JZ 0x00594583                       ; 005944fd
        ;   XREF to: 00594583 (CONDITIONAL_JUMP)  ; LAB_00594583
    MOV EAX,[0x00606408]                ; 00594503 | DAT_00606408
        ;   Label: LAB_00594503
    MOV dword ptr [EBX + 0xc1d0],EAX    ; 00594508
    FLD float ptr [EDI + 0x4]           ; 0059450e
    FSUBR float ptr [EBX + 0x2538]      ; 00594511
    LEA ESI,[EBX + 0x158]               ; 00594517
    FST float ptr [EBX + 0x2538]        ; 0059451d
    FLDZ                                ; 00594523
    FCOMPP                              ; 00594525
    FNSTSW AX                           ; 00594527
    SAHF                                ; 00594529
    JNC 0x0059458b                      ; 0059452a
        ;   XREF to: 0059458b (CONDITIONAL_JUMP)  ; LAB_0059458b
    FLD float ptr [EDI + 0x4]           ; 0059452c
    FLDZ                                ; 0059452f
    FCOMPP                              ; 00594531
    FNSTSW AX                           ; 00594533
    SAHF                                ; 00594535
    JNC 0x00594569                      ; 00594536
        ;   XREF to: 00594569 (CONDITIONAL_JUMP)  ; LAB_00594569
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 00594538
    JNZ 0x0059461c                      ; 0059453f
        ;   XREF to: 0059461c (CONDITIONAL_JUMP)  ; LAB_0059461c
    PUSH 0x1                            ; 00594545
    PUSH 0x4                            ; 00594547
    PUSH ESI                            ; 00594549
        ;   Label: LAB_00594549
    CALL FUN_005247c0                   ; 0059454a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0059454f
    MOV EAX,dword ptr [EBX + 0x95614]   ; 00594552
    PUSH EAX                            ; 00594558
    CALL FUN_005735a0                   ; 00594559
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 0059455e
    TEST EAX,EAX                        ; 00594561
    JZ 0x00594625                       ; 00594563
        ;   XREF to: 00594625 (CONDITIONAL_JUMP)  ; LAB_00594625
    PUSH EDI                            ; 00594569
        ;   Label: LAB_00594569
    PUSH EBX                            ; 0059456a
    CALL FUN_004319e0                   ; 0059456b
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004319e0()
    ADD ESP,0x8                         ; 00594570
    POP EDI                             ; 00594573
    POP ESI                             ; 00594574
    POP EBX                             ; 00594575
    RET                                 ; 00594576
    MOV dword ptr [EDI + 0x4],0x0       ; 00594577
        ;   Label: LAB_00594577
    JMP 0x005944db                      ; 0059457e
        ;   XREF to: 005944db (UNCONDITIONAL_JUMP)  ; LAB_005944db
    MOV dword ptr [EDI + 0x4],ESI       ; 00594583
        ;   Label: LAB_00594583
    JMP 0x00594503                      ; 00594586
        ;   XREF to: 00594503 (UNCONDITIONAL_JUMP)  ; LAB_00594503
    PUSH ESI                            ; 0059458b
        ;   Label: LAB_0059458b
    MOV dword ptr [EBX + 0x2538],0x0    ; 0059458c
    CALL FUN_00524770                   ; 00594596
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059459b
    ADD ESP,0x4                         ; 0059459e
    CMP EAX,0x9                         ; 005945a1
    JZ 0x00594569                       ; 005945a4
        ;   XREF to: 00594569 (CONDITIONAL_JUMP)  ; LAB_00594569
    PUSH ESI                            ; 005945a6
    CALL FUN_00524770                   ; 005945a7
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005945ac
    ADD ESP,0x4                         ; 005945af
    CMP EAX,0x8                         ; 005945b2
    JZ 0x00594569                       ; 005945b5
        ;   XREF to: 00594569 (CONDITIONAL_JUMP)  ; LAB_00594569
    PUSH 0x1                            ; 005945b7
    PUSH 0x8                            ; 005945b9
    PUSH ESI                            ; 005945bb
    MOV dword ptr [EBX + 0x26fc],0x0    ; 005945bc
    CALL FUN_005247c0                   ; 005945c6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005945cb
    PUSH 0x0                            ; 005945ce
    PUSH 0x42480000                     ; 005945d0
    PUSH 0x32                           ; 005945d5
    PUSH EBX                            ; 005945d7
    MOV EDX,dword ptr [0x0061dca4]      ; 005945d8 | DAT_0061dca4
    PUSH EDX                            ; 005945de
    CALL FUN_004e64d0                   ; 005945df
        ;   XREF to: 004e64d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e64d0()
    ADD ESP,0x14                        ; 005945e4
    MOV ECX,dword ptr [EBX + 0x95614]   ; 005945e7
    PUSH ECX                            ; 005945ed
    CALL FUN_00573a80                   ; 005945ee
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a80()
    ADD ESP,0x4                         ; 005945f3
    PUSH 0x5f7626                       ; 005945f6 | = "svet-die.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005945fb
    PUSH EBX                            ; 00594601
    CALL dword ptr [EAX + 0x2c]         ; 00594602
    ADD ESP,0x8                         ; 00594605
    MOV dword ptr [EBX + 0x95614],EAX   ; 00594608
    PUSH EDI                            ; 0059460e
    PUSH EBX                            ; 0059460f
    CALL FUN_004319e0                   ; 00594610
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004319e0()
    ADD ESP,0x8                         ; 00594615
    POP EDI                             ; 00594618
    POP ESI                             ; 00594619
    POP EBX                             ; 0059461a
    RET                                 ; 0059461b
    PUSH 0x1                            ; 0059461c
        ;   Label: LAB_0059461c
    PUSH 0xb                            ; 0059461e
    JMP 0x00594549                      ; 00594620
        ;   XREF to: 00594549 (UNCONDITIONAL_JUMP)  ; LAB_00594549
    PUSH 0x5f7633                       ; 00594625 | = "svet-hurt?.wav"
        ;   Label: LAB_00594625
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059462a
    PUSH EBX                            ; 00594630
    CALL dword ptr [EAX + 0x2c]         ; 00594631
    ADD ESP,0x8                         ; 00594634
    MOV dword ptr [EBX + 0x95614],EAX   ; 00594637
    PUSH EDI                            ; 0059463d
    PUSH EBX                            ; 0059463e
    CALL FUN_004319e0                   ; 0059463f
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004319e0()
    ADD ESP,0x8                         ; 00594644
    POP EDI                             ; 00594647
    POP ESI                             ; 00594648
    POP EBX                             ; 00594649
    RET                                 ; 0059464a


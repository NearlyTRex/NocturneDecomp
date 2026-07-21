; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004e3460(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e8c62
;
; Referenced Globals:
;   void* switchdataD_004e3444 = 004e3577
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3460
        ;   Label: sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004e3460
    PUSH ESI                            ; 004e3461
    PUSH EDI                            ; 004e3462
    PUSH EBP                            ; 004e3463
    SUB ESP,0x24                        ; 004e3464
    MOV ESI,dword ptr [ESP + 0x38]      ; 004e3467
    MOV EAX,dword ptr [ESP + 0x48]      ; 004e346b
    MOV EDI,dword ptr [EAX + 0x10]      ; 004e346f
    MOV EAX,dword ptr [EAX + 0x18]      ; 004e3472
    MOV dword ptr [ESP],EAX             ; 004e3475
    TEST EAX,EAX                        ; 004e3478
    JLE 0x004e34d3                      ; 004e347a
        ;   XREF to: 004e34d3 (CONDITIONAL_JUMP)  ; LAB_004e34d3
    XOR EAX,EAX                         ; 004e347c
    MOV dword ptr [ESP + 0xc],EAX       ; 004e347e
    MOV EAX,dword ptr [ESP]             ; 004e3482
    SHL EAX,0x2                         ; 004e3485
    MOV dword ptr [ESP + 0x4],EAX       ; 004e3488
    XOR EBX,EBX                         ; 004e348c
        ;   Label: LAB_004e348c
    TEST EDI,EDI                        ; 004e348e
    JLE 0x004e34c0                      ; 004e3490
        ;   XREF to: 004e34c0 (CONDITIONAL_JUMP)  ; LAB_004e34c0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e3492
    MOV EDX,dword ptr [ESP + 0x40]      ; 004e3496
    MOV dword ptr [ESP + 0x14],EAX      ; 004e349a
    LEA EBP,[EAX + EDX*0x1]             ; 004e349e
    MOV EAX,EBX                         ; 004e34a1
        ;   Label: LAB_004e34a1
    SHL EAX,0x7                         ; 004e34a3
    MOV ECX,dword ptr [EBP]             ; 004e34a6
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e34a9
    TEST ECX,ECX                        ; 004e34ad
    JNZ 0x004e3624                      ; 004e34af
        ;   XREF to: 004e3624 (CONDITIONAL_JUMP)  ; LAB_004e3624
    INC EBX                             ; 004e34b5
        ;   Label: LAB_004e34b5
    ADD EBP,0x80                        ; 004e34b6
    CMP EBX,EDI                         ; 004e34bc
    JL 0x004e34a1                       ; 004e34be
        ;   XREF to: 004e34a1 (CONDITIONAL_JUMP)  ; LAB_004e34a1
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e34c0
        ;   Label: LAB_004e34c0
    ADD ECX,0x4                         ; 004e34c4
    MOV EBX,dword ptr [ESP + 0x4]       ; 004e34c7
    MOV dword ptr [ESP + 0xc],ECX       ; 004e34cb
    CMP ECX,EBX                         ; 004e34cf
    JL 0x004e348c                       ; 004e34d1
        ;   XREF to: 004e348c (CONDITIONAL_JUMP)  ; LAB_004e348c
    MOV EBP,dword ptr [ESP]             ; 004e34d3
        ;   Label: LAB_004e34d3
    CMP EBP,0x20                        ; 004e34d6
    JGE 0x004e350a                      ; 004e34d9
        ;   XREF to: 004e350a (CONDITIONAL_JUMP)  ; LAB_004e350a
    LEA EAX,[EBP*0x4 + 0x0]             ; 004e34db
    XOR EBX,EBX                         ; 004e34e2
        ;   Label: LAB_004e34e2
    TEST EDI,EDI                        ; 004e34e4
    JLE 0x004e3500                      ; 004e34e6
        ;   XREF to: 004e3500 (CONDITIONAL_JUMP)  ; LAB_004e3500
    MOV EBP,dword ptr [ESP + 0x3c]      ; 004e34e8
    ADD EBP,EAX                         ; 004e34ec
    INC EBX                             ; 004e34ee
        ;   Label: LAB_004e34ee
    MOV dword ptr [EBP],0x0             ; 004e34ef
    ADD EBP,0x80                        ; 004e34f6
    CMP EBX,EDI                         ; 004e34fc
    JL 0x004e34ee                       ; 004e34fe
        ;   XREF to: 004e34ee (CONDITIONAL_JUMP)  ; LAB_004e34ee
    ADD EAX,0x4                         ; 004e3500
        ;   Label: LAB_004e3500
    CMP EAX,0x80                        ; 004e3503
    JL 0x004e34e2                       ; 004e3508
        ;   XREF to: 004e34e2 (CONDITIONAL_JUMP)  ; LAB_004e34e2
    CMP dword ptr [ESP],0x0             ; 004e350a
        ;   Label: LAB_004e350a
    JLE 0x004e35d5                      ; 004e350e
        ;   XREF to: 004e35d5 (CONDITIONAL_JUMP)  ; LAB_004e35d5
    MOV EAX,dword ptr [ESP]             ; 004e3514
    XOR EBX,EBX                         ; 004e3517
    SHL EAX,0x2                         ; 004e3519
    MOV dword ptr [ESP + 0x10],EBX      ; 004e351c
    MOV dword ptr [ESP + 0x8],EAX       ; 004e3520
    XOR EBP,EBP                         ; 004e3524
        ;   Label: LAB_004e3524
    TEST EDI,EDI                        ; 004e3526
    JLE 0x004e35be                      ; 004e3528
        ;   XREF to: 004e35be (CONDITIONAL_JUMP)  ; LAB_004e35be
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e352e
    MOV EDX,dword ptr [ESP + 0x40]      ; 004e3532
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e3536
    MOV ECX,dword ptr [ESP + 0x44]      ; 004e353a
    MOV dword ptr [ESP + 0x18],EAX      ; 004e353e
    ADD EAX,EDX                         ; 004e3542
    ADD EBX,ECX                         ; 004e3544
    MOV dword ptr [ESP + 0x20],EAX      ; 004e3546
    MOV EDX,dword ptr [ESP + 0x20]      ; 004e354a
        ;   Label: LAB_004e354a
    MOV EAX,EBP                         ; 004e354e
    MOV ECX,dword ptr [EDX]             ; 004e3550
    SHL EAX,0x7                         ; 004e3552
    TEST ECX,ECX                        ; 004e3555
    JZ 0x004e36aa                       ; 004e3557
        ;   XREF to: 004e36aa (CONDITIONAL_JUMP)  ; LAB_004e36aa
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e355d
    MOV ECX,dword ptr [ESP + 0x18]      ; 004e3561
    ADD EAX,EDX                         ; 004e3565
    ADD EAX,ECX                         ; 004e3567
    MOV EAX,dword ptr [EAX]             ; 004e3569
    CMP EAX,0x3                         ; 004e356b
    JA 0x004e35a6                       ; 004e356e
        ;   XREF to: 004e35a6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4e3444]  ; 004e3570 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x6                            ; 004e3577
        ;   Label: caseD_0
    PUSH ESI                            ; 004e3579
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e357a
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e357f
    PUSH 0x6                            ; 004e3582
    PUSH ESI                            ; 004e3584
    MOV dword ptr [EBX],EAX             ; 004e3585
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e3587
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e358c
    PUSH 0x6                            ; 004e358f
    PUSH ESI                            ; 004e3591
    MOV dword ptr [EBX + 0x80],EAX      ; 004e3592
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e3598
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
        ;   Label: LAB_004e3598
    ADD ESP,0x8                         ; 004e359d
    MOV dword ptr [EBX + 0x100],EAX     ; 004e35a0
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e35a6
        ;   Label: default
    ADD EBX,0x180                       ; 004e35aa
    ADD EAX,0x80                        ; 004e35b0
    INC EBP                             ; 004e35b5
    MOV dword ptr [ESP + 0x20],EAX      ; 004e35b6
    CMP EBP,EDI                         ; 004e35ba
    JL 0x004e354a                       ; 004e35bc
        ;   XREF to: 004e354a (CONDITIONAL_JUMP)  ; LAB_004e354a
    MOV EBP,dword ptr [ESP + 0x10]      ; 004e35be
        ;   Label: LAB_004e35be
    ADD EBP,0x4                         ; 004e35c2
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e35c5
    MOV dword ptr [ESP + 0x10],EBP      ; 004e35c9
    CMP EBP,EDX                         ; 004e35cd
    JL 0x004e3524                       ; 004e35cf
        ;   XREF to: 004e3524 (CONDITIONAL_JUMP)  ; LAB_004e3524
    MOV ECX,dword ptr [ESP]             ; 004e35d5
        ;   Label: LAB_004e35d5
    CMP ECX,0x20                        ; 004e35d8
    JGE 0x004e361c                      ; 004e35db
        ;   XREF to: 004e361c (CONDITIONAL_JUMP)  ; LAB_004e361c
    LEA EDX,[ECX*0x4 + 0x0]             ; 004e35dd
    XOR ESI,ESI                         ; 004e35e4
        ;   Label: LAB_004e35e4
    TEST EDI,EDI                        ; 004e35e6
    JLE 0x004e3611                      ; 004e35e8
        ;   XREF to: 004e3611 (CONDITIONAL_JUMP)  ; LAB_004e3611
    MOV EBX,dword ptr [ESP + 0x44]      ; 004e35ea
    ADD EBX,EDX                         ; 004e35ee
    ADD EBX,0x180                       ; 004e35f0
        ;   Label: LAB_004e35f0
    MOV dword ptr [EBX + -0x80],0x3f    ; 004e35f6
    MOV EAX,dword ptr [EBX + -0x80]     ; 004e35fd
    MOV dword ptr [EBX + 0xffffff00],EAX ; 004e3600
    INC ESI                             ; 004e3606
    MOV dword ptr [EBX + 0xfffffe80],EAX ; 004e3607
    CMP ESI,EDI                         ; 004e360d
    JL 0x004e35f0                       ; 004e360f
        ;   XREF to: 004e35f0 (CONDITIONAL_JUMP)  ; LAB_004e35f0
    ADD EDX,0x4                         ; 004e3611
        ;   Label: LAB_004e3611
    CMP EDX,0x80                        ; 004e3614
    JL 0x004e35e4                       ; 004e361a
        ;   XREF to: 004e35e4 (CONDITIONAL_JUMP)  ; LAB_004e35e4
    ADD ESP,0x24                        ; 004e361c
        ;   Label: LAB_004e361c
    POP EBP                             ; 004e361f
    POP EDI                             ; 004e3620
    POP ESI                             ; 004e3621
    POP EBX                             ; 004e3622
    RET                                 ; 004e3623
    PUSH 0x2                            ; 004e3624
        ;   Label: LAB_004e3624
    PUSH ESI                            ; 004e3626
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e3627
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e362c
    XOR EDX,EDX                         ; 004e362f
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004e3631
    MOV DL,AL                           ; 004e3635
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004e3637
    ADD EAX,ECX                         ; 004e363b
    ADD EAX,dword ptr [ESP + 0x14]      ; 004e363d
    MOV dword ptr [EAX],EDX             ; 004e3641
    JMP 0x004e34b5                      ; 004e3643
        ;   XREF to: 004e34b5 (UNCONDITIONAL_JUMP)  ; LAB_004e34b5
    PUSH 0x6                            ; 004e3648
        ;   Label: caseD_1
    PUSH ESI                            ; 004e364a
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e364b
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e3650
    PUSH 0x6                            ; 004e3653
    MOV dword ptr [EBX + 0x80],EAX      ; 004e3655
    PUSH ESI                            ; 004e365b
    MOV dword ptr [EBX],EAX             ; 004e365c
    JMP 0x004e3598                      ; 004e365e
        ;   XREF to: 004e3598 (UNCONDITIONAL_JUMP)  ; LAB_004e3598
    PUSH 0x6                            ; 004e3663
        ;   Label: caseD_3
    PUSH ESI                            ; 004e3665
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e3666
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e366b
    PUSH 0x6                            ; 004e366e
    PUSH ESI                            ; 004e3670
    MOV dword ptr [EBX],EAX             ; 004e3671
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e3673
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    MOV dword ptr [EBX + 0x100],EAX     ; 004e3678
    ADD ESP,0x8                         ; 004e367e
    MOV dword ptr [EBX + 0x80],EAX      ; 004e3681
    JMP 0x004e35a6                      ; 004e3687
        ;   XREF to: 004e35a6 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x6                            ; 004e368c
        ;   Label: caseD_2
    PUSH ESI                            ; 004e368e
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e368f
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    MOV dword ptr [EBX + 0x100],EAX     ; 004e3694
    MOV dword ptr [EBX + 0x80],EAX      ; 004e369a
    ADD ESP,0x8                         ; 004e36a0
    MOV dword ptr [EBX],EAX             ; 004e36a3
    JMP 0x004e35a6                      ; 004e36a5
        ;   XREF to: 004e35a6 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0x100],0x3f    ; 004e36aa
        ;   Label: LAB_004e36aa
    MOV EAX,dword ptr [EBX + 0x100]     ; 004e36b4
    MOV dword ptr [EBX + 0x80],EAX      ; 004e36ba
    MOV dword ptr [EBX],EAX             ; 004e36c0
    JMP 0x004e35a6                      ; 004e36c2
        ;   XREF to: 004e35a6 (UNCONDITIONAL_JUMP)  ; default


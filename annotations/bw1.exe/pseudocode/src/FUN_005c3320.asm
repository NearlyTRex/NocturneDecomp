; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c3320(undefined4 param_1,char *param_2,int *param_3,code *param_4)
;
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x78]:4  local_78
; undefined2       Stack[-0x6c]:2  local_6c
; undefined2       Stack[-0x6a]:2  local_6a
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[2]:
;   FUN_005bfb18 at 005bfb2d
;   FUN_005c4fe0 at 005c5070
;
; Called Functions:
;   FUN_005c3748
;   FUN_005c3b90
;   FUN_005c3c08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3320
        ;   Label: FUN_005c3320
    PUSH ESI                            ; 005c3321
    PUSH EDI                            ; 005c3322
    PUSH ES                             ; 005c3323
    PUSH EBP                            ; 005c3324
    SUB ESP,0x74                        ; 005c3325
    MOV EAX,dword ptr [ESP + 0x90]      ; 005c3328
    MOV EBX,dword ptr [ESP + 0x94]      ; 005c332f
    MOV ESI,dword ptr [ESP + 0x98]      ; 005c3336
    XOR DL,DL                           ; 005c333d
    MOV byte ptr [ESP + 0x70],DL        ; 005c333f
    MOV EDX,dword ptr [ESP + 0x8c]      ; 005c3343
    MOV dword ptr [ESP],EDX             ; 005c334a
    XOR EDX,EDX                         ; 005c334d
    MOV ECX,0x64                        ; 005c334f
    MOV word ptr [ESP + 0x1e],DX        ; 005c3354
    XOR EDX,EDX                         ; 005c3359
    MOV word ptr [ESP + 0x1c],CX        ; 005c335b
    MOV dword ptr [ESP + 0x10],EDX      ; 005c3360
    MOV DH,byte ptr [EAX]               ; 005c3364
    MOV EBP,EAX                         ; 005c3366
    TEST DH,DH                          ; 005c3368
    JZ 0x005c373a                       ; 005c336a
        ;   XREF to: 005c373a (CONDITIONAL_JUMP)  ; LAB_005c373a
    MOV CH,byte ptr [EBP]               ; 005c3370
        ;   Label: LAB_005c3370
    LEA EDI,[EBP + 0x1]                 ; 005c3373
    CMP CH,0x25                         ; 005c3376
    JZ 0x005c3391                       ; 005c3379
        ;   XREF to: 005c3391 (CONDITIONAL_JUMP)  ; LAB_005c3391
    XOR EAX,EAX                         ; 005c337b
    MOV AL,CH                           ; 005c337d
    PUSH EAX                            ; 005c337f
    LEA EAX,[ESP + 0x4]                 ; 005c3380
    PUSH EAX                            ; 005c3384
    MOV EBP,EDI                         ; 005c3385
    CALL ESI                            ; 005c3387
    ADD ESP,0x8                         ; 005c3389
    JMP 0x005c3711                      ; 005c338c
        ;   XREF to: 005c3711 (UNCONDITIONAL_JUMP)  ; LAB_005c3711
    MOV EAX,dword ptr [EBX]             ; 005c3391
        ;   Label: LAB_005c3391
    MOV dword ptr [ESP + 0x60],EAX      ; 005c3393
    MOV EAX,ESP                         ; 005c3397
    PUSH EAX                            ; 005c3399
    LEA EAX,[ESP + 0x64]                ; 005c339a
    PUSH EAX                            ; 005c339e
    PUSH EDI                            ; 005c339f
    CALL FUN_005c3748                   ; 005c33a0
        ;   XREF to: 005c3748 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3748()
    ADD ESP,0xc                         ; 005c33a5
    MOV EBP,EAX                         ; 005c33a8
    MOV EAX,dword ptr [ESP + 0x60]      ; 005c33aa
    MOV dword ptr [EBX],EAX             ; 005c33ae
    MOV AL,byte ptr [EBP]               ; 005c33b0
    INC EBP                             ; 005c33b3
    MOV byte ptr [ESP + 0x15],AL        ; 005c33b4
    TEST AL,AL                          ; 005c33b8
    JZ 0x005c373a                       ; 005c33ba
        ;   XREF to: 005c373a (CONDITIONAL_JUMP)  ; LAB_005c373a
    CMP AL,0x6e                         ; 005c33c0
    JNZ 0x005c3541                      ; 005c33c2
        ;   XREF to: 005c3541 (CONDITIONAL_JUMP)  ; LAB_005c3541
    MOV CL,byte ptr [ESP + 0x1e]        ; 005c33c8
    TEST CL,0x20                        ; 005c33cc
    JZ 0x005c3435                       ; 005c33cf
        ;   XREF to: 005c3435 (CONDITIONAL_JUMP)  ; LAB_005c3435
    TEST CL,0x80                        ; 005c33d1
    JZ 0x005c33f2                       ; 005c33d4
        ;   XREF to: 005c33f2 (CONDITIONAL_JUMP)  ; LAB_005c33f2
    MOV ECX,dword ptr [EBX]             ; 005c33d6
    ADD ECX,0x8                         ; 005c33d8
    MOV dword ptr [EBX],ECX             ; 005c33db
    LES EDI,[ECX + -0x8]                ; 005c33dd
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c33e0
    MOV dword ptr ES:[EDI],EAX          ; 005c33e4
    CMP byte ptr [EBP],0x0              ; 005c33e7
    JNZ 0x005c3370                      ; 005c33eb
        ;   XREF to: 005c3370 (CONDITIONAL_JUMP)  ; LAB_005c3370
    JMP 0x005c373a                      ; 005c33ed
        ;   XREF to: 005c373a (UNCONDITIONAL_JUMP)  ; LAB_005c373a
    TEST CL,0x40                        ; 005c33f2
        ;   Label: LAB_005c33f2
    JZ 0x005c3416                       ; 005c33f5
        ;   XREF to: 005c3416 (CONDITIONAL_JUMP)  ; LAB_005c3416
    MOV EDX,dword ptr [EBX]             ; 005c33f7
    ADD EDX,0x4                         ; 005c33f9
    MOV dword ptr [EBX],EDX             ; 005c33fc
    MOV EDI,dword ptr [EDX + -0x4]      ; 005c33fe
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c3401
    MOV dword ptr [EDI],EAX             ; 005c3405
    CMP byte ptr [EBP],0x0              ; 005c3407
    JNZ 0x005c3370                      ; 005c340b
        ;   XREF to: 005c3370 (CONDITIONAL_JUMP)  ; LAB_005c3370
    JMP 0x005c373a                      ; 005c3411
        ;   XREF to: 005c373a (UNCONDITIONAL_JUMP)  ; LAB_005c373a
    MOV EAX,dword ptr [EBX]             ; 005c3416
        ;   Label: LAB_005c3416
    ADD EAX,0x4                         ; 005c3418
    MOV dword ptr [EBX],EAX             ; 005c341b
    MOV EDI,dword ptr [EAX + -0x4]      ; 005c341d
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c3420
    MOV dword ptr [EDI],EAX             ; 005c3424
    CMP byte ptr [EBP],0x0              ; 005c3426
    JNZ 0x005c3370                      ; 005c342a
        ;   XREF to: 005c3370 (CONDITIONAL_JUMP)  ; LAB_005c3370
    JMP 0x005c373a                      ; 005c3430
        ;   XREF to: 005c373a (UNCONDITIONAL_JUMP)  ; LAB_005c373a
    TEST CL,0x10                        ; 005c3435
        ;   Label: LAB_005c3435
    JZ 0x005c34c1                       ; 005c3438
        ;   XREF to: 005c34c1 (CONDITIONAL_JUMP)  ; LAB_005c34c1
    TEST CL,0x80                        ; 005c343e
    JZ 0x005c346c                       ; 005c3441
        ;   XREF to: 005c346c (CONDITIONAL_JUMP)  ; LAB_005c346c
    MOV EDI,dword ptr [EBX]             ; 005c3443
    ADD EDI,0x8                         ; 005c3445
    MOV dword ptr [EBX],EDI             ; 005c3448
    LES EDI,[EDI + -0x8]                ; 005c344a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c344d
    MOV word ptr ES:[EDI],AX            ; 005c3451
    CMP byte ptr [EBP],0x0              ; 005c3455
    JNZ 0x005c3370                      ; 005c3459
        ;   XREF to: 005c3370 (CONDITIONAL_JUMP)  ; LAB_005c3370
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c345f
    ADD ESP,0x74                        ; 005c3463
    POP EBP                             ; 005c3466
    POP ES                              ; 005c3467
    POP EDI                             ; 005c3468
    POP ESI                             ; 005c3469
    POP EBX                             ; 005c346a
    RET                                 ; 005c346b
    TEST CL,0x40                        ; 005c346c
        ;   Label: LAB_005c346c
    JZ 0x005c3499                       ; 005c346f
        ;   XREF to: 005c3499 (CONDITIONAL_JUMP)  ; LAB_005c3499
    MOV ECX,dword ptr [EBX]             ; 005c3471
    ADD ECX,0x4                         ; 005c3473
    MOV dword ptr [EBX],ECX             ; 005c3476
    MOV EDI,dword ptr [ECX + -0x4]      ; 005c3478
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c347b
    MOV word ptr [EDI],AX               ; 005c347f
    CMP byte ptr [EBP],0x0              ; 005c3482
    JNZ 0x005c3370                      ; 005c3486
        ;   XREF to: 005c3370 (CONDITIONAL_JUMP)  ; LAB_005c3370
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c348c
    ADD ESP,0x74                        ; 005c3490
    POP EBP                             ; 005c3493
    POP ES                              ; 005c3494
    POP EDI                             ; 005c3495
    POP ESI                             ; 005c3496
    POP EBX                             ; 005c3497
    RET                                 ; 005c3498
    MOV EDX,dword ptr [EBX]             ; 005c3499
        ;   Label: LAB_005c3499
    ADD EDX,0x4                         ; 005c349b
    MOV dword ptr [EBX],EDX             ; 005c349e
    MOV EDI,dword ptr [EDX + -0x4]      ; 005c34a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c34a3
    MOV word ptr [EDI],AX               ; 005c34a7
    CMP byte ptr [EBP],0x0              ; 005c34aa
    JNZ 0x005c3370                      ; 005c34ae
        ;   XREF to: 005c3370 (CONDITIONAL_JUMP)  ; LAB_005c3370
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c34b4
    ADD ESP,0x74                        ; 005c34b8
    POP EBP                             ; 005c34bb
    POP ES                              ; 005c34bc
    POP EDI                             ; 005c34bd
    POP ESI                             ; 005c34be
    POP EBX                             ; 005c34bf
    RET                                 ; 005c34c0
    TEST CL,0x80                        ; 005c34c1
        ;   Label: LAB_005c34c1
    JZ 0x005c34ee                       ; 005c34c4
        ;   XREF to: 005c34ee (CONDITIONAL_JUMP)  ; LAB_005c34ee
    MOV EAX,dword ptr [EBX]             ; 005c34c6
    ADD EAX,0x8                         ; 005c34c8
    MOV dword ptr [EBX],EAX             ; 005c34cb
    LES EDI,[EAX + -0x8]                ; 005c34cd
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c34d0
    MOV dword ptr ES:[EDI],EAX          ; 005c34d4
    CMP byte ptr [EBP],0x0              ; 005c34d7
    JNZ 0x005c3370                      ; 005c34db
        ;   XREF to: 005c3370 (CONDITIONAL_JUMP)  ; LAB_005c3370
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c34e1
    ADD ESP,0x74                        ; 005c34e5
    POP EBP                             ; 005c34e8
    POP ES                              ; 005c34e9
    POP EDI                             ; 005c34ea
    POP ESI                             ; 005c34eb
    POP EBX                             ; 005c34ec
    RET                                 ; 005c34ed
    TEST CL,0x40                        ; 005c34ee
        ;   Label: LAB_005c34ee
    JZ 0x005c351a                       ; 005c34f1
        ;   XREF to: 005c351a (CONDITIONAL_JUMP)  ; LAB_005c351a
    MOV EDI,dword ptr [EBX]             ; 005c34f3
    ADD EDI,0x4                         ; 005c34f5
    MOV dword ptr [EBX],EDI             ; 005c34f8
    MOV EDI,dword ptr [EDI + -0x4]      ; 005c34fa
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c34fd
    MOV dword ptr [EDI],EAX             ; 005c3501
    CMP byte ptr [EBP],0x0              ; 005c3503
    JNZ 0x005c3370                      ; 005c3507
        ;   XREF to: 005c3370 (CONDITIONAL_JUMP)  ; LAB_005c3370
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c350d
    ADD ESP,0x74                        ; 005c3511
    POP EBP                             ; 005c3514
    POP ES                              ; 005c3515
    POP EDI                             ; 005c3516
    POP ESI                             ; 005c3517
    POP EBX                             ; 005c3518
    RET                                 ; 005c3519
    MOV ECX,dword ptr [EBX]             ; 005c351a
        ;   Label: LAB_005c351a
    ADD ECX,0x4                         ; 005c351c
    MOV dword ptr [EBX],ECX             ; 005c351f
    MOV EDI,dword ptr [ECX + -0x4]      ; 005c3521
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c3524
    MOV dword ptr [EDI],EAX             ; 005c3528
    CMP byte ptr [EBP],0x0              ; 005c352a
    JNZ 0x005c3370                      ; 005c352e
        ;   XREF to: 005c3370 (CONDITIONAL_JUMP)  ; LAB_005c3370
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c3534
    ADD ESP,0x74                        ; 005c3538
    POP EBP                             ; 005c353b
    POP ES                              ; 005c353c
    POP EDI                             ; 005c353d
    POP ESI                             ; 005c353e
    POP EBX                             ; 005c353f
    RET                                 ; 005c3540
    MOV EAX,dword ptr [EBX]             ; 005c3541
        ;   Label: LAB_005c3541
    MOV dword ptr [ESP + 0x64],EAX      ; 005c3543
    LEA EAX,[ESP + 0x70]                ; 005c3547
    PUSH EAX                            ; 005c354b
    LEA EAX,[ESP + 0x4]                 ; 005c354c
    PUSH EAX                            ; 005c3550
    LEA EAX,[ESP + 0x6c]                ; 005c3551
    PUSH EAX                            ; 005c3555
    LEA EAX,[ESP + 0x44]                ; 005c3556
    PUSH EAX                            ; 005c355a
    CALL FUN_005c3c08                   ; 005c355b
        ;   XREF to: 005c3c08 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3c08()
    ADD ESP,0x10                        ; 005c3560
    MOV EDI,EAX                         ; 005c3563
    MOV EAX,dword ptr [ESP + 0x64]      ; 005c3565
    MOV dword ptr [EBX],EAX             ; 005c3569
    MOV dword ptr [ESP + 0x6c],EDX      ; 005c356b
    MOV EAX,dword ptr [ESP + 0x20]      ; 005c356f
    MOV ECX,dword ptr [ESP + 0x24]      ; 005c3573
    MOV EDX,dword ptr [ESP + 0x28]      ; 005c3577
    ADD EAX,ECX                         ; 005c357b
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005c357d
    ADD EAX,EDX                         ; 005c3581
    MOV EDX,dword ptr [ESP + 0x30]      ; 005c3583
    ADD EAX,ECX                         ; 005c3587
    MOV ECX,dword ptr [ESP + 0x34]      ; 005c3589
    ADD EAX,EDX                         ; 005c358d
    MOV EDX,dword ptr [ESP + 0x4]       ; 005c358f
    ADD EAX,ECX                         ; 005c3593
    SUB EDX,EAX                         ; 005c3595
    MOV dword ptr [ESP + 0x4],EDX       ; 005c3597
    TEST byte ptr [ESP + 0x1e],0x8      ; 005c359b
    JNZ 0x005c35c2                      ; 005c35a0
        ;   XREF to: 005c35c2 (CONDITIONAL_JUMP)  ; LAB_005c35c2
    CMP byte ptr [ESP + 0x16],0x20      ; 005c35a2
    JNZ 0x005c35c2                      ; 005c35a7
        ;   XREF to: 005c35c2 (CONDITIONAL_JUMP)  ; LAB_005c35c2
    CMP dword ptr [ESP + 0x4],0x0       ; 005c35a9
        ;   Label: LAB_005c35a9
    JLE 0x005c35c2                      ; 005c35ae
        ;   XREF to: 005c35c2 (CONDITIONAL_JUMP)  ; LAB_005c35c2
    PUSH 0x20                           ; 005c35b0
    LEA EAX,[ESP + 0x4]                 ; 005c35b2
    PUSH EAX                            ; 005c35b6
    CALL ESI                            ; 005c35b7
    ADD ESP,0x8                         ; 005c35b9
    DEC dword ptr [ESP + 0x4]           ; 005c35bc
    JMP 0x005c35a9                      ; 005c35c0
        ;   XREF to: 005c35a9 (UNCONDITIONAL_JUMP)  ; LAB_005c35a9
    LEA EAX,[ESP + 0x38]                ; 005c35c2
        ;   Label: LAB_005c35c2
    MOV ECX,dword ptr [ESP + 0x20]      ; 005c35c6
    MOV dword ptr [ESP + 0x68],EAX      ; 005c35ca
    TEST ECX,ECX                        ; 005c35ce
    JLE 0x005c35fb                      ; 005c35d0
        ;   XREF to: 005c35fb (CONDITIONAL_JUMP)  ; LAB_005c35fb
    MOV EDX,dword ptr [ESP + 0x68]      ; 005c35d2
        ;   Label: LAB_005c35d2
    XOR EAX,EAX                         ; 005c35d6
    MOV AL,byte ptr [EDX]               ; 005c35d8
    PUSH EAX                            ; 005c35da
    LEA EAX,[ESP + 0x4]                 ; 005c35db
    PUSH EAX                            ; 005c35df
    CALL ESI                            ; 005c35e0
    ADD ESP,0x8                         ; 005c35e2
    MOV EAX,dword ptr [ESP + 0x68]      ; 005c35e5
    MOV EDX,dword ptr [ESP + 0x20]      ; 005c35e9
    INC EAX                             ; 005c35ed
    DEC EDX                             ; 005c35ee
    MOV dword ptr [ESP + 0x68],EAX      ; 005c35ef
    MOV dword ptr [ESP + 0x20],EDX      ; 005c35f3
    TEST EDX,EDX                        ; 005c35f7
    JG 0x005c35d2                       ; 005c35f9
        ;   XREF to: 005c35d2 (CONDITIONAL_JUMP)  ; LAB_005c35d2
    CMP dword ptr [ESP + 0x24],0x0      ; 005c35fb
        ;   Label: LAB_005c35fb
    JLE 0x005c3614                      ; 005c3600
        ;   XREF to: 005c3614 (CONDITIONAL_JUMP)  ; LAB_005c3614
    PUSH 0x30                           ; 005c3602
    LEA EAX,[ESP + 0x4]                 ; 005c3604
    PUSH EAX                            ; 005c3608
    CALL ESI                            ; 005c3609
    ADD ESP,0x8                         ; 005c360b
    DEC dword ptr [ESP + 0x24]          ; 005c360e
    JMP 0x005c35fb                      ; 005c3612
        ;   XREF to: 005c35fb (UNCONDITIONAL_JUMP)  ; LAB_005c35fb
    MOV AL,byte ptr [ESP + 0x15]        ; 005c3614
        ;   Label: LAB_005c3614
    CMP AL,0x73                         ; 005c3618
    JNZ 0x005c3666                      ; 005c361a
        ;   XREF to: 005c3666 (CONDITIONAL_JUMP)  ; LAB_005c3666
    TEST byte ptr [ESP + 0x1e],0x20     ; 005c361c
    JZ 0x005c363f                       ; 005c3621
        ;   XREF to: 005c363f (CONDITIONAL_JUMP)  ; LAB_005c363f
    PUSH ESI                            ; 005c3623
    LEA EAX,[ESP + 0x4]                 ; 005c3624
    PUSH EAX                            ; 005c3628
    XOR EAX,EAX                         ; 005c3629
    MOV AX,word ptr [ESP + 0x74]        ; 005c362b
    PUSH EAX                            ; 005c3630
    PUSH EDI                            ; 005c3631
    CALL FUN_005c3b90                   ; 005c3632
        ;   XREF to: 005c3b90 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3b90()
    ADD ESP,0x10                        ; 005c3637
    JMP 0x005c36aa                      ; 005c363a
        ;   XREF to: 005c36aa (UNCONDITIONAL_JUMP)  ; LAB_005c36aa
    MOV ES,word ptr [ESP + 0x6c]        ; 005c363f
        ;   Label: LAB_005c363f
    CMP dword ptr [ESP + 0x28],0x0      ; 005c3643
        ;   Label: LAB_005c3643
    JLE 0x005c36aa                      ; 005c3648
        ;   XREF to: 005c36aa (CONDITIONAL_JUMP)  ; LAB_005c36aa
    XOR EAX,EAX                         ; 005c364a
    MOV AL,byte ptr ES:[EDI]            ; 005c364c
    PUSH EAX                            ; 005c364f
    LEA EAX,[ESP + 0x4]                 ; 005c3650
    PUSH EAX                            ; 005c3654
    CALL ESI                            ; 005c3655
    ADD ESP,0x8                         ; 005c3657
    MOV ECX,dword ptr [ESP + 0x28]      ; 005c365a
    DEC ECX                             ; 005c365e
    INC EDI                             ; 005c365f
    MOV dword ptr [ESP + 0x28],ECX      ; 005c3660
    JMP 0x005c3643                      ; 005c3664
        ;   XREF to: 005c3643 (UNCONDITIONAL_JUMP)  ; LAB_005c3643
    CMP AL,0x53                         ; 005c3666
        ;   Label: LAB_005c3666
    JNZ 0x005c3683                      ; 005c3668
        ;   XREF to: 005c3683 (CONDITIONAL_JUMP)  ; LAB_005c3683
    PUSH ESI                            ; 005c366a
    LEA EAX,[ESP + 0x4]                 ; 005c366b
    PUSH EAX                            ; 005c366f
    XOR EAX,EAX                         ; 005c3670
    MOV AX,word ptr [ESP + 0x74]        ; 005c3672
    PUSH EAX                            ; 005c3677
    PUSH EDI                            ; 005c3678
    CALL FUN_005c3b90                   ; 005c3679
        ;   XREF to: 005c3b90 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3b90()
    ADD ESP,0x10                        ; 005c367e
    JMP 0x005c36aa                      ; 005c3681
        ;   XREF to: 005c36aa (UNCONDITIONAL_JUMP)  ; LAB_005c36aa
    MOV ES,word ptr [ESP + 0x6c]        ; 005c3683
        ;   Label: LAB_005c3683
    CMP dword ptr [ESP + 0x28],0x0      ; 005c3687
        ;   Label: LAB_005c3687
    JLE 0x005c36aa                      ; 005c368c
        ;   XREF to: 005c36aa (CONDITIONAL_JUMP)  ; LAB_005c36aa
    XOR EAX,EAX                         ; 005c368e
    MOV AL,byte ptr ES:[EDI]            ; 005c3690
    PUSH EAX                            ; 005c3693
    LEA EAX,[ESP + 0x4]                 ; 005c3694
    PUSH EAX                            ; 005c3698
    CALL ESI                            ; 005c3699
    ADD ESP,0x8                         ; 005c369b
    MOV EAX,dword ptr [ESP + 0x28]      ; 005c369e
    DEC EAX                             ; 005c36a2
    INC EDI                             ; 005c36a3
    MOV dword ptr [ESP + 0x28],EAX      ; 005c36a4
    JMP 0x005c3687                      ; 005c36a8
        ;   XREF to: 005c3687 (UNCONDITIONAL_JUMP)  ; LAB_005c3687
    CMP dword ptr [ESP + 0x2c],0x0      ; 005c36aa
        ;   Label: LAB_005c36aa
    JLE 0x005c36c3                      ; 005c36af
        ;   XREF to: 005c36c3 (CONDITIONAL_JUMP)  ; LAB_005c36c3
    PUSH 0x30                           ; 005c36b1
    LEA EAX,[ESP + 0x4]                 ; 005c36b3
    PUSH EAX                            ; 005c36b7
    CALL ESI                            ; 005c36b8
    ADD ESP,0x8                         ; 005c36ba
    DEC dword ptr [ESP + 0x2c]          ; 005c36bd
    JMP 0x005c36aa                      ; 005c36c1
        ;   XREF to: 005c36aa (UNCONDITIONAL_JUMP)  ; LAB_005c36aa
    MOV ES,word ptr [ESP + 0x6c]        ; 005c36c3
        ;   Label: LAB_005c36c3
    CMP dword ptr [ESP + 0x30],0x0      ; 005c36c7
        ;   Label: LAB_005c36c7
    JLE 0x005c36ea                      ; 005c36cc
        ;   XREF to: 005c36ea (CONDITIONAL_JUMP)  ; LAB_005c36ea
    XOR EAX,EAX                         ; 005c36ce
    MOV AL,byte ptr ES:[EDI]            ; 005c36d0
    PUSH EAX                            ; 005c36d3
    LEA EAX,[ESP + 0x4]                 ; 005c36d4
    PUSH EAX                            ; 005c36d8
    CALL ESI                            ; 005c36d9
    ADD ESP,0x8                         ; 005c36db
    MOV EAX,dword ptr [ESP + 0x30]      ; 005c36de
    DEC EAX                             ; 005c36e2
    INC EDI                             ; 005c36e3
    MOV dword ptr [ESP + 0x30],EAX      ; 005c36e4
    JMP 0x005c36c7                      ; 005c36e8
        ;   XREF to: 005c36c7 (UNCONDITIONAL_JUMP)  ; LAB_005c36c7
    CMP dword ptr [ESP + 0x34],0x0      ; 005c36ea
        ;   Label: LAB_005c36ea
    JLE 0x005c3703                      ; 005c36ef
        ;   XREF to: 005c3703 (CONDITIONAL_JUMP)  ; LAB_005c3703
    PUSH 0x30                           ; 005c36f1
    LEA EAX,[ESP + 0x4]                 ; 005c36f3
    PUSH EAX                            ; 005c36f7
    CALL ESI                            ; 005c36f8
    ADD ESP,0x8                         ; 005c36fa
    DEC dword ptr [ESP + 0x34]          ; 005c36fd
    JMP 0x005c36ea                      ; 005c3701
        ;   XREF to: 005c36ea (UNCONDITIONAL_JUMP)  ; LAB_005c36ea
    TEST byte ptr [ESP + 0x1e],0x8      ; 005c3703
        ;   Label: LAB_005c3703
    JZ 0x005c3711                       ; 005c3708
        ;   XREF to: 005c3711 (CONDITIONAL_JUMP)  ; LAB_005c3711
    CMP dword ptr [ESP + 0x4],0x0       ; 005c370a
        ;   Label: LAB_005c370a
    JG 0x005c3728                       ; 005c370f
        ;   XREF to: 005c3728 (CONDITIONAL_JUMP)  ; LAB_005c3728
    CMP byte ptr [EBP],0x0              ; 005c3711
        ;   Label: LAB_005c3711
    JNZ 0x005c3370                      ; 005c3715
        ;   XREF to: 005c3370 (CONDITIONAL_JUMP)  ; LAB_005c3370
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c371b
    ADD ESP,0x74                        ; 005c371f
    POP EBP                             ; 005c3722
    POP ES                              ; 005c3723
    POP EDI                             ; 005c3724
    POP ESI                             ; 005c3725
    POP EBX                             ; 005c3726
    RET                                 ; 005c3727
    PUSH 0x20                           ; 005c3728
        ;   Label: LAB_005c3728
    LEA EAX,[ESP + 0x4]                 ; 005c372a
    PUSH EAX                            ; 005c372e
    CALL ESI                            ; 005c372f
    ADD ESP,0x8                         ; 005c3731
    DEC dword ptr [ESP + 0x4]           ; 005c3734
    JMP 0x005c370a                      ; 005c3738
        ;   XREF to: 005c370a (UNCONDITIONAL_JUMP)  ; LAB_005c370a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c373a
        ;   Label: LAB_005c373a
    ADD ESP,0x74                        ; 005c373e
    POP EBP                             ; 005c3741
    POP ES                              ; 005c3742
        ;   Label: LAB_005c3742
    POP EDI                             ; 005c3743
    POP ESI                             ; 005c3744
    POP EBX                             ; 005c3745
    RET                                 ; 005c3746


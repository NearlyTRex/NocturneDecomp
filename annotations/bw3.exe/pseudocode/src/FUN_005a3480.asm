; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005a3480(uint param_1,int *param_2)
;
;
; XREF[4]:
;   FUN_0040b680 at 0040b6ea
;   FUN_00460550 at 004605af
;   FUN_004f6770 at 004f681a
;   FUN_00530610 at 0053089e
;
; Referenced Globals:
;   void* PTR_FUN_006079a4 = 005a7f44
;   void* PTR_FUN_006079a8 = 005a7f44
;
; Called Functions:
;   FUN_005a7f44
;   FUN_005a9310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3480
        ;   Label: FUN_005a3480
    PUSH ESI                            ; 005a3481
    PUSH EDI                            ; 005a3482
    PUSH EBP                            ; 005a3483
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a3484
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a3488
    CMP EDX,-0x1                        ; 005a348c
    JNZ 0x005a3498                      ; 005a348f
        ;   XREF to: 005a3498 (CONDITIONAL_JUMP)  ; LAB_005a3498
    MOV EAX,EDX                         ; 005a3491
    POP EBP                             ; 005a3493
    POP EDI                             ; 005a3494
    POP ESI                             ; 005a3495
    POP EBX                             ; 005a3496
    RET                                 ; 005a3497
    MOV ECX,dword ptr [EBX + 0x10]      ; 005a3498
        ;   Label: LAB_005a3498
    PUSH ECX                            ; 005a349b
    CALL dword ptr [0x006079a4]         ; 005a349c | PTR_FUN_006079a4
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a34a2
    MOV ESI,dword ptr [EAX + 0xc]       ; 005a34a5
    ADD ESP,0x4                         ; 005a34a8
    CMP ESI,0x1                         ; 005a34ab
    JZ 0x005a34d2                       ; 005a34ae
        ;   XREF to: 005a34d2 (CONDITIONAL_JUMP)  ; LAB_005a34d2
    TEST ESI,ESI                        ; 005a34b0
    JZ 0x005a34cb                       ; 005a34b2
        ;   XREF to: 005a34cb (CONDITIONAL_JUMP)  ; LAB_005a34cb
    MOV EBP,dword ptr [EBX + 0x10]      ; 005a34b4
    PUSH EBP                            ; 005a34b7
    CALL dword ptr [0x006079a8]         ; 005a34b8 | PTR_FUN_006079a8
    MOV EAX,0xffffffff                  ; 005a34be
    ADD ESP,0x4                         ; 005a34c3
    POP EBP                             ; 005a34c6
    POP EDI                             ; 005a34c7
    POP ESI                             ; 005a34c8
    POP EBX                             ; 005a34c9
    RET                                 ; 005a34ca
    MOV dword ptr [EAX + 0xc],0x1       ; 005a34cb
        ;   Label: LAB_005a34cb
    TEST byte ptr [EBX + 0xd],0x10      ; 005a34d2
        ;   Label: LAB_005a34d2
    JZ 0x005a34ef                       ; 005a34d6
        ;   XREF to: 005a34ef (CONDITIONAL_JUMP)  ; LAB_005a34ef
    MOV EBP,dword ptr [EBX + 0x10]      ; 005a34d8
    PUSH EBP                            ; 005a34db
    CALL dword ptr [0x006079a8]         ; 005a34dc | PTR_FUN_006079a8
    MOV EAX,0xffffffff                  ; 005a34e2
    ADD ESP,0x4                         ; 005a34e7
    POP EBP                             ; 005a34ea
    POP EDI                             ; 005a34eb
    POP ESI                             ; 005a34ec
    POP EBX                             ; 005a34ed
    RET                                 ; 005a34ee
    TEST byte ptr [EBX + 0xc],0x1       ; 005a34ef
        ;   Label: LAB_005a34ef
    JNZ 0x005a350c                      ; 005a34f3
        ;   XREF to: 005a350c (CONDITIONAL_JUMP)  ; LAB_005a350c
    MOV EDI,dword ptr [EBX + 0x10]      ; 005a34f5
        ;   Label: LAB_005a34f5
    PUSH EDI                            ; 005a34f8
    CALL dword ptr [0x006079a8]         ; 005a34f9 | PTR_FUN_006079a8
    MOV EAX,0xffffffff                  ; 005a34ff
    ADD ESP,0x4                         ; 005a3504
    POP EBP                             ; 005a3507
    POP EDI                             ; 005a3508
    POP ESI                             ; 005a3509
    POP EBX                             ; 005a350a
    RET                                 ; 005a350b
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a350c
        ;   Label: LAB_005a350c
    CMP dword ptr [EAX + 0x8],0x0       ; 005a350f
    JNZ 0x005a351e                      ; 005a3513
        ;   XREF to: 005a351e (CONDITIONAL_JUMP)  ; LAB_005a351e
    PUSH EBX                            ; 005a3515
    CALL FUN_005a9310                   ; 005a3516
        ;   XREF to: 005a9310 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9310()
    ADD ESP,0x4                         ; 005a351b
    MOV ECX,dword ptr [EBX + 0x4]       ; 005a351e
        ;   Label: LAB_005a351e
    TEST ECX,ECX                        ; 005a3521
    JNZ 0x005a354b                      ; 005a3523
        ;   XREF to: 005a354b (CONDITIONAL_JUMP)  ; LAB_005a354b
    MOV dword ptr [EBX + 0x4],0x1       ; 005a3525
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a352c
    MOV ECX,dword ptr [EBX + 0x14]      ; 005a352f
    MOV EAX,dword ptr [EAX + 0x8]       ; 005a3532
    ADD EAX,ECX                         ; 005a3535
    DEC EAX                             ; 005a3537
    MOV CL,byte ptr [EBX + 0xc]         ; 005a3538
    MOV dword ptr [EBX],EAX             ; 005a353b
    OR CL,0x4                           ; 005a353d
    MOV EAX,dword ptr [EBX]             ; 005a3540
    MOV DL,byte ptr [ESP + 0x14]        ; 005a3542
    MOV byte ptr [EBX + 0xc],CL         ; 005a3546
    JMP 0x005a3579                      ; 005a3549
        ;   XREF to: 005a3579 (UNCONDITIONAL_JUMP)  ; LAB_005a3579
    MOV EDX,dword ptr [EBX + 0x8]       ; 005a354b
        ;   Label: LAB_005a354b
    MOV EAX,dword ptr [EBX]             ; 005a354e
    CMP EAX,dword ptr [EDX + 0x8]       ; 005a3550
    JZ 0x005a34f5                       ; 005a3553
        ;   XREF to: 005a34f5 (CONDITIONAL_JUMP)  ; LAB_005a34f5
    MOV EAX,dword ptr [EBX]             ; 005a3555
    LEA EBP,[ECX + 0x1]                 ; 005a3557
    DEC EAX                             ; 005a355a
    MOV dword ptr [EBX + 0x4],EBP       ; 005a355b
    MOV dword ptr [EBX],EAX             ; 005a355e
    MOV AL,byte ptr [EAX]               ; 005a3560
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a3562
    AND EAX,0xff                        ; 005a3566
    CMP EAX,EDX                         ; 005a356b
    JZ 0x005a3573                       ; 005a356d
        ;   XREF to: 005a3573 (CONDITIONAL_JUMP)  ; LAB_005a3573
    OR byte ptr [EBX + 0xc],0x4         ; 005a356f
    MOV EAX,dword ptr [EBX]             ; 005a3573
        ;   Label: LAB_005a3573
    MOV DL,byte ptr [ESP + 0x14]        ; 005a3575
    MOV byte ptr [EAX],DL               ; 005a3579
        ;   Label: LAB_005a3579
    MOV CH,byte ptr [EBX + 0xc]         ; 005a357b
    MOV ESI,dword ptr [EBX + 0x10]      ; 005a357e
    AND CH,0xef                         ; 005a3581
    PUSH ESI                            ; 005a3584
    MOV byte ptr [EBX + 0xc],CH         ; 005a3585
    CALL dword ptr [0x006079a8]         ; 005a3588 | PTR_FUN_006079a8
    ADD ESP,0x4                         ; 005a358e
    XOR EAX,EAX                         ; 005a3591
    MOV AL,byte ptr [ESP + 0x14]        ; 005a3593
    POP EBP                             ; 005a3597
    POP EDI                             ; 005a3598
    POP ESI                             ; 005a3599
    POP EBX                             ; 005a359a
    RET                                 ; 005a359b


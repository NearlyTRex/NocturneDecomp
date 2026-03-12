; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_CDemonSet_deleteCamera_FUN_0057e430(CDemonSet *this_ptr,int camera_index)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   camera_index
; Local Variables:
; C3DSCamera *     Stack[-0x20]:4  local_20
; CVector3f *      Stack[-0x1c]:4  local_1c
; CVector3f *      Stack[-0x18]:4  local_18
; int              Stack[-0x10]:4  local_10
; C3DSCamera *     Stack[-0xc]:4  local_c
; int              Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_showCameraEditor_FUN_0057e7c0 at 0057ebde
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0057e430
        ;   Label: core_setedit.cpp_CDemonSet_deleteCamera_FUN_0057e430
    SUB ESP,0x1c                        ; 0057e431
    MOV EBP,dword ptr [ESP + 0x24]      ; 0057e434
    MOV ECX,dword ptr [ESP + 0x28]      ; 0057e438
    TEST ECX,ECX                        ; 0057e43c
    JL 0x0057e750                       ; 0057e43e
        ;   XREF to: 0057e750 (CONDITIONAL_JUMP)  ; LAB_0057e750
    MOV EDX,dword ptr [EBP]             ; 0057e444
    CMP ECX,EDX                         ; 0057e447
    JGE 0x0057e750                      ; 0057e449
        ;   XREF to: 0057e750 (CONDITIONAL_JUMP)  ; LAB_0057e750
    PUSH EDI                            ; 0057e44f
    PUSH ESI                            ; 0057e450
    PUSH EBX                            ; 0057e451
    LEA EBX,[EDX + -0x1]                ; 0057e452
    MOV dword ptr [ESP + 0x24],ECX      ; 0057e455
    MOV dword ptr [EBP],EBX             ; 0057e459
    CMP ECX,EBX                         ; 0057e45c
    JGE 0x0057e729                      ; 0057e45e
        ;   XREF to: 0057e729 (CONDITIONAL_JUMP)  ; LAB_0057e729
    LEA EAX,[EBP + 0x19a30]             ; 0057e464
    MOV dword ptr [ESP + 0x18],EAX      ; 0057e46a
    IMUL EAX,ECX,0x1a4                  ; 0057e46e
    LEA EDX,[EBP + 0x4]                 ; 0057e474
    LEA EBX,[EAX + 0x2a4]               ; 0057e477
    ADD EBX,EDX                         ; 0057e47d
    MOV dword ptr [ESP + 0x10],EBX      ; 0057e47f
    LEA EBX,[EAX + 0x100]               ; 0057e483
    ADD EBX,EDX                         ; 0057e489
    SHL ECX,0x4                         ; 0057e48b
    MOV dword ptr [ESP + 0x14],EBX      ; 0057e48e
    LEA EBX,[EAX + 0x1a4]               ; 0057e492
    MOV dword ptr [ESP + 0x1c],ECX      ; 0057e498
    ADD EBX,EDX                         ; 0057e49c
    ADD EAX,EDX                         ; 0057e49e
    MOV dword ptr [ESP + 0x20],EBX      ; 0057e4a0
    MOV dword ptr [ESP + 0xc],EAX       ; 0057e4a4
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057e4a8
        ;   Label: LAB_0057e4a8
    MOV EAX,dword ptr [ESP + 0x20]      ; 0057e4ac
    MOV ECX,0x40                        ; 0057e4b0
    MOV EDI,EDX                         ; 0057e4b5
    MOV ESI,EAX                         ; 0057e4b7
    MOVSD.REP ES:EDI,ESI                ; 0057e4b9
    MOV EBX,dword ptr [ESP + 0x10]      ; 0057e4bb
    CMP EBX,dword ptr [ESP + 0x14]      ; 0057e4bf
    JNZ 0x0057e755                      ; 0057e4c3
        ;   XREF to: 0057e755 (CONDITIONAL_JUMP)  ; LAB_0057e755
    LEA ECX,[EAX + 0x10c]               ; 0057e4c9
        ;   Label: LAB_0057e4c9
    LEA EBX,[EDX + 0x10c]               ; 0057e4cf
    CMP EBX,ECX                         ; 0057e4d5
    JZ 0x0057e4e9                       ; 0057e4d7
        ;   XREF to: 0057e4e9 (CONDITIONAL_JUMP)  ; LAB_0057e4e9
    MOV ESI,dword ptr [ECX]             ; 0057e4d9
    MOV dword ptr [EBX],ESI             ; 0057e4db
    MOV ESI,dword ptr [ECX + 0x4]       ; 0057e4dd
    MOV dword ptr [EBX + 0x4],ESI       ; 0057e4e0
    MOV ESI,dword ptr [ECX + 0x8]       ; 0057e4e3
    MOV dword ptr [EBX + 0x8],ESI       ; 0057e4e6
    MOV ECX,dword ptr [EAX + 0x118]     ; 0057e4e9
        ;   Label: LAB_0057e4e9
    MOV dword ptr [EDX + 0x118],ECX     ; 0057e4ef
    MOV ECX,dword ptr [EAX + 0x11c]     ; 0057e4f5
    MOV dword ptr [EDX + 0x11c],ECX     ; 0057e4fb
    MOV ECX,dword ptr [EAX + 0x120]     ; 0057e501
    MOV dword ptr [EDX + 0x120],ECX     ; 0057e507
    MOV ECX,dword ptr [EAX + 0x124]     ; 0057e50d
    MOV dword ptr [EDX + 0x124],ECX     ; 0057e513
    MOV ECX,dword ptr [EAX + 0x128]     ; 0057e519
    MOV dword ptr [EDX + 0x128],ECX     ; 0057e51f
    MOV ECX,dword ptr [EAX + 0x12c]     ; 0057e525
    MOV dword ptr [EDX + 0x12c],ECX     ; 0057e52b
    MOV ECX,dword ptr [EAX + 0x130]     ; 0057e531
    MOV dword ptr [EDX + 0x130],ECX     ; 0057e537
    MOV ECX,dword ptr [EAX + 0x134]     ; 0057e53d
    MOV dword ptr [EDX + 0x134],ECX     ; 0057e543
    MOV ECX,dword ptr [EAX + 0x138]     ; 0057e549
    MOV dword ptr [EDX + 0x138],ECX     ; 0057e54f
    MOV ECX,dword ptr [EAX + 0x13c]     ; 0057e555
    MOV dword ptr [EDX + 0x13c],ECX     ; 0057e55b
    MOV ECX,dword ptr [EAX + 0x140]     ; 0057e561
    MOV dword ptr [EDX + 0x140],ECX     ; 0057e567
    MOV ECX,dword ptr [EAX + 0x144]     ; 0057e56d
    MOV dword ptr [EDX + 0x144],ECX     ; 0057e573
    MOV ECX,dword ptr [EAX + 0x148]     ; 0057e579
    MOV dword ptr [EDX + 0x148],ECX     ; 0057e57f
    MOV ECX,dword ptr [EAX + 0x14c]     ; 0057e585
    MOV dword ptr [EDX + 0x14c],ECX     ; 0057e58b
    MOV ECX,dword ptr [EAX + 0x150]     ; 0057e591
    MOV dword ptr [EDX + 0x150],ECX     ; 0057e597
    MOV ECX,dword ptr [EAX + 0x154]     ; 0057e59d
    MOV dword ptr [EDX + 0x154],ECX     ; 0057e5a3
    MOV ECX,dword ptr [EAX + 0x158]     ; 0057e5a9
    MOV dword ptr [EDX + 0x158],ECX     ; 0057e5af
    MOV ECX,dword ptr [EAX + 0x15c]     ; 0057e5b5
    LEA EBX,[EAX + 0x160]               ; 0057e5bb
    MOV dword ptr [EDX + 0x15c],ECX     ; 0057e5c1
    LEA ECX,[EDX + 0x160]               ; 0057e5c7
    CMP ECX,EBX                         ; 0057e5cd
    JZ 0x0057e5e1                       ; 0057e5cf
        ;   XREF to: 0057e5e1 (CONDITIONAL_JUMP)  ; LAB_0057e5e1
    MOV ESI,dword ptr [EBX]             ; 0057e5d1
    MOV dword ptr [ECX],ESI             ; 0057e5d3
    MOV ESI,dword ptr [EBX + 0x4]       ; 0057e5d5
    MOV dword ptr [ECX + 0x4],ESI       ; 0057e5d8
    MOV ESI,dword ptr [EBX + 0x8]       ; 0057e5db
    MOV dword ptr [ECX + 0x8],ESI       ; 0057e5de
    MOV ECX,dword ptr [EAX + 0x16c]     ; 0057e5e1
        ;   Label: LAB_0057e5e1
    MOV dword ptr [EDX + 0x16c],ECX     ; 0057e5e7
    MOV ECX,dword ptr [EAX + 0x170]     ; 0057e5ed
    MOV dword ptr [EDX + 0x170],ECX     ; 0057e5f3
    MOV ECX,dword ptr [EAX + 0x174]     ; 0057e5f9
    MOV dword ptr [EDX + 0x174],ECX     ; 0057e5ff
    MOV ECX,dword ptr [EAX + 0x178]     ; 0057e605
    LEA EBX,[EDX + 0x17c]               ; 0057e60b
    MOV dword ptr [EDX + 0x178],ECX     ; 0057e611
    LEA ECX,[EAX + 0x17c]               ; 0057e617
    CMP EBX,ECX                         ; 0057e61d
    JZ 0x0057e631                       ; 0057e61f
        ;   XREF to: 0057e631 (CONDITIONAL_JUMP)  ; LAB_0057e631
    MOV ESI,dword ptr [ECX]             ; 0057e621
    MOV dword ptr [EBX],ESI             ; 0057e623
    MOV ESI,dword ptr [ECX + 0x4]       ; 0057e625
    MOV dword ptr [EBX + 0x4],ESI       ; 0057e628
    MOV ESI,dword ptr [ECX + 0x8]       ; 0057e62b
    MOV dword ptr [EBX + 0x8],ESI       ; 0057e62e
    LEA ECX,[EAX + 0x188]               ; 0057e631
        ;   Label: LAB_0057e631
    LEA EBX,[EDX + 0x188]               ; 0057e637
    CMP EBX,ECX                         ; 0057e63d
    JZ 0x0057e651                       ; 0057e63f
        ;   XREF to: 0057e651 (CONDITIONAL_JUMP)  ; LAB_0057e651
    MOV ESI,dword ptr [ECX]             ; 0057e641
    MOV dword ptr [EBX],ESI             ; 0057e643
    MOV ESI,dword ptr [ECX + 0x4]       ; 0057e645
    MOV dword ptr [EBX + 0x4],ESI       ; 0057e648
    MOV ESI,dword ptr [ECX + 0x8]       ; 0057e64b
    MOV dword ptr [EBX + 0x8],ESI       ; 0057e64e
    MOV ECX,dword ptr [EAX + 0x194]     ; 0057e651
        ;   Label: LAB_0057e651
    MOV dword ptr [EDX + 0x194],ECX     ; 0057e657
    MOV ECX,dword ptr [EAX + 0x198]     ; 0057e65d
    MOV dword ptr [EDX + 0x198],ECX     ; 0057e663
    MOV ECX,dword ptr [EAX + 0x19c]     ; 0057e669
    MOV dword ptr [EDX + 0x19c],ECX     ; 0057e66f
    MOV EAX,dword ptr [EAX + 0x1a0]     ; 0057e675
    MOV dword ptr [EDX + 0x1a0],EAX     ; 0057e67b
    MOV ESI,dword ptr [EBP + 0x19a2c]   ; 0057e681
    XOR ECX,ECX                         ; 0057e687
    TEST ESI,ESI                        ; 0057e689
    JLE 0x0057e6d3                      ; 0057e68b
        ;   XREF to: 0057e6d3 (CONDITIONAL_JUMP)  ; LAB_0057e6d3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0057e68d
    MOV EDX,dword ptr [ESP + 0x18]      ; 0057e691
    MOV EBX,dword ptr [ESP + 0x18]      ; 0057e695
    ADD EAX,EDX                         ; 0057e699
    MOV EDX,dword ptr [ESP + 0x24]      ; 0057e69b
    ADD EDX,EBX                         ; 0057e69f
    MOV BL,byte ptr [EDX + 0x129]       ; 0057e6a1
        ;   Label: LAB_0057e6a1
    MOV byte ptr [EDX + 0x128],BL       ; 0057e6a7
    LEA EDI,[EAX + 0x224]               ; 0057e6ad
    LEA ESI,[EAX + 0x234]               ; 0057e6b3
    ADD EAX,0x1898                      ; 0057e6b9
    MOVSD ES:EDI,ESI                    ; 0057e6be
    MOVSD ES:EDI,ESI                    ; 0057e6bf
    MOVSD ES:EDI,ESI                    ; 0057e6c0
    MOVSD ES:EDI,ESI                    ; 0057e6c1
    INC ECX                             ; 0057e6c2
    MOV EDI,dword ptr [EBP + 0x19a2c]   ; 0057e6c3
    ADD EDX,0x1898                      ; 0057e6c9
    CMP ECX,EDI                         ; 0057e6cf
    JL 0x0057e6a1                       ; 0057e6d1
        ;   XREF to: 0057e6a1 (CONDITIONAL_JUMP)  ; LAB_0057e6a1
    MOV EDI,dword ptr [ESP + 0x10]      ; 0057e6d3
        ;   Label: LAB_0057e6d3
    MOV EAX,dword ptr [ESP + 0x14]      ; 0057e6d7
    MOV EDX,dword ptr [ESP + 0x20]      ; 0057e6db
    MOV ECX,dword ptr [ESP + 0xc]       ; 0057e6df
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0057e6e3
    MOV ESI,dword ptr [ESP + 0x24]      ; 0057e6e7
    ADD EDI,0x1a4                       ; 0057e6eb
    ADD EAX,0x1a4                       ; 0057e6f1
    ADD EDX,0x1a4                       ; 0057e6f6
    ADD ECX,0x1a4                       ; 0057e6fc
    ADD EBX,0x10                        ; 0057e702
    INC ESI                             ; 0057e705
    MOV dword ptr [ESP + 0x10],EDI      ; 0057e706
    MOV dword ptr [ESP + 0x14],EAX      ; 0057e70a
    MOV dword ptr [ESP + 0x20],EDX      ; 0057e70e
    MOV dword ptr [ESP + 0xc],ECX       ; 0057e712
    MOV dword ptr [ESP + 0x1c],EBX      ; 0057e716
    MOV EDI,dword ptr [EBP]             ; 0057e71a
    MOV dword ptr [ESP + 0x24],ESI      ; 0057e71d
    CMP ESI,EDI                         ; 0057e721
    JL 0x0057e4a8                       ; 0057e723
        ;   XREF to: 0057e4a8 (CONDITIONAL_JUMP)  ; LAB_0057e4a8
    IMUL EAX,dword ptr [EBP],0x1a4      ; 0057e729
        ;   Label: LAB_0057e729
    MOV dword ptr [EAX + EBP*0x1 + 0x19c],0x0 ; 0057e730
    IMUL EAX,dword ptr [EBP],0x1a4      ; 0057e73b
    MOV dword ptr [EAX + EBP*0x1 + 0x198],0x0 ; 0057e742
    POP EBX                             ; 0057e74d
    POP ESI                             ; 0057e74e
    POP EDI                             ; 0057e74f
    ADD ESP,0x1c                        ; 0057e750
        ;   Label: LAB_0057e750
    POP EBP                             ; 0057e753
    RET                                 ; 0057e754
    MOV ECX,EBX                         ; 0057e755
        ;   Label: LAB_0057e755
    FLD float ptr [ECX]                 ; 0057e757
    MOV ECX,dword ptr [ESP + 0x14]      ; 0057e759
    FSTP float ptr [ECX]                ; 0057e75d
    MOV ECX,EBX                         ; 0057e75f
    FLD float ptr [ECX + 0x4]           ; 0057e761
    MOV ECX,dword ptr [ESP + 0x14]      ; 0057e764
    FSTP float ptr [ECX + 0x4]          ; 0057e768
    MOV ECX,EBX                         ; 0057e76b
    FLD float ptr [ECX + 0x8]           ; 0057e76d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0057e770
    FSTP float ptr [ECX + 0x8]          ; 0057e774
    JMP 0x0057e4c9                      ; 0057e777
        ;   XREF to: 0057e4c9 (UNCONDITIONAL_JUMP)  ; LAB_0057e4c9


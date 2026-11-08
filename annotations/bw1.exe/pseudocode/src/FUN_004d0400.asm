; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d0400(int param_1)
;
;
; XREF[3]:
;   FUN_004cbc80 at 004cbcfd
;   FUN_004f4f50 at 004f51ee
;   FUN_0050d640 at 0050e6bf
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0400
        ;   Label: FUN_004d0400
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d0401
    MOV dword ptr [EAX + 0x2c],0x150    ; 004d0405
    MOV dword ptr [EAX + 0x30],0x2a     ; 004d040c
    MOV dword ptr [EAX + 0x34],0x38     ; 004d0413
    MOV dword ptr [EAX + 0x38],0x2c     ; 004d041a
    MOV dword ptr [EAX + 0x3c],0x2d     ; 004d0421
    MOV dword ptr [EAX + 0x40],0x14d    ; 004d0428
    MOV dword ptr [EAX + 0x44],0x14b    ; 004d042f
    MOV dword ptr [EAX + 0x48],0x39     ; 004d0436
    MOV dword ptr [EAX + 0x4c],0x1c     ; 004d043d
    MOV dword ptr [EAX + 0x50],0x21     ; 004d0444
    MOV dword ptr [EAX + 0x54],0x31     ; 004d044b
    MOV dword ptr [EAX + 0x58],0x24     ; 004d0452
    MOV dword ptr [EAX + 0x5c],0xf      ; 004d0459
    MOV dword ptr [EAX + 0x60],0x2e     ; 004d0460
    MOV dword ptr [EAX + 0x64],0x1f     ; 004d0467
    MOV dword ptr [EAX + 0x68],0x20     ; 004d046e
    MOV dword ptr [EAX + 0x6c],0x39     ; 004d0475
    MOV dword ptr [EAX + 0x70],0x14f    ; 004d047c
    MOV dword ptr [EAX + 0x74],0x10     ; 004d0483
    MOV dword ptr [EAX + 0x78],0x1e     ; 004d048a
    MOV dword ptr [EAX + 0x7c],0x2      ; 004d0491
    MOV dword ptr [EAX + 0x80],0x3      ; 004d0498
    MOV dword ptr [EAX + 0x84],0x4      ; 004d04a2
    MOV dword ptr [EAX + 0x88],0x6      ; 004d04ac
    MOV dword ptr [EAX + 0x8c],0x5      ; 004d04b6
    MOV dword ptr [EAX + 0x94],0xc      ; 004d04c0
    MOV dword ptr [EAX + 0x90],0xd      ; 004d04ca
    MOV dword ptr [EAX + 0x98],0x1a     ; 004d04d4
    MOV dword ptr [EAX + 0x9c],0x1b     ; 004d04de
    MOV dword ptr [EAX + 0xa0],0x19     ; 004d04e8
    MOV dword ptr [EAX + 0xa4],0x29     ; 004d04f2
    MOV dword ptr [EAX + 0xa8],0x0      ; 004d04fc
    MOV dword ptr [EAX + 0xac],0x0      ; 004d0506
    MOV dword ptr [EAX + 0xb0],0x10000  ; 004d0510
    MOV dword ptr [EAX + 0xb4],0x10000  ; 004d051a
    MOV dword ptr [EAX + 0xd8],0x0      ; 004d0524
    MOV EDX,dword ptr [EAX + 0xd0]      ; 004d052e
    MOV dword ptr [EAX + 0x28],0x148    ; 004d0534
    CMP EDX,0x1                         ; 004d053b
    JZ 0x004d0657                       ; 004d053e
        ;   XREF to: 004d0657 (CONDITIONAL_JUMP)  ; LAB_004d0657
    MOV ECX,dword ptr [EAX + 0xd0]      ; 004d0544
        ;   Label: LAB_004d0544
    CMP ECX,0x2                         ; 004d054a
    JNZ 0x004d0646                      ; 004d054d
        ;   XREF to: 004d0646 (CONDITIONAL_JUMP)  ; LAB_004d0646
    MOV dword ptr [EAX + 0x2c],0x254    ; 004d0553
    MOV dword ptr [EAX + 0x30],0x2a     ; 004d055a
    MOV dword ptr [EAX + 0x34],0x205    ; 004d0561
    MOV dword ptr [EAX + 0x38],0x2c     ; 004d0568
    MOV dword ptr [EAX + 0x3c],0x2d     ; 004d056f
    MOV dword ptr [EAX + 0x44],0x251    ; 004d0576
    MOV dword ptr [EAX + 0x40],0x252    ; 004d057d
    MOV dword ptr [EAX + 0x48],0x202    ; 004d0584
    MOV dword ptr [EAX + 0x4c],0x204    ; 004d058b
    MOV dword ptr [EAX + 0x50],0x21     ; 004d0592
    MOV dword ptr [EAX + 0x54],0x31     ; 004d0599
    MOV dword ptr [EAX + 0x58],0x24     ; 004d05a0
    MOV dword ptr [EAX + 0x5c],0xf      ; 004d05a7
    MOV dword ptr [EAX + 0x60],0x2e     ; 004d05ae
    MOV dword ptr [EAX + 0x64],0x1f     ; 004d05b5
    MOV dword ptr [EAX + 0x68],0x203    ; 004d05bc
    MOV dword ptr [EAX + 0x70],0x14f    ; 004d05c3
    MOV dword ptr [EAX + 0x74],0x10     ; 004d05ca
    MOV dword ptr [EAX + 0x78],0x1e     ; 004d05d1
    MOV dword ptr [EAX + 0x80],0x3      ; 004d05d8
    MOV dword ptr [EAX + 0x84],0x4      ; 004d05e2
    MOV dword ptr [EAX + 0x88],0x6      ; 004d05ec
    MOV dword ptr [EAX + 0x8c],0x5      ; 004d05f6
    MOV dword ptr [EAX + 0x94],0xc      ; 004d0600
    MOV dword ptr [EAX + 0x90],0xd      ; 004d060a
    MOV dword ptr [EAX + 0x98],0x1a     ; 004d0614
    MOV dword ptr [EAX + 0x9c],0x1b     ; 004d061e
    MOV dword ptr [EAX + 0xa0],0x19     ; 004d0628
    MOV dword ptr [EAX + 0xa4],0x29     ; 004d0632
    MOV dword ptr [EAX + 0x28],0x253    ; 004d063c
    MOV dword ptr [EAX + 0x7c],ECX      ; 004d0643
    MOV EBX,dword ptr [EAX + 0xd0]      ; 004d0646
        ;   Label: LAB_004d0646
    CMP EBX,0x3                         ; 004d064c
    JZ 0x004d0753                       ; 004d064f
        ;   XREF to: 004d0753 (CONDITIONAL_JUMP)  ; LAB_004d0753
    POP EBX                             ; 004d0655
    RET                                 ; 004d0656
    MOV dword ptr [EAX + 0x2c],0x150    ; 004d0657
        ;   Label: LAB_004d0657
    MOV dword ptr [EAX + 0x30],0x36     ; 004d065e
    MOV dword ptr [EAX + 0x34],0x11d    ; 004d0665
    MOV dword ptr [EAX + 0x38],0x14b    ; 004d066c
    MOV dword ptr [EAX + 0x3c],0x14d    ; 004d0673
    MOV dword ptr [EAX + 0x44],0x255    ; 004d067a
    MOV dword ptr [EAX + 0x40],0x255    ; 004d0681
    MOV dword ptr [EAX + 0x48],0x200    ; 004d0688
    MOV dword ptr [EAX + 0x4c],0x1c     ; 004d068f
    MOV dword ptr [EAX + 0x50],0x21     ; 004d0696
    MOV dword ptr [EAX + 0x54],0x31     ; 004d069d
    MOV dword ptr [EAX + 0x58],0x24     ; 004d06a4
    MOV dword ptr [EAX + 0x5c],0xf      ; 004d06ab
    MOV dword ptr [EAX + 0x60],0x2e     ; 004d06b2
    MOV dword ptr [EAX + 0x64],0x1f     ; 004d06b9
    MOV dword ptr [EAX + 0x68],0x52     ; 004d06c0
    MOV dword ptr [EAX + 0x70],0x14f    ; 004d06c7
    MOV dword ptr [EAX + 0x74],0x256    ; 004d06ce
    MOV dword ptr [EAX + 0x78],0x256    ; 004d06d5
    MOV dword ptr [EAX + 0x7c],0x4f     ; 004d06dc
    MOV dword ptr [EAX + 0x80],0x50     ; 004d06e3
    MOV dword ptr [EAX + 0x84],0x51     ; 004d06ed
    MOV dword ptr [EAX + 0x88],0x6      ; 004d06f7
    MOV dword ptr [EAX + 0x8c],0x4b     ; 004d0701
    MOV dword ptr [EAX + 0x94],0xc      ; 004d070b
    MOV dword ptr [EAX + 0x90],0xd      ; 004d0715
    MOV dword ptr [EAX + 0x98],0x1a     ; 004d071f
    MOV dword ptr [EAX + 0x9c],0x1b     ; 004d0729
    MOV dword ptr [EAX + 0xa0],0x19     ; 004d0733
    MOV dword ptr [EAX + 0xa4],0x29     ; 004d073d
    MOV dword ptr [EAX + 0x28],0x148    ; 004d0747
    JMP 0x004d0544                      ; 004d074e
        ;   XREF to: 004d0544 (UNCONDITIONAL_JUMP)  ; LAB_004d0544
    MOV dword ptr [EAX + 0x2c],0x150    ; 004d0753
        ;   Label: LAB_004d0753
    MOV dword ptr [EAX + 0x30],0x2a     ; 004d075a
    MOV dword ptr [EAX + 0x34],0x11d    ; 004d0761
    MOV dword ptr [EAX + 0x38],0x2c     ; 004d0768
    MOV dword ptr [EAX + 0x3c],0x2d     ; 004d076f
    MOV dword ptr [EAX + 0x44],0x255    ; 004d0776
    MOV dword ptr [EAX + 0x40],0x255    ; 004d077d
    MOV dword ptr [EAX + 0x48],0x201    ; 004d0784
    MOV dword ptr [EAX + 0x4c],0x1c     ; 004d078b
    MOV dword ptr [EAX + 0x50],0x21     ; 004d0792
    MOV dword ptr [EAX + 0x54],0x31     ; 004d0799
    MOV dword ptr [EAX + 0x58],0x24     ; 004d07a0
    MOV dword ptr [EAX + 0x5c],0xf      ; 004d07a7
    MOV dword ptr [EAX + 0x60],0x2e     ; 004d07ae
    MOV dword ptr [EAX + 0x64],0x1f     ; 004d07b5
    MOV dword ptr [EAX + 0x68],0x52     ; 004d07bc
    MOV dword ptr [EAX + 0x70],0x14f    ; 004d07c3
    MOV dword ptr [EAX + 0x74],0x256    ; 004d07ca
    MOV dword ptr [EAX + 0x78],0x256    ; 004d07d1
    MOV dword ptr [EAX + 0x7c],0x2      ; 004d07d8
    MOV dword ptr [EAX + 0x84],0x4      ; 004d07df
    MOV dword ptr [EAX + 0x88],0x6      ; 004d07e9
    MOV dword ptr [EAX + 0x8c],0x5      ; 004d07f3
    MOV dword ptr [EAX + 0x94],0xc      ; 004d07fd
    MOV dword ptr [EAX + 0x90],0xd      ; 004d0807
    MOV dword ptr [EAX + 0x98],0x1a     ; 004d0811
    MOV dword ptr [EAX + 0x9c],0x1b     ; 004d081b
    MOV dword ptr [EAX + 0xa0],0x19     ; 004d0825
    MOV dword ptr [EAX + 0xa4],0x29     ; 004d082f
    MOV dword ptr [EAX + 0x28],0x200    ; 004d0839
    MOV dword ptr [EAX + 0x80],EBX      ; 004d0840
    POP EBX                             ; 004d0846
    RET                                 ; 004d0847


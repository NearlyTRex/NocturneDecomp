; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049e610(int param_1)
;
;
; XREF[2]:
;   FUN_004bdb80 at 004bde07
;   FUN_004d2d00 at 004d3bc7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049e610
        ;   Label: FUN_0049e610
    MOV dword ptr [EAX + 0x2c],0x150    ; 0049e614
    MOV dword ptr [EAX + 0x30],0x2a     ; 0049e61b
    MOV dword ptr [EAX + 0x34],0x38     ; 0049e622
    MOV dword ptr [EAX + 0x38],0x2c     ; 0049e629
    MOV dword ptr [EAX + 0x3c],0x2d     ; 0049e630
    MOV dword ptr [EAX + 0x40],0x14d    ; 0049e637
    MOV dword ptr [EAX + 0x44],0x14b    ; 0049e63e
    MOV dword ptr [EAX + 0x48],0x39     ; 0049e645
    MOV dword ptr [EAX + 0x4c],0x1c     ; 0049e64c
    MOV dword ptr [EAX + 0x50],0x21     ; 0049e653
    MOV dword ptr [EAX + 0x54],0x17     ; 0049e65a
    MOV dword ptr [EAX + 0x58],0x20     ; 0049e661
    MOV dword ptr [EAX + 0x5c],0x22     ; 0049e668
    MOV dword ptr [EAX + 0x60],0x10     ; 0049e66f
    MOV dword ptr [EAX + 0x64],0x1e     ; 0049e676
    MOV dword ptr [EAX + 0x68],0x2      ; 0049e67d
    MOV dword ptr [EAX + 0x6c],0x3      ; 0049e684
    MOV dword ptr [EAX + 0x70],0x4      ; 0049e68b
    MOV dword ptr [EAX + 0x74],0x5      ; 0049e692
    MOV dword ptr [EAX + 0x78],0x6      ; 0049e699
    MOV dword ptr [EAX + 0x80],0xc      ; 0049e6a0
    MOV dword ptr [EAX + 0x7c],0xd      ; 0049e6aa
    MOV dword ptr [EAX + 0x84],0x1a     ; 0049e6b1
    MOV dword ptr [EAX + 0x88],0x1b     ; 0049e6bb
    MOV dword ptr [EAX + 0x8c],0x35     ; 0049e6c5
    MOV dword ptr [EAX + 0x90],0x29     ; 0049e6cf
    MOV dword ptr [EAX + 0x94],0x0      ; 0049e6d9
    MOV dword ptr [EAX + 0x98],0x0      ; 0049e6e3
    MOV dword ptr [EAX + 0x9c],0x10000  ; 0049e6ed
    MOV dword ptr [EAX + 0xa0],0x10000  ; 0049e6f7
    MOV dword ptr [EAX + 0xc4],0x0      ; 0049e701
    MOV EDX,dword ptr [EAX + 0xbc]      ; 0049e70b
    MOV dword ptr [EAX + 0x28],0x148    ; 0049e711
    CMP EDX,0x1                         ; 0049e718
    JZ 0x0049e727                       ; 0049e71b
        ;   XREF to: 0049e727 (CONDITIONAL_JUMP)  ; LAB_0049e727
    CMP dword ptr [EAX + 0xbc],0x2      ; 0049e71d
    JZ 0x0049e796                       ; 0049e724
        ;   XREF to: 0049e796 (CONDITIONAL_JUMP)  ; LAB_0049e796
    RET                                 ; 0049e726
    MOV dword ptr [EAX + 0x2c],0x1f     ; 0049e727
        ;   Label: LAB_0049e727
    MOV dword ptr [EAX + 0x38],0x1e     ; 0049e72e
    MOV dword ptr [EAX + 0x3c],0x20     ; 0049e735
    MOV dword ptr [EAX + 0x30],0x3a     ; 0049e73c
    MOV dword ptr [EAX + 0x48],0x200    ; 0049e743
    MOV dword ptr [EAX + 0x60],0x256    ; 0049e74a
    MOV dword ptr [EAX + 0x64],0x256    ; 0049e751
    MOV dword ptr [EAX + 0x44],0x255    ; 0049e758
    MOV dword ptr [EAX + 0x40],0x255    ; 0049e75f
    MOV dword ptr [EAX + 0x58],0x12     ; 0049e766
    MOV dword ptr [EAX + 0x5c],0x22     ; 0049e76d
    MOV dword ptr [EAX + 0x50],0x10     ; 0049e774
    MOV dword ptr [EAX + 0xc4],0x2      ; 0049e77b
    MOV dword ptr [EAX + 0x28],0x11     ; 0049e785
    CMP dword ptr [EAX + 0xbc],0x2      ; 0049e78c
    JZ 0x0049e796                       ; 0049e793
        ;   XREF to: 0049e796 (CONDITIONAL_JUMP)  ; LAB_0049e796
    RET                                 ; 0049e795
    MOV dword ptr [EAX + 0x58],0x203    ; 0049e796
        ;   Label: LAB_0049e796
    MOV dword ptr [EAX + 0x4c],0x204    ; 0049e79d
    MOV dword ptr [EAX + 0x44],0x251    ; 0049e7a4
    MOV dword ptr [EAX + 0x40],0x252    ; 0049e7ab
    MOV dword ptr [EAX + 0x28],0x253    ; 0049e7b2
    MOV dword ptr [EAX + 0x2c],0x254    ; 0049e7b9
    MOV dword ptr [EAX + 0x48],0x202    ; 0049e7c0
    RET                                 ; 0049e7c7


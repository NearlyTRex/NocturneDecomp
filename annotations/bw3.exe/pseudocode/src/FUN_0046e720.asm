; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046e720(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_004512f0 at 00451325
;
; Referenced Globals:
;   undefined4 DAT_005fba44
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;   undefined4 DAT_01c6b5a0
;   undefined4 DAT_01c6b5a4
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;   undefined4 DAT_01c6e2cc
;   undefined4 DAT_01c6e2d0
;   undefined4 DAT_01c6e2d4
;   undefined4 DAT_01c6e2d8
;   undefined4 DAT_01c6e2dc
;   undefined4 DAT_01c6e2e0
;   ... and 21 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046e720
        ;   Label: FUN_0046e720
    MOV EDX,dword ptr [EAX]             ; 0046e724
    MOV dword ptr [0x01c6b598],EDX      ; 0046e726 | DAT_01c6b598
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046e72c
    MOV dword ptr [0x01c6b59c],EDX      ; 0046e72f | DAT_01c6b59c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046e735
    MOV dword ptr [0x01c6b5a0],EDX      ; 0046e738 | DAT_01c6b5a0
    MOV EDX,dword ptr [EAX + 0xc]       ; 0046e73e
    MOV dword ptr [0x01c6b5a4],EDX      ; 0046e741 | DAT_01c6b5a4
    MOV EDX,dword ptr [EAX + 0x10]      ; 0046e747
    MOV dword ptr [0x01c6e2d8],EDX      ; 0046e74a | DAT_01c6e2d8
    MOV EDX,dword ptr [EAX + 0x14]      ; 0046e750
    MOV dword ptr [0x01c6e2dc],EDX      ; 0046e753 | DAT_01c6e2dc
    MOV EDX,dword ptr [EAX + 0x18]      ; 0046e759
    MOV dword ptr [0x01c6e2e0],EDX      ; 0046e75c | DAT_01c6e2e0
    MOV EDX,dword ptr [EAX + 0x1c]      ; 0046e762
    MOV dword ptr [0x01c6e2e4],EDX      ; 0046e765 | DAT_01c6e2e4
    MOV EDX,dword ptr [EAX + 0x20]      ; 0046e76b
    MOV dword ptr [0x01c6e2e8],EDX      ; 0046e76e | DAT_01c6e2e8
    MOV EDX,dword ptr [EAX + 0x24]      ; 0046e774
    MOV dword ptr [0x01c6e2ec],EDX      ; 0046e777 | DAT_01c6e2ec
    MOV EDX,dword ptr [EAX + 0x28]      ; 0046e77d
    MOV dword ptr [0x01c6b5a8],EDX      ; 0046e780 | DAT_01c6b5a8
    MOV EDX,dword ptr [EAX + 0x2c]      ; 0046e786
    MOV dword ptr [0x01c6b5b0],EDX      ; 0046e789 | DAT_01c6b5b0
    MOV EDX,dword ptr [EAX + 0x30]      ; 0046e78f
    MOV dword ptr [0x01c6b5ac],EDX      ; 0046e792 | DAT_01c6b5ac
    MOV EDX,dword ptr [EAX + 0x34]      ; 0046e798
    MOV dword ptr [0x01c6b5b4],EDX      ; 0046e79b | DAT_01c6b5b4
    MOV EDX,dword ptr [EAX + 0x38]      ; 0046e7a1
    MOV dword ptr [0x01c6e2cc],EDX      ; 0046e7a4 | DAT_01c6e2cc
    MOV EDX,dword ptr [EAX + 0x3c]      ; 0046e7aa
    MOV dword ptr [0x01c6e2d0],EDX      ; 0046e7ad | DAT_01c6e2d0
    MOV EDX,dword ptr [EAX + 0x40]      ; 0046e7b3
    MOV dword ptr [0x01c6e2d4],EDX      ; 0046e7b6 | DAT_01c6e2d4
    MOV EDX,dword ptr [EAX + 0x44]      ; 0046e7bc
    MOV dword ptr [0x01c6e2fc],EDX      ; 0046e7bf | DAT_01c6e2fc
    MOV EDX,dword ptr [EAX + 0x48]      ; 0046e7c5
    MOV dword ptr [0x01c6e300],EDX      ; 0046e7c8 | DAT_01c6e300
    MOV EDX,dword ptr [EAX + 0x4c]      ; 0046e7ce
    MOV dword ptr [0x01c6e304],EDX      ; 0046e7d1 | DAT_01c6e304
    MOV EDX,dword ptr [EAX + 0x50]      ; 0046e7d7
    MOV dword ptr [0x01c6e308],EDX      ; 0046e7da | DAT_01c6e308
    MOV EDX,dword ptr [EAX + 0x54]      ; 0046e7e0
    MOV dword ptr [0x01c6e30c],EDX      ; 0046e7e3 | DAT_01c6e30c
    MOV EDX,dword ptr [EAX + 0x58]      ; 0046e7e9
    MOV dword ptr [0x01c6e310],EDX      ; 0046e7ec | DAT_01c6e310
    MOV EDX,dword ptr [EAX + 0x5c]      ; 0046e7f2
    MOV dword ptr [0x01c6e314],EDX      ; 0046e7f5 | DAT_01c6e314
    MOV EDX,dword ptr [EAX + 0x60]      ; 0046e7fb
    MOV dword ptr [0x01c6e318],EDX      ; 0046e7fe | DAT_01c6e318
    MOV EDX,dword ptr [EAX + 0x64]      ; 0046e804
    MOV dword ptr [0x01c6e31c],EDX      ; 0046e807 | DAT_01c6e31c
    MOV EDX,dword ptr [EAX + 0x68]      ; 0046e80d
    MOV dword ptr [0x01d72644],EDX      ; 0046e810 | DAT_01d72644
    MOV EDX,dword ptr [EAX + 0x6c]      ; 0046e816
    MOV dword ptr [0x01d72648],EDX      ; 0046e819 | DAT_01d72648
    MOV EDX,dword ptr [EAX + 0x70]      ; 0046e81f
    MOV dword ptr [0x01d7264c],EDX      ; 0046e822 | DAT_01d7264c
    MOV EDX,dword ptr [EAX + 0x74]      ; 0046e828
    MOV dword ptr [0x01d72650],EDX      ; 0046e82b | DAT_01d72650
    MOV EDX,dword ptr [EAX + 0x78]      ; 0046e831
    MOV dword ptr [0x01d72654],EDX      ; 0046e834 | DAT_01d72654
    MOV EDX,dword ptr [EAX + 0x7c]      ; 0046e83a
    MOV dword ptr [0x01d72658],EDX      ; 0046e83d | DAT_01d72658
    MOV EDX,dword ptr [EAX + 0x80]      ; 0046e843
    MOV dword ptr [0x01d7265c],EDX      ; 0046e849 | DAT_01d7265c
    MOV EDX,dword ptr [EAX + 0x84]      ; 0046e84f
    MOV dword ptr [0x01d72660],EDX      ; 0046e855 | DAT_01d72660
    MOV EDX,dword ptr [EAX + 0x88]      ; 0046e85b
    MOV EAX,dword ptr [EAX + 0x8c]      ; 0046e861
    MOV dword ptr [0x01d72664],EDX      ; 0046e867 | DAT_01d72664
    MOV [0x005fba44],EAX                ; 0046e86d | DAT_005fba44
    RET                                 ; 0046e872


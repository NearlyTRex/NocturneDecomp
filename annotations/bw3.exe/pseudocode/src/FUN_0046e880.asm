; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046e880(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[2]:
;   FUN_00449840 at 0044998b
;   FUN_004512f0 at 00451307
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

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046e880
        ;   Label: FUN_0046e880
    MOV EDX,dword ptr [0x01c6b598]      ; 0046e884 | DAT_01c6b598
    MOV dword ptr [EAX],EDX             ; 0046e88a
    MOV EDX,dword ptr [0x01c6b59c]      ; 0046e88c | DAT_01c6b59c
    MOV dword ptr [EAX + 0x4],EDX       ; 0046e892
    MOV EDX,dword ptr [0x01c6b5a0]      ; 0046e895 | DAT_01c6b5a0
    MOV dword ptr [EAX + 0x8],EDX       ; 0046e89b
    MOV EDX,dword ptr [0x01c6b5a4]      ; 0046e89e | DAT_01c6b5a4
    MOV dword ptr [EAX + 0xc],EDX       ; 0046e8a4
    MOV EDX,dword ptr [0x01c6e2d8]      ; 0046e8a7 | DAT_01c6e2d8
    MOV dword ptr [EAX + 0x10],EDX      ; 0046e8ad
    MOV EDX,dword ptr [0x01c6e2dc]      ; 0046e8b0 | DAT_01c6e2dc
    MOV dword ptr [EAX + 0x14],EDX      ; 0046e8b6
    MOV EDX,dword ptr [0x01c6e2e0]      ; 0046e8b9 | DAT_01c6e2e0
    MOV dword ptr [EAX + 0x18],EDX      ; 0046e8bf
    MOV EDX,dword ptr [0x01c6e2e4]      ; 0046e8c2 | DAT_01c6e2e4
    MOV dword ptr [EAX + 0x1c],EDX      ; 0046e8c8
    MOV EDX,dword ptr [0x01c6e2e8]      ; 0046e8cb | DAT_01c6e2e8
    MOV dword ptr [EAX + 0x20],EDX      ; 0046e8d1
    MOV EDX,dword ptr [0x01c6e2ec]      ; 0046e8d4 | DAT_01c6e2ec
    MOV dword ptr [EAX + 0x24],EDX      ; 0046e8da
    MOV EDX,dword ptr [0x01c6b5a8]      ; 0046e8dd | DAT_01c6b5a8
    MOV dword ptr [EAX + 0x28],EDX      ; 0046e8e3
    MOV EDX,dword ptr [0x01c6b5b0]      ; 0046e8e6 | DAT_01c6b5b0
    MOV dword ptr [EAX + 0x2c],EDX      ; 0046e8ec
    MOV EDX,dword ptr [0x01c6b5ac]      ; 0046e8ef | DAT_01c6b5ac
    MOV dword ptr [EAX + 0x30],EDX      ; 0046e8f5
    MOV EDX,dword ptr [0x01c6b5b4]      ; 0046e8f8 | DAT_01c6b5b4
    MOV dword ptr [EAX + 0x34],EDX      ; 0046e8fe
    MOV EDX,dword ptr [0x01c6e2cc]      ; 0046e901 | DAT_01c6e2cc
    MOV dword ptr [EAX + 0x38],EDX      ; 0046e907
    MOV EDX,dword ptr [0x01c6e2d0]      ; 0046e90a | DAT_01c6e2d0
    MOV dword ptr [EAX + 0x3c],EDX      ; 0046e910
    MOV EDX,dword ptr [0x01c6e2d4]      ; 0046e913 | DAT_01c6e2d4
    MOV dword ptr [EAX + 0x40],EDX      ; 0046e919
    MOV EDX,dword ptr [0x01c6e2fc]      ; 0046e91c | DAT_01c6e2fc
    MOV dword ptr [EAX + 0x44],EDX      ; 0046e922
    MOV EDX,dword ptr [0x01c6e300]      ; 0046e925 | DAT_01c6e300
    MOV dword ptr [EAX + 0x48],EDX      ; 0046e92b
    MOV EDX,dword ptr [0x01c6e304]      ; 0046e92e | DAT_01c6e304
    MOV dword ptr [EAX + 0x4c],EDX      ; 0046e934
    MOV EDX,dword ptr [0x01c6e308]      ; 0046e937 | DAT_01c6e308
    MOV dword ptr [EAX + 0x50],EDX      ; 0046e93d
    MOV EDX,dword ptr [0x01c6e30c]      ; 0046e940 | DAT_01c6e30c
    MOV dword ptr [EAX + 0x54],EDX      ; 0046e946
    MOV EDX,dword ptr [0x01c6e310]      ; 0046e949 | DAT_01c6e310
    MOV dword ptr [EAX + 0x58],EDX      ; 0046e94f
    MOV EDX,dword ptr [0x01c6e314]      ; 0046e952 | DAT_01c6e314
    MOV dword ptr [EAX + 0x5c],EDX      ; 0046e958
    MOV EDX,dword ptr [0x01c6e318]      ; 0046e95b | DAT_01c6e318
    MOV dword ptr [EAX + 0x60],EDX      ; 0046e961
    MOV EDX,dword ptr [0x01c6e31c]      ; 0046e964 | DAT_01c6e31c
    MOV dword ptr [EAX + 0x64],EDX      ; 0046e96a
    MOV EDX,dword ptr [0x01d72644]      ; 0046e96d | DAT_01d72644
    MOV dword ptr [EAX + 0x68],EDX      ; 0046e973
    MOV EDX,dword ptr [0x01d72648]      ; 0046e976 | DAT_01d72648
    MOV dword ptr [EAX + 0x6c],EDX      ; 0046e97c
    MOV EDX,dword ptr [0x01d7264c]      ; 0046e97f | DAT_01d7264c
    MOV dword ptr [EAX + 0x70],EDX      ; 0046e985
    MOV EDX,dword ptr [0x01d72650]      ; 0046e988 | DAT_01d72650
    MOV dword ptr [EAX + 0x74],EDX      ; 0046e98e
    MOV EDX,dword ptr [0x01d72654]      ; 0046e991 | DAT_01d72654
    MOV dword ptr [EAX + 0x78],EDX      ; 0046e997
    MOV EDX,dword ptr [0x01d72658]      ; 0046e99a | DAT_01d72658
    MOV dword ptr [EAX + 0x7c],EDX      ; 0046e9a0
    MOV EDX,dword ptr [0x01d7265c]      ; 0046e9a3 | DAT_01d7265c
    MOV dword ptr [EAX + 0x80],EDX      ; 0046e9a9
    MOV EDX,dword ptr [0x01d72660]      ; 0046e9af | DAT_01d72660
    MOV dword ptr [EAX + 0x84],EDX      ; 0046e9b5
    MOV EDX,dword ptr [0x01d72664]      ; 0046e9bb | DAT_01d72664
    MOV dword ptr [EAX + 0x88],EDX      ; 0046e9c1
    MOV EDX,dword ptr [0x005fba44]      ; 0046e9c7 | DAT_005fba44
    MOV dword ptr [EAX + 0x8c],EDX      ; 0046e9cd
    RET                                 ; 0046e9d3


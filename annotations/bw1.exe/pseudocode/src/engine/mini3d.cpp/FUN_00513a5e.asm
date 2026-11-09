; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00513a5e(float *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d224ec
;   undefined4 DAT_01d224f0
;   undefined4 DAT_01d224f4
;   undefined4 DAT_01d224f8
;   undefined4 DAT_01d224fc
;   undefined4 DAT_01d22500
;   undefined4 DAT_01d22504
;   undefined4 DAT_01d22508
;   undefined4 DAT_01d2250c
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 00513a5e
        ;   Label: engine_mini3d.cpp_FUN_00513a5e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00513a60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00513a64
    FLD float ptr [EAX + 0x4]           ; 00513a68
    FMUL float ptr [0x01d224f8]         ; 00513a6b | DAT_01d224f8
    FLD float ptr [EAX]                 ; 00513a71
    FMUL float ptr [0x01d224ec]         ; 00513a73 | DAT_01d224ec
    FADDP                               ; 00513a79
    FLD float ptr [EAX + 0x8]           ; 00513a7b
    FMUL float ptr [0x01d22504]         ; 00513a7e | DAT_01d22504
    FADDP                               ; 00513a84
    FSTP float ptr [EDX]                ; 00513a86
    FLD float ptr [EAX + 0x4]           ; 00513a88
    FMUL float ptr [0x01d224fc]         ; 00513a8b | DAT_01d224fc
    FLD float ptr [EAX]                 ; 00513a91
    FMUL float ptr [0x01d224f0]         ; 00513a93 | DAT_01d224f0
    FADDP                               ; 00513a99
    FLD float ptr [EAX + 0x8]           ; 00513a9b
    FMUL float ptr [0x01d22508]         ; 00513a9e | DAT_01d22508
    FADDP                               ; 00513aa4
    FSTP float ptr [EDX + 0x4]          ; 00513aa6
    FLD float ptr [EAX + 0x4]           ; 00513aa9
    FMUL float ptr [0x01d22500]         ; 00513aac | DAT_01d22500
    FLD float ptr [EAX]                 ; 00513ab2
    FMUL float ptr [0x01d224f4]         ; 00513ab4 | DAT_01d224f4
    FADDP                               ; 00513aba
    FLD float ptr [EAX + 0x8]           ; 00513abc
    FMUL float ptr [0x01d2250c]         ; 00513abf | DAT_01d2250c
    FADDP                               ; 00513ac5
    FSTP float ptr [EDX + 0x8]          ; 00513ac7
    RET                                 ; 00513aca


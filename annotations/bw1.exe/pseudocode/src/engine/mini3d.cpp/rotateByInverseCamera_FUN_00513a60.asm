; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_rotateByInverseCamera_FUN_00513a60(CVector3f *input,CVector3f *output)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   input
; CVector3f *      Stack[0x8]:4   output
;
; Referenced Globals:
;   float g_FLOAT_01d224ec
;   float g_FLOAT_01d224f0
;   float g_FLOAT_01d224f4
;   float g_FLOAT_01d224f8
;   float g_FLOAT_01d224fc
;   float g_FLOAT_01d22500
;   float g_FLOAT_01d22504
;   float g_FLOAT_01d22508
;   float g_FLOAT_01d2250c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00513a60
        ;   Label: engine_mini3d.cpp_rotateByInverseCamera_FUN_00513a60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00513a64
    FLD float ptr [EAX + 0x4]           ; 00513a68
    FMUL float ptr [0x01d224f8]         ; 00513a6b | g_FLOAT_01d224f8
    FLD float ptr [EAX]                 ; 00513a71
    FMUL float ptr [0x01d224ec]         ; 00513a73 | g_FLOAT_01d224ec
    FADDP                               ; 00513a79
    FLD float ptr [EAX + 0x8]           ; 00513a7b
    FMUL float ptr [0x01d22504]         ; 00513a7e | g_FLOAT_01d22504
    FADDP                               ; 00513a84
    FSTP float ptr [EDX]                ; 00513a86
    FLD float ptr [EAX + 0x4]           ; 00513a88
    FMUL float ptr [0x01d224fc]         ; 00513a8b | g_FLOAT_01d224fc
    FLD float ptr [EAX]                 ; 00513a91
    FMUL float ptr [0x01d224f0]         ; 00513a93 | g_FLOAT_01d224f0
    FADDP                               ; 00513a99
    FLD float ptr [EAX + 0x8]           ; 00513a9b
    FMUL float ptr [0x01d22508]         ; 00513a9e | g_FLOAT_01d22508
    FADDP                               ; 00513aa4
    FSTP float ptr [EDX + 0x4]          ; 00513aa6
    FLD float ptr [EAX + 0x4]           ; 00513aa9
    FMUL float ptr [0x01d22500]         ; 00513aac | g_FLOAT_01d22500
    FLD float ptr [EAX]                 ; 00513ab2
    FMUL float ptr [0x01d224f4]         ; 00513ab4 | g_FLOAT_01d224f4
    FADDP                               ; 00513aba
    FLD float ptr [EAX + 0x8]           ; 00513abc
    FMUL float ptr [0x01d2250c]         ; 00513abf | g_FLOAT_01d2250c
    FADDP                               ; 00513ac5
    FSTP float ptr [EDX + 0x8]          ; 00513ac7
    RET                                 ; 00513aca


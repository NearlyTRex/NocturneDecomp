; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_rotateByInverseCamera_FUN_004f4d10(CVector3f *input,CVector3f *output)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   input
; CVector3f *      Stack[0x8]:4   output
;
; Referenced Globals:
;   float g_FLOAT_01d0988c
;   float g_FLOAT_01d09890
;   float g_FLOAT_01d09894
;   float g_FLOAT_01d09898
;   float g_FLOAT_01d0989c
;   float g_FLOAT_01d098a0
;   float g_FLOAT_01d098a4
;   float g_FLOAT_01d098a8
;   float g_FLOAT_01d098ac
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f4d10
        ;   Label: engine_mini3d.cpp_rotateByInverseCamera_FUN_004f4d10
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f4d14
    FLD float ptr [EAX + 0x4]           ; 004f4d18
    FMUL float ptr [0x01d09898]         ; 004f4d1b | g_FLOAT_01d09898
    FLD float ptr [EAX]                 ; 004f4d21
    FMUL float ptr [0x01d0988c]         ; 004f4d23 | g_FLOAT_01d0988c
    FADDP                               ; 004f4d29
    FLD float ptr [EAX + 0x8]           ; 004f4d2b
    FMUL float ptr [0x01d098a4]         ; 004f4d2e | g_FLOAT_01d098a4
    FADDP                               ; 004f4d34
    FSTP float ptr [EDX]                ; 004f4d36
    FLD float ptr [EAX + 0x4]           ; 004f4d38
    FMUL float ptr [0x01d0989c]         ; 004f4d3b | g_FLOAT_01d0989c
    FLD float ptr [EAX]                 ; 004f4d41
    FMUL float ptr [0x01d09890]         ; 004f4d43 | g_FLOAT_01d09890
    FADDP                               ; 004f4d49
    FLD float ptr [EAX + 0x8]           ; 004f4d4b
    FMUL float ptr [0x01d098a8]         ; 004f4d4e | g_FLOAT_01d098a8
    FADDP                               ; 004f4d54
    FSTP float ptr [EDX + 0x4]          ; 004f4d56
    FLD float ptr [EAX + 0x4]           ; 004f4d59
    FMUL float ptr [0x01d098a0]         ; 004f4d5c | g_FLOAT_01d098a0
    FLD float ptr [EAX]                 ; 004f4d62
    FMUL float ptr [0x01d09894]         ; 004f4d64 | g_FLOAT_01d09894
    FADDP                               ; 004f4d6a
    FLD float ptr [EAX + 0x8]           ; 004f4d6c
    FMUL float ptr [0x01d098ac]         ; 004f4d6f | g_FLOAT_01d098ac
    FADDP                               ; 004f4d75
    FSTP float ptr [EDX + 0x8]          ; 004f4d77
    RET                                 ; 004f4d7a


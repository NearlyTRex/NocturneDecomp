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
;   undefined4 DAT_01d0988c
;   undefined4 DAT_01d09890
;   undefined4 DAT_01d09894
;   undefined4 DAT_01d09898
;   undefined4 DAT_01d0989c
;   undefined4 DAT_01d098a0
;   undefined4 DAT_01d098a4
;   undefined4 DAT_01d098a8
;   undefined4 DAT_01d098ac
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f4d10
        ;   Label: engine_mini3d.cpp_rotateByInverseCamera_FUN_004f4d10
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f4d14
    FLD float ptr [EAX + 0x4]           ; 004f4d18
    FMUL float ptr [0x01d09898]         ; 004f4d1b | DAT_01d09898
    FLD float ptr [EAX]                 ; 004f4d21
    FMUL float ptr [0x01d0988c]         ; 004f4d23 | DAT_01d0988c
    FADDP                               ; 004f4d29
    FLD float ptr [EAX + 0x8]           ; 004f4d2b
    FMUL float ptr [0x01d098a4]         ; 004f4d2e | DAT_01d098a4
    FADDP                               ; 004f4d34
    FSTP float ptr [EDX]                ; 004f4d36
    FLD float ptr [EAX + 0x4]           ; 004f4d38
    FMUL float ptr [0x01d0989c]         ; 004f4d3b | DAT_01d0989c
    FLD float ptr [EAX]                 ; 004f4d41
    FMUL float ptr [0x01d09890]         ; 004f4d43 | DAT_01d09890
    FADDP                               ; 004f4d49
    FLD float ptr [EAX + 0x8]           ; 004f4d4b
    FMUL float ptr [0x01d098a8]         ; 004f4d4e | DAT_01d098a8
    FADDP                               ; 004f4d54
    FSTP float ptr [EDX + 0x4]          ; 004f4d56
    FLD float ptr [EAX + 0x4]           ; 004f4d59
    FMUL float ptr [0x01d098a0]         ; 004f4d5c | DAT_01d098a0
    FLD float ptr [EAX]                 ; 004f4d62
    FMUL float ptr [0x01d09894]         ; 004f4d64 | DAT_01d09894
    FADDP                               ; 004f4d6a
    FLD float ptr [EAX + 0x8]           ; 004f4d6c
    FMUL float ptr [0x01d098ac]         ; 004f4d6f | DAT_01d098ac
    FADDP                               ; 004f4d75
    FSTP float ptr [EDX + 0x8]          ; 004f4d77
    RET                                 ; 004f4d7a


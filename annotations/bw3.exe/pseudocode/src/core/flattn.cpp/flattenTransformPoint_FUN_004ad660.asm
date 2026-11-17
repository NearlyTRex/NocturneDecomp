; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flattn_cpp_flattenTransformPoint_FUN_004ad660(CVector3f *point_out,CVector3f *point_in)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point_out
; CVector3f *      Stack[0x8]:4   point_in
;
; Referenced Globals:
;   float g_FLOAT_01d1a0ac
;   float g_FLOAT_01d1a0b0
;   float g_FLOAT_01d1a0b4
;   float g_FLOAT_01d1a0b8
;   float g_FLOAT_01d1a0bc
;   float g_FLOAT_01d1a0c0
;   float g_FLOAT_01d1a0c4
;   float g_FLOAT_01d1a0c8
;   float g_FLOAT_01d1a0cc
;   float g_FLOAT_01d1a0d0
;   float g_FLOAT_01d1a0d4
;   float g_FLOAT_01d1a0d8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ad660
        ;   Label: core_flattn.cpp_flattenTransformPoint_FUN_004ad660
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ad664
    FLD float ptr [EAX + 0x4]           ; 004ad668
    FMUL float ptr [0x01d1a0b0]         ; 004ad66b | g_FLOAT_01d1a0b0
    FLD float ptr [EAX]                 ; 004ad671
    FMUL float ptr [0x01d1a0ac]         ; 004ad673 | g_FLOAT_01d1a0ac
    FADDP                               ; 004ad679
    FLD float ptr [EAX + 0x8]           ; 004ad67b
    FMUL float ptr [0x01d1a0b4]         ; 004ad67e | g_FLOAT_01d1a0b4
    FADDP                               ; 004ad684
    FADD float ptr [0x01d1a0d0]         ; 004ad686 | g_FLOAT_01d1a0d0
    FSTP float ptr [EDX]                ; 004ad68c
    FLD float ptr [EAX + 0x4]           ; 004ad68e
    FMUL float ptr [0x01d1a0bc]         ; 004ad691 | g_FLOAT_01d1a0bc
    FLD float ptr [EAX]                 ; 004ad697
    FMUL float ptr [0x01d1a0b8]         ; 004ad699 | g_FLOAT_01d1a0b8
    FADDP                               ; 004ad69f
    FLD float ptr [EAX + 0x8]           ; 004ad6a1
    FMUL float ptr [0x01d1a0c0]         ; 004ad6a4 | g_FLOAT_01d1a0c0
    FADDP                               ; 004ad6aa
    FADD float ptr [0x01d1a0d4]         ; 004ad6ac | g_FLOAT_01d1a0d4
    FSTP float ptr [EDX + 0x4]          ; 004ad6b2
    FLD float ptr [EAX + 0x4]           ; 004ad6b5
    FMUL float ptr [0x01d1a0c8]         ; 004ad6b8 | g_FLOAT_01d1a0c8
    FLD float ptr [EAX]                 ; 004ad6be
    FMUL float ptr [0x01d1a0c4]         ; 004ad6c0 | g_FLOAT_01d1a0c4
    FADDP                               ; 004ad6c6
    FLD float ptr [EAX + 0x8]           ; 004ad6c8
    FMUL float ptr [0x01d1a0cc]         ; 004ad6cb | g_FLOAT_01d1a0cc
    FADDP                               ; 004ad6d1
    FADD float ptr [0x01d1a0d8]         ; 004ad6d3 | g_FLOAT_01d1a0d8
    FSTP float ptr [EDX + 0x8]          ; 004ad6d9
    RET                                 ; 004ad6dc


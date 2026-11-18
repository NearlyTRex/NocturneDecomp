; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flattn_cpp_flattenTransformVector_FUN_004a69c0(CVector3f *vector_out,CVector3f *vector_in)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   vector_out
; CVector3f *      Stack[0x8]:4   vector_in
;
; Referenced Globals:
;   float g_FLOAT_01caf5bc
;   float g_FLOAT_01caf5c0
;   float g_FLOAT_01caf5c4
;   float g_FLOAT_01caf5c8
;   float g_FLOAT_01caf5cc
;   float g_FLOAT_01caf5d0
;   float g_FLOAT_01caf5d4
;   float g_FLOAT_01caf5d8
;   float g_FLOAT_01caf5dc
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a69c0
        ;   Label: core_flattn.cpp_flattenTransformVector_FUN_004a69c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a69c4
    FLD float ptr [EAX + 0x4]           ; 004a69c8
    FMUL float ptr [0x01caf5c0]         ; 004a69cb | g_FLOAT_01caf5c0
    FLD float ptr [EAX]                 ; 004a69d1
    FMUL float ptr [0x01caf5bc]         ; 004a69d3 | g_FLOAT_01caf5bc
    FADDP                               ; 004a69d9
    FLD float ptr [EAX + 0x8]           ; 004a69db
    FMUL float ptr [0x01caf5c4]         ; 004a69de | g_FLOAT_01caf5c4
    FADDP                               ; 004a69e4
    FSTP float ptr [EDX]                ; 004a69e6
    FLD float ptr [EAX + 0x4]           ; 004a69e8
    FMUL float ptr [0x01caf5cc]         ; 004a69eb | g_FLOAT_01caf5cc
    FLD float ptr [EAX]                 ; 004a69f1
    FMUL float ptr [0x01caf5c8]         ; 004a69f3 | g_FLOAT_01caf5c8
    FADDP                               ; 004a69f9
    FLD float ptr [EAX + 0x8]           ; 004a69fb
    FMUL float ptr [0x01caf5d0]         ; 004a69fe | g_FLOAT_01caf5d0
    FADDP                               ; 004a6a04
    FSTP float ptr [EDX + 0x4]          ; 004a6a06
    FLD float ptr [EAX + 0x4]           ; 004a6a09
    FMUL float ptr [0x01caf5d8]         ; 004a6a0c | g_FLOAT_01caf5d8
    FLD float ptr [EAX]                 ; 004a6a12
    FMUL float ptr [0x01caf5d4]         ; 004a6a14 | g_FLOAT_01caf5d4
    FADDP                               ; 004a6a1a
    FLD float ptr [EAX + 0x8]           ; 004a6a1c
    FMUL float ptr [0x01caf5dc]         ; 004a6a1f | g_FLOAT_01caf5dc
    FADDP                               ; 004a6a25
    FSTP float ptr [EDX + 0x8]          ; 004a6a27
    RET                                 ; 004a6a2a


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_water_cpp_calculateWaveHeight_FUN_00585d60(int x,int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
;
; Referenced Globals:
;   float g_FLOAT_005ede86 = 3.141593
;   double g_DOUBLE_005ede8e = 0.5
;   float g_FLOAT_0061e524 = 0.25
;   float g_WaterAnimationPhase
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00585d60
        ;   Label: core_water.cpp_calculateWaveHeight_FUN_00585d60
    MOV EAX,dword ptr [ESP + 0x10]      ; 00585d63
    MOV dword ptr [ESP + 0x4],EAX       ; 00585d67
    FLD float ptr [0x005ede86]          ; 00585d6b | g_FLOAT_005ede86
    FILD dword ptr [ESP + 0x4]          ; 00585d71
    FMUL ST1                            ; 00585d75
    MOV EAX,dword ptr [ESP + 0xc]       ; 00585d77
    FMUL double ptr [0x005ede8e]        ; 00585d7b | g_DOUBLE_005ede8e
    MOV dword ptr [ESP + 0x4],EAX       ; 00585d81
    FILD dword ptr [ESP + 0x4]          ; 00585d85
    FMULP ST2                           ; 00585d89
    FADDP                               ; 00585d8b
    FADD float ptr [0x0265b7e8]         ; 00585d8d | g_WaterAnimationPhase
    FSIN                                ; 00585d93
    FMUL float ptr [0x0061e524]         ; 00585d95 | g_FLOAT_0061e524
    FSTP float ptr [ESP]                ; 00585d9b
    MOV EAX,dword ptr [ESP]             ; 00585d9e
    ADD ESP,0x8                         ; 00585da1
    RET                                 ; 00585da4


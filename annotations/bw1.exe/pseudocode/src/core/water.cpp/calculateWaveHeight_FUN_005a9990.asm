; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_water_cpp_calculateWaveHeight_FUN_005a9990(int x,int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
;
; Referenced Globals:
;   float g_FLOAT_005f91e2 = 3.141593
;   double g_DOUBLE_005f91ea = 0.5
;   float g_FLOAT_00625c94 = 0.25
;   float g_WaterAnimationPhase
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005a9990
        ;   Label: core_water.cpp_calculateWaveHeight_FUN_005a9990
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a9993
    MOV dword ptr [ESP + 0x4],EAX       ; 005a9997
    FLD float ptr [0x005f91e2]          ; 005a999b | g_FLOAT_005f91e2
    FILD dword ptr [ESP + 0x4]          ; 005a99a1
    FMUL ST1                            ; 005a99a5
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a99a7
    FMUL double ptr [0x005f91ea]        ; 005a99ab | g_DOUBLE_005f91ea
    MOV dword ptr [ESP + 0x4],EAX       ; 005a99b1
    FILD dword ptr [ESP + 0x4]          ; 005a99b5
    FMULP ST2                           ; 005a99b9
    FADDP                               ; 005a99bb
    FADD float ptr [0x02c93008]         ; 005a99bd | g_WaterAnimationPhase
    FSIN                                ; 005a99c3
    FMUL float ptr [0x00625c94]         ; 005a99c5 | g_FLOAT_00625c94
    FSTP float ptr [ESP]                ; 005a99cb
    MOV EAX,dword ptr [ESP]             ; 005a99ce
    ADD ESP,0x8                         ; 005a99d1
    RET                                 ; 005a99d4


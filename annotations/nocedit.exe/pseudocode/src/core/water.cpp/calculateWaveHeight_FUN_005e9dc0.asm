; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float core_water.cpp_calculateWaveHeight_FUN_005e9dc0(int x, int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   double DOUBLE_006571af = 3.14159265350000
;   double DOUBLE_006571b7 = 0.5
;   double DOUBLE_006571bf = 0.25
;   float g_WaterAnimationPhase
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005e9dc0
        ;   Label: core_water.cpp_calculateWaveHeight_FUN_005e9dc0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005e9dc3
    MOV dword ptr [ESP + 0x4],EAX       ; 005e9dc7
    FLD double ptr [0x006571af]         ; 005e9dcb | DOUBLE_006571af
    FILD dword ptr [ESP + 0x4]          ; 005e9dd1
    FMUL ST1                            ; 005e9dd5
    MOV EAX,dword ptr [ESP + 0xc]       ; 005e9dd7
    FMUL double ptr [0x006571b7]        ; 005e9ddb | DOUBLE_006571b7
    MOV dword ptr [ESP + 0x4],EAX       ; 005e9de1
    FILD dword ptr [ESP + 0x4]          ; 005e9de5
    FMULP ST2                           ; 005e9de9
    FADDP                               ; 005e9deb
    FADD float ptr [0x03f8f630]         ; 005e9ded | g_WaterAnimationPhase
    FSIN                                ; 005e9df3
    FMUL double ptr [0x006571bf]        ; 005e9df5 | DOUBLE_006571bf
    FSTP float ptr [ESP]                ; 005e9dfb
    MOV EAX,dword ptr [ESP]             ; 005e9dfe
    ADD ESP,0x8                         ; 005e9e01
    RET                                 ; 005e9e04


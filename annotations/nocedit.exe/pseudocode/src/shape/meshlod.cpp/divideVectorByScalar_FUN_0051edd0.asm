; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_divideVectorByScalar_FUN_0051edd0(CVector3f * vector, float * divisor)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   vector
; float *          Stack[0x8]:4   divisor
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051edd0
        ;   Label: shape_meshlod.cpp_divideVectorByScalar_FUN_0051edd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0051edd4
    FLD float ptr [EDX]                 ; 0051edd8
    FDIVR float ptr [EAX]               ; 0051edda
    FSTP float ptr [EAX]                ; 0051eddc
    FLD float ptr [EDX]                 ; 0051edde
    FDIVR float ptr [EAX + 0x4]         ; 0051ede0
    FSTP float ptr [EAX + 0x4]          ; 0051ede3
    FLD float ptr [EDX]                 ; 0051ede6
    FDIVR float ptr [EAX + 0x8]         ; 0051ede8
    FSTP float ptr [EAX + 0x8]          ; 0051edeb
    RET                                 ; 0051edee


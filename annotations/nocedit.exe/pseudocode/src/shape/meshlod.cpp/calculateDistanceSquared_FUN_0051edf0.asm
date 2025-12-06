; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float shape_meshlod.cpp_calculateDistanceSquared_FUN_0051edf0(CVector3f * point1, CVector3f * point2)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point1
; CVector3f *      Stack[0x8]:4   point2
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0051edf0
        ;   Label: shape_meshlod.cpp_calculateDistanceSquared_FUN_0051edf0
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051edf3
    MOV EAX,dword ptr [ESP + 0x18]      ; 0051edf7
    FLD float ptr [EDX]                 ; 0051edfb
    FSUB float ptr [EAX]                ; 0051edfd
    FMUL ST0                            ; 0051edff
    FLD float ptr [EDX + 0x4]           ; 0051ee01
    FSUB float ptr [EAX + 0x4]          ; 0051ee04
    FMUL ST0                            ; 0051ee07
    FLD float ptr [EDX + 0x8]           ; 0051ee09
    FXCH                                ; 0051ee0c
    FADDP ST2,ST0                       ; 0051ee0e
    FSUB float ptr [EAX + 0x8]          ; 0051ee10
    FMUL ST0                            ; 0051ee13
    FADDP                               ; 0051ee15
    FSTP float ptr [ESP + 0x4]          ; 0051ee17
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051ee1b
    ADD ESP,0x10                        ; 0051ee1f
    RET                                 ; 0051ee22


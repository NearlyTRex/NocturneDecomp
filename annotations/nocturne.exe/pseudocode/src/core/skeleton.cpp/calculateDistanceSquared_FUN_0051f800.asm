; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_skeleton_cpp_calculateDistanceSquared_FUN_0051f800(CVector3f *point1,CVector3f *point2)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point1
; CVector3f *      Stack[0x8]:4   point2
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0051f800
        ;   Label: core_skeleton.cpp_calculateDistanceSquared_FUN_0051f800
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051f803
    MOV EAX,dword ptr [ESP + 0x18]      ; 0051f807
    FLD float ptr [EDX]                 ; 0051f80b
    FSUB float ptr [EAX]                ; 0051f80d
    FMUL ST0                            ; 0051f80f
    FLD float ptr [EDX + 0x4]           ; 0051f811
    FSUB float ptr [EAX + 0x4]          ; 0051f814
    FMUL ST0                            ; 0051f817
    FLD float ptr [EDX + 0x8]           ; 0051f819
    FXCH                                ; 0051f81c
    FADDP ST2,ST0                       ; 0051f81e
    FSUB float ptr [EAX + 0x8]          ; 0051f820
    FMUL ST0                            ; 0051f823
    FADDP                               ; 0051f825
    FSTP float ptr [ESP + 0x4]          ; 0051f827
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051f82b
    ADD ESP,0x10                        ; 0051f82f
    RET                                 ; 0051f832


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_confedrt_cpp_getDistanceXZ_FUN_005a1ab0(CVector3f *point_a,CVector3f *point_b)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point_a
; CVector3f *      Stack[0x8]:4   point_b
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005a1ab0
        ;   Label: core_confedrt.cpp_getDistanceXZ_FUN_005a1ab0
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a1ab3
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a1ab7
    FLD float ptr [EDX]                 ; 005a1abb
    FSUB float ptr [EAX]                ; 005a1abd
    FMUL ST0                            ; 005a1abf
    FLD float ptr [EDX + 0x8]           ; 005a1ac1
    FSUB float ptr [EAX + 0x8]          ; 005a1ac4
    FMUL ST0                            ; 005a1ac7
    FADDP                               ; 005a1ac9
    FSQRT                               ; 005a1acb
    FSTP float ptr [ESP + 0x4]          ; 005a1acd
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a1ad1
    ADD ESP,0xc                         ; 005a1ad5
    RET                                 ; 005a1ad8


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_skeleton_cpp_calculateDistanceSquared_FUN_005504e0(CVector3f *point1,CVector3f *point2)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point1
; CVector3f *      Stack[0x8]:4   point2
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 005504e0
        ;   Label: core_skeleton.cpp_calculateDistanceSquared_FUN_005504e0
    MOV EDX,dword ptr [ESP + 0x14]      ; 005504e3
    MOV EAX,dword ptr [ESP + 0x18]      ; 005504e7
    FLD float ptr [EDX]                 ; 005504eb
    FSUB float ptr [EAX]                ; 005504ed
    FMUL ST0                            ; 005504ef
    FLD float ptr [EDX + 0x4]           ; 005504f1
    FSUB float ptr [EAX + 0x4]          ; 005504f4
    FMUL ST0                            ; 005504f7
    FLD float ptr [EDX + 0x8]           ; 005504f9
    FXCH                                ; 005504fc
    FADDP ST2,ST0                       ; 005504fe
    FSUB float ptr [EAX + 0x8]          ; 00550500
    FMUL ST0                            ; 00550503
    FADDP                               ; 00550505
    FSTP float ptr [ESP + 0x4]          ; 00550507
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055050b
    ADD ESP,0x10                        ; 0055050f
    RET                                 ; 00550512


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_scaleVector_FUN_00417f60(float *param_1,float *param_2,float *param_3)
;
;
; XREF[3]:
;   FUN_004196b0 at 004198be
;   core_mobster.cpp_CMobster_processWeaponPickup_FUN_004dbce0 at 004dbf1f
;   core_zombie.cpp_FUN_00561010 at 00561288
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00417f60
        ;   Label: core_bodypart.cpp_scaleVector_FUN_00417f60
    MOV EAX,dword ptr [ESP + 0x8]       ; 00417f64
    MOV ECX,dword ptr [ESP + 0xc]       ; 00417f68
    FLD float ptr [EDX]                 ; 00417f6c
    FMUL float ptr [ECX]                ; 00417f6e
    FSTP float ptr [EAX]                ; 00417f70
    FLD float ptr [EDX + 0x4]           ; 00417f72
    FMUL float ptr [ECX]                ; 00417f75
    FSTP float ptr [EAX + 0x4]          ; 00417f77
    FLD float ptr [EDX + 0x8]           ; 00417f7a
    FMUL float ptr [ECX]                ; 00417f7d
    FSTP float ptr [EAX + 0x8]          ; 00417f7f
    RET                                 ; 00417f82


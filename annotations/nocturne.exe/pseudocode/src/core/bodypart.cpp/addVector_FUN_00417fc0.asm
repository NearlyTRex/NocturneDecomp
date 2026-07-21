; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_addVector_FUN_00417fc0(float *param_1,float *param_2,float *param_3)
;
;
; XREF[3]:
;   FUN_004196b0 at 004198b5
;   FUN_00561010 at 0056127f
;   core_mobster.cpp_CMobster_processWeaponPickup_FUN_004dbce0 at 004dbf16
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00417fc0
        ;   Label: core_bodypart.cpp_addVector_FUN_00417fc0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00417fc4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00417fc8
    FLD float ptr [EDX]                 ; 00417fcc
    FADD float ptr [ECX]                ; 00417fce
    FSTP float ptr [EAX]                ; 00417fd0
    FLD float ptr [EDX + 0x4]           ; 00417fd2
    FADD float ptr [ECX + 0x4]          ; 00417fd5
    FSTP float ptr [EAX + 0x4]          ; 00417fd8
    FLD float ptr [EDX + 0x8]           ; 00417fdb
    FADD float ptr [ECX + 0x8]          ; 00417fde
    FSTP float ptr [EAX + 0x8]          ; 00417fe1
    RET                                 ; 00417fe4


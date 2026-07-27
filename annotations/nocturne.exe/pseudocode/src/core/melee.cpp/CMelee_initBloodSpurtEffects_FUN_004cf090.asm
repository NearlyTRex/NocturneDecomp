; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_004cf090(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   core_melee.cpp_FUN_004cefe0 at 004cf027
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf090
        ;   Label: core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_004cf090
    MOV dword ptr [EAX + 0x590],0x3f800000 ; 004cf094
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cf09e
    FLD float ptr [EAX + 0x590]         ; 004cf0a2
    MOV dword ptr [EAX + 0x584],EDX     ; 004cf0a8
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cf0ae
    FSTP float ptr [EAX + 0x58c]        ; 004cf0b2
    MOV dword ptr [EAX + 0x588],EDX     ; 004cf0b8
    RET                                 ; 004cf0be


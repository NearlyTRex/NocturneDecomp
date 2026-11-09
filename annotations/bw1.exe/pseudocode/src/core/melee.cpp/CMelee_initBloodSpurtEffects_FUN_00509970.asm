; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_00509970(CMelee *this_ptr,int blood_spurt_count,int blood_gore_type)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   blood_spurt_count
; int              Stack[0xc]:4   blood_gore_type
;
; XREF[1]:
;   core_melee.cpp_FUN_005098d0 at 00509904
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509970
        ;   Label: core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_00509970
    MOV dword ptr [EAX + 0x598],0x3f800000 ; 00509974
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050997e
    FLD float ptr [EAX + 0x598]         ; 00509982
    MOV dword ptr [EAX + 0x58c],EDX     ; 00509988
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050998e
    FSTP float ptr [EAX + 0x594]        ; 00509992
    MOV dword ptr [EAX + 0x590],EDX     ; 00509998
    RET                                 ; 0050999e


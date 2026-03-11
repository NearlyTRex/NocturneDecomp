; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_0050ebe0(CMelee *this_ptr,int blood_spurt_count,int blood_gore_type)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   blood_spurt_count
; int              Stack[0xc]:4   blood_gore_type
;
; XREF[1]:
;   core_melee.cpp_CMelee_playAttackHitEffects_FUN_0050eb50 at 0050eb82
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050ebe0
        ;   Label: core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_0050ebe0
    MOV dword ptr [EAX + 0x598],0x3f800000 ; 0050ebe4
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050ebee
    FLD float ptr [EAX + 0x598]         ; 0050ebf2
    MOV dword ptr [EAX + 0x58c],EDX     ; 0050ebf8
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050ebfe
    FSTP float ptr [EAX + 0x594]        ; 0050ec02
    MOV dword ptr [EAX + 0x590],EDX     ; 0050ec08
    RET                                 ; 0050ec0e


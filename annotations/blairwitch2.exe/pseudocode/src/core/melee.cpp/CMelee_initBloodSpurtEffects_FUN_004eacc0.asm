; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_004eacc0(CMelee *this_ptr,int blood_spurt_count,int blood_gore_type)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   blood_spurt_count
; int              Stack[0xc]:4   blood_gore_type
;
; XREF[1]:
;   core_melee.cpp_CMelee_playAttackHitEffects_FUN_004eac30 at 004eac62
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eacc0
        ;   Label: core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_004eacc0
    MOV dword ptr [EAX + 0x6f4],0x3f800000 ; 004eacc4
    MOV EDX,dword ptr [ESP + 0xc]       ; 004eacce
    FLD float ptr [EAX + 0x6f4]         ; 004eacd2
    MOV dword ptr [EAX + 0x6e8],EDX     ; 004eacd8
    MOV EDX,dword ptr [ESP + 0x8]       ; 004eacde
    FSTP float ptr [EAX + 0x6f0]        ; 004eace2
    MOV dword ptr [EAX + 0x6ec],EDX     ; 004eace8
    RET                                 ; 004eacee


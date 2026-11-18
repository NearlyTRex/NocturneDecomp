; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_weapon_cpp_CWeapon_isSimulating_FUN_0058a5f0(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hero.cpp_CHero_tryInteract_FUN_004cec50 at 004ced95
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0058a5f0
        ;   Label: core_weapon.cpp_CWeapon_isSimulating_FUN_0058a5f0
    FLD float ptr [EAX + 0x6cc]         ; 0058a5f4
    FLDZ                                ; 0058a5fa
    FCOMPP                              ; 0058a5fc
    FNSTSW AX                           ; 0058a5fe
    SAHF                                ; 0058a600
    JNC 0x00589e40                      ; 0058a601
        ;   XREF to: 00589e40 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0058a607
    RET                                 ; 0058a60c


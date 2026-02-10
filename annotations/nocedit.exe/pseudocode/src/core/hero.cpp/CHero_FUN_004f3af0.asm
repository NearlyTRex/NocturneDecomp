; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hero_cpp_CHero_FUN_004f3af0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_kill_FUN_00428e30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3af0
        ;   Label: core_hero.cpp_CHero_FUN_004f3af0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f3af4
    PUSH dword ptr [ESP + 0x10]         ; 004f3af8
    PUSH EDX                            ; 004f3afc
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f3afd
    PUSH ECX                            ; 004f3b01
    PUSH EAX                            ; 004f3b02
    MOV dword ptr [EAX + 0xbe24],0x0    ; 004f3b03
    CALL core_charactr.cpp_CCharacter_kill_FUN_00428e30 ; 004f3b0d
        ;   XREF to: 00428e30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_kill_FUN_00428e30(CCharacter * this_ptr, int damage_type, CVector3f * damage_direction, float impact_force)
    ADD ESP,0x10                        ; 004f3b12
    RET                                 ; 004f3b15


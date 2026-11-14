; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_kill_FUN_004d43e0(CHero *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   damage_type
; CVector3f *      Stack[0xc]:4   damage_direction
; float            Stack[0x10]:4   impact_force
;
; Called Functions:
;   core_charactr.cpp_CCharacter_kill_FUN_0042c0d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d43e0
        ;   Label: core_hero.cpp_CHero_kill_FUN_004d43e0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d43e4
    PUSH dword ptr [ESP + 0x10]         ; 004d43e8
    PUSH EDX                            ; 004d43ec
    MOV ECX,dword ptr [ESP + 0x10]      ; 004d43ed
    PUSH ECX                            ; 004d43f1
    PUSH EAX                            ; 004d43f2
    MOV dword ptr [EAX + 0xcdcc],0x0    ; 004d43f3
    CALL core_charactr.cpp_CCharacter_kill_FUN_0042c0d0 ; 004d43fd
        ;   XREF to: 0042c0d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_kill_FUN_0042c0d0(CCharacter * this_ptr, int damage_type, CVector3f * damage_direction, float impact_force)
    ADD ESP,0x10                        ; 004d4402
    RET                                 ; 004d4405


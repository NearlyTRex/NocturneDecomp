; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90(CCharacter *this_ptr,int fly_count,float spawn_radius)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   fly_count
; float            Stack[0xc]:4   spawn_radius
;
; Called Functions:
;   core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042df90
        ;   Label: core_charactr.cpp_CCharacter_spawnFlies_FUN_0042df90
    CMP dword ptr [EAX + 0x2f10],0x0    ; 0042df94
    JZ 0x0042df9e                       ; 0042df9b
        ;   XREF to: 0042df9e (CONDITIONAL_JUMP)  ; LAB_0042df9e
    RET                                 ; 0042df9d
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042df9e
        ;   Label: LAB_0042df9e
    PUSH dword ptr [ESP + 0xc]          ; 0042dfa2
    PUSH ECX                            ; 0042dfa6
    PUSH EAX                            ; 0042dfa7
    CALL core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70 ; 0042dfa8
        ;   XREF to: 00409e70 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70(CDemonActor * this_ptr, int fly_count, float spawn_radius)
    ADD ESP,0xc                         ; 0042dfad
    RET                                 ; 0042dfb0


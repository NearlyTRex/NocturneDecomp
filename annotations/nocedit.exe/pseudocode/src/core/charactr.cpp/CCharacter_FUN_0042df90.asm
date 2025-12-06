; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_FUN_0042df90(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042df90
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042df90
    CMP dword ptr [EAX + 0x2f10],0x0    ; 0042df94
    JZ 0x0042df9e                       ; 0042df9b | LAB_0042df9e
        ;   XREF to: 0042df9e (CONDITIONAL_JUMP)
    RET                                 ; 0042df9d
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042df9e
        ;   Label: LAB_0042df9e
    PUSH dword ptr [ESP + 0xc]          ; 0042dfa2
    PUSH ECX                            ; 0042dfa6
    PUSH EAX                            ; 0042dfa7
    CALL core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70 ; 0042dfa8 | void core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70(CDemonActor * this_ptr, int fly_count, float spawn_radius)
        ;   XREF to: 00409e70 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0042dfad
    RET                                 ; 0042dfb0


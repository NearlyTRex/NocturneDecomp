; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_spawnFlies_FUN_00429e60(CCharacter *this_ptr,int fly_count,float spawn_radius)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   fly_count
; float            Stack[0xc]:4   spawn_radius
;
; Called Functions:
;   core_actor.cpp_CDemonActor_spawnFlies_FUN_00409db0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00429e60
        ;   Label: core_charactr.cpp_CCharacter_spawnFlies_FUN_00429e60
    CMP dword ptr [EAX + 0x3564],0x0    ; 00429e64
    JZ 0x00429e6e                       ; 00429e6b
        ;   XREF to: 00429e6e (CONDITIONAL_JUMP)  ; LAB_00429e6e
    RET                                 ; 00429e6d
    MOV ECX,dword ptr [ESP + 0x8]       ; 00429e6e
        ;   Label: LAB_00429e6e
    PUSH dword ptr [ESP + 0xc]          ; 00429e72
    PUSH ECX                            ; 00429e76
    PUSH EAX                            ; 00429e77
    CALL core_actor.cpp_CDemonActor_spawnFlies_FUN_00409db0 ; 00429e78
        ;   XREF to: 00409db0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_spawnFlies_FUN_00409db0(CDemonActor * this_ptr, int fly_count, float spawn_radius)
    ADD ESP,0xc                         ; 00429e7d
    RET                                 ; 00429e80


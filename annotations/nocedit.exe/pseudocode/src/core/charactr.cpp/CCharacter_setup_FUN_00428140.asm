; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setup_FUN_00428140(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650 at 004a9655
;   core_hero.cpp_CHero_setup_FUN_004f2540 at 004f2555
;   core_npc.cpp_CNPC_setup_FUN_00544870 at 00544878
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428140
        ;   Label: core_charactr.cpp_CCharacter_setup_FUN_00428140
    PUSH ESI                            ; 00428141
    PUSH EDI                            ; 00428142
    PUSH EBP                            ; 00428143
    SUB ESP,0x4                         ; 00428144
    MOV EBP,dword ptr [ESP + 0x18]      ; 00428147
    PUSH EBP                            ; 0042814b
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0042814c
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)


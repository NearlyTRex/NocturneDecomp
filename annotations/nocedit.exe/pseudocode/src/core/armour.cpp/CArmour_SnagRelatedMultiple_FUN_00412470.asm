; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_armour_cpp_CArmour_SnagRelatedMultiple_FUN_00412470(CArmour *this_ptr)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Model_00614e17
;   TerminatedCString s_State_00614e1d
;   TerminatedCString s_Fall_event_00614e23
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412470
        ;   Label: core_armour.cpp_CArmour_SnagRelatedMultiple_FUN_00412470
    PUSH ESI                            ; 00412471
    PUSH EDI                            ; 00412472
    MOV EDI,dword ptr [ESP + 0x10]      ; 00412473
    MOV ESI,dword ptr [ESP + 0x14]      ; 00412477
    PUSH ESI                            ; 0041247b
    PUSH EDI                            ; 0041247c
    CALL core_enemy.cpp_CEnemy_FUN_004aa170 ; 0041247d
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004aa170(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 00412482
    PUSH 0x0                            ; 00412485
    LEA EBX,[EDI + 0x158]               ; 00412487
    PUSH EBX                            ; 0041248d
    PUSH 0x614e17                       ; 0041248e | = "Model"
    PUSH ESI                            ; 00412493
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0 ; 00412494
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00412499
    PUSH EBX                            ; 0041249c
    PUSH 0x614e1d                       ; 0041249d | = "State"
    PUSH ESI                            ; 004124a2
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0 ; 004124a3
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e4d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004124a8
    ADD EDI,0xbebc                      ; 004124ab
    PUSH EDI                            ; 004124b1
    PUSH 0x614e23                       ; 004124b2 | = "Fall event"
    PUSH ESI                            ; 004124b7
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 004124b8
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004124bd
    POP EDI                             ; 004124c0
    POP ESI                             ; 004124c1
    POP EBX                             ; 004124c2
    RET                                 ; 004124c3


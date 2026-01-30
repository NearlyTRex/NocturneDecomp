; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_imp_cpp_FUN_004fb110(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Model_0062fa96
;   TerminatedCString s_State_0062fa9c
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb110
        ;   Label: core_imp.cpp_FUN_004fb110
    PUSH ESI                            ; 004fb111
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fb112
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fb116
    PUSH ESI                            ; 004fb11a
    PUSH EBX                            ; 004fb11b
    CALL core_enemy.cpp_CEnemy_FUN_004aa170 ; 004fb11c
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004aa170(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 004fb121
    PUSH 0x0                            ; 004fb124
    ADD EBX,0x158                       ; 004fb126
    PUSH EBX                            ; 004fb12c
    PUSH 0x62fa96                       ; 004fb12d | = "Model"
    PUSH ESI                            ; 004fb132
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0 ; 004fb133
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 004fb138
    PUSH EBX                            ; 004fb13b
    PUSH 0x62fa9c                       ; 004fb13c | = "State"
    PUSH ESI                            ; 004fb141
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0 ; 004fb142
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e4d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004fb147
    POP ESI                             ; 004fb14a
    POP EBX                             ; 004fb14b
    RET                                 ; 004fb14c


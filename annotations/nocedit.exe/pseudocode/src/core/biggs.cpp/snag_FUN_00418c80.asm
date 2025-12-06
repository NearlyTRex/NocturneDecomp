; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_biggs.cpp_snag_FUN_00418c80()
;
;
; Referenced Globals:
;   TerminatedCString s_Model_00615b55
;   TerminatedCString s_State_00615b5b
;   TerminatedCString s_Morph_cond_00615b61
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418c80
        ;   Label: core_biggs.cpp_snag_FUN_00418c80
    PUSH ESI                            ; 00418c81
    PUSH EDI                            ; 00418c82
    MOV EDI,dword ptr [ESP + 0x10]      ; 00418c83
    MOV ESI,dword ptr [ESP + 0x14]      ; 00418c87
    PUSH ESI                            ; 00418c8b
    PUSH EDI                            ; 00418c8c
    CALL core_enemy.cpp_CEnemy_FUN_004aa170 ; 00418c8d | int core_enemy.cpp_CEnemy_FUN_004aa170(CEnemy * this_ptr)
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418c92
    PUSH 0x0                            ; 00418c95
    LEA EBX,[EDI + 0x158]               ; 00418c97
    PUSH EBX                            ; 00418c9d
    PUSH 0x615b55                       ; 00418c9e | = "Model" | s_Model_00615b55 = Model
    PUSH ESI                            ; 00418ca3
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0 ; 00418ca4 | void core_actor.cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00418ca9
    PUSH EBX                            ; 00418cac
    PUSH 0x615b5b                       ; 00418cad | = "State" | s_State_00615b5b = State
    PUSH ESI                            ; 00418cb2
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0 ; 00418cb3 | void core_actor.cpp_CActorPropertyList_FUN_0040e4d0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00418cb8
    ADD EDI,0xcc6c                      ; 00418cbb
    PUSH EDI                            ; 00418cc1
    PUSH 0x615b61                       ; 00418cc2 | = "Morph cond" | s_Morph_cond_00615b61 = Morph cond
    PUSH ESI                            ; 00418cc7
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 00418cc8 | void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00418ccd
    POP EDI                             ; 00418cd0
    POP ESI                             ; 00418cd1
    POP EBX                             ; 00418cd2
    RET                                 ; 00418cd3


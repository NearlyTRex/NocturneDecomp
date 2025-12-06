; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_keyactor.cpp_FUN_00501690()
;
;
; XREF[1]:
;   core_keyactor.cpp_FUN_00501650 at 0050166a
;
; Referenced Globals:
;   TerminatedCString s_key1_kfm_00630c34
;   CDemonActor_vtable PTR_core_keyactor.cpp_FUN_006604b4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501690
        ;   Label: core_keyactor.cpp_FUN_00501690
    MOV EBX,dword ptr [ESP + 0x8]       ; 00501691
    PUSH EBX                            ; 00501695
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 00501696 | CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050169b
    ADD EAX,0x158                       ; 0050169e
    PUSH EAX                            ; 005016a3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 005016a4 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005016a9
    LEA EBX,[EAX + 0xfffffea8]          ; 005016ac
    PUSH 0x630c34                       ; 005016b2 | = "key1.kfm" | s_key1_kfm_00630c34 = key1.kfm
    LEA EAX,[EBX + 0x158]               ; 005016b7
    PUSH EAX                            ; 005016bd
    MOV dword ptr [EBX + 0x154],0x6604b4 ; 005016be | CDemonActor_vtable PTR_core_keyactor.cpp_FUN_006604b4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005016c8 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005016cd
    MOV dword ptr [EBX + 0x2d4],0x1     ; 005016d0
    MOV EAX,EBX                         ; 005016da
    MOV dword ptr [EBX + 0x2d8],0x0     ; 005016dc
    POP EBX                             ; 005016e6
    RET                                 ; 005016e7


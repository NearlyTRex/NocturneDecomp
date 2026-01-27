; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CKeyActor * core_keyactor.cpp_CKeyActor_ctor_FUN_00501690(CKeyActor * this_ptr)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_keyactor.cpp_factoryFunc_FUN_00501650 at 0050166a
;
; Referenced Globals:
;   TerminatedCString s_key1_kfm_00630c34
;   CDemonActor_vtable g_CKeyActorVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501690
        ;   Label: core_keyactor.cpp_CKeyActor_ctor_FUN_00501690
    MOV EBX,dword ptr [ESP + 0x8]       ; 00501691
    PUSH EBX                            ; 00501695
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 00501696
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050169b
    ADD EAX,0x158                       ; 0050169e
    PUSH EAX                            ; 005016a3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 005016a4
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005016a9
    LEA EBX,[EAX + 0xfffffea8]          ; 005016ac
    PUSH 0x630c34                       ; 005016b2 | = "key1.kfm"
    LEA EAX,[EBX + 0x158]               ; 005016b7
    PUSH EAX                            ; 005016bd
    MOV dword ptr [EBX + 0x154],0x6604b4 ; 005016be | g_CKeyActorVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005016c8
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005016cd
    MOV dword ptr [EBX + 0x2d4],0x1     ; 005016d0
    MOV EAX,EBX                         ; 005016da
    MOV dword ptr [EBX + 0x2d8],0x0     ; 005016dc
    POP EBX                             ; 005016e6
    RET                                 ; 005016e7


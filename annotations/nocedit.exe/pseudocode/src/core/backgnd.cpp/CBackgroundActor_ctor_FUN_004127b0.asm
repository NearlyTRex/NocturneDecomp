; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBackgroundActor * core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0(CBackgroundActor * this_ptr)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_backgnd.cpp_FUN_00412770 at 0041278a
;
; Referenced Globals:
;   TerminatedCString s_candle_kfm_00614e53
;   CDemonActor_vtable g_CBackgroundActorVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004127b0
        ;   Label: core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004127b1
    PUSH EBX                            ; 004127b5
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004127b6 | CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004127bb
    ADD EAX,0x158                       ; 004127be
    PUSH EAX                            ; 004127c3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004127c4 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004127c9
    LEA EBX,[EAX + 0xfffffea8]          ; 004127cc
    PUSH 0x614e53                       ; 004127d2 | = "candle.kfm" | s_candle_kfm_00614e53 = candle.kfm
    LEA EAX,[EBX + 0x158]               ; 004127d7
    PUSH EAX                            ; 004127dd
    MOV dword ptr [EBX + 0x154],0x659f44 ; 004127de | CDemonActor_vtable g_CBackgroundActorVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004127e8 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004127ed
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004127f0
    MOV EAX,EBX                         ; 004127fa
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004127fc
    POP EBX                             ; 00412806
    RET                                 ; 00412807


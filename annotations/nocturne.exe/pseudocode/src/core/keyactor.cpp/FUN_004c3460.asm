; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * core_keyactor_cpp_FUN_004c3460(CDemonActor *param_1)
;
;
; XREF[1]:
;   core_keyactor.cpp_factoryFunc_FUN_004c3430 at 004c3443
;
; Referenced Globals:
;   TerminatedCString s_key1_kfm_0058757e
;   CDemonActor_vtable g_CKeyActorVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3460
        ;   Label: core_keyactor.cpp_FUN_004c3460
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c3461
    PUSH EBX                            ; 004c3465
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 004c3466
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c346b
    ADD EAX,0x150                       ; 004c346e
    PUSH EAX                            ; 004c3473
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004c3474
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c3479
    LEA EBX,[EAX + 0xfffffeb0]          ; 004c347c
    PUSH 0x58757e                       ; 004c3482 | = "key1.kfm"
    LEA EAX,[EBX + 0x150]               ; 004c3487
    PUSH EAX                            ; 004c348d
    MOV dword ptr [EBX + 0x14c],0x59f824 ; 004c348e | g_CKeyActorVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004c3498
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c349d
    MOV dword ptr [EBX + 0x2cc],0x1     ; 004c34a0
    MOV EAX,EBX                         ; 004c34aa
    MOV dword ptr [EBX + 0x2d0],0x0     ; 004c34ac
    POP EBX                             ; 004c34b6
    RET                                 ; 004c34b7


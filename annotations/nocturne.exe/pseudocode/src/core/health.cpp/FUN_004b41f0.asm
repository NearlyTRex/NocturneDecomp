; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * core_health_cpp_FUN_004b41f0(CDemonActor *param_1)
;
;
; XREF[1]:
;   core_health.cpp_FUN_004b41c0 at 004b41d3
;
; Referenced Globals:
;   TerminatedCString s_bullet_kfm_00585637
;   CDemonActor_vtable g_CHealthItemVTable
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b41f0
        ;   Label: core_health.cpp_FUN_004b41f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b41f1
    PUSH EBX                            ; 004b41f5
    CALL core_actor.cpp_FUN_00409d30    ; 004b41f6
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004b41fb
    ADD EAX,0x150                       ; 004b41fe
    PUSH EAX                            ; 004b4203
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004b4204
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004b4209
    LEA EBX,[EAX + 0xfffffeb0]          ; 004b420c
    PUSH 0x585637                       ; 004b4212 | = "bullet.kfm"
    LEA EAX,[EBX + 0x150]               ; 004b4217
    PUSH EAX                            ; 004b421d
    MOV dword ptr [EBX + 0x14c],0x59ea14 ; 004b421e | g_CHealthItemVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004b4228
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004b422d
    MOV dword ptr [EBX + 0x2cc],0x1     ; 004b4230
    MOV EAX,EBX                         ; 004b423a
    MOV dword ptr [EBX + 0x2d0],0x42480000 ; 004b423c
    POP EBX                             ; 004b4246
    RET                                 ; 004b4247


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHealthItem * __cdecl core_health_cpp_CHealthItem_ctor_FUN_004f1dd0(CHealthItem *this_ptr)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_health.cpp_factoryFunc_FUN_004f1d90 at 004f1daa
;
; Referenced Globals:
;   TerminatedCString s_bullet_kfm_0062e9f0
;   CDemonActor_vtable g_CHealthItemVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1dd0
        ;   Label: core_health.cpp_CHealthItem_ctor_FUN_004f1dd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f1dd1
    PUSH EBX                            ; 004f1dd5
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004f1dd6
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f1ddb
    ADD EAX,0x158                       ; 004f1dde
    PUSH EAX                            ; 004f1de3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004f1de4
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f1de9
    LEA EBX,[EAX + 0xfffffea8]          ; 004f1dec
    PUSH 0x62e9f0                       ; 004f1df2 | = "bullet.kfm"
    LEA EAX,[EBX + 0x158]               ; 004f1df7
    PUSH EAX                            ; 004f1dfd
    MOV dword ptr [EBX + 0x154],0x65f5a4 ; 004f1dfe | g_CHealthItemVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004f1e08
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004f1e0d
    MOV dword ptr [EBX + 0x2d4],0x1     ; 004f1e10
    MOV EAX,EBX                         ; 004f1e1a
    MOV dword ptr [EBX + 0x2d8],0x42480000 ; 004f1e1c
    POP EBX                             ; 004f1e26
    RET                                 ; 004f1e27


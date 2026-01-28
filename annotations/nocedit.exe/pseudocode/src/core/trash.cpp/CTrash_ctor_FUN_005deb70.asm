; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTrash * __cdecl core_trash_cpp_CTrash_ctor_FUN_005deb70(CTrash *this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_trash.cpp_factoryFunc_FUN_005deb30 at 005deb4a
;
; Referenced Globals:
;   TerminatedCString s_question_kfm_0065557f
;   CDemonActor_vtable g_CTrashVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005deb70
        ;   Label: core_trash.cpp_CTrash_ctor_FUN_005deb70
    MOV EBX,dword ptr [ESP + 0x8]       ; 005deb71
    PUSH EBX                            ; 005deb75
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 005deb76
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005deb7b
    ADD EAX,0x158                       ; 005deb7e
    PUSH EAX                            ; 005deb83
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 005deb84
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005deb89
    LEA EBX,[EAX + 0xfffffea8]          ; 005deb8c
    PUSH 0x65557f                       ; 005deb92 | = "question.kfm"
    LEA EAX,[EBX + 0x158]               ; 005deb97
    PUSH EAX                            ; 005deb9d
    MOV dword ptr [EBX + 0x154],0x6648f4 ; 005deb9e | g_CTrashVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005deba8
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005debad
    MOV EAX,EBX                         ; 005debb0
    POP EBX                             ; 005debb2
    RET                                 ; 005debb3


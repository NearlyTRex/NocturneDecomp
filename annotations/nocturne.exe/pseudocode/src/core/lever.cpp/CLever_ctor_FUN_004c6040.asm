; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLever * __cdecl core_lever_cpp_CLever_ctor_FUN_004c6040(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_lever.cpp_factoryFunc_FUN_004c6010 at 004c6023
;
; Referenced Globals:
;   TerminatedCString s_glever_kfm_005878f4
;   CDemonActor_vtable g_CLeverVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_event.cpp_CRuleList_FUN_00481620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6040
        ;   Label: core_lever.cpp_CLever_ctor_FUN_004c6040
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c6041
    PUSH EBX                            ; 004c6045
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 004c6046
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c604b
    ADD EAX,0x150                       ; 004c604e
    PUSH EAX                            ; 004c6053
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004c6054
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c6059
    LEA EBX,[EAX + 0x2c8]               ; 004c605c
    PUSH EBX                            ; 004c6062
    CALL core_event.cpp_CRuleList_FUN_00481620 ; 004c6063
        ;   XREF to: 00481620 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CRuleList_FUN_00481620(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 004c6068
    SUB EBX,0x418                       ; 004c606b
    PUSH 0x5878f4                       ; 004c6071 | = "glever.kfm"
    LEA EAX,[EBX + 0x150]               ; 004c6076
    PUSH EAX                            ; 004c607c
    MOV dword ptr [EBX + 0x14c],0x59fc44 ; 004c607d | g_CLeverVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004c6087
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d0],0x0     ; 004c608c
    MOV byte ptr [EBX + 0x2d8],0x0      ; 004c6096
    MOV byte ptr [EBX + 0x33c],0x0      ; 004c609d
    MOV byte ptr [EBX + 0x3a0],0x0      ; 004c60a4
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004c60ab
    MOV dword ptr [EBX + 0x404],0x1     ; 004c60b5
    MOV dword ptr [EBX + 0x408],0x0     ; 004c60bf
    MOV dword ptr [EBX + 0x40c],0x17    ; 004c60c9
    MOV dword ptr [EBX + 0x410],0x0     ; 004c60d3
    MOV dword ptr [EBX + 0x414],0x0     ; 004c60dd
    ADD ESP,0x8                         ; 004c60e7
    MOV dword ptr [EBX + 0x804],0x2     ; 004c60ea
    MOV EAX,EBX                         ; 004c60f4
    MOV dword ptr [EBX + 0x808],0x1     ; 004c60f6
    POP EBX                             ; 004c6100
    RET                                 ; 004c6101


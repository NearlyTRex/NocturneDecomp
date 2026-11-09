; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLever * __cdecl core_lever_cpp_CLever_ctor_FUN_004e0100(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_lever.cpp_factoryFuncLever_FUN_004e00d0 at 004e00e3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_event.cpp_CRuleList_clear_FUN_00495b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0100
        ;   Label: core_lever.cpp_CLever_ctor_FUN_004e0100
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e0101
    PUSH EBX                            ; 004e0105
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 004e0106
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e010b
    ADD EAX,0x158                       ; 004e010e
    PUSH EAX                            ; 004e0113
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 004e0114
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e0119
    LEA EBX,[EAX + 0x2c8]               ; 004e011c
    PUSH EBX                            ; 004e0122
    CALL core_event.cpp_CRuleList_clear_FUN_00495b40 ; 004e0123
        ;   XREF to: 00495b40 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CRuleList_clear_FUN_00495b40(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 004e0128
    SUB EBX,0x420                       ; 004e012b
    PUSH 0x5c68d1                       ; 004e0131
    LEA EAX,[EBX + 0x158]               ; 004e0136
    PUSH EAX                            ; 004e013c
    MOV dword ptr [EBX + 0x154],0x5e23d4 ; 004e013d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 004e0147
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004e014c
    MOV byte ptr [EBX + 0x2e0],0x0      ; 004e0156
    MOV byte ptr [EBX + 0x344],0x0      ; 004e015d
    MOV byte ptr [EBX + 0x3a8],0x0      ; 004e0164
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004e016b
    MOV dword ptr [EBX + 0x40c],0x1     ; 004e0175
    MOV dword ptr [EBX + 0x410],0x0     ; 004e017f
    MOV dword ptr [EBX + 0x414],0x17    ; 004e0189
    MOV dword ptr [EBX + 0x418],0x0     ; 004e0193
    MOV dword ptr [EBX + 0x41c],0x0     ; 004e019d
    ADD ESP,0x8                         ; 004e01a7
    MOV dword ptr [EBX + 0x80c],0x2     ; 004e01aa
    MOV EAX,EBX                         ; 004e01b4
    MOV dword ptr [EBX + 0x810],0x1     ; 004e01b6
    POP EBX                             ; 004e01c0
    RET                                 ; 004e01c1


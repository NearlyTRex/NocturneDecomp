; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLever * __cdecl core_lever_cpp_CLever_ctor_FUN_004ff040(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_lever.cpp_factoryFuncLever_FUN_004ff010 at 004ff023
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_event.cpp_CRuleList_clear_FUN_004aacc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff040
        ;   Label: core_lever.cpp_CLever_ctor_FUN_004ff040
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ff041
    PUSH EBX                            ; 004ff045
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 004ff046
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ff04b
    ADD EAX,0x158                       ; 004ff04e
    PUSH EAX                            ; 004ff053
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 004ff054
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ff059
    LEA EBX,[EAX + 0x2c8]               ; 004ff05c
    PUSH EBX                            ; 004ff062
    CALL core_event.cpp_CRuleList_clear_FUN_004aacc0 ; 004ff063
        ;   XREF to: 004aacc0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CRuleList_clear_FUN_004aacc0(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 004ff068
    SUB EBX,0x420                       ; 004ff06b
    PUSH 0x5e6d11                       ; 004ff071
    LEA EAX,[EBX + 0x158]               ; 004ff076
    PUSH EAX                            ; 004ff07c
    MOV dword ptr [EBX + 0x154],0x602ef4 ; 004ff07d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004ff087
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004ff08c
    MOV byte ptr [EBX + 0x2e0],0x0      ; 004ff096
    MOV byte ptr [EBX + 0x344],0x0      ; 004ff09d
    MOV byte ptr [EBX + 0x3a8],0x0      ; 004ff0a4
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004ff0ab
    MOV dword ptr [EBX + 0x40c],0x1     ; 004ff0b5
    MOV dword ptr [EBX + 0x410],0x0     ; 004ff0bf
    MOV dword ptr [EBX + 0x414],0x17    ; 004ff0c9
    MOV dword ptr [EBX + 0x418],0x0     ; 004ff0d3
    MOV dword ptr [EBX + 0x41c],0x0     ; 004ff0dd
    ADD ESP,0x8                         ; 004ff0e7
    MOV dword ptr [EBX + 0x80c],0x2     ; 004ff0ea
    MOV EAX,EBX                         ; 004ff0f4
    MOV dword ptr [EBX + 0x810],0x1     ; 004ff0f6
    POP EBX                             ; 004ff100
    RET                                 ; 004ff101


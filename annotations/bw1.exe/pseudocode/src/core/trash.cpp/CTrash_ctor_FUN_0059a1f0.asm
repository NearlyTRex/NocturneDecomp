; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrash * __cdecl core_trash_cpp_CTrash_ctor_FUN_0059a1f0(CTrash *this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_trash.cpp_factoryFuncTrash_FUN_0059a1c0 at 0059a1d3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a1f0
        ;   Label: core_trash.cpp_CTrash_ctor_FUN_0059a1f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059a1f1
    PUSH EBX                            ; 0059a1f5
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 0059a1f6
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059a1fb
    ADD EAX,0x158                       ; 0059a1fe
    PUSH EAX                            ; 0059a203
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 0059a204
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059a209
    LEA EBX,[EAX + 0xfffffea8]          ; 0059a20c
    PUSH 0x5f8027                       ; 0059a212
    LEA EAX,[EBX + 0x158]               ; 0059a217
    PUSH EAX                            ; 0059a21d
    MOV dword ptr [EBX + 0x154],0x6070b4 ; 0059a21e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0059a228
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0059a22d
    MOV EAX,EBX                         ; 0059a230
    POP EBX                             ; 0059a232
    RET                                 ; 0059a233


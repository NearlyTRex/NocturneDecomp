; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrate * __cdecl core_crate_cpp_CCrate_ctor_FUN_00449010(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_crate.cpp_factoryFuncCrate_FUN_00448fe0 at 00448ff3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449010
        ;   Label: core_crate.cpp_CCrate_ctor_FUN_00449010
    MOV EBX,dword ptr [ESP + 0x8]       ; 00449011
    PUSH EBX                            ; 00449015
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 00449016
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0044901b
    ADD EAX,0x158                       ; 0044901e
    PUSH EAX                            ; 00449023
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 00449024
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00449029
    LEA EBX,[EAX + 0xfffffea8]          ; 0044902c
    PUSH 0x5d7326                       ; 00449032
    LEA EAX,[EBX + 0x158]               ; 00449037
    PUSH EAX                            ; 0044903d
    MOV dword ptr [EBX + 0x154],0x5fe254 ; 0044903e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00449048
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0044904d
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00449050
    MOV EAX,EBX                         ; 0044905a
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0044905c
    POP EBX                             ; 00449066
    RET                                 ; 00449067


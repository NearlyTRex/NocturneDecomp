; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHealthItem * __cdecl core_health_cpp_CHealthItem_ctor_FUN_004ea330(CHealthItem *this_ptr)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_health.cpp_factoryFuncHealthItem_FUN_004ea300 at 004ea313
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea330
        ;   Label: core_health.cpp_CHealthItem_ctor_FUN_004ea330
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ea331
    PUSH EBX                            ; 004ea335
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 004ea336
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ea33b
    ADD EAX,0x158                       ; 004ea33e
    PUSH EAX                            ; 004ea343
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 004ea344
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ea349
    LEA EBX,[EAX + 0xfffffea8]          ; 004ea34c
    PUSH 0x5e45b1                       ; 004ea352
    LEA EAX,[EBX + 0x158]               ; 004ea357
    PUSH EAX                            ; 004ea35d
    MOV dword ptr [EBX + 0x154],0x601c14 ; 004ea35e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004ea368
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ea36d
    MOV dword ptr [EBX + 0x2d4],0x1     ; 004ea370
    MOV EAX,EBX                         ; 004ea37a
    MOV dword ptr [EBX + 0x2d8],0x42480000 ; 004ea37c
    POP EBX                             ; 004ea386
    RET                                 ; 004ea387


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_ctor_FUN_004fc510(CKeyActor *this_ptr)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_keyactor.cpp_factoryFuncKeyActor_FUN_004fc4e0 at 004fc4f3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc510
        ;   Label: core_keyactor.cpp_CKeyActor_ctor_FUN_004fc510
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fc511
    PUSH EBX                            ; 004fc515
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 004fc516
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004fc51b
    ADD EAX,0x158                       ; 004fc51e
    PUSH EAX                            ; 004fc523
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 004fc524
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004fc529
    LEA EBX,[EAX + 0xfffffea8]          ; 004fc52c
    PUSH 0x5e69bd                       ; 004fc532
    LEA EAX,[EBX + 0x158]               ; 004fc537
    PUSH EAX                            ; 004fc53d
    MOV dword ptr [EBX + 0x154],0x602ad4 ; 004fc53e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004fc548
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004fc54d
    MOV dword ptr [EBX + 0x2d4],0x1     ; 004fc550
    MOV EAX,EBX                         ; 004fc55a
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004fc55c
    POP EBX                             ; 004fc566
    RET                                 ; 004fc567


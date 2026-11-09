; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHealthItem * __cdecl core_health_cpp_CHealthItem_ctor_FUN_004d1d80(CHealthItem *this_ptr)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_health.cpp_CHealthItemSmall_ctor_FUN_004d2180 at 004d2186
;   core_health.cpp_factoryFuncHealthItem_FUN_004d1d50 at 004d1d63
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1d80
        ;   Label: core_health.cpp_CHealthItem_ctor_FUN_004d1d80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d1d81
    PUSH EBX                            ; 004d1d85
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 004d1d86
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d1d8b
    ADD EAX,0x158                       ; 004d1d8e
    PUSH EAX                            ; 004d1d93
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 004d1d94
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d1d99
    LEA EBX,[EAX + 0xfffffea8]          ; 004d1d9c
    PUSH 0x5c4a7a                       ; 004d1da2
    LEA EAX,[EBX + 0x158]               ; 004d1da7
    PUSH EAX                            ; 004d1dad
    MOV dword ptr [EBX + 0x154],0x5e1314 ; 004d1dae
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 004d1db8
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d4],0x1     ; 004d1dbd
    MOV dword ptr [EBX + 0x2d8],0x42480000 ; 004d1dc7
    ADD ESP,0x8                         ; 004d1dd1
    MOV dword ptr [EBX + 0x2e0],0x0     ; 004d1dd4
    MOV EAX,EBX                         ; 004d1dde
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004d1de0
    POP EBX                             ; 004d1dea
    RET                                 ; 004d1deb


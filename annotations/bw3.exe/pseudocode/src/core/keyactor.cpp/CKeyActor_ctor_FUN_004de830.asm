; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_ctor_FUN_004de830(CKeyActor *this_ptr)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_keyactor.cpp_factoryFuncKeyActor_FUN_004de800 at 004de813
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004de830
        ;   Label: core_keyactor.cpp_CKeyActor_ctor_FUN_004de830
    MOV EBX,dword ptr [ESP + 0x8]       ; 004de831
    PUSH EBX                            ; 004de835
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 004de836
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004de83b
    ADD EAX,0x158                       ; 004de83e
    PUSH EAX                            ; 004de843
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 004de844
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004de849
    LEA EBX,[EAX + 0xfffffea8]          ; 004de84c
    PUSH 0x5c669f                       ; 004de852
    LEA EAX,[EBX + 0x158]               ; 004de857
    PUSH EAX                            ; 004de85d
    MOV dword ptr [EBX + 0x154],0x5e2154 ; 004de85e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 004de868
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004de86d
    MOV dword ptr [EBX + 0x2d4],0x1     ; 004de870
    MOV EAX,EBX                         ; 004de87a
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004de87c
    POP EBX                             ; 004de886
    RET                                 ; 004de887


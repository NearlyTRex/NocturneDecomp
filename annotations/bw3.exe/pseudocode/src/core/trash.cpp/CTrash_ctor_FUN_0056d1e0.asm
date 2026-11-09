; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrash * __cdecl core_trash_cpp_CTrash_ctor_FUN_0056d1e0(CTrash *this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_trash.cpp_factoryFuncTrash_FUN_0056d1b0 at 0056d1c3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d1e0
        ;   Label: core_trash.cpp_CTrash_ctor_FUN_0056d1e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056d1e1
    PUSH EBX                            ; 0056d1e5
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 0056d1e6
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056d1eb
    ADD EAX,0x158                       ; 0056d1ee
    PUSH EAX                            ; 0056d1f3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 0056d1f4
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056d1f9
    LEA EBX,[EAX + 0xfffffea8]          ; 0056d1fc
    PUSH 0x5d6596                       ; 0056d202
    LEA EAX,[EBX + 0x158]               ; 0056d207
    PUSH EAX                            ; 0056d20d
    MOV dword ptr [EBX + 0x154],0x5e57b4 ; 0056d20e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0056d218
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0056d21d
    MOV EAX,EBX                         ; 0056d220
    POP EBX                             ; 0056d222
    RET                                 ; 0056d223


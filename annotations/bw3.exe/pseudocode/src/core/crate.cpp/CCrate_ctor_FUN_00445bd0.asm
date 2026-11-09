; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrate * __cdecl core_crate_cpp_CCrate_ctor_FUN_00445bd0(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_crate.cpp_factoryFuncCrate_FUN_00445ba0 at 00445bb3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445bd0
        ;   Label: core_crate.cpp_CCrate_ctor_FUN_00445bd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00445bd1
    PUSH EBX                            ; 00445bd5
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 00445bd6
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00445bdb
    ADD EAX,0x158                       ; 00445bde
    PUSH EAX                            ; 00445be3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 00445be4
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00445be9
    LEA EBX,[EAX + 0xfffffea8]          ; 00445bec
    PUSH 0x5b99dd                       ; 00445bf2
    LEA EAX,[EBX + 0x158]               ; 00445bf7
    PUSH EAX                            ; 00445bfd
    MOV dword ptr [EBX + 0x154],0x5ddd54 ; 00445bfe
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 00445c08
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00445c0d
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00445c10
    MOV EAX,EBX                         ; 00445c1a
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00445c1c
    POP EBX                             ; 00445c26
    RET                                 ; 00445c27


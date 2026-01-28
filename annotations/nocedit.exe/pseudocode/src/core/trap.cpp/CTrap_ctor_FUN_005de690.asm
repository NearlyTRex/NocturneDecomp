; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTrap * __cdecl core_trap_cpp_CTrap_ctor_FUN_005de690(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_trap.cpp_factoryFunc_FUN_005de650 at 005de66a
;
; Referenced Globals:
;   TerminatedCString s_beartrap_kfm_0065552c
;   CDemonActor_vtable g_CTrapVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005de690
        ;   Label: core_trap.cpp_CTrap_ctor_FUN_005de690
    MOV EBX,dword ptr [ESP + 0x8]       ; 005de691
    PUSH EBX                            ; 005de695
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 005de696
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005de69b
    ADD EAX,0x158                       ; 005de69e
    PUSH EAX                            ; 005de6a3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 005de6a4
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005de6a9
    LEA EBX,[EAX + 0xfffffea8]          ; 005de6ac
    PUSH 0x65552c                       ; 005de6b2 | = "beartrap.kfm"
    LEA EAX,[EBX + 0x158]               ; 005de6b7
    PUSH EAX                            ; 005de6bd
    MOV dword ptr [EBX + 0x154],0x6647c4 ; 005de6be | g_CTrapVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005de6c8
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005de6cd
    MOV EAX,EBX                         ; 005de6d0
    MOV dword ptr [EBX + 0x2d8],0x0     ; 005de6d2
    POP EBX                             ; 005de6dc
    RET                                 ; 005de6dd


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrap * __cdecl core_trap_cpp_CTrap_ctor_FUN_00546820(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_trap.cpp_factoryFuncTrap_FUN_005467f0 at 00546803
;
; Referenced Globals:
;   TerminatedCString s_beartrap_kfm_00596903
;   CDemonActor_vtable g_CTrapVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546820
        ;   Label: core_trap.cpp_CTrap_ctor_FUN_00546820
    MOV EBX,dword ptr [ESP + 0x8]       ; 00546821
    PUSH EBX                            ; 00546825
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 00546826
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054682b
    ADD EAX,0x150                       ; 0054682e
    PUSH EAX                            ; 00546833
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 00546834
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00546839
    LEA EBX,[EAX + 0xfffffeb0]          ; 0054683c
    PUSH 0x596903                       ; 00546842 | = "beartrap.kfm"
    LEA EAX,[EBX + 0x150]               ; 00546847
    PUSH EAX                            ; 0054684d
    MOV dword ptr [EBX + 0x14c],0x5a3424 ; 0054684e | g_CTrapVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00546858
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0054685d
    MOV EAX,EBX                         ; 00546860
    MOV dword ptr [EBX + 0x2d0],0x0     ; 00546862
    POP EBX                             ; 0054686c
    RET                                 ; 0054686d


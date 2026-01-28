; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ammo_cpp_CAmmo_setup_FUN_00410e50(CAmmo *this_ptr)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00410e50
        ;   Label: core_ammo.cpp_CAmmo_setup_FUN_00410e50
    ADD EAX,0x158                       ; 00410e54
    PUSH EAX                            ; 00410e59
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 00410e5a
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00410e5f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00410e62
    PUSH EDX                            ; 00410e66
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00410e67
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)


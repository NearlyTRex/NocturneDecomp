; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_simbox.cpp_CSimBox_FUN_00588e00(CSimBox * this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588e00
        ;   Label: core_simbox.cpp_CSimBox_FUN_00588e00
    PUSH ESI                            ; 00588e01
    SUB ESP,0x3c                        ; 00588e02
    MOV EBX,dword ptr [ESP + 0x48]      ; 00588e05
    LEA EAX,[EBX + 0x158]               ; 00588e09
    PUSH EAX                            ; 00588e0f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 00588e10
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00588e15
    PUSH EBX                            ; 00588e18
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00588e19
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)


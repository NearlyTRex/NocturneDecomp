; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_door.cpp_CDoor_setup_FUN_0047fc70(CDoor * this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047fc70
        ;   Label: core_door.cpp_CDoor_setup_FUN_0047fc70
    PUSH ESI                            ; 0047fc71
    MOV EBX,dword ptr [ESP + 0xc]       ; 0047fc72
    LEA EAX,[EBX + 0x158]               ; 0047fc76
    PUSH EAX                            ; 0047fc7c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 0047fc7d
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0047fc82
    PUSH EBX                            ; 0047fc85
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0047fc86
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)


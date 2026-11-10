; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hecaitmx_cpp_CHecaitomix_archive_FUN_00598590(CHecaitomix *this_ptr)
;
; Parameters:
; CHecaitomix *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005d97b6+1
;   TerminatedCString s_modelName_005d97bd
;   TerminatedCString s_guardDistance_005d97c7
;   TerminatedCString s_motion_state_005d97d5
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_enemy.cpp_CEnemy_archive_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598590
        ;   Label: core_hecaitmx.cpp_CHecaitomix_archive_FUN_00598590
    PUSH ESI                            ; 00598591
    MOV ESI,dword ptr [ESP + 0xc]       ; 00598592
    PUSH ESI                            ; 00598596
    CALL core_enemy.cpp_CEnemy_archive_FUN_00489120 ; 00598597
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00489120(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059859c
    PUSH 0x5d97b7                       ; 0059859f | s_speed_005d97b6+1
    LEA EBX,[ESI + 0xcdcc]              ; 005985a4
    PUSH EBX                            ; 005985aa
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 005985ab
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 005985b0
    PUSH 0x5d97bd                       ; 005985b3 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 005985b8
    PUSH EBX                            ; 005985be
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 005985bf
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005985c4
    PUSH 0x5d97c7                       ; 005985c7 | = "guardDistance"
    ADD ESI,0xcddc                      ; 005985cc
    PUSH ESI                            ; 005985d2
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 005985d3
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 005985d8
    PUSH 0x5d97d5                       ; 005985db | = "motion state"
    PUSH EBX                            ; 005985e0
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 005985e1
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 005985e6
    POP ESI                             ; 005985e9
    POP EBX                             ; 005985ea
    LEA EAX,[EAX]                       ; 005985eb
    MOV ECX,ECX                         ; 005985ee


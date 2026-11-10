; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammobox_cpp_CAmmoBox_setup_FUN_0040e160(CAmmoBox *this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e160
        ;   Label: core_ammobox.cpp_CAmmoBox_setup_FUN_0040e160
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e161
    LEA EAX,[EBX + 0x158]               ; 0040e165
    PUSH EAX                            ; 0040e16b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 0040e16c
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040e171
    PUSH EBX                            ; 0040e174
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 0040e175
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e17a
    MOV dword ptr [EBX + 0x348],0x0     ; 0040e17d
    POP EBX                             ; 0040e187
    LEA EAX,[EAX]                       ; 0040e188
    MOV EDX,EDX                         ; 0040e18e


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammobox_cpp_CAmmoBox_setup_FUN_0040e5c0(CAmmoBox *this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e5c0
        ;   Label: core_ammobox.cpp_CAmmoBox_setup_FUN_0040e5c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e5c1
    LEA EAX,[EBX + 0x2b4]               ; 0040e5c5
    PUSH EAX                            ; 0040e5cb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0040e5cc
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040e5d1
    PUSH EBX                            ; 0040e5d4
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 0040e5d5
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e5da
    MOV dword ptr [EBX + 0x4a4],0x0     ; 0040e5dd
    POP EBX                             ; 0040e5e7
    LEA EAX,[EAX]                       ; 0040e5e8
    MOV EDX,EDX                         ; 0040e5ee


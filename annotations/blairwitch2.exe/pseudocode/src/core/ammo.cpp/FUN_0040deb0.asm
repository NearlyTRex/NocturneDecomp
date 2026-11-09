; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammo_cpp_FUN_0040deb0(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040deb0
        ;   Label: core_ammo.cpp_FUN_0040deb0
    ADD EAX,0x2b4                       ; 0040deb4
    PUSH EAX                            ; 0040deb9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0040deba
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040debf
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040dec2
    PUSH EDX                            ; 0040dec6
    CALL core_actor.cpp_FUN_00408a80    ; 0040dec7
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040decc
    RET                                 ; 0040decf


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 core_backgnd_cpp_CBackgroundActor_setup_FUN_0040ff30(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ff30
        ;   Label: core_backgnd.cpp_CBackgroundActor_setup_FUN_0040ff30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ff31
    LEA EAX,[EBX + 0x150]               ; 0040ff35
    PUSH EAX                            ; 0040ff3b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0040ff3c
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040ff41
    PUSH EBX                            ; 0040ff44
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 0040ff45
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EBX + 0x2cc]     ; 0040ff4a
    ADD ESP,0x4                         ; 0040ff50
    TEST EDX,EDX                        ; 0040ff53
    SETZ AL                             ; 0040ff55
    AND EAX,0xff                        ; 0040ff58
    MOV dword ptr [EBX + 0x100],EAX     ; 0040ff5d
    POP EBX                             ; 0040ff63
    LEA EAX,[EAX]                       ; 0040ff64
    LEA EDX,[EDX]                       ; 0040ff6a


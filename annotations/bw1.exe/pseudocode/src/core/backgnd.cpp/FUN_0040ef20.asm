; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 core_backgnd_cpp_FUN_0040ef20(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ef20
        ;   Label: core_backgnd.cpp_FUN_0040ef20
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ef21
    LEA EAX,[EBX + 0x15c]               ; 0040ef25
    PUSH EAX                            ; 0040ef2b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 0040ef2c
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040ef31
    PUSH EBX                            ; 0040ef34
    CALL core_actor.cpp_FUN_00408850    ; 0040ef35
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EBX + 0x2d8]     ; 0040ef3a
    ADD ESP,0x4                         ; 0040ef40
    TEST EDX,EDX                        ; 0040ef43
    SETZ AL                             ; 0040ef45
    AND EAX,0xff                        ; 0040ef48
    MOV dword ptr [EBX + 0x100],EAX     ; 0040ef4d
    POP EBX                             ; 0040ef53
    LEA EAX,[EAX]                       ; 0040ef54
    LEA EDX,[EDX]                       ; 0040ef5a


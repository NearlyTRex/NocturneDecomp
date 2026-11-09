; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammobox_cpp_FUN_0040e670(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408890
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e670
        ;   Label: core_ammobox.cpp_FUN_0040e670
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e671
    LEA EAX,[EBX + 0x158]               ; 0040e675
    PUSH EAX                            ; 0040e67b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 0040e67c
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040e681
    PUSH EBX                            ; 0040e684
    CALL core_actor.cpp_FUN_00408890    ; 0040e685
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e68a
    MOV dword ptr [EBX + 0x348],0x0     ; 0040e68d
    POP EBX                             ; 0040e697
    LEA EAX,[EAX]                       ; 0040e698
    MOV EDX,EDX                         ; 0040e69e


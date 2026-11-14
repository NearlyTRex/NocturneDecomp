; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_backgnd_cpp_CBackgroundActor_setup_FUN_0040f3a0(CBackgroundActor *this_ptr)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f3a0
        ;   Label: core_backgnd.cpp_CBackgroundActor_setup_FUN_0040f3a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f3a1
    LEA EAX,[EBX + 0x2b8]               ; 0040f3a5
    PUSH EAX                            ; 0040f3ab
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0040f3ac
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040f3b1
    PUSH EBX                            ; 0040f3b4
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 0040f3b5
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EBX + 0x434]     ; 0040f3ba
    ADD ESP,0x4                         ; 0040f3c0
    TEST EDX,EDX                        ; 0040f3c3
    SETZ AL                             ; 0040f3c5
    AND EAX,0xff                        ; 0040f3c8
    MOV dword ptr [EBX + 0x100],EAX     ; 0040f3cd
    POP EBX                             ; 0040f3d3
    LEA EAX,[EAX]                       ; 0040f3d4
    LEA EDX,[EDX]                       ; 0040f3da


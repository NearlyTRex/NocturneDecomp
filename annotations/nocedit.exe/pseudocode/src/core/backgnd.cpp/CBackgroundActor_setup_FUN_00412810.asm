; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_backgnd_cpp_CBackgroundActor_setup_FUN_00412810(CBackgroundActor *this_ptr)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412810
        ;   Label: core_backgnd.cpp_CBackgroundActor_setup_FUN_00412810
    MOV EBX,dword ptr [ESP + 0x8]       ; 00412811
    LEA EAX,[EBX + 0x158]               ; 00412815
    PUSH EAX                            ; 0041281b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 0041281c
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00412821
    PUSH EBX                            ; 00412824
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00412825
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 0041282a
    ADD ESP,0x4                         ; 00412830
    TEST EDX,EDX                        ; 00412833
    SETZ AL                             ; 00412835
    AND EAX,0xff                        ; 00412838
    MOV dword ptr [EBX + 0x100],EAX     ; 0041283d
    POP EBX                             ; 00412843
    LEA EAX,[EAX]                       ; 00412844
    LEA EDX,[EDX]                       ; 0041284a


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_backgnd.cpp_FUN_00412810()
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412810
        ;   Label: core_backgnd.cpp_FUN_00412810
    MOV EBX,dword ptr [ESP + 0x8]       ; 00412811
    LEA EAX,[EBX + 0x158]               ; 00412815
    PUSH EAX                            ; 0041281b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 0041281c | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00412821
    PUSH EBX                            ; 00412824


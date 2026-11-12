; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_freeAllModels_FUN_00468830(void)
;
;
; XREF[2]:
;   core_main.c_FUN_00503a30 at 00503a74
;   core_mission.cpp_CDemonMission_freeAllAssets_FUN_0051bf10 at 0051bf15
;
; Referenced Globals:
;   undefined4 DAT_01b2efdc
;
; Called Functions:
;   core_dmodel.cpp_FUN_00467160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468830
        ;   Label: core_dmodel.cpp_freeAllModels_FUN_00468830
    PUSH ESI                            ; 00468831
    MOV EBX,0x1b2efe0                   ; 00468832
    LEA ESI,[EBX + 0x39800]             ; 00468837
    PUSH EBX                            ; 0046883d
        ;   Label: LAB_0046883d
    CALL core_dmodel.cpp_FUN_00467160   ; 0046883e
        ;   XREF to: 00467160 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00467160()
    ADD EBX,0x398                       ; 00468843
    ADD ESP,0x4                         ; 00468849
    CMP EBX,ESI                         ; 0046884c
    JNZ 0x0046883d                      ; 0046884e
        ;   XREF to: 0046883d (CONDITIONAL_JUMP)  ; LAB_0046883d
    XOR EDX,EDX                         ; 00468850
    MOV dword ptr [0x01b2efdc],EDX      ; 00468852 | DAT_01b2efdc
    POP ESI                             ; 00468858
    POP EBX                             ; 00468859
    RET                                 ; 0046885a


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_freeAllModels_FUN_0044fc50(void)
;
;
; XREF[2]:
;   core_main.c_FUN_004e4e20 at 004e4e64
;   core_mission.cpp_CDemonMission_freeAllAssets_FUN_004fcf50 at 004fcf55
;
; Referenced Globals:
;   undefined4 DAT_01b13a1c
;
; Called Functions:
;   core_dmodel.cpp_FUN_0044e590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044fc50
        ;   Label: core_dmodel.cpp_freeAllModels_FUN_0044fc50
    PUSH ESI                            ; 0044fc51
    MOV EBX,0x1b13a20                   ; 0044fc52
    LEA ESI,[EBX + 0x39800]             ; 0044fc57
    PUSH EBX                            ; 0044fc5d
        ;   Label: LAB_0044fc5d
    CALL core_dmodel.cpp_FUN_0044e590   ; 0044fc5e
        ;   XREF to: 0044e590 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_0044e590()
    ADD EBX,0x398                       ; 0044fc63
    ADD ESP,0x4                         ; 0044fc69
    CMP EBX,ESI                         ; 0044fc6c
    JNZ 0x0044fc5d                      ; 0044fc6e
        ;   XREF to: 0044fc5d (CONDITIONAL_JUMP)  ; LAB_0044fc5d
    XOR EDX,EDX                         ; 0044fc70
    MOV dword ptr [0x01b13a1c],EDX      ; 0044fc72 | DAT_01b13a1c
    POP ESI                             ; 0044fc78
    POP EBX                             ; 0044fc79
    RET                                 ; 0044fc7a


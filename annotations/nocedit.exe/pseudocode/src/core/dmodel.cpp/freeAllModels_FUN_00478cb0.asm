; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_freeAllModels_FUN_00478cb0(void)
;
;
; XREF[5]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047d6e5
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be3d6
;   core_main.c_finalizeGameSystems_FUN_00508570 at 005087e6
;   core_mission.cpp_FUN_005248e0 at 005248f7
;   core_msnedit.cpp_FUN_0053af50 at 0053afb0
;
; Referenced Globals:
;   int g_KeyframeModelCount
;   CKeyFramedModel[256] g_CKeyFramedModelPool
;   undefined4 DAT_026acb5c
;   CKeyFramedModel* g_KeyFrameModelPoolEnd
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478cb0
        ;   Label: core_dmodel.cpp_freeAllModels_FUN_00478cb0
    PUSH ESI                            ; 00478cb1
    MOV EBX,0x26a7484                   ; 00478cb2 | CKeyFramedModel[256] g_CKeyFramedModelPool
    LEA ESI,[EBX + 0x56d800]            ; 00478cb7 | CKeyFramedModel * g_KeyFrameModelPoolEnd
    PUSH EBX                            ; 00478cbd | CKeyFramedModel[256] g_CKeyFramedModelPool
        ;   Label: LAB_00478cbd
    CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690 ; 00478cbe | void core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel * this_ptr)
        ;   XREF to: 00477690 (UNCONDITIONAL_CALL)
    ADD EBX,0x56d8                      ; 00478cc3 | DAT_026acb5c
    ADD ESP,0x4                         ; 00478cc9
    CMP EBX,ESI                         ; 00478ccc
    JNZ 0x00478cbd                      ; 00478cce | LAB_00478cbd
        ;   XREF to: 00478cbd (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00478cd0
    MOV dword ptr [0x026a7480],EDX      ; 00478cd2 | int g_KeyframeModelCount
    POP ESI                             ; 00478cd8
    POP EBX                             ; 00478cd9
    RET                                 ; 00478cda


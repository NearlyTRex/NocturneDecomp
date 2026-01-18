; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_FUN_0053af50()
;
;
; XREF[1]:
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053ad6a
;
; Referenced Globals:
;   void* switchdataD_0053af24 = 0053af6c
;   TerminatedCString s_Reloading_keyframed_mode_0063c5bc
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   undefined4 DAT_02f7a02c
;   undefined4 DAT_02f7c52c
;   undefined4 DAT_02f7c530
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_freeAllModels_FUN_00478cb0
;   core_mission.cpp_CDemonMission_FUN_00523cf0
;   core_msnedit.cpp_FUN_0053b510
;   core_msnedit.cpp_FUN_0053eb40
;   core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030
;   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053af50
        ;   Label: core_msnedit.cpp_FUN_0053af50
    PUSH EDI                            ; 0053af51
    PUSH EBP                            ; 0053af52
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053af53
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053af57
    MOV EDX,dword ptr [EAX]             ; 0053af5b
    SUB EDX,0x5                         ; 0053af5d
    CMP EDX,0x8                         ; 0053af60
    JA 0x0053af75                       ; 0053af63
        ;   XREF to: 0053af75 (CONDITIONAL_JUMP)  ; caseD_9
    JMP dword ptr [EDX*0x4 + 0x53af24]  ; 0053af65 | caseD_5 | caseD_9 | caseD_6
        ;   Label: switchD
    MOV EAX,dword ptr [EAX + 0x68]      ; 0053af6c
        ;   Label: caseD_5
    MOV EDX,dword ptr [EAX]             ; 0053af6f
    TEST EDX,EDX                        ; 0053af71
    JNZ 0x0053af79                      ; 0053af73
        ;   XREF to: 0053af79 (CONDITIONAL_JUMP)  ; LAB_0053af79
    POP EBP                             ; 0053af75
        ;   Label: caseD_a
    POP EDI                             ; 0053af76
    POP EBX                             ; 0053af77
    RET                                 ; 0053af78
    PUSH EDX                            ; 0053af79
        ;   Label: LAB_0053af79
    PUSH EBX                            ; 0053af7a
    CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140 ; 0053af7b
        ;   XREF to: 0053c140 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140()
    ADD ESP,0x8                         ; 0053af80
    POP EBP                             ; 0053af83
    POP EDI                             ; 0053af84
    POP EBX                             ; 0053af85
    RET                                 ; 0053af86
    MOV EDI,dword ptr [EAX + 0x68]      ; 0053af87
        ;   Label: caseD_6
    PUSH EDI                            ; 0053af8a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0053af8b
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0053af90
    PUSH EAX                            ; 0053af93
    CALL core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 ; 0053af94
        ;   XREF to: 0047cbc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0053af99
    PUSH 0x63c5bc                       ; 0053af9c | = "Reloading keyframed models..."
    MOV EBP,dword ptr [0x00678a60]      ; 0053afa1 | g_CEditorToolsPtr
    PUSH EBP                            ; 0053afa7 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053afa8
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 0053afad
    CALL core_dmodel.cpp_freeAllModels_FUN_00478cb0 ; 0053afb0
        ;   XREF to: 00478cb0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_freeAllModels_FUN_00478cb0()
    PUSH EBX                            ; 0053afb5
    CALL core_mission.cpp_CDemonMission_FUN_00523cf0 ; 0053afb6
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523cf0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053afbb
    POP EBP                             ; 0053afbe
    POP EDI                             ; 0053afbf
    POP EBX                             ; 0053afc0
    RET                                 ; 0053afc1
    PUSH EAX                            ; 0053afc2
        ;   Label: caseD_b
    PUSH EBX                            ; 0053afc3
    CALL core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030 ; 0053afc4
        ;   XREF to: 0053b030 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030()
    ADD ESP,0x8                         ; 0053afc9
    POP EBP                             ; 0053afcc
    POP EDI                             ; 0053afcd
    POP EBX                             ; 0053afce
    RET                                 ; 0053afcf
    PUSH EAX                            ; 0053afd0
        ;   Label: caseD_c
    PUSH EBX                            ; 0053afd1
    CALL core_msnedit.cpp_FUN_0053b510  ; 0053afd2
        ;   XREF to: 0053b510 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_0053b510()
    ADD ESP,0x8                         ; 0053afd7
    POP EBP                             ; 0053afda
    POP EDI                             ; 0053afdb
    POP EBX                             ; 0053afdc
    RET                                 ; 0053afdd
    PUSH ESI                            ; 0053afde
        ;   Label: caseD_8
    MOV ESI,dword ptr [EAX + 0x68]      ; 0053afdf
    PUSH ESI                            ; 0053afe2
    PUSH EBX                            ; 0053afe3
    CALL core_msnedit.cpp_FUN_0053eb40  ; 0053afe4
        ;   XREF to: 0053eb40 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_0053eb40()
    ADD ESP,0x8                         ; 0053afe9
    POP ESI                             ; 0053afec
    POP EBP                             ; 0053afed
    POP EDI                             ; 0053afee
    POP EBX                             ; 0053afef
    RET                                 ; 0053aff0
    CMP dword ptr [0x02f7c52c],0x0      ; 0053aff1 | DAT_02f7c52c
        ;   Label: caseD_d
    JL 0x0053b008                       ; 0053aff8
        ;   XREF to: 0053b008 (CONDITIONAL_JUMP)  ; LAB_0053b008
    MOV dword ptr [0x02f7c52c],0xffffffff ; 0053affa | DAT_02f7c52c
    POP EBP                             ; 0053b004
    POP EDI                             ; 0053b005
    POP EBX                             ; 0053b006
    RET                                 ; 0053b007
    MOV EDX,EAX                         ; 0053b008
        ;   Label: LAB_0053b008
    SUB EDX,0x2f7a02c                   ; 0053b00a | DAT_02f7a02c
    MOV EBX,0xec                        ; 0053b010
    MOV EAX,EDX                         ; 0053b015
    SAR EDX,0x1f                        ; 0053b017
    IDIV EBX                            ; 0053b01a
    XOR ECX,ECX                         ; 0053b01c
    MOV dword ptr [0x02f7c530],ECX      ; 0053b01e | DAT_02f7c530
    MOV [0x02f7c52c],EAX                ; 0053b024 | DAT_02f7c52c
    POP EBP                             ; 0053b029
    POP EDI                             ; 0053b02a
    POP EBX                             ; 0053b02b
    RET                                 ; 0053b02c


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_msnedit_cpp_ReallyDeleteActorQuestion_FUN_0053bc80(void)
;
;
; XREF[2]:
;   core_msnedit.cpp_DeleteActors_FUN_0053df90 at 0053e0a5
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053ab64
;
; Referenced Globals:
;   TerminatedCString s_Really_delete_actor_s_0063c71b
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
;   core_mission.cpp_CDemonMission_FUN_00523f20
;   core_msnedit.cpp_FUN_00538ea0
;   core_msnedit.cpp_FUN_0053bcf0
;   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053bc80
        ;   Label: core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80
    PUSH ESI                            ; 0053bc81
    MOV EBX,dword ptr [ESP + 0xc]       ; 0053bc82
    MOV ESI,dword ptr [ESP + 0x10]      ; 0053bc86
    TEST ESI,ESI                        ; 0053bc8a
    JZ 0x0053bcc2                       ; 0053bc8c
        ;   XREF to: 0053bcc2 (CONDITIONAL_JUMP)  ; LAB_0053bcc2
    CMP dword ptr [ESP + 0x14],0x0      ; 0053bc8e
    JZ 0x0053bcc5                       ; 0053bc93
        ;   XREF to: 0053bcc5 (CONDITIONAL_JUMP)  ; LAB_0053bcc5
    CMP ESI,dword ptr [EBX + 0x28]      ; 0053bc95
        ;   Label: LAB_0053bc95
    JNZ 0x0053bca3                      ; 0053bc98
        ;   XREF to: 0053bca3 (CONDITIONAL_JUMP)  ; LAB_0053bca3
    PUSH EBX                            ; 0053bc9a
    CALL core_msnedit.cpp_FUN_0053bcf0  ; 0053bc9b
        ;   XREF to: 0053bcf0 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_0053bcf0()
    ADD ESP,0x4                         ; 0053bca0
    PUSH ESI                            ; 0053bca3
        ;   Label: LAB_0053bca3
    PUSH EBX                            ; 0053bca4
    CALL core_msnedit.cpp_FUN_00538ea0  ; 0053bca5
        ;   XREF to: 00538ea0 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_00538ea0()
    ADD ESP,0x8                         ; 0053bcaa
    PUSH 0x1                            ; 0053bcad
    PUSH ESI                            ; 0053bcaf
    PUSH EBX                            ; 0053bcb0
    CALL core_mission.cpp_CDemonMission_FUN_00523f20 ; 0053bcb1
        ;   XREF to: 00523f20 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523f20(CDemonMission * this_ptr)
    ADD ESP,0xc                         ; 0053bcb6
    PUSH EBX                            ; 0053bcb9
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 ; 0053bcba
        ;   XREF to: 00523e60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053bcbf
    POP ESI                             ; 0053bcc2
        ;   Label: LAB_0053bcc2
    POP EBX                             ; 0053bcc3
    RET                                 ; 0053bcc4
    PUSH ESI                            ; 0053bcc5
        ;   Label: LAB_0053bcc5
    PUSH 0x63c71b                       ; 0053bcc6 | = "Really delete actor %s"
    MOV ECX,dword ptr [0x00678a60]      ; 0053bccb | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0053bcd1 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 0053bcd2
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0xc                         ; 0053bcd7
    TEST EAX,EAX                        ; 0053bcda
    JNZ 0x0053bc95                      ; 0053bcdc
        ;   XREF to: 0053bc95 (CONDITIONAL_JUMP)  ; LAB_0053bc95
    POP ESI                             ; 0053bcde
    POP EBX                             ; 0053bcdf
    RET                                 ; 0053bce0


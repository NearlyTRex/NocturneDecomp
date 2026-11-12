; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_FUN_004f7a20(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x3cc]:4  local_3cc
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_load_FUN_004f5bc0 at 004f5c20
;
; Referenced Globals:
;   TerminatedCString s_CHero_005c8dac
;   TerminatedCString s_Warning_mission_has_no_h_005c8db2
;   TerminatedCString s_Mission_has_no_hero_plac_005c8deb
;   TerminatedCString s_core_mission_cpp_005c8ead
;   TerminatedCString s_Hell_froze_finding_hero_005c8ec1
;   TerminatedCString s_Replaced_hero_OK_You_wil_005c8eda
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_01d5baac
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_hero.cpp_CHeroPlaceholder_ctor_FUN_004d4ae0
;   core_main.c_FUN_004e4330
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930
;   core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530
;   core_mission.cpp_CDemonMission_removeActor_FUN_004f6ca0
;   crt_memory.c_operator_new_FUN_005a3cb2
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80
;   shape_edittool.cpp_CPickList_ctor_FUN_004831c0
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450
;   shape_edittool.cpp_CPickList_dtor_FUN_004832b0
;   shape_edittool.cpp_CStrList_add_FUN_00482070
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00482440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7a20
        ;   Label: core_mission.cpp_FUN_004f7a20
    PUSH EDI                            ; 004f7a21
    PUSH EBP                            ; 004f7a22
    SUB ESP,0x3c0                       ; 004f7a23
    MOV EDI,dword ptr [ESP + 0x3d0]     ; 004f7a29
    MOV EAX,ESP                         ; 004f7a30
    PUSH EAX                            ; 004f7a32
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004831c0 ; 004f7a33
        ;   XREF to: 004831c0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004831c0(CPickList * this_ptr)
    MOV EBX,dword ptr [EDI + 0x143c]    ; 004f7a38
    ADD ESP,0x4                         ; 004f7a3e
    TEST EBX,EBX                        ; 004f7a41
    JZ 0x004f7a87                       ; 004f7a43
        ;   XREF to: 004f7a87 (CONDITIONAL_JUMP)  ; LAB_004f7a87
    PUSH 0x5c8dac                       ; 004f7a45 | = "CHero"
        ;   Label: LAB_004f7a45
    PUSH EBX                            ; 004f7a4a
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004f7a4b
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f7a50
    TEST EAX,EAX                        ; 004f7a53
    JZ 0x004f7a65                       ; 004f7a55
        ;   XREF to: 004f7a65 (CONDITIONAL_JUMP)  ; LAB_004f7a65
    PUSH EBX                            ; 004f7a57
    LEA EAX,[ESP + 0x4]                 ; 004f7a58
    PUSH EAX                            ; 004f7a5c
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 004f7a5d
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004f7a62
    MOV EBP,dword ptr [0x01d5baac]      ; 004f7a65 | DAT_01d5baac
        ;   Label: LAB_004f7a65
    PUSH EBP                            ; 004f7a6b
    PUSH EBX                            ; 004f7a6c
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004f7a6d
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f7a72
    TEST EAX,EAX                        ; 004f7a75
    JNZ 0x004f7b9b                      ; 004f7a77
        ;   XREF to: 004f7b9b (CONDITIONAL_JUMP)  ; LAB_004f7b9b
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004f7a7d
        ;   Label: LAB_004f7a7d
    TEST EBX,EBX                        ; 004f7a83
    JNZ 0x004f7a45                      ; 004f7a85
        ;   XREF to: 004f7a45 (CONDITIONAL_JUMP)  ; LAB_004f7a45
    CMP dword ptr [ESP],0x1             ; 004f7a87
        ;   Label: LAB_004f7a87
    JL 0x004f7bc1                       ; 004f7a8b
        ;   XREF to: 004f7bc1 (CONDITIONAL_JUMP)  ; LAB_004f7bc1
    PUSH 0x0                            ; 004f7a91
    PUSH -0x1                           ; 004f7a93
    PUSH 0x5c8deb                       ; 004f7a95 | = "Mission has no hero placeholders.\n\n..."
    LEA EAX,[ESP + 0xc]                 ; 004f7a9a
    PUSH EAX                            ; 004f7a9e
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450 ; 004f7a9f
        ;   XREF to: 00483450 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004f7aa4
    TEST EAX,EAX                        ; 004f7aa7
    JL 0x004f7bd5                       ; 004f7aa9
        ;   XREF to: 004f7bd5 (CONDITIONAL_JUMP)  ; LAB_004f7bd5
    PUSH ESI                            ; 004f7aaf
    PUSH EAX                            ; 004f7ab0
    LEA EAX,[ESP + 0x8]                 ; 004f7ab1
    PUSH EAX                            ; 004f7ab5
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00482440 ; 004f7ab6
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00482440(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004f7abb
    PUSH EAX                            ; 004f7abe
    PUSH EDI                            ; 004f7abf
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90 ; 004f7ac0
        ;   XREF to: 004f6e90 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 004f7ac5
    MOV ESI,EAX                         ; 004f7ac8
    TEST EAX,EAX                        ; 004f7aca
    JNZ 0x004f7af1                      ; 004f7acc
        ;   XREF to: 004f7af1 (CONDITIONAL_JUMP)  ; LAB_004f7af1
    MOV ECX,0x5c8ead                    ; 004f7ace | = "..\\core\\mission.cpp"
    MOV EBX,0x6e6                       ; 004f7ad3
    PUSH 0x5c8ec1                       ; 004f7ad8 | = "Hell froze finding hero."
    MOV dword ptr [0x01d71de0],ECX      ; 004f7add | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 004f7ae3 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f7ae9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f7aee
    PUSH 0x17c                          ; 004f7af1
        ;   Label: LAB_004f7af1
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004f7af6
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004f7afb
    TEST EAX,EAX                        ; 004f7afe
    JZ 0x004f7b0b                       ; 004f7b00
        ;   XREF to: 004f7b0b (CONDITIONAL_JUMP)  ; LAB_004f7b0b
    PUSH EAX                            ; 004f7b02
    CALL core_hero.cpp_CHeroPlaceholder_ctor_FUN_004d4ae0 ; 004f7b03
        ;   XREF to: 004d4ae0 (UNCONDITIONAL_CALL)  ; CHeroPlaceholder * core_hero.cpp_CHeroPlaceholder_ctor_FUN_004d4ae0(CHeroPlaceholder * this_ptr)
    ADD ESP,0x4                         ; 004f7b08
    MOV EBP,EAX                         ; 004f7b0b
        ;   Label: LAB_004f7b0b
    LEA EDX,[ESI + 0x20]                ; 004f7b0d
    MOV dword ptr [EAX + 0x158],0x0     ; 004f7b10
    LEA EBX,[EAX + 0x20]                ; 004f7b1a
    MOV ECX,dword ptr [EDX]             ; 004f7b1d
    MOV dword ptr [EBX],ECX             ; 004f7b1f
    MOV ECX,dword ptr [EDX + 0x4]       ; 004f7b21
    MOV dword ptr [EBX + 0x4],ECX       ; 004f7b24
    MOV ECX,dword ptr [EDX + 0x8]       ; 004f7b27
    MOV dword ptr [EBX + 0x8],ECX       ; 004f7b2a
    MOV EDX,dword ptr [EDX + 0xc]       ; 004f7b2d
    ADD EAX,0x30                        ; 004f7b30
    MOV dword ptr [EBX + 0xc],EDX       ; 004f7b33
    LEA EBX,[ESI + 0x30]                ; 004f7b36
    CMP EAX,EBX                         ; 004f7b39
    JZ 0x004f7b4d                       ; 004f7b3b
        ;   XREF to: 004f7b4d (CONDITIONAL_JUMP)  ; LAB_004f7b4d
    MOV EDX,dword ptr [EBX]             ; 004f7b3d
    MOV dword ptr [EAX],EDX             ; 004f7b3f
    MOV EDX,dword ptr [EBX + 0x4]       ; 004f7b41
    MOV dword ptr [EAX + 0x4],EDX       ; 004f7b44
    MOV EDX,dword ptr [EBX + 0x8]       ; 004f7b47
    MOV dword ptr [EAX + 0x8],EDX       ; 004f7b4a
    PUSH EBP                            ; 004f7b4d
        ;   Label: LAB_004f7b4d
    PUSH EDI                            ; 004f7b4e
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530 ; 004f7b4f
        ;   XREF to: 004f7530 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004f7b54
    PUSH 0x1                            ; 004f7b57
    PUSH ESI                            ; 004f7b59
    PUSH EDI                            ; 004f7b5a
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_004f6ca0 ; 004f7b5b
        ;   XREF to: 004f6ca0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_004f6ca0(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    ADD ESP,0xc                         ; 004f7b60
    PUSH EBP                            ; 004f7b63
    PUSH EDI                            ; 004f7b64
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 004f7b65
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004f7b6a
    PUSH 0x5c8eda                       ; 004f7b6d | = "Replaced hero OK.  You will need to s..."
    MOV ESI,dword ptr [0x005fb140]      ; 004f7b72 | g_CEditorToolsPtr
    PUSH ESI                            ; 004f7b78
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80 ; 004f7b79
        ;   XREF to: 0047ce80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004f7b7e
    PUSH 0x0                            ; 004f7b81
    LEA EAX,[ESP + 0x8]                 ; 004f7b83
    PUSH EAX                            ; 004f7b87
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004832b0 ; 004f7b88
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004832b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f7b8d
    POP ESI                             ; 004f7b90
    ADD ESP,0x3c0                       ; 004f7b91
    POP EBP                             ; 004f7b97
    POP EDI                             ; 004f7b98
    POP EBX                             ; 004f7b99
    RET                                 ; 004f7b9a
    MOV EDX,dword ptr [EAX + 0x158]     ; 004f7b9b
        ;   Label: LAB_004f7b9b
    TEST EDX,EDX                        ; 004f7ba1
    JNZ 0x004f7a7d                      ; 004f7ba3
        ;   XREF to: 004f7a7d (CONDITIONAL_JUMP)  ; LAB_004f7a7d
    PUSH EDX                            ; 004f7ba9
    LEA EAX,[ESP + 0x4]                 ; 004f7baa
    PUSH EAX                            ; 004f7bae
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004832b0 ; 004f7baf
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004832b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f7bb4
    ADD ESP,0x3c0                       ; 004f7bb7
    POP EBP                             ; 004f7bbd
    POP EDI                             ; 004f7bbe
    POP EBX                             ; 004f7bbf
    RET                                 ; 004f7bc0
    PUSH 0x5c8db2                       ; 004f7bc1 | = "Warning: mission has no hero placehol..."
        ;   Label: LAB_004f7bc1
    MOV EDI,dword ptr [0x005fb140]      ; 004f7bc6 | g_CEditorToolsPtr
    PUSH EDI                            ; 004f7bcc
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80 ; 004f7bcd
        ;   XREF to: 0047ce80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004f7bd2
    PUSH 0x0                            ; 004f7bd5
        ;   Label: LAB_004f7bd5
    LEA EAX,[ESP + 0x4]                 ; 004f7bd7
    PUSH EAX                            ; 004f7bdb
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004832b0 ; 004f7bdc
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004832b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f7be1
    ADD ESP,0x3c0                       ; 004f7be4
    POP EBP                             ; 004f7bea
    POP EDI                             ; 004f7beb
    POP EBX                             ; 004f7bec
    RET                                 ; 004f7bed


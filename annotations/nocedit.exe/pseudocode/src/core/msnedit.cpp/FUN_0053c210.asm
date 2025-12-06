; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_FUN_0053c210()
;
; Local Variables:
; undefined4       Stack[-0x3b4]:4  local_3b4
;
; XREF[1]:
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053a904
;
; Referenced Globals:
;   TerminatedCString s_No_actors_in_set_0063c850
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CEditorTools g_CEditorToolsPtr
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;   undefined4 DAT_032613d4
;
; Called Functions:
;   core_mission.cpp_CDemonMission_FUN_00524030
;   crt_string.c_stricmp_FUN_005fe7f0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c210
        ;   Label: core_msnedit.cpp_FUN_0053c210
    PUSH ESI                            ; 0053c211
    PUSH EDI                            ; 0053c212
    SUB ESP,0x3a8                       ; 0053c213
    MOV EDI,dword ptr [ESP + 0x3c0]     ; 0053c219
    MOV EAX,[0x006810c8]                ; 0053c220 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    CMP dword ptr [EAX + 0x14d154],0x1  ; 0053c225 | g_CDemonSetInstance.actor_list_ptr
    JL 0x0053c265                       ; 0053c22c | LAB_0053c265
        ;   XREF to: 0053c265 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 0053c22e
    PUSH EAX                            ; 0053c230
    XOR EBX,EBX                         ; 0053c231
    XOR ESI,ESI                         ; 0053c233
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053c235 | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0053c23a
    MOV EAX,[0x006810c8]                ; 0053c23d | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_0053c23d
    CMP EBX,dword ptr [EAX + 0x14d154]  ; 0053c242 | g_CDemonSetInstance.actor_list_ptr
    JGE 0x0053c287                      ; 0053c248 | LAB_0053c287
        ;   XREF to: 0053c287 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d158] ; 0053c24a | g_CDemonSetInstance.actor_list_data[0]
    PUSH EDX                            ; 0053c251
    LEA EAX,[ESP + 0x4]                 ; 0053c252
    PUSH EAX                            ; 0053c256
    ADD ESI,0x4                         ; 0053c257
    INC EBX                             ; 0053c25a
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053c25b | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053c260
    JMP 0x0053c23d                      ; 0053c263 | LAB_0053c23d
        ;   XREF to: 0053c23d (UNCONDITIONAL_JUMP)
    PUSH 0x63c850                       ; 0053c265 | = "No actors in set." | s_No_actors_in_set_0063c850 = No actors in set.
        ;   Label: LAB_0053c265
    MOV ECX,dword ptr [0x00678a60]      ; 0053c26a | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 0053c270 | CEditorTools g_CEditorToolsPtr
    XOR EBX,EBX                         ; 0053c271
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0053c273 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053c278
    MOV EAX,EBX                         ; 0053c27b
    ADD ESP,0x3a8                       ; 0053c27d
    POP EDI                             ; 0053c283
    POP ESI                             ; 0053c284
    POP EBX                             ; 0053c285
    RET                                 ; 0053c286
    MOV EAX,ESP                         ; 0053c287
        ;   Label: LAB_0053c287
    PUSH EAX                            ; 0053c289
    MOV ESI,0xffffffff                  ; 0053c28a
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0 ; 0053c28f | void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0053c294
    TEST EDI,EDI                        ; 0053c297
    JZ 0x0053c2c2                       ; 0053c299 | LAB_0053c2c2
        ;   XREF to: 0053c2c2 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 0053c29b
    XOR EBX,EBX                         ; 0053c29e
    TEST EAX,EAX                        ; 0053c2a0
    JLE 0x0053c2c2                      ; 0053c2a2 | LAB_0053c2c2
        ;   XREF to: 0053c2c2 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0053c2a4
        ;   Label: LAB_0053c2a4
    LEA EAX,[ESP + 0x4]                 ; 0053c2a5
    PUSH EAX                            ; 0053c2a9
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0053c2aa | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053c2af
    PUSH EAX                            ; 0053c2b2
    PUSH EDI                            ; 0053c2b3
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0053c2b4 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053c2b9
    TEST EAX,EAX                        ; 0053c2bc
    JNZ 0x0053c31a                      ; 0053c2be | LAB_0053c31a
        ;   XREF to: 0053c31a (CONDITIONAL_JUMP)
    MOV ESI,EBX                         ; 0053c2c0
    PUSH 0x0                            ; 0053c2c2
        ;   Label: LAB_0053c2c2
    PUSH ESI                            ; 0053c2c4
    MOV EBX,dword ptr [ESP + 0x3c4]     ; 0053c2c5
    PUSH EBX                            ; 0053c2cc
    LEA EAX,[ESP + 0xc]                 ; 0053c2cd
    PUSH EAX                            ; 0053c2d1
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053c2d2 | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0053c2d7
    TEST EAX,EAX                        ; 0053c2da
    JL 0x0053c324                       ; 0053c2dc | LAB_0053c324
        ;   XREF to: 0053c324 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0053c2de
    LEA EAX,[ESP + 0x4]                 ; 0053c2df
    PUSH EAX                            ; 0053c2e3
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0053c2e4 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053c2e9
    PUSH EAX                            ; 0053c2ec
    MOV ESI,dword ptr [ESP + 0x3bc]     ; 0053c2ed
    PUSH ESI                            ; 0053c2f4
    CALL core_mission.cpp_CDemonMission_FUN_00524030 ; 0053c2f5 | char * core_mission.cpp_CDemonMission_FUN_00524030(CDemonMission * this_ptr)
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053c2fa
    PUSH 0x0                            ; 0053c2fd
    MOV EBX,EAX                         ; 0053c2ff
    LEA EAX,[ESP + 0x4]                 ; 0053c301
    PUSH EAX                            ; 0053c305
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053c306 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053c30b
    MOV EAX,EBX                         ; 0053c30e
    ADD ESP,0x3a8                       ; 0053c310
    POP EDI                             ; 0053c316
    POP ESI                             ; 0053c317
    POP EBX                             ; 0053c318
    RET                                 ; 0053c319
    MOV ECX,dword ptr [ESP]             ; 0053c31a
        ;   Label: LAB_0053c31a
    INC EBX                             ; 0053c31d
    CMP EBX,ECX                         ; 0053c31e
    JL 0x0053c2a4                       ; 0053c320 | LAB_0053c2a4
        ;   XREF to: 0053c2a4 (CONDITIONAL_JUMP)
    JMP 0x0053c2c2                      ; 0053c322 | LAB_0053c2c2
        ;   XREF to: 0053c2c2 (UNCONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 0053c324
        ;   Label: LAB_0053c324
    PUSH EBX                            ; 0053c326
    LEA EAX,[ESP + 0x4]                 ; 0053c327
    PUSH EAX                            ; 0053c32b
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053c32c | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053c331
    MOV EAX,EBX                         ; 0053c334
    ADD ESP,0x3a8                       ; 0053c336
    POP EDI                             ; 0053c33c
    POP ESI                             ; 0053c33d
    POP EBX                             ; 0053c33e
    RET                                 ; 0053c33f


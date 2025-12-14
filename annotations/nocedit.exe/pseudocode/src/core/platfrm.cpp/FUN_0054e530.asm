; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_platfrm.cpp_FUN_0054e530()
;
; Local Variables:
; undefined        Stack[-0x544]:1  local_544
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0xd4]:1  local_d4
;
; XREF[1]:
;   core_platfrm.cpp_FUN_0054e7d0 at 0054e8bc
;
; Referenced Globals:
;   TerminatedCString s_Choose_a_different_cours_0063f9e9
;   TerminatedCString s_Don_t_use_a_course_file_0063fa08
;   TerminatedCString s_Oops_Forget_I_ever_click_0063fa20
;   TerminatedCString s_Change_course_setting_fo_0063fa46
;   TerminatedCString s_pth_0063fa6c
;   TerminatedCString s_data_0063fa72
;   TerminatedCString s_Select_a_course_for_plat_0063fa77
;   TerminatedCString s_pth_0063fa97
;   TerminatedCString s_data_0063fa9d
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;   undefined4 g_CPlatformClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_course.cpp_CCourse_free_FUN_004426c0
;   core_course.cpp_CCourse_FUN_004427a0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e530
        ;   Label: core_platfrm.cpp_FUN_0054e530
    PUSH ESI                            ; 0054e531
    PUSH EDI                            ; 0054e532
    SUB ESP,0x538                       ; 0054e533
    MOV EDI,dword ptr [ESP + 0x548]     ; 0054e539
    MOV EDX,dword ptr [0x030d508c]      ; 0054e540 | g_CPlatformClassInfo.name_hash
    PUSH EDX                            ; 0054e546
    PUSH EDI                            ; 0054e547
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0054e548
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 0054e54d
    LEA ESI,[EAX + 0x2f0]               ; 0054e54f
    MOV AH,byte ptr [EAX + 0x2f0]       ; 0054e555
    ADD ESP,0x8                         ; 0054e55b
    TEST AH,AH                          ; 0054e55e
    JZ 0x0054e6ab                       ; 0054e560
        ;   XREF to: 0054e6ab (CONDITIONAL_JUMP)  ; LAB_0054e6ab
    MOV EAX,ESP                         ; 0054e566
    PUSH EAX                            ; 0054e568
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0054e569
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0054e56e
    PUSH 0x63f9e9                       ; 0054e571 | = "Choose a different course file"
    LEA EAX,[ESP + 0x4]                 ; 0054e576
    PUSH EAX                            ; 0054e57a
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0054e57b
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0054e580
    PUSH 0x63fa08                       ; 0054e583 | = "Don't use a course file"
    LEA EAX,[ESP + 0x4]                 ; 0054e588
    PUSH EAX                            ; 0054e58c
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0054e58d
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0054e592
    PUSH 0x63fa20                       ; 0054e595 | = "Oops.  Forget I ever clicked there..."
    LEA EAX,[ESP + 0x4]                 ; 0054e59a
    PUSH EAX                            ; 0054e59e
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0054e59f
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0054e5a4
    PUSH EDI                            ; 0054e5a7
    PUSH 0x63fa46                       ; 0054e5a8 | = "Change course setting for platform %s"
    LEA EAX,[ESP + 0x3b0]               ; 0054e5ad
    PUSH EAX                            ; 0054e5b4
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0054e5b5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0054e5ba
    PUSH 0x0                            ; 0054e5bd
    PUSH -0x1                           ; 0054e5bf
    LEA EAX,[ESP + 0x3b0]               ; 0054e5c1
    PUSH EAX                            ; 0054e5c8
    LEA EAX,[ESP + 0xc]                 ; 0054e5c9
    PUSH EAX                            ; 0054e5cd
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0054e5ce
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0054e5d3
    TEST EAX,EAX                        ; 0054e5d6
    JBE 0x0054e64e                      ; 0054e5d8
        ;   XREF to: 0054e64e (CONDITIONAL_JUMP)  ; LAB_0054e64e
    CMP EAX,0x1                         ; 0054e5da
    JNZ 0x0054e68f                      ; 0054e5dd
        ;   XREF to: 0054e68f (CONDITIONAL_JUMP)  ; LAB_0054e68f
    LEA EAX,[EBX + 0x334]               ; 0054e5e3
    PUSH EAX                            ; 0054e5e9
    LEA EAX,[EBX + 0x31c]               ; 0054e5ea
    PUSH EAX                            ; 0054e5f0
    LEA ESI,[EBX + 0x310]               ; 0054e5f1
    PUSH 0x0                            ; 0054e5f7
    PUSH ESI                            ; 0054e5f9
    CALL core_course.cpp_CCourse_FUN_004427a0 ; 0054e5fa
        ;   XREF to: 004427a0 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_FUN_004427a0()
    ADD ESP,0x10                        ; 0054e5ff
    LEA EAX,[EBX + 0x344]               ; 0054e602
    PUSH EAX                            ; 0054e608
    LEA EAX,[EBX + 0x328]               ; 0054e609
    PUSH EAX                            ; 0054e60f
    PUSH 0x3f7ff972                     ; 0054e610
    PUSH ESI                            ; 0054e615
    CALL core_course.cpp_CCourse_FUN_004427a0 ; 0054e616
        ;   XREF to: 004427a0 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_FUN_004427a0()
    ADD ESP,0x10                        ; 0054e61b
    PUSH ESI                            ; 0054e61e
    CALL core_course.cpp_CCourse_free_FUN_004426c0 ; 0054e61f
        ;   XREF to: 004426c0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_free_FUN_004426c0(CCourse * this_ptr)
    ADD ESP,0x4                         ; 0054e624
    PUSH 0x0                            ; 0054e627
    LEA EAX,[ESP + 0x4]                 ; 0054e629
    PUSH EAX                            ; 0054e62d
    MOV byte ptr [EBX + 0x2f0],0x0      ; 0054e62e
    MOV EBX,0x1                         ; 0054e635
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0054e63a
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0054e63f
    MOV EAX,EBX                         ; 0054e642
    ADD ESP,0x538                       ; 0054e644
    POP EDI                             ; 0054e64a
    POP ESI                             ; 0054e64b
    POP EBX                             ; 0054e64c
    RET                                 ; 0054e64d
    PUSH 0x0                            ; 0054e64e
        ;   Label: LAB_0054e64e
    PUSH ESI                            ; 0054e650
    PUSH 0x63fa6c                       ; 0054e651 | = "*.pth"
    PUSH 0x63fa72                       ; 0054e656 | = "data"
    LEA EAX,[ESP + 0x3b8]               ; 0054e65b
    PUSH EAX                            ; 0054e662
    MOV EBX,dword ptr [0x00678a60]      ; 0054e663 | g_CEditorToolsPtr
    PUSH EBX                            ; 0054e669 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 0054e66a
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 0054e66f
    PUSH 0x0                            ; 0054e672
    MOV EBX,EAX                         ; 0054e674
    LEA EAX,[ESP + 0x4]                 ; 0054e676
    PUSH EAX                            ; 0054e67a
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0054e67b
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0054e680
    MOV EAX,EBX                         ; 0054e683
    ADD ESP,0x538                       ; 0054e685
    POP EDI                             ; 0054e68b
    POP ESI                             ; 0054e68c
    POP EBX                             ; 0054e68d
    RET                                 ; 0054e68e
    XOR EBX,EBX                         ; 0054e68f
        ;   Label: LAB_0054e68f
    PUSH EBX                            ; 0054e691
    LEA EAX,[ESP + 0x4]                 ; 0054e692
    PUSH EAX                            ; 0054e696
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0054e697
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0054e69c
    MOV EAX,EBX                         ; 0054e69f
    ADD ESP,0x538                       ; 0054e6a1
    POP EDI                             ; 0054e6a7
    POP ESI                             ; 0054e6a8
    POP EBX                             ; 0054e6a9
    RET                                 ; 0054e6aa
    PUSH EDI                            ; 0054e6ab
        ;   Label: LAB_0054e6ab
    PUSH 0x63fa77                       ; 0054e6ac | = "Select a course for platform %s"
    LEA EAX,[ESP + 0x478]               ; 0054e6b1
    PUSH EAX                            ; 0054e6b8
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0054e6b9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0054e6be
    PUSH 0x0                            ; 0054e6c1
    PUSH ESI                            ; 0054e6c3
    PUSH 0x63fa97                       ; 0054e6c4 | = "*.pth"
    PUSH 0x63fa9d                       ; 0054e6c9 | = "data"
    LEA EAX,[ESP + 0x480]               ; 0054e6ce
    PUSH EAX                            ; 0054e6d5
    MOV ECX,dword ptr [0x00678a60]      ; 0054e6d6 | g_CEditorToolsPtr
    PUSH ECX                            ; 0054e6dc | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 0054e6dd
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 0054e6e2
    MOV EBX,EAX                         ; 0054e6e5
    MOV EAX,EBX                         ; 0054e6e7
    ADD ESP,0x538                       ; 0054e6e9
    POP EDI                             ; 0054e6ef
    POP ESI                             ; 0054e6f0
    POP EBX                             ; 0054e6f1
    RET                                 ; 0054e6f2


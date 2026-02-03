; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053b510(CDemonMission *this_ptr,int param_2)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; Local Variables:
; undefined4       Stack[-0x6ac]:4  local_6ac
; undefined1       Stack[-0x110]:1  local_110
; undefined1       Stack[-0x10f]:1  local_10f
; undefined1       Stack[-0x38]:1  local_38
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_FUN_0053af50 at 0053afd2
;
; Referenced Globals:
;   TerminatedCString s_none_0063b6e0
;   TerminatedCString s_true_0063b6e5
;   TerminatedCString s_s_Referenced_by_name_0063c654
;   TerminatedCString s_s_Checks_for_s_in_s_0063c66a
;   TerminatedCString s_No_actors_relevent_to_th_0063c685
;   TerminatedCString s_Actors_relevent_to_s_0063c6b8
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   uchar[257] g_CharacterClassificationTable
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   core_actor.cpp_FUN_0040e130
;   core_mission.cpp_CDemonMission_FUN_00523cc0
;   core_mission.cpp_CDemonMission_FUN_00524030
;   core_msnedit.cpp_CDemonMission_FUN_0053c140
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_stricmp_FUN_005fe7f0
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
;   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
;   shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b510
        ;   Label: core_msnedit.cpp_CDemonMission_FUN_0053b510
    PUSH ESI                            ; 0053b511
    PUSH EDI                            ; 0053b512
    PUSH EBP                            ; 0053b513
    SUB ESP,0x2ba0                      ; 0053b514
    LEA EAX,[ESP + 0x2b78]              ; 0053b51a
    PUSH EAX                            ; 0053b521
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 0053b522
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0053b527
    MOV EBX,dword ptr [ESP + 0x2bb8]    ; 0053b52a
    MOV EBX,dword ptr [EBX + 0x68]      ; 0053b531
    MOV AH,byte ptr [EBX]               ; 0053b534
    LEA EDI,[ESP + 0x2b78]              ; 0053b536
    TEST AH,AH                          ; 0053b53d
    JZ 0x0053b5bf                       ; 0053b53f
        ;   XREF to: 0053b5bf (CONDITIONAL_JUMP)  ; LAB_0053b5bf
    XOR EAX,EAX                         ; 0053b545
        ;   Label: LAB_0053b545
    MOV AL,byte ptr [EBX]               ; 0053b547
    MOV EDX,EAX                         ; 0053b549
    INC DL                              ; 0053b54b
    AND EDX,0xff                        ; 0053b54d
    TEST byte ptr [EDX + 0x6849c4],0xe0 ; 0053b553 | g_CharacterClassificationTable
    JZ 0x0053b807                       ; 0053b55a
        ;   XREF to: 0053b807 (CONDITIONAL_JUMP)  ; LAB_0053b807
    LEA EDX,[ESP + 0x2aa0]              ; 0053b560
        ;   Label: LAB_0053b560
    MOV AL,byte ptr [EBX]               ; 0053b567
        ;   Label: LAB_0053b567
    MOV byte ptr [EDX],AL               ; 0053b569
    XOR EAX,EAX                         ; 0053b56b
    MOV AL,byte ptr [EBX + 0x1]         ; 0053b56d
    MOV dword ptr [ESP + 0x2b88],EAX    ; 0053b570
    MOV CL,byte ptr [ESP + 0x2b88]      ; 0053b577
    INC CL                              ; 0053b57e
    MOVZX ESI,CL                        ; 0053b580
    INC EBX                             ; 0053b583
    MOV CH,byte ptr [ESI + 0x6849c4]    ; 0053b584 | g_CharacterClassificationTable
    INC EDX                             ; 0053b58a
    TEST CH,0xe0                        ; 0053b58b
    JNZ 0x0053b567                      ; 0053b58e
        ;   XREF to: 0053b567 (CONDITIONAL_JUMP)  ; LAB_0053b567
    CMP EAX,0x2d                        ; 0053b590
    JZ 0x0053b567                       ; 0053b593
        ;   XREF to: 0053b567 (CONDITIONAL_JUMP)  ; LAB_0053b567
    CMP EAX,0x5f                        ; 0053b595
    JZ 0x0053b567                       ; 0053b598
        ;   XREF to: 0053b567 (CONDITIONAL_JUMP)  ; LAB_0053b567
    PUSH 0x63b6e0                       ; 0053b59a | = "none"
    LEA EAX,[ESP + 0x2aa4]              ; 0053b59f
    PUSH EAX                            ; 0053b5a6
    MOV byte ptr [EDX],0x0              ; 0053b5a7
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0053b5aa
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053b5af
    TEST EAX,EAX                        ; 0053b5b2
    JNZ 0x0053b81f                      ; 0053b5b4
        ;   XREF to: 0053b81f (CONDITIONAL_JUMP)  ; LAB_0053b81f
    CMP byte ptr [EBX],0x0              ; 0053b5ba
        ;   Label: LAB_0053b5ba
    JNZ 0x0053b545                      ; 0053b5bd
        ;   XREF to: 0053b545 (CONDITIONAL_JUMP)  ; LAB_0053b545
    MOV EDX,dword ptr [ESP + 0x2bb4]    ; 0053b5bf
        ;   Label: LAB_0053b5bf
    PUSH EDX                            ; 0053b5c6
    CALL core_mission.cpp_CDemonMission_FUN_00523cc0 ; 0053b5c7
        ;   XREF to: 00523cc0 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_FUN_00523cc0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053b5cc
    LEA EAX,[ESP + 0x2504]              ; 0053b5cf
    PUSH EAX                            ; 0053b5d6
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053b5d7
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0053b5dc
    MOV EAX,dword ptr [ESP + 0x2bb4]    ; 0053b5df
    MOV EAX,dword ptr [EAX + 0x548]     ; 0053b5e6
    MOV dword ptr [ESP + 0x2b98],EAX    ; 0053b5ec
    TEST EAX,EAX                        ; 0053b5f3
    JZ 0x0053b73d                       ; 0053b5f5
        ;   XREF to: 0053b73d (CONDITIONAL_JUMP)  ; LAB_0053b73d
    MOV EAX,ESP                         ; 0053b5fb
        ;   Label: LAB_0053b5fb
    PUSH EAX                            ; 0053b5fd
    CALL core_actor.cpp_FUN_0040e130    ; 0053b5fe
        ;   XREF to: 0040e130 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040e130()
    ADD ESP,0x4                         ; 0053b603
    MOV EDX,ESP                         ; 0053b606
    MOV EAX,dword ptr [ESP + 0x2b98]    ; 0053b608
    PUSH EDX                            ; 0053b60f
    MOV EDX,dword ptr [ESP + 0x2b9c]    ; 0053b610
    MOV EAX,dword ptr [EAX + 0x154]     ; 0053b617
    PUSH EDX                            ; 0053b61d
    CALL dword ptr [EAX + 0xd4]         ; 0053b61e
    ADD ESP,0x8                         ; 0053b624
    XOR ECX,ECX                         ; 0053b627
    MOV EBX,dword ptr [ESP + 0x2b78]    ; 0053b629
    MOV dword ptr [ESP + 0x2b94],ECX    ; 0053b630
    TEST EBX,EBX                        ; 0053b637
    JLE 0x0053b721                      ; 0053b639
        ;   XREF to: 0053b721 (CONDITIONAL_JUMP)  ; LAB_0053b721
    MOV EBP,dword ptr [ESP + 0x2b94]    ; 0053b63f
        ;   Label: LAB_0053b63f
    PUSH EBP                            ; 0053b646
    LEA EAX,[ESP + 0x2b7c]              ; 0053b647
    PUSH EAX                            ; 0053b64e
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0053b64f
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0053b654
    MOV EDX,dword ptr [ESP + 0x2b98]    ; 0053b657
    PUSH EDX                            ; 0053b65e
    PUSH EAX                            ; 0053b65f
    MOV EDI,EAX                         ; 0053b660
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0053b662
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053b667
    TEST EAX,EAX                        ; 0053b66a
    JNZ 0x0053b6a3                      ; 0053b66c
        ;   XREF to: 0053b6a3 (CONDITIONAL_JUMP)  ; LAB_0053b6a3
    MOV ECX,dword ptr [ESP + 0x2b98]    ; 0053b66e
    PUSH ECX                            ; 0053b675
    PUSH 0x63c654                       ; 0053b676 | = "%s\tReferenced by name"
    LEA EAX,[ESP + 0x28b4]              ; 0053b67b
    PUSH EAX                            ; 0053b682
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053b683
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053b688
    LEA EAX,[ESP + 0x28ac]              ; 0053b68b
    PUSH EAX                            ; 0053b692
    LEA EAX,[ESP + 0x2508]              ; 0053b693
    PUSH EAX                            ; 0053b69a
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053b69b
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053b6a0
    XOR EBX,EBX                         ; 0053b6a3
        ;   Label: LAB_0053b6a3
    MOV ESI,dword ptr [ESP + 0x4]       ; 0053b6a5
    MOV dword ptr [ESP + 0x2b9c],EBX    ; 0053b6a9
    TEST ESI,ESI                        ; 0053b6b0
    JLE 0x0053b703                      ; 0053b6b2
        ;   XREF to: 0053b703 (CONDITIONAL_JUMP)  ; LAB_0053b703
    LEA EAX,[ESP + 0x8]                 ; 0053b6b4
    ADD EAX,0x4                         ; 0053b6b8
    MOV dword ptr [ESP + 0x2b8c],EAX    ; 0053b6bb
    IMUL EBX,dword ptr [ESP + 0x2b9c],0xec ; 0053b6c2
        ;   Label: LAB_0053b6c2
    CMP dword ptr [ESP + EBX*0x1 + 0x8],0xb ; 0053b6cd
    JZ 0x0053b852                       ; 0053b6d2
        ;   XREF to: 0053b852 (CONDITIONAL_JUMP)  ; LAB_0053b852
    MOV EBP,dword ptr [ESP + 0x2b8c]    ; 0053b6d8
        ;   Label: LAB_0053b6d8
    MOV EAX,dword ptr [ESP + 0x2b9c]    ; 0053b6df
    MOV EDX,dword ptr [ESP + 0x4]       ; 0053b6e6
    ADD EBP,0xec                        ; 0053b6ea
    INC EAX                             ; 0053b6f0
    MOV dword ptr [ESP + 0x2b8c],EBP    ; 0053b6f1
    MOV dword ptr [ESP + 0x2b9c],EAX    ; 0053b6f8
    CMP EAX,EDX                         ; 0053b6ff
    JL 0x0053b6c2                       ; 0053b701
        ;   XREF to: 0053b6c2 (CONDITIONAL_JUMP)  ; LAB_0053b6c2
    MOV ESI,dword ptr [ESP + 0x2b94]    ; 0053b703
        ;   Label: LAB_0053b703
    INC ESI                             ; 0053b70a
    MOV EDI,dword ptr [ESP + 0x2b78]    ; 0053b70b
    MOV dword ptr [ESP + 0x2b94],ESI    ; 0053b712
    CMP ESI,EDI                         ; 0053b719
    JL 0x0053b63f                       ; 0053b71b
        ;   XREF to: 0053b63f (CONDITIONAL_JUMP)  ; LAB_0053b63f
    MOV EAX,dword ptr [ESP + 0x2b98]    ; 0053b721
        ;   Label: LAB_0053b721
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0053b728
    MOV dword ptr [ESP + 0x2b98],EAX    ; 0053b72e
    TEST EAX,EAX                        ; 0053b735
    JNZ 0x0053b5fb                      ; 0053b737
        ;   XREF to: 0053b5fb (CONDITIONAL_JUMP)  ; LAB_0053b5fb
    CMP dword ptr [ESP + 0x2504],0x1    ; 0053b73d
        ;   Label: LAB_0053b73d
    JL 0x0053b9d3                       ; 0053b745
        ;   XREF to: 0053b9d3 (CONDITIONAL_JUMP)  ; LAB_0053b9d3
    LEA EAX,[ESP + 0x2504]              ; 0053b74b
    PUSH EAX                            ; 0053b752
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0 ; 0053b753
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0053b758
    MOV EAX,dword ptr [ESP + 0x2bb8]    ; 0053b75b
    ADD EAX,0x4                         ; 0053b762
    PUSH EAX                            ; 0053b765
    PUSH 0x63c6b8                       ; 0053b766 | = "Actors relevent to \"%s\""
    LEA EAX,[ESP + 0x28b4]              ; 0053b76b
    PUSH EAX                            ; 0053b772
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053b773
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053b778
    PUSH 0x0                            ; 0053b77b
    PUSH -0x1                           ; 0053b77d
    LEA EAX,[ESP + 0x28b4]              ; 0053b77f
    PUSH EAX                            ; 0053b786
    LEA EAX,[ESP + 0x2510]              ; 0053b787
    PUSH EAX                            ; 0053b78e
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053b78f
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0053b794
    TEST EAX,EAX                        ; 0053b797
    JL 0x0053b7d8                       ; 0053b799
        ;   XREF to: 0053b7d8 (CONDITIONAL_JUMP)  ; LAB_0053b7d8
    PUSH 0x0                            ; 0053b79b
    PUSH EAX                            ; 0053b79d
    LEA EAX,[ESP + 0x28b4]              ; 0053b79e
    PUSH EAX                            ; 0053b7a5
    LEA EAX,[ESP + 0x2510]              ; 0053b7a6
    PUSH EAX                            ; 0053b7ad
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0053b7ae
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
    ADD ESP,0x10                        ; 0053b7b3
    LEA EAX,[ESP + 0x28ac]              ; 0053b7b6
    PUSH EAX                            ; 0053b7bd
    MOV EDI,dword ptr [ESP + 0x2bb8]    ; 0053b7be
    PUSH EDI                            ; 0053b7c5
    CALL core_mission.cpp_CDemonMission_FUN_00524030 ; 0053b7c6
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; char * core_mission.cpp_CDemonMission_FUN_00524030(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 0053b7cb
    PUSH EAX                            ; 0053b7ce
    PUSH EDI                            ; 0053b7cf
    CALL core_msnedit.cpp_CDemonMission_FUN_0053c140 ; 0053b7d0
        ;   XREF to: 0053c140 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_FUN_0053c140(CDemonMission * this_ptr, int param_2)
    ADD ESP,0x8                         ; 0053b7d5
        ;   Label: LAB_0053b7d5
    PUSH 0x0                            ; 0053b7d8
        ;   Label: LAB_0053b7d8
    LEA EAX,[ESP + 0x2508]              ; 0053b7da
    PUSH EAX                            ; 0053b7e1
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053b7e2
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053b7e7
    PUSH 0x0                            ; 0053b7ea
    LEA EAX,[ESP + 0x2b7c]              ; 0053b7ec
    PUSH EAX                            ; 0053b7f3
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 0053b7f4
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053b7f9
    ADD ESP,0x2ba0                      ; 0053b7fc
    POP EBP                             ; 0053b802
    POP EDI                             ; 0053b803
    POP ESI                             ; 0053b804
    POP EBX                             ; 0053b805
    RET                                 ; 0053b806
    CMP EAX,0x2d                        ; 0053b807
        ;   Label: LAB_0053b807
    JZ 0x0053b560                       ; 0053b80a
        ;   XREF to: 0053b560 (CONDITIONAL_JUMP)  ; LAB_0053b560
    CMP EAX,0x5f                        ; 0053b810
    JZ 0x0053b560                       ; 0053b813
        ;   XREF to: 0053b560 (CONDITIONAL_JUMP)  ; LAB_0053b560
    INC EBX                             ; 0053b819
    JMP 0x0053b5ba                      ; 0053b81a
        ;   XREF to: 0053b5ba (UNCONDITIONAL_JUMP)  ; LAB_0053b5ba
    PUSH 0x63b6e5                       ; 0053b81f | = "true"
        ;   Label: LAB_0053b81f
    LEA EAX,[ESP + 0x2aa4]              ; 0053b824
    PUSH EAX                            ; 0053b82b
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0053b82c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053b831
    TEST EAX,EAX                        ; 0053b834
    JZ 0x0053b5ba                       ; 0053b836
        ;   XREF to: 0053b5ba (CONDITIONAL_JUMP)  ; LAB_0053b5ba
    LEA EAX,[ESP + 0x2aa0]              ; 0053b83c
    PUSH EAX                            ; 0053b843
    PUSH EDI                            ; 0053b844
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053b845
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053b84a
    JMP 0x0053b5ba                      ; 0053b84d
        ;   XREF to: 0053b5ba (UNCONDITIONAL_JUMP)  ; LAB_0053b5ba
    LEA EAX,[ESP + 0x2b68]              ; 0053b852
        ;   Label: LAB_0053b852
    PUSH EAX                            ; 0053b859
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 0053b85a
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0053b85f
    MOV EBX,dword ptr [ESP + EBX*0x1 + 0x70] ; 0053b862
    MOV AL,byte ptr [EBX]               ; 0053b866
    LEA EBP,[ESP + 0x2b68]              ; 0053b868
    TEST AL,AL                          ; 0053b86f
    JZ 0x0053b8f1                       ; 0053b871
        ;   XREF to: 0053b8f1 (CONDITIONAL_JUMP)  ; LAB_0053b8f1
    XOR EAX,EAX                         ; 0053b877
        ;   Label: LAB_0053b877
    MOV AL,byte ptr [EBX]               ; 0053b879
    MOV EDX,EAX                         ; 0053b87b
    INC DL                              ; 0053b87d
    AND EDX,0xff                        ; 0053b87f
    TEST byte ptr [EDX + 0x6849c4],0xe0 ; 0053b885 | g_CharacterClassificationTable
    JZ 0x0053b976                       ; 0053b88c
        ;   XREF to: 0053b976 (CONDITIONAL_JUMP)  ; LAB_0053b976
    LEA EDX,[ESP + 0x29d8]              ; 0053b892
        ;   Label: LAB_0053b892
    MOV AL,byte ptr [EBX]               ; 0053b899
        ;   Label: LAB_0053b899
    MOV byte ptr [EDX],AL               ; 0053b89b
    XOR EAX,EAX                         ; 0053b89d
    MOV AL,byte ptr [EBX + 0x1]         ; 0053b89f
    MOV dword ptr [ESP + 0x2b90],EAX    ; 0053b8a2
    MOV CL,byte ptr [ESP + 0x2b90]      ; 0053b8a9
    INC CL                              ; 0053b8b0
    MOVZX ESI,CL                        ; 0053b8b2
    INC EBX                             ; 0053b8b5
    MOV CH,byte ptr [ESI + 0x6849c4]    ; 0053b8b6 | g_CharacterClassificationTable
    INC EDX                             ; 0053b8bc
    TEST CH,0xe0                        ; 0053b8bd
    JNZ 0x0053b899                      ; 0053b8c0
        ;   XREF to: 0053b899 (CONDITIONAL_JUMP)  ; LAB_0053b899
    CMP EAX,0x2d                        ; 0053b8c2
    JZ 0x0053b899                       ; 0053b8c5
        ;   XREF to: 0053b899 (CONDITIONAL_JUMP)  ; LAB_0053b899
    CMP EAX,0x5f                        ; 0053b8c7
    JZ 0x0053b899                       ; 0053b8ca
        ;   XREF to: 0053b899 (CONDITIONAL_JUMP)  ; LAB_0053b899
    PUSH 0x63b6e0                       ; 0053b8cc | = "none"
    LEA EAX,[ESP + 0x29dc]              ; 0053b8d1
    PUSH EAX                            ; 0053b8d8
    MOV byte ptr [EDX],0x0              ; 0053b8d9
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0053b8dc
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053b8e1
    TEST EAX,EAX                        ; 0053b8e4
    JNZ 0x0053b98e                      ; 0053b8e6
        ;   XREF to: 0053b98e (CONDITIONAL_JUMP)  ; LAB_0053b98e
    CMP byte ptr [EBX],0x0              ; 0053b8ec
        ;   Label: LAB_0053b8ec
    JNZ 0x0053b877                      ; 0053b8ef
        ;   XREF to: 0053b877 (CONDITIONAL_JUMP)  ; LAB_0053b877
    MOV EBP,dword ptr [ESP + 0x2b68]    ; 0053b8f1
        ;   Label: LAB_0053b8f1
    XOR EBX,EBX                         ; 0053b8f8
    TEST EBP,EBP                        ; 0053b8fa
    JLE 0x0053b95f                      ; 0053b8fc
        ;   XREF to: 0053b95f (CONDITIONAL_JUMP)  ; LAB_0053b95f
    PUSH EBX                            ; 0053b8fe
        ;   Label: LAB_0053b8fe
    LEA EAX,[ESP + 0x2b6c]              ; 0053b8ff
    PUSH EAX                            ; 0053b906
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0053b907
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0053b90c
    PUSH EAX                            ; 0053b90f
    PUSH EDI                            ; 0053b910
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0053b911
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053b916
    TEST EAX,EAX                        ; 0053b919
    JNZ 0x0053b9c1                      ; 0053b91b
        ;   XREF to: 0053b9c1 (CONDITIONAL_JUMP)  ; LAB_0053b9c1
    MOV EDX,dword ptr [ESP + 0x2b8c]    ; 0053b921
    PUSH EDX                            ; 0053b928
    PUSH EDI                            ; 0053b929
    MOV ECX,dword ptr [ESP + 0x2ba0]    ; 0053b92a
    PUSH ECX                            ; 0053b931
    PUSH 0x63c66a                       ; 0053b932 | = "%s\tChecks for \"%s\" in \"%s\""
    LEA EAX,[ESP + 0x28bc]              ; 0053b937
    PUSH EAX                            ; 0053b93e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053b93f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0053b944
    LEA EAX,[ESP + 0x28ac]              ; 0053b947
    PUSH EAX                            ; 0053b94e
    LEA EAX,[ESP + 0x2508]              ; 0053b94f
    PUSH EAX                            ; 0053b956
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053b957
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053b95c
    PUSH 0x0                            ; 0053b95f
        ;   Label: LAB_0053b95f
    LEA EAX,[ESP + 0x2b6c]              ; 0053b961
    PUSH EAX                            ; 0053b968
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 0053b969
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053b96e
    JMP 0x0053b6d8                      ; 0053b971
        ;   XREF to: 0053b6d8 (UNCONDITIONAL_JUMP)  ; LAB_0053b6d8
    CMP EAX,0x2d                        ; 0053b976
        ;   Label: LAB_0053b976
    JZ 0x0053b892                       ; 0053b979
        ;   XREF to: 0053b892 (CONDITIONAL_JUMP)  ; LAB_0053b892
    CMP EAX,0x5f                        ; 0053b97f
    JZ 0x0053b892                       ; 0053b982
        ;   XREF to: 0053b892 (CONDITIONAL_JUMP)  ; LAB_0053b892
    INC EBX                             ; 0053b988
    JMP 0x0053b8ec                      ; 0053b989
        ;   XREF to: 0053b8ec (UNCONDITIONAL_JUMP)  ; LAB_0053b8ec
    PUSH 0x63b6e5                       ; 0053b98e | = "true"
        ;   Label: LAB_0053b98e
    LEA EAX,[ESP + 0x29dc]              ; 0053b993
    PUSH EAX                            ; 0053b99a
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0053b99b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053b9a0
    TEST EAX,EAX                        ; 0053b9a3
    JZ 0x0053b8ec                       ; 0053b9a5
        ;   XREF to: 0053b8ec (CONDITIONAL_JUMP)  ; LAB_0053b8ec
    LEA EAX,[ESP + 0x29d8]              ; 0053b9ab
    PUSH EAX                            ; 0053b9b2
    PUSH EBP                            ; 0053b9b3
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053b9b4
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053b9b9
    JMP 0x0053b8ec                      ; 0053b9bc
        ;   XREF to: 0053b8ec (UNCONDITIONAL_JUMP)  ; LAB_0053b8ec
    MOV EAX,dword ptr [ESP + 0x2b68]    ; 0053b9c1
        ;   Label: LAB_0053b9c1
    INC EBX                             ; 0053b9c8
    CMP EBX,EAX                         ; 0053b9c9
    JL 0x0053b8fe                       ; 0053b9cb
        ;   XREF to: 0053b8fe (CONDITIONAL_JUMP)  ; LAB_0053b8fe
    JMP 0x0053b95f                      ; 0053b9d1
        ;   XREF to: 0053b95f (UNCONDITIONAL_JUMP)  ; LAB_0053b95f
    PUSH 0x63c685                       ; 0053b9d3 | = "No actors relevent to the operation o..."
        ;   Label: LAB_0053b9d3
    MOV EAX,[0x00678a60]                ; 0053b9d8 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0053b9dd | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 0053b9de
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    JMP 0x0053b7d5                      ; 0053b9e3
        ;   XREF to: 0053b7d5 (UNCONDITIONAL_JUMP)  ; LAB_0053b7d5


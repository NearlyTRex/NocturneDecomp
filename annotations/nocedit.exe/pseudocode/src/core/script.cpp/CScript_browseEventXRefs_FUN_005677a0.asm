; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_script_cpp_CScript_browseEventXRefs_FUN_005677a0(CScript *this_ptr,char *dialog_title,char *selected_name)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   dialog_title
; char *           Stack[0xc]:4   selected_name
; Local Variables:
; undefined1       Stack[-0x748]:1  local_748
; undefined1       Stack[-0x3a0]:1  local_3a0
; undefined1       Stack[-0x1ac]:1  local_1ac
; undefined1       Stack[-0x1ab]:1  local_1ab
; undefined1       Stack[-0xe4]:1  local_e4
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_editParameterValue_FUN_00562920 at 005637ca
;
; Referenced Globals:
;   void* switchdataD_0056776c = 00567828
;   TerminatedCString s_Event_tested_006440cd
;   undefined4 s_vent_tested_006440ce
;   TerminatedCString s_Event_raised_006440da
;   undefined4 s_vent_raised_006440db
;   TerminatedCString s_Persistent_event_006440e7
;   undefined4 s_ersistent_event_006440e8
;   TerminatedCString s_Game_flag_006440f8
;   undefined4 s_ame_flag_006440f9
;   TerminatedCString s_Timer_00644102
;   undefined4 s_imer_00644103
;   TerminatedCString s_Counter_00644108
;   undefined4 s_ounter_00644109
;   TerminatedCString s_Actor_referenced_00644110
;   undefined4 s_ctor_referenced_00644111
;   ... and 25 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_init_FUN_0040e130
;   core_msnedit.cpp_CDemonMission_FUN_0053c140
;   core_script.cpp_clearSelections_FUN_005644e0
;   core_script.cpp_CScript_updateCursorBounds_FUN_00566910
;   core_script.cpp_CScript_updateScrollPosition_FUN_005669a0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CPickList_insert_FUN_004a5670
;   shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_findString_FUN_004a3030
;   shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005677a0
        ;   Label: core_script.cpp_CScript_browseEventXRefs_FUN_005677a0
    PUSH ESI                            ; 005677a1
    PUSH EDI                            ; 005677a2
    PUSH EBP                            ; 005677a3
    SUB ESP,0x2c3c                      ; 005677a4
    MOV EBP,dword ptr [ESP + 0x2c50]    ; 005677aa
    LEA EAX,[ESP + 0x2504]              ; 005677b1
    PUSH EAX                            ; 005677b8
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 005677b9
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 005677be
    XOR EDX,EDX                         ; 005677c1
    MOV ECX,dword ptr [EBP + 0x28]      ; 005677c3
    MOV dword ptr [ESP + 0x2c34],EDX    ; 005677c6
    TEST ECX,ECX                        ; 005677cd
    JLE 0x00567931                      ; 005677cf
        ;   XREF to: 00567931 (CONDITIONAL_JUMP)  ; LAB_00567931
    MOV dword ptr [ESP + 0x2c30],EDX    ; 005677d5
    MOV EDX,dword ptr [ESP + 0x2c30]    ; 005677dc
        ;   Label: LAB_005677dc
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005677e3
    ADD EDX,EAX                         ; 005677e6
    PUSH EDX                            ; 005677e8
    LEA EAX,[ESP + 0x2508]              ; 005677e9
    PUSH EAX                            ; 005677f0
    MOV dword ptr [ESP + 0x2c40],EDX    ; 005677f1
    CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030 ; 005677f8
        ;   XREF to: 004a3030 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
    ADD ESP,0x8                         ; 005677fd
    TEST EAX,EAX                        ; 00567800
    JL 0x00567a16                       ; 00567802
        ;   XREF to: 00567a16 (CONDITIONAL_JUMP)  ; LAB_00567a16
    LEA EBX,[EAX + 0x1]                 ; 00567808
    MOV EAX,dword ptr [ESP + 0x2c38]    ; 0056780b
        ;   Label: LAB_0056780b
    MOV EAX,dword ptr [EAX + 0x100]     ; 00567812
    CMP EAX,0xc                         ; 00567818
    JA 0x00567ab3                       ; 0056781b
        ;   XREF to: 00567ab3 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x56776c]  ; 00567821 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,0x6440cd                    ; 00567828 | = "Event tested"
        ;   Label: caseD_0
    LEA EDI,[ESP + 0x2aa0]              ; 0056782d
        ;   Label: LAB_0056782d
    PUSH EDI                            ; 00567834
    MOV AL,byte ptr [ESI]               ; 00567835 | = "Event tested" | s_Event_raised_006440da | s_Persistent_event_006440e7
        ;   Label: LAB_00567835
    MOV byte ptr [EDI],AL               ; 00567837
    CMP AL,0x0                          ; 00567839
    JZ 0x0056784d                       ; 0056783b
        ;   XREF to: 0056784d (CONDITIONAL_JUMP)  ; LAB_0056784d
    MOV AL,byte ptr [ESI + 0x1]         ; 0056783d | s_vent_tested_006440ce | s_vent_raised_006440db | s_ersistent_event_006440e8
    ADD ESI,0x2                         ; 00567840
    MOV byte ptr [EDI + 0x1],AL         ; 00567843
    ADD EDI,0x2                         ; 00567846
    CMP AL,0x0                          ; 00567849
    JNZ 0x00567835                      ; 0056784b
        ;   XREF to: 00567835 (CONDITIONAL_JUMP)  ; LAB_00567835
    POP EDI                             ; 0056784d
        ;   Label: LAB_0056784d
    MOV EAX,dword ptr [ESP + 0x2c38]    ; 0056784e
    CMP dword ptr [EAX + 0x104],0x0     ; 00567855
    JNZ 0x00567abd                      ; 0056785c
        ;   XREF to: 00567abd (CONDITIONAL_JUMP)  ; LAB_00567abd
    MOV EDI,dword ptr [EAX + 0x10c]     ; 00567862
    PUSH EDI                            ; 00567868
    PUSH 0x64417c                       ; 00567869 | = "Script\tLn %d"
    LEA EAX,[ESP + 0x2b70]              ; 0056786e
    PUSH EAX                            ; 00567875
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00567876
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0056787b
    LEA EAX,[ESP + 0x2b68]              ; 0056787e
        ;   Label: LAB_0056787e
    PUSH EAX                            ; 00567885
    LEA EAX,[ESP + 0x2aa4]              ; 00567886
    PUSH EAX                            ; 0056788d
    PUSH 0x64418f                       ; 0056788e | = "\t%s\t%s"
    LEA EAX,[ESP + 0x28b8]              ; 00567893
    PUSH EAX                            ; 0056789a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0056789b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005678a0
    LEA EAX,[ESP + 0x28ac]              ; 005678a3
    PUSH EAX                            ; 005678aa
    PUSH EBX                            ; 005678ab
    LEA EAX,[ESP + 0x250c]              ; 005678ac
    PUSH EAX                            ; 005678b3
    CALL shape_edittool.cpp_CPickList_insert_FUN_004a5670 ; 005678b4
        ;   XREF to: 004a5670 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_insert_FUN_004a5670(CPickList * this_ptr, int insert_index, int item_data)
    ADD ESP,0xc                         ; 005678b9
    MOV EAX,dword ptr [ESP + 0x2c38]    ; 005678bc
    MOV dword ptr [EAX + 0x110],EBX     ; 005678c3
    CMP dword ptr [ESP + 0x2c34],0x0    ; 005678c9
    JLE 0x00567903                      ; 005678d1
        ;   XREF to: 00567903 (CONDITIONAL_JUMP)  ; LAB_00567903
    MOV ESI,dword ptr [ESP + 0x2c34]    ; 005678d3
    XOR EAX,EAX                         ; 005678da
    IMUL ECX,ESI,0x114                  ; 005678dc
    MOV EDX,dword ptr [EBP + 0x2c]      ; 005678e2
        ;   Label: LAB_005678e2
    ADD EDX,EAX                         ; 005678e5
    MOV EDI,dword ptr [EDX + 0x110]     ; 005678e7
    CMP EBX,EDI                         ; 005678ed
    JG 0x005678fa                       ; 005678ef
        ;   XREF to: 005678fa (CONDITIONAL_JUMP)  ; LAB_005678fa
    LEA ESI,[EDI + 0x1]                 ; 005678f1
    MOV dword ptr [EDX + 0x110],ESI     ; 005678f4
    ADD EAX,0x114                       ; 005678fa
        ;   Label: LAB_005678fa
    CMP EAX,ECX                         ; 005678ff
    JL 0x005678e2                       ; 00567901
        ;   XREF to: 005678e2 (CONDITIONAL_JUMP)  ; LAB_005678e2
    MOV EBX,dword ptr [ESP + 0x2c30]    ; 00567903
        ;   Label: LAB_00567903
    MOV ESI,dword ptr [ESP + 0x2c34]    ; 0056790a
    MOV EDI,dword ptr [EBP + 0x28]      ; 00567911
    ADD EBX,0x114                       ; 00567914
    INC ESI                             ; 0056791a
    MOV dword ptr [ESP + 0x2c30],EBX    ; 0056791b
    MOV dword ptr [ESP + 0x2c34],ESI    ; 00567922
    CMP ESI,EDI                         ; 00567929
    JL 0x005677dc                       ; 0056792b
        ;   XREF to: 005677dc (CONDITIONAL_JUMP)  ; LAB_005677dc
    LEA EAX,[ESP + 0x2504]              ; 00567931
        ;   Label: LAB_00567931
    PUSH EAX                            ; 00567938
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00567939
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0056793e
    CMP EAX,0x1                         ; 00567941
    JL 0x00567b2b                       ; 00567944
        ;   XREF to: 00567b2b (CONDITIONAL_JUMP)  ; LAB_00567b2b
    PUSH 0x1                            ; 0056794a
    LEA EAX,[ESP + 0x2508]              ; 0056794c
    PUSH EAX                            ; 00567953
    CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10 ; 00567954
        ;   XREF to: 004a3e10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10(CPickList * this_ptr, int result_value)
    ADD ESP,0x8                         ; 00567959
    PUSH 0x0                            ; 0056795c
    MOV EAX,dword ptr [ESP + 0x2c5c]    ; 0056795e
    PUSH EAX                            ; 00567965
    LEA EAX,[ESP + 0x250c]              ; 00567966
    PUSH EAX                            ; 0056796d
    CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030 ; 0056796e
        ;   XREF to: 004a3030 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
    ADD ESP,0x8                         ; 00567973
    PUSH EAX                            ; 00567976
    MOV EDX,dword ptr [ESP + 0x2c5c]    ; 00567977
    PUSH EDX                            ; 0056797e
    LEA EAX,[ESP + 0x2510]              ; 0056797f
    PUSH EAX                            ; 00567986
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00567987
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0056798c
    MOV EDI,EAX                         ; 0056798f
    TEST EAX,EAX                        ; 00567991
    JL 0x00567b44                       ; 00567993
        ;   XREF to: 00567b44 (CONDITIONAL_JUMP)  ; LAB_00567b44
    MOV ECX,dword ptr [EBP + 0x28]      ; 00567999
    XOR ESI,ESI                         ; 0056799c
    TEST ECX,ECX                        ; 0056799e
    JLE 0x00567b5e                      ; 005679a0
        ;   XREF to: 00567b5e (CONDITIONAL_JUMP)  ; LAB_00567b5e
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005679a6
    CMP EDI,dword ptr [EAX + 0x110]     ; 005679a9
        ;   Label: LAB_005679a9
    JNZ 0x00567b4d                      ; 005679af
        ;   XREF to: 00567b4d (CONDITIONAL_JUMP)  ; LAB_00567b4d
    MOV EBX,dword ptr [EAX + 0x104]     ; 005679b5
    TEST EBX,EBX                        ; 005679bb
    JNZ 0x00567ba6                      ; 005679bd
        ;   XREF to: 00567ba6 (CONDITIONAL_JUMP)  ; LAB_00567ba6
    MOV EAX,dword ptr [EAX + 0x10c]     ; 005679c3
    MOV EDX,dword ptr [0x0310fd48]      ; 005679c9 | g_CurrentEditingLine
    DEC EAX                             ; 005679cf
    CMP EAX,EDX                         ; 005679d0
    JZ 0x005679f6                       ; 005679d2
        ;   XREF to: 005679f6 (CONDITIONAL_JUMP)  ; LAB_005679f6
    MOV [0x0310fd48],EAX                ; 005679d4 | g_CurrentEditingLine
    MOV dword ptr [0x0310fd44],EBX      ; 005679d9 | g_CurrentEditingColumn
    CALL core_script.cpp_clearSelections_FUN_005644e0 ; 005679df
        ;   XREF to: 005644e0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_clearSelections_FUN_005644e0()
    PUSH EBP                            ; 005679e4
    CALL core_script.cpp_CScript_updateCursorBounds_FUN_00566910 ; 005679e5
        ;   XREF to: 00566910 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_updateCursorBounds_FUN_00566910(CScript * this_ptr)
    ADD ESP,0x4                         ; 005679ea
    PUSH EBP                            ; 005679ed
    CALL core_script.cpp_CScript_updateScrollPosition_FUN_005669a0 ; 005679ee
        ;   XREF to: 005669a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_updateScrollPosition_FUN_005669a0(CScript * this_ptr)
    ADD ESP,0x4                         ; 005679f3
    XOR EDI,EDI                         ; 005679f6
        ;   Label: LAB_005679f6
    PUSH EDI                            ; 005679f8
    LEA EAX,[ESP + 0x2508]              ; 005679f9
        ;   Label: LAB_005679f9
    PUSH EAX                            ; 00567a00
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00567a01
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
        ;   Label: LAB_00567a01
    ADD ESP,0x8                         ; 00567a06
    MOV EAX,EDI                         ; 00567a09
    ADD ESP,0x2c3c                      ; 00567a0b
    POP EBP                             ; 00567a11
    POP EDI                             ; 00567a12
    POP ESI                             ; 00567a13
    POP EBX                             ; 00567a14
    RET                                 ; 00567a15
    MOV EAX,dword ptr [ESP + 0x2c38]    ; 00567a16
        ;   Label: LAB_00567a16
    PUSH EAX                            ; 00567a1d
    LEA EAX,[ESP + 0x2508]              ; 00567a1e
    PUSH EAX                            ; 00567a25
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00567a26
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00567a2b
    LEA EAX,[ESP + 0x2504]              ; 00567a2e
    PUSH EAX                            ; 00567a35
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00567a36
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00567a3b
    MOV EBX,EAX                         ; 00567a3e
    JMP 0x0056780b                      ; 00567a40
        ;   XREF to: 0056780b (UNCONDITIONAL_JUMP)  ; LAB_0056780b
    MOV ESI,0x6440da                    ; 00567a45 | = "Event raised"
        ;   Label: caseD_1
    JMP 0x0056782d                      ; 00567a4a
        ;   XREF to: 0056782d (UNCONDITIONAL_JUMP)  ; LAB_0056782d
    MOV ESI,0x6440e7                    ; 00567a4f | = "Persistent event"
        ;   Label: caseD_2
    JMP 0x0056782d                      ; 00567a54
        ;   XREF to: 0056782d (UNCONDITIONAL_JUMP)  ; LAB_0056782d
    MOV ESI,0x6440f8                    ; 00567a59 | = "Game flag"
        ;   Label: caseD_3
    JMP 0x0056782d                      ; 00567a5e
        ;   XREF to: 0056782d (UNCONDITIONAL_JUMP)  ; LAB_0056782d
    MOV ESI,0x644102                    ; 00567a63 | = "Timer"
        ;   Label: caseD_4
    JMP 0x0056782d                      ; 00567a68
        ;   XREF to: 0056782d (UNCONDITIONAL_JUMP)  ; LAB_0056782d
    MOV ESI,0x644108                    ; 00567a6d | = "Counter"
        ;   Label: caseD_6
    JMP 0x0056782d                      ; 00567a72
        ;   XREF to: 0056782d (UNCONDITIONAL_JUMP)  ; LAB_0056782d
    MOV ESI,0x644110                    ; 00567a77 | = "Actor referenced"
        ;   Label: caseD_7
    JMP 0x0056782d                      ; 00567a7c
        ;   XREF to: 0056782d (UNCONDITIONAL_JUMP)  ; LAB_0056782d
    MOV ESI,0x644121                    ; 00567a81 | = "Sfx set"
        ;   Label: caseD_8
    JMP 0x0056782d                      ; 00567a86
        ;   XREF to: 0056782d (UNCONDITIONAL_JUMP)  ; LAB_0056782d
    MOV ESI,0x644129                    ; 00567a8b | = "Sfx referenced"
        ;   Label: caseD_9
    JMP 0x0056782d                      ; 00567a90
        ;   XREF to: 0056782d (UNCONDITIONAL_JUMP)  ; LAB_0056782d
    MOV ESI,0x644138                    ; 00567a95 | = "Actor variable set"
        ;   Label: caseD_a
    JMP 0x0056782d                      ; 00567a9a
        ;   XREF to: 0056782d (UNCONDITIONAL_JUMP)  ; LAB_0056782d
    MOV ESI,0x64414b                    ; 00567a9f | = "Actor variable referenced"
        ;   Label: caseD_b
    JMP 0x0056782d                      ; 00567aa4
        ;   XREF to: 0056782d (UNCONDITIONAL_JUMP)  ; LAB_0056782d
    MOV ESI,0x644165                    ; 00567aa9 | = "Ini file variable"
        ;   Label: caseD_c
    JMP 0x0056782d                      ; 00567aae
        ;   XREF to: 0056782d (UNCONDITIONAL_JUMP)  ; LAB_0056782d
    MOV ESI,0x644177                    ; 00567ab3 | = "????"
        ;   Label: default
    JMP 0x0056782d                      ; 00567ab8
        ;   XREF to: 0056782d (UNCONDITIONAL_JUMP)  ; LAB_0056782d
    MOV EAX,ESP                         ; 00567abd
        ;   Label: LAB_00567abd
    PUSH EAX                            ; 00567abf
    CALL core_actor.cpp_CActorPropertyList_init_FUN_0040e130 ; 00567ac0
        ;   XREF to: 0040e130 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_init_FUN_0040e130(CActorPropertyList * this_ptr)
    ADD ESP,0x4                         ; 00567ac5
    MOV ECX,ESP                         ; 00567ac8
    MOV EAX,dword ptr [ESP + 0x2c38]    ; 00567aca
    PUSH ECX                            ; 00567ad1
    MOV EAX,dword ptr [EAX + 0x104]     ; 00567ad2
    PUSH EAX                            ; 00567ad8
    MOV EDX,dword ptr [EAX + 0x154]     ; 00567ad9
    CALL dword ptr [EDX + 0xd4]         ; 00567adf
    ADD ESP,0x8                         ; 00567ae5
    MOV EAX,dword ptr [ESP + 0x2c38]    ; 00567ae8
    IMUL EDX,dword ptr [EAX + 0x108],0xec ; 00567aef
    LEA EAX,[ESP + 0x8]                 ; 00567af9
    ADD EAX,EDX                         ; 00567afd
    ADD EAX,0x4                         ; 00567aff
    PUSH EAX                            ; 00567b02
    MOV EAX,dword ptr [ESP + 0x2c3c]    ; 00567b03
    MOV ESI,dword ptr [EAX + 0x104]     ; 00567b0a
    PUSH ESI                            ; 00567b10
    PUSH 0x644189                       ; 00567b11 | = "%s\t%s"
    LEA EAX,[ESP + 0x2b74]              ; 00567b16
    PUSH EAX                            ; 00567b1d
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00567b1e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00567b23
    JMP 0x0056787e                      ; 00567b26
        ;   XREF to: 0056787e (UNCONDITIONAL_JUMP)  ; LAB_0056787e
    PUSH 0x644196                       ; 00567b2b | = "Nothing to choose from!"
        ;   Label: LAB_00567b2b
    MOV EBX,dword ptr [0x00678a60]      ; 00567b30 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 00567b36 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00567b37
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00567b3c
    JMP 0x005679f6                      ; 00567b3f
        ;   XREF to: 005679f6 (UNCONDITIONAL_JUMP)  ; LAB_005679f6
    PUSH 0x0                            ; 00567b44
        ;   Label: LAB_00567b44
    XOR EDI,EAX                         ; 00567b46
    JMP 0x005679f9                      ; 00567b48
        ;   XREF to: 005679f9 (UNCONDITIONAL_JUMP)  ; LAB_005679f9
    INC ESI                             ; 00567b4d
        ;   Label: LAB_00567b4d
    MOV EDX,dword ptr [EBP + 0x28]      ; 00567b4e
    ADD EAX,0x114                       ; 00567b51
    CMP ESI,EDX                         ; 00567b56
    JL 0x005679a9                       ; 00567b58
        ;   XREF to: 005679a9 (CONDITIONAL_JUMP)  ; LAB_005679a9
    PUSH EDI                            ; 00567b5e
        ;   Label: LAB_00567b5e
    LEA EAX,[ESP + 0x2508]              ; 00567b5f
    PUSH EAX                            ; 00567b66
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00567b67
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00567b6c
    MOV ESI,EAX                         ; 00567b6f
    MOV EDI,dword ptr [ESP + 0x2c58]    ; 00567b71
    PUSH EDI                            ; 00567b78
    MOV AL,byte ptr [ESI]               ; 00567b79
        ;   Label: LAB_00567b79
    MOV byte ptr [EDI],AL               ; 00567b7b
    CMP AL,0x0                          ; 00567b7d
    JZ 0x00567b91                       ; 00567b7f
        ;   XREF to: 00567b91 (CONDITIONAL_JUMP)  ; LAB_00567b91
    MOV AL,byte ptr [ESI + 0x1]         ; 00567b81
    ADD ESI,0x2                         ; 00567b84
    MOV byte ptr [EDI + 0x1],AL         ; 00567b87
    ADD EDI,0x2                         ; 00567b8a
    CMP AL,0x0                          ; 00567b8d
    JNZ 0x00567b79                      ; 00567b8f
        ;   XREF to: 00567b79 (CONDITIONAL_JUMP)  ; LAB_00567b79
    POP EDI                             ; 00567b91
        ;   Label: LAB_00567b91
    PUSH 0x0                            ; 00567b92
    LEA EAX,[ESP + 0x2508]              ; 00567b94
    PUSH EAX                            ; 00567b9b
    MOV EDI,0x1                         ; 00567b9c
    JMP 0x00567a01                      ; 00567ba1
        ;   XREF to: 00567a01 (UNCONDITIONAL_JUMP)  ; LAB_00567a01
    PUSH EBX                            ; 00567ba6
        ;   Label: LAB_00567ba6
    MOV EDI,dword ptr [0x0067d550]      ; 00567ba7 | g_CDemonMissionPtr
    PUSH EDI                            ; 00567bad | g_CDemonMissionInstance
    CALL core_msnedit.cpp_CDemonMission_FUN_0053c140 ; 00567bae
        ;   XREF to: 0053c140 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_FUN_0053c140(CDemonMission * this_ptr, int param_2)
    ADD ESP,0x8                         ; 00567bb3
    JMP 0x005679f6                      ; 00567bb6
        ;   XREF to: 005679f6 (UNCONDITIONAL_JUMP)  ; LAB_005679f6


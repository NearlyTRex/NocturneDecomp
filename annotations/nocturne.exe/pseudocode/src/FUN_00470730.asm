; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00470730(void)
;
; Local Variables:
; undefined        Stack[-0x1c90]:1  local_1c90
; undefined4       Stack[-0x1a60]:4  local_1a60
; undefined        Stack[-0x18f0]:1  local_18f0
; undefined1       Stack[-0x17f0]:1  local_17f0
; undefined4       Stack[-0x17ec]:4  local_17ec
; undefined        Stack[-0x17e8]:1  local_17e8
; undefined        Stack[-0x17dc]:1  local_17dc
; undefined        Stack[-0x16d8]:1  local_16d8
; undefined        Stack[-0x15d4]:1  local_15d4
; undefined        Stack[-0x14d0]:1  local_14d0
; undefined        Stack[-0x13cc]:1  local_13cc
; undefined        Stack[-0x12c8]:1  local_12c8
; undefined        Stack[-0x11c4]:1  local_11c4
; undefined        Stack[-0x10c4]:1  local_10c4
; undefined        Stack[-0xfc4]:1  local_fc4
; undefined        Stack[-0xec4]:1  local_ec4
; undefined        Stack[-0xdc4]:1  local_dc4
; undefined        Stack[-0xcc4]:1  local_cc4
; undefined        Stack[-0xbc4]:1  local_bc4
; undefined        Stack[-0xac4]:1  local_ac4
; undefined        Stack[-0x9c4]:1  local_9c4
; undefined        Stack[-0x8c4]:1  local_8c4
; undefined        Stack[-0x7c4]:1  local_7c4
; undefined        Stack[-0x6c4]:1  local_6c4
; undefined        Stack[-0x6c3]:1  local_6c3
; undefined        Stack[-0x5c4]:1  local_5c4
; undefined        Stack[-0x4c4]:1  local_4c4
; undefined        Stack[-0x4c3]:1  local_4c3
; undefined        Stack[-0x3c4]:1  local_3c4
; undefined        Stack[-0x2c4]:1  local_2c4
; undefined        Stack[-0x1c4]:1  local_1c4
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
; undefined        Stack[-0xc]:1  local_c
;
; Referenced Globals:
;   TerminatedCString s_Error_getting_current_di_0057e691
;   TerminatedCString s_s_s_0057e6b2
;   TerminatedCString s_anon_0057e6b8
;   TerminatedCString s_m_d_y_I_M_S_p_0057e6bc
;   TerminatedCString s_s_s_d_s_0057e6d1
;   TerminatedCString s_anon_0057e6dd
;   TerminatedCString s_anon_0057e6e1
;   TerminatedCString s_DIR_0057e6e4
;   TerminatedCString s_anon_0057e6ee
;   TerminatedCString s_s_s_DIR_0057e6f0
;   TerminatedCString s_Change_Path_0057e6fc
;   TerminatedCString s_Enter_new_path_0057e70a
;   TerminatedCString s_Can_t_change_to_s_0057e719
;   undefined4 DAT_005b6d60
;   undefined4 DAT_005b6d64
;   ... and 4 more
;
; Called Functions:
;   crt_file.c_makepath_FUN_0056626c
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_string.c__strcmp_FUN_005649c0
;   crt_string.c__stricmp_FUN_00564520
;   crt_string.c_memmove_FUN_00566170
;   crt_string.c_splitpath_FUN_00566498
;   crt_string.c_strupr_FUN_00566ad0
;   crt_time.c__localtime_FUN_005665e8
;   crt_time.c__strftime_FUN_00566634
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40
;   FUN_0046fcd0
;   FUN_00474c90
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00470730
        ;   Label: FUN_00470730
    PUSH EBP                            ; 00470731
    SUB ESP,0x1c88                      ; 00470732
    MOV EBX,dword ptr [ESP + 0x1c94]    ; 00470738
    PUSH 0x104                          ; 0047073f
    LEA EAX,[ESP + 0x7c4]               ; 00470744
    PUSH EAX                            ; 0047074b
    CALL thunk_FUN_0056c5f0             ; 0047074c
        ;   XREF to: 00566440 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_0056c5f0()
    ADD ESP,0x8                         ; 00470751
    TEST EAX,EAX                        ; 00470754
    JZ 0x00470a4a                       ; 00470756
        ;   XREF to: 00470a4a (CONDITIONAL_JUMP)  ; LAB_00470a4a
    PUSH EDI                            ; 0047075c
    PUSH ESI                            ; 0047075d
    MOV ECX,0x41                        ; 0047075e
    LEA EDI,[ESP + 0x9d0]               ; 00470763
    MOV ESI,0x5b6d60                    ; 0047076a | DAT_005b6d60
    MOV AH,byte ptr [ESP + 0x1cac]      ; 0047076f
    MOVSD.REP ES:EDI,ESI                ; 00470776 | DAT_005b6d60 | DAT_005b6d64
    TEST AH,0x1                         ; 00470778
    JNZ 0x00470a63                      ; 0047077b
        ;   XREF to: 00470a63 (CONDITIONAL_JUMP)  ; LAB_00470a63
    XOR ECX,ECX                         ; 00470781
        ;   Label: LAB_00470781
    MOV dword ptr [ESP + 0x1c84],ECX    ; 00470783
    MOV ECX,0x41                        ; 0047078a
        ;   Label: LAB_0047078a
    LEA EDI,[ESP + 0x4bc]               ; 0047078f
    PUSH 0x104                          ; 00470796
    LEA EAX,[ESP + 0x4c0]               ; 0047079b
    MOV ESI,0x5b6e68                    ; 004707a2 | = "[ERROR: Can't get current directory.]"
    PUSH EAX                            ; 004707a7
    MOVSD.REP ES:EDI,ESI                ; 004707a8 | = "[ERROR: Can't get current directory.]" | s_ERROR_Can_t_get_current_005b6e68+4
    CALL thunk_FUN_0056c5f0             ; 004707aa
        ;   XREF to: 00566440 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_0056c5f0()
    ADD ESP,0x8                         ; 004707af
    LEA EAX,[ESP + 0x4bc]               ; 004707b2
    PUSH EAX                            ; 004707b9
    MOV ESI,dword ptr [ESP + 0x1ca4]    ; 004707ba
    PUSH ESI                            ; 004707c1
    PUSH 0x57e6b2                       ; 004707c2 | = "%s\n%s"
    LEA EAX,[ESP + 0x14]                ; 004707c7
    PUSH EAX                            ; 004707cb
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004707cc
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 004707d1
    LEA EAX,[ESP + 0x238]               ; 004707d4
    PUSH EAX                            ; 004707db
    CALL FUN_00474c90                   ; 004707dc
        ;   XREF to: 00474c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00474c90()
    ADD ESP,0x4                         ; 004707e1
    LEA EAX,[ESP + 0x3a8]               ; 004707e4
    PUSH EAX                            ; 004707eb
    CALL engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00 ; 004707ec
        ;   XREF to: 00456c00 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00()
    ADD ESP,0x4                         ; 004707f1
    CMP dword ptr [ESP + 0x1ca4],0x0    ; 004707f4
    JNZ 0x00470809                      ; 004707fc
        ;   XREF to: 00470809 (CONDITIONAL_JUMP)  ; LAB_00470809
    MOV dword ptr [ESP + 0x1ca4],0x57e6b8 ; 004707fe | = "*.*"
    MOV EAX,dword ptr [ESP + 0x1ca4]    ; 00470809
        ;   Label: LAB_00470809
    PUSH EAX                            ; 00470810 | = "*.*"
    LEA EAX,[ESP + 0x3ac]               ; 00470811
    PUSH EAX                            ; 00470818
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40 ; 00470819
        ;   XREF to: 00456c40 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40()
    ADD ESP,0x8                         ; 0047081e
    CMP byte ptr [ESP + 0x3a8],0x0      ; 00470821
    JZ 0x00470853                       ; 00470829
        ;   XREF to: 00470853 (CONDITIONAL_JUMP)  ; LAB_00470853
    TEST byte ptr [ESP + 0x4a8],0x4     ; 0047082b
        ;   Label: LAB_0047082b
    JZ 0x00470b00                       ; 00470833
        ;   XREF to: 00470b00 (CONDITIONAL_JUMP)  ; LAB_00470b00
    LEA EAX,[ESP + 0x3a8]               ; 00470839
        ;   Label: LAB_00470839
    PUSH EAX                            ; 00470840
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0 ; 00470841
        ;   XREF to: 00456cc0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0()
    ADD ESP,0x4                         ; 00470846
    CMP byte ptr [ESP + 0x3a8],0x0      ; 00470849
    JNZ 0x0047082b                      ; 00470851
        ;   XREF to: 0047082b (CONDITIONAL_JUMP)  ; LAB_0047082b
    LEA EAX,[ESP + 0x238]               ; 00470853
        ;   Label: LAB_00470853
    PUSH EAX                            ; 0047085a
    CALL shape_edittool.cpp_CStrList_sortAll_FUN_00473fd0 ; 0047085b
        ;   XREF to: 00473fd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_sortAll_FUN_00473fd0()
    ADD ESP,0x4                         ; 00470860
    MOV ESI,0xffffffff                  ; 00470863
    MOV CL,byte ptr [ESP + 0x9d0]       ; 00470868
    MOV EBP,dword ptr [ESP + 0x238]     ; 0047086f
    TEST CL,CL                          ; 00470876
    JZ 0x00470915                       ; 00470878
        ;   XREF to: 00470915 (CONDITIONAL_JUMP)  ; LAB_00470915
    XOR ESI,ESI                         ; 0047087e
    TEST EBP,EBP                        ; 00470880
    JLE 0x004708fe                      ; 00470882
        ;   XREF to: 004708fe (CONDITIONAL_JUMP)  ; LAB_004708fe
    PUSH 0x0                            ; 00470884
        ;   Label: LAB_00470884
    PUSH ESI                            ; 00470886
    LEA EAX,[ESP + 0x12dc]              ; 00470887
    PUSH EAX                            ; 0047088e
    LEA EAX,[ESP + 0x244]               ; 0047088f
    PUSH EAX                            ; 00470896
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090 ; 00470897
        ;   XREF to: 00474090 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090()
    ADD ESP,0x10                        ; 0047089c
    PUSH 0x1                            ; 0047089f
    PUSH ESI                            ; 004708a1
    LEA EAX,[ESP + 0x16dc]              ; 004708a2
    PUSH EAX                            ; 004708a9
    LEA EAX,[ESP + 0x244]               ; 004708aa
    PUSH EAX                            ; 004708b1
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090 ; 004708b2
        ;   XREF to: 00474090 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090()
    ADD ESP,0x10                        ; 004708b7
    LEA EAX,[ESP + 0x16d4]              ; 004708ba
    PUSH EAX                            ; 004708c1
    LEA EAX,[ESP + 0x12d8]              ; 004708c2
    PUSH EAX                            ; 004708c9
    PUSH 0x0                            ; 004708ca
    PUSH 0x0                            ; 004708cc
    LEA EAX,[ESP + 0x6d4]               ; 004708ce
    PUSH EAX                            ; 004708d5
    CALL crt_file.c_makepath_FUN_0056626c ; 004708d6
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; undefined crt_file.c_makepath_FUN_0056626c()
    ADD ESP,0x14                        ; 004708db
    LEA EAX,[ESP + 0x9d0]               ; 004708de
    PUSH EAX                            ; 004708e5
    LEA EAX,[ESP + 0x6c8]               ; 004708e6
    PUSH EAX                            ; 004708ed
    CALL crt_string.c__stricmp_FUN_00564520 ; 004708ee
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004708f3
    TEST EAX,EAX                        ; 004708f6
    JNZ 0x00470be2                      ; 004708f8
        ;   XREF to: 00470be2 (CONDITIONAL_JUMP)  ; LAB_00470be2
    CMP ESI,dword ptr [ESP + 0x238]     ; 004708fe
        ;   Label: LAB_004708fe
    JL 0x0047090c                       ; 00470905
        ;   XREF to: 0047090c (CONDITIONAL_JUMP)  ; LAB_0047090c
    MOV ESI,0xffffffff                  ; 00470907
    XOR AH,AH                           ; 0047090c
        ;   Label: LAB_0047090c
    MOV byte ptr [ESP + 0x9d0],AH       ; 0047090e
    PUSH 0x57e6dd                       ; 00470915 | = "*.*"
        ;   Label: LAB_00470915
    LEA EAX,[ESP + 0x3ac]               ; 0047091a
    PUSH EAX                            ; 00470921
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40 ; 00470922
        ;   XREF to: 00456c40 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40()
    ADD ESP,0x8                         ; 00470927
    CMP byte ptr [ESP + 0x3a8],0x0      ; 0047092a
    JZ 0x0047098a                       ; 00470932
        ;   XREF to: 0047098a (CONDITIONAL_JUMP)  ; LAB_0047098a
    TEST byte ptr [ESP + 0x4a8],0x4     ; 00470934
        ;   Label: LAB_00470934
    JZ 0x00470970                       ; 0047093c
        ;   XREF to: 00470970 (CONDITIONAL_JUMP)  ; LAB_00470970
    PUSH 0x57e6e1                       ; 0047093e | = ".."
    LEA EAX,[ESP + 0x3ac]               ; 00470943
    PUSH EAX                            ; 0047094a
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0047094b
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 00470950
    TEST EAX,EAX                        ; 00470953
    JNZ 0x00470bf7                      ; 00470955
        ;   XREF to: 00470bf7 (CONDITIONAL_JUMP)  ; LAB_00470bf7
    PUSH 0x57e6e4                       ; 0047095b | = "..\t\t(DIR)"
    LEA EAX,[ESP + 0x23c]               ; 00470960
        ;   Label: LAB_00470960
    PUSH EAX                            ; 00470967
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 00470968
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 0047096d
    LEA EAX,[ESP + 0x3a8]               ; 00470970
        ;   Label: LAB_00470970
    PUSH EAX                            ; 00470977
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0 ; 00470978
        ;   XREF to: 00456cc0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0()
    ADD ESP,0x4                         ; 0047097d
    CMP byte ptr [ESP + 0x3a8],0x0      ; 00470980
    JNZ 0x00470934                      ; 00470988
        ;   XREF to: 00470934 (CONDITIONAL_JUMP)  ; LAB_00470934
    MOV EAX,dword ptr [ESP + 0x238]     ; 0047098a
        ;   Label: LAB_0047098a
    DEC EAX                             ; 00470991
    PUSH EAX                            ; 00470992
    PUSH EBP                            ; 00470993
    LEA EAX,[ESP + 0x240]               ; 00470994
    PUSH EAX                            ; 0047099b
    CALL shape_edittool.cpp_CPickList_sort_FUN_004761a0 ; 0047099c
        ;   XREF to: 004761a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_sort_FUN_004761a0()
    ADD ESP,0xc                         ; 004709a1
    PUSH 0x57e6fc                       ; 004709a4 | = "(Change Path)"
    LEA EAX,[ESP + 0x23c]               ; 004709a9
    PUSH EAX                            ; 004709b0
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004709b1
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 004709b6
    PUSH ESI                            ; 004709b9
    LEA EAX,[ESP + 0xc]                 ; 004709ba
    PUSH EAX                            ; 004709be
    LEA EAX,[ESP + 0x240]               ; 004709bf
    PUSH EAX                            ; 004709c6
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 ; 004709c7
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70()
    MOV ESI,EAX                         ; 004709cc
    ADD ESP,0xc                         ; 004709ce
    TEST EAX,EAX                        ; 004709d1
    JL 0x00470cae                       ; 004709d3
        ;   XREF to: 00470cae (CONDITIONAL_JUMP)  ; LAB_00470cae
    MOV EAX,dword ptr [ESP + 0x238]     ; 004709d9
    DEC EAX                             ; 004709e0
    CMP ESI,EAX                         ; 004709e1
    JL 0x00470d37                       ; 004709e3
        ;   XREF to: 00470d37 (CONDITIONAL_JUMP)  ; LAB_00470d37
    MOV ECX,0x41                        ; 004709e9
    LEA EDI,[ESP + 0x5c0]               ; 004709ee
    MOV ESI,0x5b6f70                    ; 004709f5 | DAT_005b6f70
    MOVSD.REP ES:EDI,ESI                ; 004709fa | DAT_005b6f70 | DAT_005b6f74
    PUSH 0x1                            ; 004709fc
        ;   Label: LAB_004709fc
    PUSH 0x104                          ; 004709fe
    LEA EAX,[ESP + 0x5c8]               ; 00470a03
    PUSH EAX                            ; 00470a0a
    PUSH 0x57e70a                       ; 00470a0b | = "Enter new path"
    PUSH EBX                            ; 00470a10
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600 ; 00470a11
        ;   XREF to: 00471600 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600()
    ADD ESP,0x14                        ; 00470a16
    TEST EAX,EAX                        ; 00470a19
    JNZ 0x00470cf4                      ; 00470a1b
        ;   XREF to: 00470cf4 (CONDITIONAL_JUMP)  ; LAB_00470cf4
    PUSH 0x0                            ; 00470a21
        ;   Label: LAB_00470a21
    LEA EAX,[ESP + 0x3ac]               ; 00470a23
    PUSH EAX                            ; 00470a2a
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20 ; 00470a2b
        ;   XREF to: 00456c20 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20()
    ADD ESP,0x8                         ; 00470a30
    PUSH 0x0                            ; 00470a33
    LEA EAX,[ESP + 0x23c]               ; 00470a35
    PUSH EAX                            ; 00470a3c
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 00470a3d
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_dtor_FUN_00474cf0()
    ADD ESP,0x8                         ; 00470a42
    JMP 0x0047078a                      ; 00470a45
        ;   XREF to: 0047078a (UNCONDITIONAL_JUMP)  ; LAB_0047078a
    PUSH 0x57e691                       ; 00470a4a | = "Error getting current directory."
        ;   Label: LAB_00470a4a
    PUSH EBX                            ; 00470a4f
    CALL FUN_0046fcd0                   ; 00470a50
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0x8                         ; 00470a55
    XOR EAX,EAX                         ; 00470a58
    ADD ESP,0x1c88                      ; 00470a5a
    POP EBP                             ; 00470a60
    POP EBX                             ; 00470a61
    RET                                 ; 00470a62
    LEA EAX,[ESP + 0x18d4]              ; 00470a63
        ;   Label: LAB_00470a63
    PUSH EAX                            ; 00470a6a
    LEA EAX,[ESP + 0xdd8]               ; 00470a6b
    PUSH EAX                            ; 00470a72
    LEA EAX,[ESP + 0x10dc]              ; 00470a73
    PUSH EAX                            ; 00470a7a
    LEA EAX,[ESP + 0x1c98]              ; 00470a7b
    PUSH EAX                            ; 00470a82
    MOV EDX,dword ptr [ESP + 0x1cb8]    ; 00470a83
    PUSH EDX                            ; 00470a8a
    CALL crt_string.c_splitpath_FUN_00566498 ; 00470a8b
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_splitpath_FUN_00566498()
    ADD ESP,0x14                        ; 00470a90
    PUSH 0x0                            ; 00470a93
    PUSH 0x0                            ; 00470a95
    LEA EAX,[ESP + 0x10dc]              ; 00470a97
    PUSH EAX                            ; 00470a9e
    LEA EAX,[ESP + 0x1c98]              ; 00470a9f
    PUSH EAX                            ; 00470aa6
    LEA EAX,[ESP + 0x8dc]               ; 00470aa7
    PUSH EAX                            ; 00470aae
    CALL crt_file.c_makepath_FUN_0056626c ; 00470aaf
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; undefined crt_file.c_makepath_FUN_0056626c()
    ADD ESP,0x14                        ; 00470ab4
    LEA EAX,[ESP + 0x8cc]               ; 00470ab7
    PUSH EAX                            ; 00470abe
    CALL FUN_00566570                   ; 00470abf
        ;   XREF to: 00566570 (UNCONDITIONAL_CALL)  ; undefined FUN_00566570()
    ADD ESP,0x4                         ; 00470ac4
    LEA EAX,[ESP + 0x18d4]              ; 00470ac7
    PUSH EAX                            ; 00470ace
    LEA EAX,[ESP + 0xdd8]               ; 00470acf
    PUSH EAX                            ; 00470ad6
    PUSH 0x0                            ; 00470ad7
    PUSH 0x0                            ; 00470ad9
    LEA EAX,[ESP + 0x9e0]               ; 00470adb
    PUSH EAX                            ; 00470ae2
    CALL crt_file.c_makepath_FUN_0056626c ; 00470ae3
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; undefined crt_file.c_makepath_FUN_0056626c()
    ADD ESP,0x14                        ; 00470ae8
    LEA EAX,[ESP + 0x9d0]               ; 00470aeb
    PUSH EAX                            ; 00470af2
    CALL FUN_00566570                   ; 00470af3
        ;   XREF to: 00566570 (UNCONDITIONAL_CALL)  ; undefined FUN_00566570()
    ADD ESP,0x4                         ; 00470af8
    JMP 0x00470781                      ; 00470afb
        ;   XREF to: 00470781 (UNCONDITIONAL_JUMP)  ; LAB_00470781
    LEA EAX,[ESP + 0x17d4]              ; 00470b00
        ;   Label: LAB_00470b00
    PUSH EAX                            ; 00470b07
    LEA EAX,[ESP + 0xed8]               ; 00470b08
    PUSH EAX                            ; 00470b0f
    PUSH 0x0                            ; 00470b10
    PUSH 0x0                            ; 00470b12
    LEA EAX,[ESP + 0x3b8]               ; 00470b14
    PUSH EAX                            ; 00470b1b
    CALL crt_string.c_splitpath_FUN_00566498 ; 00470b1c
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_splitpath_FUN_00566498()
    ADD ESP,0x14                        ; 00470b21
    CMP byte ptr [ESP + 0x17d4],0x2e    ; 00470b24
    JNZ 0x00470b58                      ; 00470b2c
        ;   XREF to: 00470b58 (CONDITIONAL_JUMP)  ; LAB_00470b58
    LEA EDI,[ESP + 0x17d4]              ; 00470b2e
    SUB ECX,ECX                         ; 00470b35
    DEC ECX                             ; 00470b37
    XOR EAX,EAX                         ; 00470b38
    SCASB.REPNE ES:EDI                  ; 00470b3a
    NOT ECX                             ; 00470b3c
    DEC ECX                             ; 00470b3e
    PUSH ECX                            ; 00470b3f
    LEA EAX,[ESP + 0x17d9]              ; 00470b40
    PUSH EAX                            ; 00470b47
    LEA EAX,[ESP + 0x17dc]              ; 00470b48
    PUSH EAX                            ; 00470b4f
    CALL crt_string.c_memmove_FUN_00566170 ; 00470b50
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 00470b55
    LEA EAX,[ESP + 0x4b0]               ; 00470b58
        ;   Label: LAB_00470b58
    PUSH EAX                            ; 00470b5f
    CALL crt_time.c__localtime_FUN_005665e8 ; 00470b60
        ;   XREF to: 005665e8 (UNCONDITIONAL_CALL)  ; undefined crt_time.c__localtime_FUN_005665e8()
    ADD ESP,0x4                         ; 00470b65
    PUSH EAX                            ; 00470b68
    PUSH 0x57e6bc                       ; 00470b69 | = "%m/%d/%y %I:%M:%S %p"
    PUSH 0x1e                           ; 00470b6e
    LEA EAX,[ESP + 0x1c70]              ; 00470b70
    PUSH EAX                            ; 00470b77
    CALL crt_time.c__strftime_FUN_00566634 ; 00470b78
        ;   XREF to: 00566634 (UNCONDITIONAL_CALL)  ; undefined crt_time.c__strftime_FUN_00566634()
    ADD ESP,0x10                        ; 00470b7d
    LEA EAX,[ESP + 0x1c64]              ; 00470b80
    PUSH EAX                            ; 00470b87
    MOV ECX,dword ptr [ESP + 0x4b0]     ; 00470b88
    PUSH ECX                            ; 00470b8f
    LEA EAX,[ESP + 0x17dc]              ; 00470b90
    PUSH EAX                            ; 00470b97
    LEA EAX,[ESP + 0xee0]               ; 00470b98
    PUSH EAX                            ; 00470b9f
    PUSH 0x57e6d1                       ; 00470ba0 | = "%s\t%s\t%d\t%s"
    LEA EAX,[ESP + 0x1bb0]              ; 00470ba5
    PUSH EAX                            ; 00470bac
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00470bad
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x18                        ; 00470bb2
    LEA EAX,[ESP + 0x1b9c]              ; 00470bb5
    PUSH EAX                            ; 00470bbc
    CALL crt_string.c_strupr_FUN_00566ad0 ; 00470bbd
        ;   XREF to: 00566ad0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_strupr_FUN_00566ad0()
    ADD ESP,0x4                         ; 00470bc2
    LEA EAX,[ESP + 0x1b9c]              ; 00470bc5
    PUSH EAX                            ; 00470bcc
    LEA EAX,[ESP + 0x23c]               ; 00470bcd
    PUSH EAX                            ; 00470bd4
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 00470bd5
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 00470bda
    JMP 0x00470839                      ; 00470bdd
        ;   XREF to: 00470839 (UNCONDITIONAL_JUMP)  ; LAB_00470839
    MOV EDI,dword ptr [ESP + 0x238]     ; 00470be2
        ;   Label: LAB_00470be2
    INC ESI                             ; 00470be9
    CMP ESI,EDI                         ; 00470bea
    JL 0x00470884                       ; 00470bec
        ;   XREF to: 00470884 (CONDITIONAL_JUMP)  ; LAB_00470884
    JMP 0x004708fe                      ; 00470bf2
        ;   XREF to: 004708fe (UNCONDITIONAL_JUMP)  ; LAB_004708fe
    PUSH 0x57e6ee                       ; 00470bf7 | = "."
        ;   Label: LAB_00470bf7
    LEA EAX,[ESP + 0x3ac]               ; 00470bfc
    PUSH EAX                            ; 00470c03
    CALL crt_string.c__strcmp_FUN_005649c0 ; 00470c04
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 00470c09
    TEST EAX,EAX                        ; 00470c0c
    JZ 0x00470970                       ; 00470c0e
        ;   XREF to: 00470970 (CONDITIONAL_JUMP)  ; LAB_00470970
    LEA EAX,[ESP + 0x15d4]              ; 00470c14
    PUSH EAX                            ; 00470c1b
    LEA EAX,[ESP + 0x11d8]              ; 00470c1c
    PUSH EAX                            ; 00470c23
    PUSH 0x0                            ; 00470c24
    PUSH 0x0                            ; 00470c26
    LEA EAX,[ESP + 0x3b8]               ; 00470c28
    PUSH EAX                            ; 00470c2f
    CALL crt_string.c_splitpath_FUN_00566498 ; 00470c30
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_splitpath_FUN_00566498()
    ADD ESP,0x14                        ; 00470c35
    CMP byte ptr [ESP + 0x15d4],0x2e    ; 00470c38
    JNZ 0x00470c6c                      ; 00470c40
        ;   XREF to: 00470c6c (CONDITIONAL_JUMP)  ; LAB_00470c6c
    LEA EDI,[ESP + 0x15d4]              ; 00470c42
    SUB ECX,ECX                         ; 00470c49
    DEC ECX                             ; 00470c4b
    XOR EAX,EAX                         ; 00470c4c
    SCASB.REPNE ES:EDI                  ; 00470c4e
    NOT ECX                             ; 00470c50
    DEC ECX                             ; 00470c52
    PUSH ECX                            ; 00470c53
    LEA EAX,[ESP + 0x15d9]              ; 00470c54
    PUSH EAX                            ; 00470c5b
    LEA EAX,[ESP + 0x15dc]              ; 00470c5c
    PUSH EAX                            ; 00470c63
    CALL crt_string.c_memmove_FUN_00566170 ; 00470c64
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 00470c69
    LEA EAX,[ESP + 0x15d4]              ; 00470c6c
        ;   Label: LAB_00470c6c
    PUSH EAX                            ; 00470c73
    LEA EAX,[ESP + 0x11d8]              ; 00470c74
    PUSH EAX                            ; 00470c7b
    PUSH 0x57e6f0                       ; 00470c7c | = "%s\t%s\t(DIR)"
    LEA EAX,[ESP + 0x1ae0]              ; 00470c81
    PUSH EAX                            ; 00470c88
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00470c89
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 00470c8e
    LEA EAX,[ESP + 0x1ad4]              ; 00470c91
    PUSH EAX                            ; 00470c98
    CALL crt_string.c_strupr_FUN_00566ad0 ; 00470c99
        ;   XREF to: 00566ad0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_strupr_FUN_00566ad0()
    ADD ESP,0x4                         ; 00470c9e
    LEA EAX,[ESP + 0x1ad4]              ; 00470ca1
    PUSH EAX                            ; 00470ca8
    JMP 0x00470960                      ; 00470ca9
        ;   XREF to: 00470960 (UNCONDITIONAL_JUMP)  ; LAB_00470960
    PUSH 0x0                            ; 00470cae
        ;   Label: LAB_00470cae
    LEA EAX,[ESP + 0x3ac]               ; 00470cb0
    PUSH EAX                            ; 00470cb7
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20 ; 00470cb8
        ;   XREF to: 00456c20 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20()
        ;   Label: LAB_00470cb8
    ADD ESP,0x8                         ; 00470cbd
    PUSH 0x0                            ; 00470cc0
    LEA EAX,[ESP + 0x23c]               ; 00470cc2
    PUSH EAX                            ; 00470cc9
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 00470cca
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_dtor_FUN_00474cf0()
    ADD ESP,0x8                         ; 00470ccf
    LEA EAX,[ESP + 0x7c8]               ; 00470cd2
    PUSH EAX                            ; 00470cd9
    CALL FUN_00566570                   ; 00470cda
        ;   XREF to: 00566570 (UNCONDITIONAL_CALL)  ; undefined FUN_00566570()
    ADD ESP,0x4                         ; 00470cdf
    MOV EAX,dword ptr [ESP + 0x1c84]    ; 00470ce2
    POP ESI                             ; 00470ce9
    POP EDI                             ; 00470cea
    ADD ESP,0x1c88                      ; 00470ceb
    POP EBP                             ; 00470cf1
    POP EBX                             ; 00470cf2
    RET                                 ; 00470cf3
    LEA EAX,[ESP + 0x5c0]               ; 00470cf4
        ;   Label: LAB_00470cf4
    PUSH EAX                            ; 00470cfb
    CALL FUN_00566570                   ; 00470cfc
        ;   XREF to: 00566570 (UNCONDITIONAL_CALL)  ; undefined FUN_00566570()
    ADD ESP,0x4                         ; 00470d01
    TEST EAX,EAX                        ; 00470d04
    JZ 0x00470a21                       ; 00470d06
        ;   XREF to: 00470a21 (CONDITIONAL_JUMP)  ; LAB_00470a21
    LEA EAX,[ESP + 0x5c0]               ; 00470d0c
    PUSH EAX                            ; 00470d13
    PUSH 0x57e719                       ; 00470d14 | = "Can't change to %s"
    PUSH EBX                            ; 00470d19
    CALL FUN_0046fcd0                   ; 00470d1a
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0xc                         ; 00470d1f
    LEA EAX,[ESP + 0x4bc]               ; 00470d22
    PUSH EAX                            ; 00470d29
    CALL FUN_00566570                   ; 00470d2a
        ;   XREF to: 00566570 (UNCONDITIONAL_CALL)  ; undefined FUN_00566570()
    ADD ESP,0x4                         ; 00470d2f
    JMP 0x004709fc                      ; 00470d32
        ;   XREF to: 004709fc (UNCONDITIONAL_JUMP)  ; LAB_004709fc
    CMP ESI,EBP                         ; 00470d37
        ;   Label: LAB_00470d37
    JL 0x00470dd2                       ; 00470d39
        ;   XREF to: 00470dd2 (CONDITIONAL_JUMP)  ; LAB_00470dd2
    PUSH 0x0                            ; 00470d3f
    PUSH ESI                            ; 00470d41
    LEA EAX,[ESP + 0xbdc]               ; 00470d42
    PUSH EAX                            ; 00470d49
    LEA EAX,[ESP + 0x244]               ; 00470d4a
    PUSH EAX                            ; 00470d51
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090 ; 00470d52
        ;   XREF to: 00474090 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090()
    ADD ESP,0x10                        ; 00470d57
    PUSH 0x1                            ; 00470d5a
    PUSH ESI                            ; 00470d5c
    LEA EAX,[ESP + 0xadc]               ; 00470d5d
    PUSH EAX                            ; 00470d64
    LEA EAX,[ESP + 0x244]               ; 00470d65
    PUSH EAX                            ; 00470d6c
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090 ; 00470d6d
        ;   XREF to: 00474090 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090()
    ADD ESP,0x10                        ; 00470d72
    LEA EAX,[ESP + 0xad4]               ; 00470d75
    PUSH EAX                            ; 00470d7c
    LEA EAX,[ESP + 0xbd8]               ; 00470d7d
    PUSH EAX                            ; 00470d84
    PUSH 0x0                            ; 00470d85
    PUSH 0x0                            ; 00470d87
    LEA EAX,[ESP + 0xce4]               ; 00470d89
    PUSH EAX                            ; 00470d90
    CALL crt_file.c_makepath_FUN_0056626c ; 00470d91
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; undefined crt_file.c_makepath_FUN_0056626c()
    ADD ESP,0x14                        ; 00470d96
    LEA EAX,[ESP + 0xcd4]               ; 00470d99
    PUSH EAX                            ; 00470da0
    CALL FUN_00566570                   ; 00470da1
        ;   XREF to: 00566570 (UNCONDITIONAL_CALL)  ; undefined FUN_00566570()
    ADD ESP,0x4                         ; 00470da6
    PUSH 0x0                            ; 00470da9
    LEA EAX,[ESP + 0x3ac]               ; 00470dab
    PUSH EAX                            ; 00470db2
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20 ; 00470db3
        ;   XREF to: 00456c20 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20()
    ADD ESP,0x8                         ; 00470db8
    PUSH 0x0                            ; 00470dbb
    LEA EAX,[ESP + 0x23c]               ; 00470dbd
    PUSH EAX                            ; 00470dc4
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 00470dc5
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_dtor_FUN_00474cf0()
    ADD ESP,0x8                         ; 00470dca
    JMP 0x0047078a                      ; 00470dcd
        ;   XREF to: 0047078a (UNCONDITIONAL_JUMP)  ; LAB_0047078a
    LEA EAX,[ESP + 0x19d4]              ; 00470dd2
        ;   Label: LAB_00470dd2
    PUSH EAX                            ; 00470dd9
    LEA EAX,[ESP + 0xfd8]               ; 00470dda
    PUSH EAX                            ; 00470de1
    LEA EAX,[ESP + 0x14dc]              ; 00470de2
    PUSH EAX                            ; 00470de9
    LEA EAX,[ESP + 0x1c94]              ; 00470dea
    PUSH EAX                            ; 00470df1
    LEA EAX,[ESP + 0x4cc]               ; 00470df2
    PUSH EAX                            ; 00470df9
    CALL crt_string.c_splitpath_FUN_00566498 ; 00470dfa
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_splitpath_FUN_00566498()
    ADD ESP,0x14                        ; 00470dff
    LEA EAX,[ESP + 0x19d4]              ; 00470e02
    PUSH EAX                            ; 00470e09
    LEA EAX,[ESP + 0xfd8]               ; 00470e0a
    PUSH EAX                            ; 00470e11
    LEA EAX,[ESP + 0x14dc]              ; 00470e12
    PUSH EAX                            ; 00470e19
    PUSH 0x0                            ; 00470e1a
    LEA EAX,[ESP + 0x13e4]              ; 00470e1c
    PUSH EAX                            ; 00470e23
    CALL crt_file.c_makepath_FUN_0056626c ; 00470e24
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; undefined crt_file.c_makepath_FUN_0056626c()
    ADD ESP,0x14                        ; 00470e29
    PUSH 0x0                            ; 00470e2c
    PUSH ESI                            ; 00470e2e
    LEA EAX,[ESP + 0xfdc]               ; 00470e2f
    PUSH EAX                            ; 00470e36
    LEA EAX,[ESP + 0x244]               ; 00470e37
    PUSH EAX                            ; 00470e3e
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090 ; 00470e3f
        ;   XREF to: 00474090 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090()
    ADD ESP,0x10                        ; 00470e44
    PUSH 0x1                            ; 00470e47
    PUSH ESI                            ; 00470e49
    LEA EAX,[ESP + 0x19dc]              ; 00470e4a
    PUSH EAX                            ; 00470e51
    LEA EAX,[ESP + 0x244]               ; 00470e52
    PUSH EAX                            ; 00470e59
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090 ; 00470e5a
        ;   XREF to: 00474090 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090()
    ADD ESP,0x10                        ; 00470e5f
    LEA EAX,[ESP + 0x19d4]              ; 00470e62
    PUSH EAX                            ; 00470e69
    LEA EAX,[ESP + 0xfd8]               ; 00470e6a
    PUSH EAX                            ; 00470e71
    LEA EAX,[ESP + 0x13dc]              ; 00470e72
    PUSH EAX                            ; 00470e79
    LEA EAX,[ESP + 0x1c94]              ; 00470e7a
    PUSH EAX                            ; 00470e81
    MOV EDX,dword ptr [ESP + 0x1cb8]    ; 00470e82
    PUSH EDX                            ; 00470e89
    CALL crt_file.c_makepath_FUN_0056626c ; 00470e8a
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; undefined crt_file.c_makepath_FUN_0056626c()
    ADD ESP,0x14                        ; 00470e8f
    PUSH 0x0                            ; 00470e92
    LEA EAX,[ESP + 0x3ac]               ; 00470e94
    MOV ECX,0x1                         ; 00470e9b
    PUSH EAX                            ; 00470ea0
    MOV dword ptr [ESP + 0x1c8c],ECX    ; 00470ea1
    JMP 0x00470cb8                      ; 00470ea8
        ;   XREF to: 00470cb8 (UNCONDITIONAL_JUMP)  ; LAB_00470cb8


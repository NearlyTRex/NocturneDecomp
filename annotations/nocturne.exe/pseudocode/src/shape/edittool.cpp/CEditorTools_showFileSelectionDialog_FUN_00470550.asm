; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_00470550(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,byte param_6)
;
; Local Variables:
; undefined        Stack[-0x684]:1  local_684
; undefined        Stack[-0x484]:1  local_484
; undefined4       Stack[-0x284]:4  local_284
; undefined        Stack[-0x114]:1  local_114
;
; XREF[3]:
;   FUN_004a4170 at 004a4664
;   FUN_004a4b50 at 004a570f
;   core_game.cpp_CGame_promptLoadGame_FUN_004a6570 at 004a6625
;
; Referenced Globals:
;   TerminatedCString s_No_files_found_0057e682
;
; Called Functions:
;   crt_file.c_makepath_FUN_0056626c
;   crt_string.c__stricmp_FUN_00564520
;   FUN_0046fcd0
;   FUN_00474c90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
;   shape_edittool.cpp_CPickList_dtor_FUN_00474cf0
;   shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0
;   shape_edittool.cpp_CStrList_sortAll_FUN_00473fd0
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00470550
        ;   Label: shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550
    PUSH ESI                            ; 00470551
    PUSH EDI                            ; 00470552
    PUSH EBP                            ; 00470553
    SUB ESP,0x674                       ; 00470554
    MOV ESI,dword ptr [ESP + 0x698]     ; 0047055a
    LEA EAX,[ESP + 0x400]               ; 00470561
    PUSH EAX                            ; 00470568
    CALL FUN_00474c90                   ; 00470569
        ;   XREF to: 00474c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00474c90()
    ADD ESP,0x4                         ; 0047056e
    MOV EDX,dword ptr [ESP + 0x694]     ; 00470571
    PUSH EDX                            ; 00470578
    MOV ECX,dword ptr [ESP + 0x694]     ; 00470579
    PUSH ECX                            ; 00470580
    LEA EAX,[ESP + 0x408]               ; 00470581
    PUSH EAX                            ; 00470588
    CALL shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0 ; 00470589
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0()
    ADD ESP,0xc                         ; 0047058e
    CMP dword ptr [ESP + 0x400],0x1     ; 00470591
    JL 0x004706d4                       ; 00470599
        ;   XREF to: 004706d4 (CONDITIONAL_JUMP)  ; LAB_004706d4
    LEA EAX,[ESP + 0x400]               ; 0047059f
    PUSH EAX                            ; 004705a6
    CALL shape_edittool.cpp_CStrList_sortAll_FUN_00473fd0 ; 004705a7
        ;   XREF to: 00473fd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_sortAll_FUN_00473fd0()
    ADD ESP,0x4                         ; 004705ac
    MOV AH,byte ptr [ESP + 0x69c]       ; 004705af
    MOV EDI,0xffffffff                  ; 004705b6
    TEST AH,0x1                         ; 004705bb
    JZ 0x00470640                       ; 004705be
        ;   XREF to: 00470640 (CONDITIONAL_JUMP)  ; LAB_00470640
    MOV EBP,dword ptr [ESP + 0x400]     ; 004705c4
    XOR EBX,EBX                         ; 004705cb
    TEST EBP,EBP                        ; 004705cd
    JLE 0x00470640                      ; 004705cf
        ;   XREF to: 00470640 (CONDITIONAL_JUMP)  ; LAB_00470640
    PUSH 0x0                            ; 004705d1
        ;   Label: LAB_004705d1
    PUSH EBX                            ; 004705d3
    LEA EAX,[ESP + 0x8]                 ; 004705d4
    PUSH EAX                            ; 004705d8
    LEA EAX,[ESP + 0x40c]               ; 004705d9
    PUSH EAX                            ; 004705e0
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090 ; 004705e1
        ;   XREF to: 00474090 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090()
    ADD ESP,0x10                        ; 004705e6
    PUSH 0x1                            ; 004705e9
    PUSH EBX                            ; 004705eb
    LEA EAX,[ESP + 0x208]               ; 004705ec
    PUSH EAX                            ; 004705f3
    LEA EAX,[ESP + 0x40c]               ; 004705f4
    PUSH EAX                            ; 004705fb
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090 ; 004705fc
        ;   XREF to: 00474090 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090()
    ADD ESP,0x10                        ; 00470601
    LEA EAX,[ESP + 0x200]               ; 00470604
    PUSH EAX                            ; 0047060b
    LEA EAX,[ESP + 0x4]                 ; 0047060c
    PUSH EAX                            ; 00470610
    PUSH 0x0                            ; 00470611
    PUSH 0x0                            ; 00470613
    LEA EAX,[ESP + 0x580]               ; 00470615
    PUSH EAX                            ; 0047061c
    CALL crt_file.c_makepath_FUN_0056626c ; 0047061d
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; undefined crt_file.c_makepath_FUN_0056626c()
    ADD ESP,0x14                        ; 00470622
    PUSH ESI                            ; 00470625
    LEA EAX,[ESP + 0x574]               ; 00470626
    PUSH EAX                            ; 0047062d
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047062e
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 00470633
    TEST EAX,EAX                        ; 00470636
    JNZ 0x004706ff                      ; 00470638
        ;   XREF to: 004706ff (CONDITIONAL_JUMP)  ; LAB_004706ff
    MOV EDI,EBX                         ; 0047063e
    PUSH EDI                            ; 00470640
        ;   Label: LAB_00470640
    MOV ECX,dword ptr [ESP + 0x690]     ; 00470641
    PUSH ECX                            ; 00470648
    LEA EAX,[ESP + 0x408]               ; 00470649
    PUSH EAX                            ; 00470650
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 ; 00470651
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70()
    MOV EBX,EAX                         ; 00470656
    ADD ESP,0xc                         ; 00470658
    TEST EAX,EAX                        ; 0047065b
    JL 0x00470714                       ; 0047065d
        ;   XREF to: 00470714 (CONDITIONAL_JUMP)  ; LAB_00470714
    PUSH 0x0                            ; 00470663
    PUSH EAX                            ; 00470665
    LEA EAX,[ESP + 0x8]                 ; 00470666
    PUSH EAX                            ; 0047066a
    LEA EAX,[ESP + 0x40c]               ; 0047066b
    PUSH EAX                            ; 00470672
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090 ; 00470673
        ;   XREF to: 00474090 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090()
    ADD ESP,0x10                        ; 00470678
    PUSH 0x1                            ; 0047067b
    PUSH EBX                            ; 0047067d
    LEA EAX,[ESP + 0x208]               ; 0047067e
    PUSH EAX                            ; 00470685
    LEA EAX,[ESP + 0x40c]               ; 00470686
    PUSH EAX                            ; 0047068d
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090 ; 0047068e
        ;   XREF to: 00474090 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090()
    ADD ESP,0x10                        ; 00470693
    LEA EAX,[ESP + 0x200]               ; 00470696
    PUSH EAX                            ; 0047069d
    LEA EAX,[ESP + 0x4]                 ; 0047069e
    PUSH EAX                            ; 004706a2
    PUSH 0x0                            ; 004706a3
    PUSH 0x0                            ; 004706a5
    PUSH ESI                            ; 004706a7
    CALL crt_file.c_makepath_FUN_0056626c ; 004706a8
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; undefined crt_file.c_makepath_FUN_0056626c()
    ADD ESP,0x14                        ; 004706ad
    PUSH 0x0                            ; 004706b0
    LEA EAX,[ESP + 0x404]               ; 004706b2
    PUSH EAX                            ; 004706b9
    MOV EBX,0x1                         ; 004706ba
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 004706bf
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_dtor_FUN_00474cf0()
        ;   Label: LAB_004706bf
    ADD ESP,0x8                         ; 004706c4
    MOV EAX,EBX                         ; 004706c7
    ADD ESP,0x674                       ; 004706c9
    POP EBP                             ; 004706cf
    POP EDI                             ; 004706d0
    POP ESI                             ; 004706d1
    POP EBX                             ; 004706d2
    RET                                 ; 004706d3
    PUSH 0x57e682                       ; 004706d4 | = "No files found"
        ;   Label: LAB_004706d4
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004706d9
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004706de
    PUSH EAX                            ; 004706e1
    MOV EAX,dword ptr [ESP + 0x68c]     ; 004706e2
    PUSH EAX                            ; 004706e9
    CALL FUN_0046fcd0                   ; 004706ea
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0x8                         ; 004706ef
    XOR EBX,EBX                         ; 004706f2
    PUSH EBX                            ; 004706f4
    LEA EAX,[ESP + 0x404]               ; 004706f5
    PUSH EAX                            ; 004706fc
    JMP 0x004706bf                      ; 004706fd
        ;   XREF to: 004706bf (UNCONDITIONAL_JUMP)  ; LAB_004706bf
    MOV EDX,dword ptr [ESP + 0x400]     ; 004706ff
        ;   Label: LAB_004706ff
    INC EBX                             ; 00470706
    CMP EBX,EDX                         ; 00470707
    JL 0x004705d1                       ; 00470709
        ;   XREF to: 004705d1 (CONDITIONAL_JUMP)  ; LAB_004705d1
    JMP 0x00470640                      ; 0047070f
        ;   XREF to: 00470640 (UNCONDITIONAL_JUMP)  ; LAB_00470640
    PUSH 0x0                            ; 00470714
        ;   Label: LAB_00470714
    XOR EBX,EAX                         ; 00470716
    LEA EAX,[ESP + 0x404]               ; 00470718
    PUSH EAX                            ; 0047071f
    JMP 0x004706bf                      ; 00470720
        ;   XREF to: 004706bf (UNCONDITIONAL_JUMP)  ; LAB_004706bf


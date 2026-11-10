; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_showTextInputDialog_FUN_00493720(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode)
;
; Parameters:
; char *           Stack[0x4]:4   dialog_title
; char *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   max_length
; int              Stack[0x10]:4   flags
; int              Stack[0x14]:4   dialog_mode
; Local Variables:
; undefined        Stack[-0x320]:1  local_320
; undefined        Stack[-0x1e0]:1  local_1e0
; undefined        Stack[-0xfc]:1  local_fc
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_00496180 at 00496198
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150 at 00496168
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbc68
;   TerminatedCString s_gEdFont_must_be_set_by_t_005dbc7e
;   TerminatedCString s_Cancel_005dbd43
;   TerminatedCString s_OK_005dbd4a
;   TerminatedCString s_Cancel_005dbd4d
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4ac
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_00626114
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f538
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01c3f5d0
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;   engine_keys.cpp_CKeys_getInputKey_FUN_004fd260
;   shape_edittool.cpp_calculateButtonWidth_FUN_0049d950
;   shape_edittool.cpp_CEdButton_ctor_FUN_0049d480
;   shape_edittool.cpp_CEdButton_dtor_FUN_0049d4b0
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530
;   shape_edittool.cpp_CEdButton_wasClicked_FUN_0049d8a0
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840
;   shape_edittool.cpp_CInputString_backspace_FUN_004930c0
;   shape_edittool.cpp_CInputString_deleteSelection_FUN_00493070
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_004931b0
;   shape_edittool.cpp_CInputString_init_FUN_00492ec0
;   shape_edittool.cpp_CInputString_insertChar_FUN_00492f70
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493720
        ;   Label: shape_edittool.cpp_showTextInputDialog_FUN_00493720
    PUSH ESI                            ; 00493721
    PUSH EDI                            ; 00493722
    PUSH EBP                            ; 00493723
    SUB ESP,0x310                       ; 00493724
    MOV EBP,dword ptr [ESP + 0x328]     ; 0049372a
    MOV ESI,dword ptr [ESP + 0x32c]     ; 00493731
    MOV EBX,dword ptr [ESP + 0x334]     ; 00493738
    CMP dword ptr [0x01c3eb50],0x0      ; 0049373f | DAT_01c3eb50
    JZ 0x00493a49                       ; 00493746
        ;   XREF to: 00493a49 (CONDITIONAL_JUMP)  ; LAB_00493a49
    MOV EAX,[0x01c3eb50]                ; 0049374c | DAT_01c3eb50
        ;   Label: LAB_0049374c
    PUSH 0x6a                           ; 00493751
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 00493753
    PUSH EAX                            ; 00493759
    MOV dword ptr [0x01c3f538],EDX      ; 0049375a | DAT_01c3f538
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 00493760
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493765
    MOV [0x01c3f53c],EAX                ; 00493768 | DAT_01c3f53c
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0049376d
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    TEST byte ptr [ESP + 0x330],0x1     ; 00493772
    JZ 0x00493a71                       ; 0049377a
        ;   XREF to: 00493a71 (CONDITIONAL_JUMP)  ; LAB_00493a71
    PUSH EBX                            ; 00493780
    PUSH ESI                            ; 00493781
    PUSH EBP                            ; 00493782
    LEA EAX,[ESP + 0xc]                 ; 00493783
        ;   Label: LAB_00493783
    PUSH EAX                            ; 00493787
    CALL shape_edittool.cpp_CInputString_init_FUN_00492ec0 ; 00493788
        ;   XREF to: 00492ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_init_FUN_00492ec0(CInputString * this_ptr, char * source_string, int max_length, int mask_mode)
    ADD ESP,0x10                        ; 0049378d
    MOV EAX,[0x0061b498]                ; 00493790 | DAT_0061b498
    MOV EDX,EAX                         ; 00493795
    SAR EDX,0x1f                        ; 00493797
    SHL EDX,0x7                         ; 0049379a
    SBB EAX,EDX                         ; 0049379d
    SAR EAX,0x7                         ; 0049379f
    MOV ESI,EAX                         ; 004937a2
    MOV EAX,[0x0061b49c]                ; 004937a4 | DAT_0061b49c
    MOV EDX,EAX                         ; 004937a9
    MOV ECX,0x60                        ; 004937ab
    SAR EDX,0x1f                        ; 004937b0
    IDIV ECX                            ; 004937b3
    PUSH 0x0                            ; 004937b5
    MOV EBX,EAX                         ; 004937b7
    CALL shape_edittool.cpp_FUN_0049d9e0 ; 004937b9
        ;   XREF to: 0049d9e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0049d9e0(char * button_text)
    ADD ESP,0x4                         ; 004937be
    MOV ECX,dword ptr [0x01c3f53c]      ; 004937c1 | DAT_01c3f53c
    ADD EBX,EBX                         ; 004937c7
    PUSH 0x0                            ; 004937c9
    MOV EDX,dword ptr [ESP + 0x328]     ; 004937cb
    ADD EAX,EBX                         ; 004937d2
    PUSH EDX                            ; 004937d4
    ADD EAX,ECX                         ; 004937d5
    MOV EDX,dword ptr [0x0061b498]      ; 004937d7 | DAT_0061b498
    MOV ECX,0x5                         ; 004937dd
    SHL EDX,0x2                         ; 004937e2
    PUSH EAX                            ; 004937e5
    MOV EAX,EDX                         ; 004937e6
    SAR EDX,0x1f                        ; 004937e8
    IDIV ECX                            ; 004937eb
    PUSH EAX                            ; 004937ed
    MOV EBX,dword ptr [0x0061abc0]      ; 004937ee | g_CEditorToolsPtr
    PUSH EBX                            ; 004937f4
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840 ; 004937f5
        ;   XREF to: 00496840 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 004937fa
    PUSH 0x5dbd43                       ; 004937fd | = "Cancel"
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_0049d950 ; 00493802
        ;   XREF to: 0049d950 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_0049d950(char * button_text)
    MOV ECX,dword ptr [0x01c4f008]      ; 00493807 | DAT_01c4f008
    MOV EDI,dword ptr [0x01c4f010]      ; 0049380d | DAT_01c4f010
    ADD ECX,EDI                         ; 00493813
    MOV EDX,ECX                         ; 00493815
    SUB EDX,ESI                         ; 00493817
    MOV EBX,EAX                         ; 00493819
    MOV EAX,EDX                         ; 0049381b
    SAR EDX,0x1f                        ; 0049381d
    SUB EAX,EDX                         ; 00493820
    SAR EAX,0x1                         ; 00493822
    SUB EAX,EBX                         ; 00493824
    LEA EDX,[ECX + ESI*0x1]             ; 00493826
    LEA EDI,[EAX + 0x1]                 ; 00493829
    MOV EAX,EDX                         ; 0049382c
    SAR EDX,0x1f                        ; 0049382e
    SUB EAX,EDX                         ; 00493831
    SAR EAX,0x1                         ; 00493833
    ADD ESP,0x4                         ; 00493835
    PUSH 0x0                            ; 00493838
    MOV ESI,EAX                         ; 0049383a
    CALL shape_edittool.cpp_FUN_0049d9e0 ; 0049383c
        ;   XREF to: 0049d9e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0049d9e0(char * button_text)
    MOV EDX,dword ptr [0x01c4f014]      ; 00493841 | DAT_01c4f014
    SUB EDX,EAX                         ; 00493847
    ADD ESP,0x4                         ; 00493849
    LEA EAX,[EDX + 0x1]                 ; 0049384c
    MOV dword ptr [ESP + 0x308],EAX     ; 0049384f
    LEA EAX,[ESP + 0x224]               ; 00493856
    PUSH EAX                            ; 0049385d
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_0049d480 ; 0049385e
        ;   XREF to: 0049d480 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_0049d480(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 00493863
    LEA EAX,[ESP + 0x140]               ; 00493866
    PUSH EAX                            ; 0049386d
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_0049d480 ; 0049386e
        ;   XREF to: 0049d480 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_0049d480(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 00493873
    PUSH 0x5dbd4a                       ; 00493876 | = "OK"
    MOV EAX,[0x01c4f014]                ; 0049387b | DAT_01c4f014
    PUSH EAX                            ; 00493880
    LEA EAX,[EDI + EBX*0x1 + -0x1]      ; 00493881
    PUSH EAX                            ; 00493885
    MOV EDX,dword ptr [ESP + 0x314]     ; 00493886
    PUSH EDX                            ; 0049388d
    PUSH EDI                            ; 0049388e
    LEA EAX,[ESP + 0x238]               ; 0049388f
    PUSH EAX                            ; 00493896
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530 ; 00493897
        ;   XREF to: 0049d530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 0049389c
    PUSH 0x5dbd4d                       ; 0049389f | = "Cancel"
    MOV ECX,dword ptr [0x01c4f014]      ; 004938a4 | DAT_01c4f014
    ADD EBX,ESI                         ; 004938aa
    PUSH ECX                            ; 004938ac
    DEC EBX                             ; 004938ad
    PUSH EBX                            ; 004938ae
    MOV EBX,dword ptr [ESP + 0x314]     ; 004938af
    PUSH EBX                            ; 004938b6
    PUSH ESI                            ; 004938b7
    LEA EAX,[ESP + 0x154]               ; 004938b8
    PUSH EAX                            ; 004938bf
    MOV EDI,0x1                         ; 004938c0
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530 ; 004938c5
        ;   XREF to: 0049d530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530(CEdButton * this_ptr, int left, int top, int right, ...)
    MOV EAX,[0x0061b4ac]                ; 004938ca | DAT_0061b4ac
    ADD ESP,0x18                        ; 004938cf
    MOV ESI,0x7f                        ; 004938d2
    MOV dword ptr [ESP + 0x30c],EAX     ; 004938d7
    MOV dword ptr [0x0061b4ac],ESI      ; 004938de | DAT_0061b4ac
    XOR ESI,ESI                         ; 004938e4
    MOV EAX,[0x0061abc0]                ; 004938e6 | g_CEditorToolsPtr
        ;   Label: LAB_004938e6
    PUSH EAX                            ; 004938eb
    CALL shape_edittool.cpp_FUN_00496ee0 ; 004938ec
        ;   XREF to: 00496ee0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496ee0()
    ADD ESP,0x4                         ; 004938f1
    PUSH 0x1                            ; 004938f4
    MOV EDX,dword ptr [0x0061abc0]      ; 004938f6 | g_CEditorToolsPtr
    PUSH EDX                            ; 004938fc
    CALL shape_edittool.cpp_FUN_00497660 ; 004938fd
        ;   XREF to: 00497660 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00497660()
    ADD ESP,0x8                         ; 00493902
    MOV ECX,dword ptr [0x01c4f00c]      ; 00493905 | DAT_01c4f00c
    PUSH ECX                            ; 0049390b
    MOV EBX,dword ptr [0x01c4f008]      ; 0049390c | DAT_01c4f008
    PUSH EBX                            ; 00493912
    LEA EAX,[ESP + 0x8]                 ; 00493913
    PUSH EAX                            ; 00493917
    CALL shape_edittool.cpp_FUN_004934b0 ; 00493918
        ;   XREF to: 004934b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004934b0()
    ADD ESP,0xc                         ; 0049391d
    TEST ESI,ESI                        ; 00493920
    SETZ AL                             ; 00493922
    AND EAX,0xff                        ; 00493925
    PUSH EAX                            ; 0049392a
    LEA EAX,[ESP + 0x228]               ; 0049392b
    PUSH EAX                            ; 00493932
    CALL shape_edittool.cpp_FUN_0049d580 ; 00493933
        ;   XREF to: 0049d580 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049d580()
    ADD ESP,0x8                         ; 00493938
    CMP ESI,0x1                         ; 0049393b
    SETZ AL                             ; 0049393e
    AND EAX,0xff                        ; 00493941
    PUSH EAX                            ; 00493946
    LEA EAX,[ESP + 0x144]               ; 00493947
    PUSH EAX                            ; 0049394e
    CALL shape_edittool.cpp_FUN_0049d580 ; 0049394f
        ;   XREF to: 0049d580 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049d580()
    ADD ESP,0x8                         ; 00493954
    PUSH 0x0                            ; 00493957
    MOV EAX,[0x0061abc0]                ; 00493959 | g_CEditorToolsPtr
    PUSH EAX                            ; 0049395e
    CALL shape_edittool.cpp_FUN_00497870 ; 0049395f
        ;   XREF to: 00497870 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00497870()
    ADD ESP,0x8                         ; 00493964
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 00493967
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    PUSH 0x2a                           ; 0049396c
    MOV EAX,[0x0061f2a4]                ; 0049396e | DAT_0061f2a4
    PUSH EAX                            ; 00493973 | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 00493974 | DAT_01d1bca0
    CALL dword ptr [EBX]                ; 00493976
    ADD ESP,0x8                         ; 00493978
    TEST EAX,EAX                        ; 0049397b
    JZ 0x00493a7a                       ; 0049397d
        ;   XREF to: 00493a7a (CONDITIONAL_JUMP)  ; LAB_00493a7a
    PUSH 0x2a                           ; 00493983
        ;   Label: LAB_00493983
    MOV EAX,[0x0061f2a4]                ; 00493985 | DAT_0061f2a4
    PUSH EAX                            ; 0049398a | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 0049398b | DAT_01d1bca0
    CALL dword ptr [EBX]                ; 0049398d
    ADD ESP,0x8                         ; 0049398f
    TEST EAX,EAX                        ; 00493992
    JZ 0x004939ab                       ; 00493994
        ;   XREF to: 004939ab (CONDITIONAL_JUMP)  ; LAB_004939ab
    PUSH 0xf                            ; 00493996
    MOV EAX,[0x0061f2a4]                ; 00493998 | DAT_0061f2a4
    PUSH EAX                            ; 0049399d | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 0049399e | DAT_01d1bca0
    CALL dword ptr [EBX + 0x4]          ; 004939a0
    ADD ESP,0x8                         ; 004939a3
    TEST EAX,EAX                        ; 004939a6
    JZ 0x004939ab                       ; 004939a8
        ;   XREF to: 004939ab (CONDITIONAL_JUMP)  ; LAB_004939ab
    DEC ESI                             ; 004939aa
    CMP ESI,0x2                         ; 004939ab
        ;   Label: LAB_004939ab
    JL 0x00493a98                       ; 004939ae
        ;   XREF to: 00493a98 (CONDITIONAL_JUMP)  ; LAB_00493a98
    XOR ESI,ESI                         ; 004939b4
    CMP dword ptr [0x02c9be70],0x0      ; 004939b6 | DAT_02c9be70
        ;   Label: LAB_004939b6
    JNZ 0x00493aa7                      ; 004939bd
        ;   XREF to: 00493aa7 (CONDITIONAL_JUMP)  ; LAB_00493aa7
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005b2580 ; 004939c3
        ;   XREF to: 005b2580 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005b2580()
        ;   Label: LAB_004939c3
    TEST EAX,EAX                        ; 004939c8
    JZ 0x00493b2a                       ; 004939ca
        ;   XREF to: 00493b2a (CONDITIONAL_JUMP)  ; LAB_00493b2a
    MOV EAX,[0x0061f2a4]                ; 004939d0 | DAT_0061f2a4
    PUSH EAX                            ; 004939d5 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_004fd260 ; 004939d6
        ;   XREF to: 004fd260 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_004fd260(CKeys * this_ptr)
    MOV EBX,EAX                         ; 004939db
    ADD ESP,0x4                         ; 004939dd
    CMP EAX,0x1b                        ; 004939e0
    JZ 0x004939f6                       ; 004939e3
        ;   XREF to: 004939f6 (CONDITIONAL_JUMP)  ; LAB_004939f6
    CMP EAX,0xd                         ; 004939e5
    JNZ 0x00493ad6                      ; 004939e8
        ;   XREF to: 00493ad6 (CONDITIONAL_JUMP)  ; LAB_00493ad6
    TEST ESI,ESI                        ; 004939ee
    JZ 0x00493aae                       ; 004939f0
        ;   XREF to: 00493aae (CONDITIONAL_JUMP)  ; LAB_00493aae
    XOR EBX,EAX                         ; 004939f6
        ;   Label: LAB_004939f6
    MOV EDX,dword ptr [0x0061abc0]      ; 004939f8 | g_CEditorToolsPtr
        ;   Label: LAB_004939f8
    PUSH EDX                            ; 004939fe
    CALL shape_edittool.cpp_FUN_00496dd0 ; 004939ff
        ;   XREF to: 00496dd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496dd0()
    ADD ESP,0x4                         ; 00493a04
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00493a07
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,dword ptr [ESP + 0x30c]     ; 00493a0c
    PUSH 0x0                            ; 00493a13
    MOV [0x0061b4ac],EAX                ; 00493a15 | DAT_0061b4ac
    LEA EAX,[ESP + 0x144]               ; 00493a1a
    PUSH EAX                            ; 00493a21
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_0049d4b0 ; 00493a22
        ;   XREF to: 0049d4b0 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_0049d4b0(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00493a27
    PUSH 0x0                            ; 00493a2a
    LEA EAX,[ESP + 0x228]               ; 00493a2c
    PUSH EAX                            ; 00493a33
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_0049d4b0 ; 00493a34
        ;   XREF to: 0049d4b0 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_0049d4b0(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00493a39
    MOV EAX,EBX                         ; 00493a3c
    ADD ESP,0x310                       ; 00493a3e
    POP EBP                             ; 00493a44
    POP EDI                             ; 00493a45
    POP ESI                             ; 00493a46
    POP EBX                             ; 00493a47
    RET                                 ; 00493a48
    MOV ECX,0x5dbc68                    ; 00493a49 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00493a49
    MOV EDI,0xa4                        ; 00493a4e
    PUSH 0x5dbc7e                       ; 00493a53 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d1d400],ECX      ; 00493a58 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00493a5e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00493a64
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00493a69
    JMP 0x0049374c                      ; 00493a6c
        ;   XREF to: 0049374c (UNCONDITIONAL_JUMP)  ; LAB_0049374c
    PUSH EBX                            ; 00493a71
        ;   Label: LAB_00493a71
    PUSH ESI                            ; 00493a72
    PUSH 0x0                            ; 00493a73
    JMP 0x00493783                      ; 00493a75
        ;   XREF to: 00493783 (UNCONDITIONAL_JUMP)  ; LAB_00493783
    PUSH 0xf                            ; 00493a7a
        ;   Label: LAB_00493a7a
    MOV EAX,[0x0061f2a4]                ; 00493a7c | DAT_0061f2a4
    PUSH EAX                            ; 00493a81 | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 00493a82 | DAT_01d1bca0
    CALL dword ptr [EBX + 0x4]          ; 00493a84
    ADD ESP,0x8                         ; 00493a87
    TEST EAX,EAX                        ; 00493a8a
    JZ 0x00493983                       ; 00493a8c
        ;   XREF to: 00493983 (CONDITIONAL_JUMP)  ; LAB_00493983
    INC ESI                             ; 00493a92
    JMP 0x00493983                      ; 00493a93
        ;   XREF to: 00493983 (UNCONDITIONAL_JUMP)  ; LAB_00493983
    TEST ESI,ESI                        ; 00493a98
        ;   Label: LAB_00493a98
    JGE 0x004939b6                      ; 00493a9a
        ;   XREF to: 004939b6 (CONDITIONAL_JUMP)  ; LAB_004939b6
    MOV ESI,EDI                         ; 00493aa0
    JMP 0x004939b6                      ; 00493aa2
        ;   XREF to: 004939b6 (UNCONDITIONAL_JUMP)  ; LAB_004939b6
    XOR EBX,EBX                         ; 00493aa7
        ;   Label: LAB_00493aa7
    JMP 0x004939f8                      ; 00493aa9
        ;   XREF to: 004939f8 (UNCONDITIONAL_JUMP)  ; LAB_004939f8
    MOV ESI,ESP                         ; 00493aae
        ;   Label: LAB_00493aae
    MOV EDI,EBP                         ; 00493ab0
    MOV EBX,0x1                         ; 00493ab2
    PUSH EDI                            ; 00493ab7
    MOV AL,byte ptr [ESI]               ; 00493ab8
        ;   Label: LAB_00493ab8
    MOV byte ptr [EDI],AL               ; 00493aba
    CMP AL,0x0                          ; 00493abc
    JZ 0x00493ad0                       ; 00493abe
        ;   XREF to: 00493ad0 (CONDITIONAL_JUMP)  ; LAB_00493ad0
    MOV AL,byte ptr [ESI + 0x1]         ; 00493ac0
    ADD ESI,0x2                         ; 00493ac3
    MOV byte ptr [EDI + 0x1],AL         ; 00493ac6
    ADD EDI,0x2                         ; 00493ac9
    CMP AL,0x0                          ; 00493acc
    JNZ 0x00493ab8                      ; 00493ace
        ;   XREF to: 00493ab8 (CONDITIONAL_JUMP)  ; LAB_00493ab8
    POP EDI                             ; 00493ad0
        ;   Label: LAB_00493ad0
    JMP 0x004939f8                      ; 00493ad1
        ;   XREF to: 004939f8 (UNCONDITIONAL_JUMP)  ; LAB_004939f8
    CMP EAX,0x8                         ; 00493ad6
        ;   Label: LAB_00493ad6
    JZ 0x00493b1a                       ; 00493ad9
        ;   XREF to: 00493b1a (CONDITIONAL_JUMP)  ; LAB_00493b1a
    INC AL                              ; 00493adb
    AND EAX,0xff                        ; 00493add
    TEST byte ptr [EAX + 0x626114],0x8  ; 00493ae2 | DAT_00626114
    JZ 0x004939c3                       ; 00493ae9
        ;   XREF to: 004939c3 (CONDITIONAL_JUMP)  ; LAB_004939c3
    MOV EAX,ESP                         ; 00493aef
    PUSH EAX                            ; 00493af1
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_00493070 ; 00493af2
        ;   XREF to: 00493070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_00493070(CInputString * this_ptr)
    ADD ESP,0x4                         ; 00493af7
    PUSH 0x1                            ; 00493afa
    PUSH EBX                            ; 00493afc
    LEA EAX,[ESP + 0x8]                 ; 00493afd
    PUSH EAX                            ; 00493b01
    CALL shape_edittool.cpp_CInputString_insertChar_FUN_00492f70 ; 00493b02
        ;   XREF to: 00492f70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_insertChar_FUN_00492f70(CInputString * this_ptr, char character, int advance_cursor)
    ADD ESP,0xc                         ; 00493b07
    MOV EAX,ESP                         ; 00493b0a
    PUSH EAX                            ; 00493b0c
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_00492f50 ; 00493b0d
        ;   XREF to: 00492f50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_00492f50(CInputString * this_ptr)
    ADD ESP,0x4                         ; 00493b12
    JMP 0x004939c3                      ; 00493b15
        ;   XREF to: 004939c3 (UNCONDITIONAL_JUMP)  ; LAB_004939c3
    MOV EAX,ESP                         ; 00493b1a
        ;   Label: LAB_00493b1a
    PUSH EAX                            ; 00493b1c
    CALL shape_edittool.cpp_CInputString_backspace_FUN_004930c0 ; 00493b1d
        ;   XREF to: 004930c0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_backspace_FUN_004930c0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 00493b22
    JMP 0x004939c3                      ; 00493b25
        ;   XREF to: 004939c3 (UNCONDITIONAL_JUMP)  ; LAB_004939c3
    MOV EAX,ESP                         ; 00493b2a
        ;   Label: LAB_00493b2a
    PUSH EAX                            ; 00493b2c
    CALL shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_004931b0 ; 00493b2d
        ;   XREF to: 004931b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_004931b0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 00493b32
    LEA EAX,[ESP + 0x224]               ; 00493b35
    PUSH EAX                            ; 00493b3c
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_0049d8a0 ; 00493b3d
        ;   XREF to: 0049d8a0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_0049d8a0(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 00493b42
    TEST EAX,EAX                        ; 00493b45
    JNZ 0x00493aae                      ; 00493b47
        ;   XREF to: 00493aae (CONDITIONAL_JUMP)  ; LAB_00493aae
    LEA EAX,[ESP + 0x224]               ; 00493b4d
    CMP EAX,dword ptr [0x01c3f5d0]      ; 00493b54 | DAT_01c3f5d0
    JNZ 0x00493b5e                      ; 00493b5a
        ;   XREF to: 00493b5e (CONDITIONAL_JUMP)  ; LAB_00493b5e
    XOR ESI,ESI                         ; 00493b5c
    LEA EAX,[ESP + 0x140]               ; 00493b5e
        ;   Label: LAB_00493b5e
    PUSH EAX                            ; 00493b65
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_0049d8a0 ; 00493b66
        ;   XREF to: 0049d8a0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_0049d8a0(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 00493b6b
    TEST EAX,EAX                        ; 00493b6e
    JNZ 0x00493aa7                      ; 00493b70
        ;   XREF to: 00493aa7 (CONDITIONAL_JUMP)  ; LAB_00493aa7
    LEA EAX,[ESP + 0x140]               ; 00493b76
    CMP EAX,dword ptr [0x01c3f5d0]      ; 00493b7d | DAT_01c3f5d0
    JNZ 0x004938e6                      ; 00493b83
        ;   XREF to: 004938e6 (CONDITIONAL_JUMP)  ; LAB_004938e6
    MOV ESI,0x1                         ; 00493b89
    JMP 0x004938e6                      ; 00493b8e
        ;   XREF to: 004938e6 (UNCONDITIONAL_JUMP)  ; LAB_004938e6


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0(CPickList * this_ptr, char * dialog_title, int config_parameter)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   dialog_title
; int              Stack[0xc]:4   config_parameter
; Local Variables:
; undefined1       Stack[-0x160]:1  local_160
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0 at 004a3f00
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623a7e
;   TerminatedCString s_Too_many_picklist_column_00623a94
;   TerminatedCString s_Cancel_00623aaf
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CBitFont* g_EditorFont
;   CEditorTools g_CEditorToolsInstance
;   int g_FontCharacterWidth
;   int g_LastClickItemIndex
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   char* g_CurrentFilename
;   ... and 1 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
;   shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
;   shape_edittool.cpp_calculateGridHeight_FUN_004a64b0
;   shape_edittool.cpp_calculateGridWidth_FUN_004a6490
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
;   shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a45d0
        ;   Label: shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0
    PUSH ESI                            ; 004a45d1
    PUSH EDI                            ; 004a45d2
    PUSH EBP                            ; 004a45d3
    SUB ESP,0x150                       ; 004a45d4
    PUSH 0x28                           ; 004a45da
    MOV EAX,[0x02cf266c]                ; 004a45dc | g_FontCharacterWidth
    MOV EDX,dword ptr [ESP + 0x168]     ; 004a45e1
    INC EAX                             ; 004a45e8
    PUSH 0x0                            ; 004a45e9
    MOV dword ptr [EDX + 0x174],EAX     ; 004a45eb
    LEA EAX,[EDX + 0x10]                ; 004a45f1
    MOV dword ptr [EDX + 0x178],0x8     ; 004a45f4
    PUSH EAX                            ; 004a45fe
    MOV dword ptr [EDX + 0x38],0x1      ; 004a45ff
    CALL crt_memory.c_memset_FUN_005fde40 ; 004a4606
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004a460b
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a460e
    XOR EDX,EDX                         ; 004a4615
    MOV ECX,dword ptr [EAX]             ; 004a4617
    MOV dword ptr [ESP + 0x14c],EDX     ; 004a4619
    TEST ECX,ECX                        ; 004a4620
    JLE 0x004a46fb                      ; 004a4622
        ;   XREF to: 004a46fb (CONDITIONAL_JUMP)  ; LAB_004a46fb
    MOV EDI,dword ptr [ESP + 0x14c]     ; 004a4628
        ;   Label: LAB_004a4628
    PUSH EDI                            ; 004a462f
    MOV EBP,dword ptr [ESP + 0x168]     ; 004a4630
    PUSH EBP                            ; 004a4637
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004a4638
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004a463d
    MOV EDI,EAX                         ; 004a4640
    XOR EBP,EBP                         ; 004a4642
    MOV ESI,dword ptr [ESP + 0x164]     ; 004a4644
    XOR BL,BL                           ; 004a464b
    MOV EDX,ESP                         ; 004a464d
        ;   Label: LAB_004a464d
    MOV BH,byte ptr [EDI]               ; 004a464f
    MOV EAX,EDI                         ; 004a4651
    CMP BL,BH                           ; 004a4653
    JZ 0x004a4667                       ; 004a4655
        ;   XREF to: 004a4667 (CONDITIONAL_JUMP)  ; LAB_004a4667
    MOV BH,byte ptr [EAX]               ; 004a4657
        ;   Label: LAB_004a4657
    LEA ECX,[EAX + 0x1]                 ; 004a4659
    CMP BH,0x9                          ; 004a465c
    JNZ 0x004a46bd                      ; 004a465f
        ;   XREF to: 004a46bd (CONDITIONAL_JUMP)  ; LAB_004a46bd
    MOV EAX,ECX                         ; 004a4665
    MOV byte ptr [EDX],BL               ; 004a4667
        ;   Label: LAB_004a4667
    MOV EDI,EAX                         ; 004a4669
    MOV EAX,ESP                         ; 004a466b
    PUSH EAX                            ; 004a466d
    MOV EAX,[0x02cf1cd0]                ; 004a466e | g_EditorFont
    PUSH EAX                            ; 004a4673
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 004a4674
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV EDX,dword ptr [ESI + 0x10]      ; 004a4679
    ADD ESP,0x8                         ; 004a467c
    CMP EAX,EDX                         ; 004a467f
    JLE 0x004a4686                      ; 004a4681
        ;   XREF to: 004a4686 (CONDITIONAL_JUMP)  ; LAB_004a4686
    MOV dword ptr [ESI + 0x10],EAX      ; 004a4683
    INC EBP                             ; 004a4686
        ;   Label: LAB_004a4686
    MOV CL,byte ptr [EDI]               ; 004a4687
    ADD ESI,0x4                         ; 004a4689
    CMP BL,CL                           ; 004a468c
    JZ 0x004a46cc                       ; 004a468e
        ;   XREF to: 004a46cc (CONDITIONAL_JUMP)  ; LAB_004a46cc
    CMP EBP,0xa                         ; 004a4694
    JL 0x004a464d                       ; 004a4697
        ;   XREF to: 004a464d (CONDITIONAL_JUMP)  ; LAB_004a464d
    MOV EAX,0x623a7e                    ; 004a4699 | = "..\\shape\\edittool.cpp"
    MOV EDX,0xed6                       ; 004a469e
    PUSH 0x623a94                       ; 004a46a3 | = "Too many picklist columns!"
    MOV [0x02f0ca48],EAX                ; 004a46a8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004a46ad | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a46b3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a46b8
    JMP 0x004a464d                      ; 004a46bb
        ;   XREF to: 004a464d (UNCONDITIONAL_JUMP)  ; LAB_004a464d
    MOV AL,byte ptr [EAX]               ; 004a46bd
        ;   Label: LAB_004a46bd
    MOV byte ptr [EDX],AL               ; 004a46bf
    INC EDX                             ; 004a46c1
    MOV BH,byte ptr [ECX]               ; 004a46c2
    MOV EAX,ECX                         ; 004a46c4
    CMP BL,BH                           ; 004a46c6
    JNZ 0x004a4657                      ; 004a46c8
        ;   XREF to: 004a4657 (CONDITIONAL_JUMP)  ; LAB_004a4657
    JMP 0x004a4667                      ; 004a46ca
        ;   XREF to: 004a4667 (UNCONDITIONAL_JUMP)  ; LAB_004a4667
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a46cc
        ;   Label: LAB_004a46cc
    CMP EBP,dword ptr [EAX + 0x38]      ; 004a46d3
    JLE 0x004a46db                      ; 004a46d6
        ;   XREF to: 004a46db (CONDITIONAL_JUMP)  ; LAB_004a46db
    MOV dword ptr [EAX + 0x38],EBP      ; 004a46d8
    MOV EBX,dword ptr [ESP + 0x14c]     ; 004a46db
        ;   Label: LAB_004a46db
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a46e2
    INC EBX                             ; 004a46e9
    MOV ESI,dword ptr [EDX]             ; 004a46ea
    MOV dword ptr [ESP + 0x14c],EBX     ; 004a46ec
    CMP EBX,ESI                         ; 004a46f3
    JL 0x004a4628                       ; 004a46f5
        ;   XREF to: 004a4628 (CONDITIONAL_JUMP)  ; LAB_004a4628
    MOV ESI,dword ptr [ESP + 0x164]     ; 004a46fb
        ;   Label: LAB_004a46fb
    MOV ECX,0x28                        ; 004a4702
    XOR EDI,EDI                         ; 004a4707
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a4709
        ;   Label: LAB_004a4709
    MOV EAX,dword ptr [EAX + 0x38]      ; 004a4710
    DEC EAX                             ; 004a4713
    CMP EDI,EAX                         ; 004a4714
    JGE 0x004a4732                      ; 004a4716
        ;   XREF to: 004a4732 (CONDITIONAL_JUMP)  ; LAB_004a4732
    MOV EAX,[0x00679394]                ; 004a4718 | g_WindowWidth
    MOV EDX,EAX                         ; 004a471d
    SAR EDX,0x1f                        ; 004a471f
    IDIV ECX                            ; 004a4722
    MOV EBX,dword ptr [ESI + 0x10]      ; 004a4724
    ADD ESI,0x4                         ; 004a4727
    ADD EBX,EAX                         ; 004a472a
    INC EDI                             ; 004a472c
    MOV dword ptr [ESI + 0xc],EBX       ; 004a472d
    JMP 0x004a4709                      ; 004a4730
        ;   XREF to: 004a4709 (UNCONDITIONAL_JUMP)  ; LAB_004a4709
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a4732
        ;   Label: LAB_004a4732
    XOR EDX,EDX                         ; 004a4739
    MOV ECX,dword ptr [EAX + 0x38]      ; 004a473b
    MOV dword ptr [EAX + 0x18c],0x0     ; 004a473e
    TEST ECX,ECX                        ; 004a4748
    JLE 0x004a4770                      ; 004a474a
        ;   XREF to: 004a4770 (CONDITIONAL_JUMP)  ; LAB_004a4770
    MOV EBX,dword ptr [ESP + 0x164]     ; 004a474c
    MOV ECX,dword ptr [EAX + 0x10]      ; 004a4753
        ;   Label: LAB_004a4753
    ADD EAX,0x4                         ; 004a4756
    MOV ESI,dword ptr [EBX + 0x18c]     ; 004a4759
    INC EDX                             ; 004a475f
    ADD ESI,ECX                         ; 004a4760
    MOV EDI,dword ptr [EBX + 0x38]      ; 004a4762
    MOV dword ptr [EBX + 0x18c],ESI     ; 004a4765
    CMP EDX,EDI                         ; 004a476b
    JL 0x004a4753                       ; 004a476d
        ;   XREF to: 004a4753 (CONDITIONAL_JUMP)  ; LAB_004a4753
    NOP                                 ; 004a476f
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a4770
        ;   Label: LAB_004a4770
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a4777
    MOV EAX,dword ptr [EAX + 0x178]     ; 004a477e
    MOV EBP,dword ptr [EDX + 0x18c]     ; 004a4784
    ADD EAX,EAX                         ; 004a478a
    ADD EBP,EAX                         ; 004a478c
    MOV dword ptr [EDX + 0x18c],EBP     ; 004a478e
    MOV EDX,dword ptr [0x02cf266c]      ; 004a4794 | g_FontCharacterWidth
    MOV EAX,[0x00679398]                ; 004a479a | g_WindowHeight
    SHL EDX,0x2                         ; 004a479f
    SUB EAX,EDX                         ; 004a47a2
    MOV ECX,dword ptr [ESP + 0x164]     ; 004a47a4
    MOV EDX,EAX                         ; 004a47ab
    MOV ECX,dword ptr [ECX + 0x174]     ; 004a47ad
    SAR EDX,0x1f                        ; 004a47b3
    IDIV ECX                            ; 004a47b6
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a47b8
    MOV dword ptr [EDX + 0x188],EAX     ; 004a47bf
    CMP EAX,0x1                         ; 004a47c5
    JGE 0x004a47d4                      ; 004a47c8
        ;   XREF to: 004a47d4 (CONDITIONAL_JUMP)  ; LAB_004a47d4
    MOV dword ptr [EDX + 0x188],0x1     ; 004a47ca
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a47d4
        ;   Label: LAB_004a47d4
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a47db
    MOV ECX,dword ptr [EDX]             ; 004a47e2
    CMP ECX,dword ptr [EAX + 0x188]     ; 004a47e4
    JGE 0x004a47f2                      ; 004a47ea
        ;   XREF to: 004a47f2 (CONDITIONAL_JUMP)  ; LAB_004a47f2
    MOV dword ptr [EDX + 0x188],ECX     ; 004a47ec
    MOV EDX,dword ptr [0x00679394]      ; 004a47f2 | g_WindowWidth
        ;   Label: LAB_004a47f2
    LEA EAX,[EDX*0x8 + 0x0]             ; 004a47f8
    SUB EAX,EDX                         ; 004a47ff
    MOV EDX,EAX                         ; 004a4801
    SAR EDX,0x1f                        ; 004a4803
    SHL EDX,0x3                         ; 004a4806
    SBB EAX,EDX                         ; 004a4809
    SAR EAX,0x3                         ; 004a480b
    MOV ECX,dword ptr [ESP + 0x164]     ; 004a480e
    MOV EDX,EAX                         ; 004a4815
    MOV ECX,dword ptr [ECX + 0x18c]     ; 004a4817
    SAR EDX,0x1f                        ; 004a481d
    IDIV ECX                            ; 004a4820
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a4822
    MOV dword ptr [EDX + 0x190],EAX     ; 004a4829
    CMP EAX,0x1                         ; 004a482f
    JGE 0x004a483e                      ; 004a4832
        ;   XREF to: 004a483e (CONDITIONAL_JUMP)  ; LAB_004a483e
    MOV dword ptr [EDX + 0x190],0x1     ; 004a4834
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a483e
        ;   Label: LAB_004a483e
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a4845
    MOV ESI,dword ptr [EDX + 0x188]     ; 004a484c
    MOV EAX,dword ptr [EAX]             ; 004a4852
    ADD EAX,ESI                         ; 004a4854
    MOV ECX,dword ptr [ESP + 0x164]     ; 004a4856
    LEA EDX,[EAX + -0x1]                ; 004a485d
    MOV EDI,dword ptr [ECX + 0x188]     ; 004a4860
    MOV EAX,EDX                         ; 004a4866
    SAR EDX,0x1f                        ; 004a4868
    IDIV EDI                            ; 004a486b
    CMP EAX,dword ptr [ECX + 0x190]     ; 004a486d
    JGE 0x004a487b                      ; 004a4873
        ;   XREF to: 004a487b (CONDITIONAL_JUMP)  ; LAB_004a487b
    MOV dword ptr [ECX + 0x190],EAX     ; 004a4875
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a487b
        ;   Label: LAB_004a487b
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004a4882
    TEST EDX,EDX                        ; 004a4885
    JLE 0x004a4898                      ; 004a4887
        ;   XREF to: 004a4898 (CONDITIONAL_JUMP)  ; LAB_004a4898
    MOV EAX,EDX                         ; 004a4889
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a488b
    MOV dword ptr [EDX + 0x190],EAX     ; 004a4892
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a4898
        ;   Label: LAB_004a4898
    MOV dword ptr [EAX + 0x1d8],0x0     ; 004a489f
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a48a9
    MOV EAX,dword ptr [EAX + 0x188]     ; 004a48b0
    MOV ECX,dword ptr [EDX + 0x190]     ; 004a48b6
    IMUL EAX,ECX                        ; 004a48bc
    CMP EAX,dword ptr [EDX]             ; 004a48bf
    JGE 0x004a48d6                      ; 004a48c1
        ;   XREF to: 004a48d6 (CONDITIONAL_JUMP)  ; LAB_004a48d6
    CMP ECX,0x1                         ; 004a48c3
    JLE 0x004a4cd9                      ; 004a48c6
        ;   XREF to: 004a4cd9 (CONDITIONAL_JUMP)  ; LAB_004a4cd9
    MOV dword ptr [EDX + 0x1d8],0x2     ; 004a48cc
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a48d6
        ;   Label: LAB_004a48d6
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a48dd
    MOV EAX,dword ptr [EAX + 0x18c]     ; 004a48e4
    IMUL EAX,dword ptr [EDX + 0x190]    ; 004a48ea
    LEA EBP,[EAX + 0x8]                 ; 004a48f1
    MOV ECX,dword ptr [EDX + 0x174]     ; 004a48f4
    MOV EAX,dword ptr [EDX + 0x188]     ; 004a48fa
    IMUL EAX,ECX                        ; 004a4900
    LEA ESI,[EAX + 0x6]                 ; 004a4903
    CALL shape_edittool.cpp_calculateGridWidth_FUN_004a6490 ; 004a4906
        ;   XREF to: 004a6490 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridWidth_FUN_004a6490()
    MOV EBX,EAX                         ; 004a490b
    MOV dword ptr [ESP + 0x130],EAX     ; 004a490d
    CALL shape_edittool.cpp_calculateGridHeight_FUN_004a64b0 ; 004a4914
        ;   XREF to: 004a64b0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridHeight_FUN_004a64b0()
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a4919
    MOV EDI,dword ptr [EDX + 0x1d8]     ; 004a4920
    MOV dword ptr [ESP + 0x134],EAX     ; 004a4926
    CMP EDI,0x1                         ; 004a492d
    JNZ 0x004a4ce8                      ; 004a4930
        ;   XREF to: 004a4ce8 (CONDITIONAL_JUMP)  ; LAB_004a4ce8
    ADD EBP,EBX                         ; 004a4936
    MOV EAX,[0x00679394]                ; 004a4938 | g_WindowWidth
        ;   Label: LAB_004a4938
    MOV EDX,EAX                         ; 004a493d
    SAR EDX,0x1f                        ; 004a493f
    SHL EDX,0x7                         ; 004a4942
    SBB EAX,EDX                         ; 004a4945
    SAR EAX,0x7                         ; 004a4947
    MOV dword ptr [ESP + 0x12c],EAX     ; 004a494a
    MOV EAX,[0x00679398]                ; 004a4951 | g_WindowHeight
    MOV EDX,EAX                         ; 004a4956
    MOV ECX,0x60                        ; 004a4958
    SAR EDX,0x1f                        ; 004a495d
    IDIV ECX                            ; 004a4960
    XOR EBX,EBX                         ; 004a4962
    XOR EDI,EDI                         ; 004a4964
    MOV dword ptr [ESP + 0x138],EAX     ; 004a4966
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a496d
    MOV dword ptr [ESP + 0x140],EBX     ; 004a4974
    MOV dword ptr [ESP + 0x144],EBX     ; 004a497b
    MOV DL,byte ptr [EAX + 0x44]        ; 004a4982
    MOV dword ptr [ESP + 0x148],EBX     ; 004a4985
    TEST DL,DL                          ; 004a498c
    JZ 0x004a49aa                       ; 004a498e
        ;   XREF to: 004a49aa (CONDITIONAL_JUMP)  ; LAB_004a49aa
    ADD EAX,0x44                        ; 004a4990
    PUSH EAX                            ; 004a4993
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0 ; 004a4994
        ;   XREF to: 004a68e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0(char * button_text)
    MOV ECX,0x1                         ; 004a4999
    ADD ESP,0x4                         ; 004a499e
    MOV EDI,EAX                         ; 004a49a1
    MOV dword ptr [ESP + 0x148],ECX     ; 004a49a3
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a49aa
        ;   Label: LAB_004a49aa
    CMP byte ptr [EAX + 0xa8],0x0       ; 004a49b1
    JZ 0x004a49d5                       ; 004a49b8
        ;   XREF to: 004a49d5 (CONDITIONAL_JUMP)  ; LAB_004a49d5
    ADD EAX,0xa8                        ; 004a49ba
    PUSH EAX                            ; 004a49bf
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0 ; 004a49c0
        ;   XREF to: 004a68e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0(char * button_text)
    ADD ESP,0x4                         ; 004a49c5
    CMP EAX,EDI                         ; 004a49c8
    JLE 0x004a49ce                      ; 004a49ca
        ;   XREF to: 004a49ce (CONDITIONAL_JUMP)  ; LAB_004a49ce
    MOV EDI,EAX                         ; 004a49cc
    INC dword ptr [ESP + 0x148]         ; 004a49ce
        ;   Label: LAB_004a49ce
    CMP dword ptr [ESP + 0x148],0x0     ; 004a49d5
        ;   Label: LAB_004a49d5
    JLE 0x004a4a5d                      ; 004a49dd
        ;   XREF to: 004a4a5d (CONDITIONAL_JUMP)  ; LAB_004a4a5d
    PUSH 0x623aaf                       ; 004a49e3 | = "Cancel"
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0 ; 004a49e8
        ;   XREF to: 004a68e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0(char * button_text)
    ADD ESP,0x4                         ; 004a49ed
    CMP EAX,EDI                         ; 004a49f0
    JLE 0x004a49f6                      ; 004a49f2
        ;   XREF to: 004a49f6 (CONDITIONAL_JUMP)  ; LAB_004a49f6
    MOV EDI,EAX                         ; 004a49f4
    PUSH 0x0                            ; 004a49f6
        ;   Label: LAB_004a49f6
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 ; 004a49f8
        ;   XREF to: 004a6970 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_004a6970(char * button_text)
    ADD ESP,0x4                         ; 004a49fd
    MOV EDX,dword ptr [ESP + 0x148]     ; 004a4a00
    MOV ECX,dword ptr [ESP + 0x12c]     ; 004a4a07
    DEC EDX                             ; 004a4a0e
    IMUL EDX,ECX                        ; 004a4a0f
    MOV ECX,dword ptr [ESP + 0x148]     ; 004a4a12
    IMUL ECX,EDI                        ; 004a4a19
    MOV EBX,dword ptr [ESP + 0x138]     ; 004a4a1c
    MOV dword ptr [ESP + 0x144],EAX     ; 004a4a23
    ADD EBX,EAX                         ; 004a4a2a
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a4a2c
    ADD ECX,EDX                         ; 004a4a33
    MOV EDX,dword ptr [EAX + 0x1d8]     ; 004a4a35
    MOV dword ptr [ESP + 0x140],ECX     ; 004a4a3b
    CMP EDX,0x2                         ; 004a4a42
    JNZ 0x004a4a4e                      ; 004a4a45
        ;   XREF to: 004a4a4e (CONDITIONAL_JUMP)  ; LAB_004a4a4e
    ADD EBX,dword ptr [ESP + 0x138]     ; 004a4a47
    MOV EAX,dword ptr [ESP + 0x140]     ; 004a4a4e
        ;   Label: LAB_004a4a4e
    CMP EBP,EAX                         ; 004a4a55
    JGE 0x004a4a5b                      ; 004a4a57
        ;   XREF to: 004a4a5b (CONDITIONAL_JUMP)  ; LAB_004a4a5b
    MOV EBP,EAX                         ; 004a4a59
    ADD ESI,EBX                         ; 004a4a5b
        ;   Label: LAB_004a4a5b
    MOV EDX,dword ptr [ESP + 0x16c]     ; 004a4a5d
        ;   Label: LAB_004a4a5d
    PUSH EDX                            ; 004a4a64
    MOV ECX,dword ptr [ESP + 0x16c]     ; 004a4a65
    PUSH ECX                            ; 004a4a6c
    PUSH ESI                            ; 004a4a6d
    PUSH EBP                            ; 004a4a6e
    MOV ESI,dword ptr [0x00678a60]      ; 004a4a6f | g_CEditorToolsPtr
    PUSH ESI                            ; 004a4a75 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890 ; 004a4a76
        ;   XREF to: 004a0890 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    MOV EAX,[0x02d02560]                ; 004a4a7b | g_ClipRight
    SUB EAX,dword ptr [0x02d02558]      ; 004a4a80 | g_ClipLeft
    LEA EBP,[EAX + 0x1]                 ; 004a4a86
    MOV EDX,dword ptr [0x02d0255c]      ; 004a4a89 | g_ClipTop
    MOV EAX,[0x02d02564]                ; 004a4a8f | g_ClipBottom
    SUB EAX,EDX                         ; 004a4a94
    ADD ESP,0x14                        ; 004a4a96
    LEA ESI,[EAX + 0x1]                 ; 004a4a99
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a4a9c
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a4aa3
    MOV ECX,dword ptr [EDX + 0x1d8]     ; 004a4aaa
    ADD EAX,0x1a4                       ; 004a4ab0
    CMP ECX,0x1                         ; 004a4ab5
    JNZ 0x004a4cf8                      ; 004a4ab8
        ;   XREF to: 004a4cf8 (CONDITIONAL_JUMP)  ; LAB_004a4cf8
    MOV ECX,dword ptr [ESP + 0x130]     ; 004a4abe
    MOV EDX,dword ptr [0x02d02564]      ; 004a4ac5 | g_ClipBottom
    SUB EBP,ECX                         ; 004a4acb
    SUB EDX,dword ptr [ESP + 0x144]     ; 004a4acd
    SUB EDX,dword ptr [ESP + 0x138]     ; 004a4ad4
    PUSH EDX                            ; 004a4adb
    MOV EDX,dword ptr [0x02d02560]      ; 004a4adc | g_ClipRight
    PUSH EDX                            ; 004a4ae2
    MOV ECX,dword ptr [0x02d0255c]      ; 004a4ae3 | g_ClipTop
    PUSH ECX                            ; 004a4ae9
    SUB EDX,dword ptr [ESP + 0x13c]     ; 004a4aea
    INC EDX                             ; 004a4af1
    PUSH EDX                            ; 004a4af2
        ;   Label: LAB_004a4af2
    PUSH EAX                            ; 004a4af3
    CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60 ; 004a4af4
        ;   XREF to: 004a5b60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60(CEdScrollBar * this_ptr, int left_pos, int top_pos, int right_pos, ...)
    ADD ESP,0x14                        ; 004a4af9
    CMP dword ptr [ESP + 0x148],0x0     ; 004a4afc
        ;   Label: LAB_004a4afc
    JLE 0x004a4bd7                      ; 004a4b04
        ;   XREF to: 004a4bd7 (CONDITIONAL_JUMP)  ; LAB_004a4bd7
    MOV EDX,dword ptr [ESP + 0x144]     ; 004a4b0a
    MOV EAX,[0x02d02564]                ; 004a4b11 | g_ClipBottom
    SUB EAX,EDX                         ; 004a4b16
    INC EAX                             ; 004a4b18
    MOV dword ptr [ESP + 0x13c],EAX     ; 004a4b19
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a4b20
    CMP byte ptr [EAX + 0x44],0x0       ; 004a4b27
    JZ 0x004a4b7a                       ; 004a4b2b
        ;   XREF to: 004a4b7a (CONDITIONAL_JUMP)  ; LAB_004a4b7a
    MOV ECX,dword ptr [ESP + 0x140]     ; 004a4b2d
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a4b34
    MOV EAX,[0x02d02560]                ; 004a4b3b | g_ClipRight
    ADD EDX,0x44                        ; 004a4b40
    INC EAX                             ; 004a4b43
    PUSH EDX                            ; 004a4b44
    SUB EAX,ECX                         ; 004a4b45
    MOV EDX,dword ptr [ESP + 0x140]     ; 004a4b47
    ADD EDX,dword ptr [ESP + 0x148]     ; 004a4b4e
    DEC EDX                             ; 004a4b55
    PUSH EDX                            ; 004a4b56
    LEA EDX,[EAX + EDI*0x1 + -0x1]      ; 004a4b57
    PUSH EDX                            ; 004a4b5b
    MOV EDX,dword ptr [ESP + 0x148]     ; 004a4b5c
    PUSH EDX                            ; 004a4b63
    PUSH EAX                            ; 004a4b64
    MOV EAX,dword ptr [ESP + 0x178]     ; 004a4b65
    ADD EAX,0x1dc                       ; 004a4b6c
    PUSH EAX                            ; 004a4b71
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590 ; 004a4b72
        ;   XREF to: 004a6590 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 004a4b77
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a4b7a
        ;   Label: LAB_004a4b7a
    CMP byte ptr [EAX + 0xa8],0x0       ; 004a4b81
    JZ 0x004a4bd5                       ; 004a4b88
        ;   XREF to: 004a4bd5 (CONDITIONAL_JUMP)  ; LAB_004a4bd5
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a4b8a
    ADD EDX,0xa8                        ; 004a4b91
    MOV ECX,dword ptr [ESP + 0x144]     ; 004a4b97
    PUSH EDX                            ; 004a4b9e
    MOV EDX,dword ptr [ESP + 0x140]     ; 004a4b9f
    MOV EAX,[0x02d02560]                ; 004a4ba6 | g_ClipRight
    ADD EDX,ECX                         ; 004a4bab
    INC EAX                             ; 004a4bad
    DEC EDX                             ; 004a4bae
    SUB EAX,EDI                         ; 004a4baf
    PUSH EDX                            ; 004a4bb1
    LEA EDX,[EAX + EDI*0x1 + -0x1]      ; 004a4bb2
    PUSH EDX                            ; 004a4bb6
    MOV EDI,dword ptr [ESP + 0x148]     ; 004a4bb7
    PUSH EDI                            ; 004a4bbe
    PUSH EAX                            ; 004a4bbf
    MOV EAX,dword ptr [ESP + 0x178]     ; 004a4bc0
    ADD EAX,0x2c0                       ; 004a4bc7
    PUSH EAX                            ; 004a4bcc
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590 ; 004a4bcd
        ;   XREF to: 004a6590 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 004a4bd2
    SUB ESI,EBX                         ; 004a4bd5
        ;   Label: LAB_004a4bd5
    MOV ECX,dword ptr [ESP + 0x164]     ; 004a4bd7
        ;   Label: LAB_004a4bd7
    MOV EDX,ESI                         ; 004a4bde
    MOV EAX,ESI                         ; 004a4be0
    SAR EDX,0x1f                        ; 004a4be2
    MOV ECX,dword ptr [ECX + 0x174]     ; 004a4be5
    IDIV ECX                            ; 004a4beb
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a4bed
    MOV ECX,dword ptr [EDX + 0x18c]     ; 004a4bf4
    MOV dword ptr [EDX + 0x188],EAX     ; 004a4bfa
    MOV EDX,EBP                         ; 004a4c00
    MOV EAX,EBP                         ; 004a4c02
    SAR EDX,0x1f                        ; 004a4c04
    IDIV ECX                            ; 004a4c07
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a4c09
    MOV dword ptr [EDX + 0x190],EAX     ; 004a4c10
    MOV ECX,dword ptr [EDX + 0x188]     ; 004a4c16
    MOV EAX,dword ptr [EDX]             ; 004a4c1c
    ADD EAX,ECX                         ; 004a4c1e
    LEA EDX,[EAX + -0x1]                ; 004a4c20
    MOV ECX,dword ptr [ESP + 0x164]     ; 004a4c23
    MOV EAX,EDX                         ; 004a4c2a
    MOV EBX,dword ptr [ECX + 0x188]     ; 004a4c2c
    SAR EDX,0x1f                        ; 004a4c32
    IDIV EBX                            ; 004a4c35
    CMP EAX,dword ptr [ECX + 0x190]     ; 004a4c37
    JGE 0x004a4c45                      ; 004a4c3d
        ;   XREF to: 004a4c45 (CONDITIONAL_JUMP)  ; LAB_004a4c45
    MOV dword ptr [ECX + 0x190],EAX     ; 004a4c3f
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a4c45
        ;   Label: LAB_004a4c45
    CMP dword ptr [EAX + 0x190],0x1     ; 004a4c4c
    JGE 0x004a4c5f                      ; 004a4c53
        ;   XREF to: 004a4c5f (CONDITIONAL_JUMP)  ; LAB_004a4c5f
    MOV dword ptr [EAX + 0x190],0x1     ; 004a4c55
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a4c5f
        ;   Label: LAB_004a4c5f
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a4c66
    MOV EAX,dword ptr [EAX + 0x188]     ; 004a4c6d
    IMUL EAX,dword ptr [EDX + 0x190]    ; 004a4c73
    MOV ECX,dword ptr [EDX + 0x190]     ; 004a4c7a
    MOV dword ptr [EDX + 0x184],EAX     ; 004a4c80
    MOV EDX,EBP                         ; 004a4c86
    MOV EAX,EBP                         ; 004a4c88
    SAR EDX,0x1f                        ; 004a4c8a
    IDIV ECX                            ; 004a4c8d
    MOV EDX,dword ptr [ESP + 0x164]     ; 004a4c8f
    MOV dword ptr [EDX + 0x180],0x0     ; 004a4c96
    MOV dword ptr [EDX + 0x18c],EAX     ; 004a4ca0
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004a4ca6
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a4cab
    MOV EBX,0xffffffff                  ; 004a4cb2
    MOV byte ptr [EAX + 0x10c],0x0      ; 004a4cb7
    MOV dword ptr [0x02cf2afc],EBX      ; 004a4cbe | g_LastClickItemIndex
    MOV dword ptr [EAX + 0x170],0x0     ; 004a4cc4
    ADD ESP,0x150                       ; 004a4cce
    POP EBP                             ; 004a4cd4
    POP EDI                             ; 004a4cd5
    POP ESI                             ; 004a4cd6
    POP EBX                             ; 004a4cd7
    RET                                 ; 004a4cd8
    MOV dword ptr [EDX + 0x1d8],0x1     ; 004a4cd9
        ;   Label: LAB_004a4cd9
    JMP 0x004a48d6                      ; 004a4ce3
        ;   XREF to: 004a48d6 (UNCONDITIONAL_JUMP)  ; LAB_004a48d6
    CMP EDI,0x2                         ; 004a4ce8
        ;   Label: LAB_004a4ce8
    JNZ 0x004a4938                      ; 004a4ceb
        ;   XREF to: 004a4938 (CONDITIONAL_JUMP)  ; LAB_004a4938
    ADD ESI,EAX                         ; 004a4cf1
    JMP 0x004a4938                      ; 004a4cf3
        ;   XREF to: 004a4938 (UNCONDITIONAL_JUMP)  ; LAB_004a4938
    CMP ECX,0x2                         ; 004a4cf8
        ;   Label: LAB_004a4cf8
    JNZ 0x004a4afc                      ; 004a4cfb
        ;   XREF to: 004a4afc (CONDITIONAL_JUMP)  ; LAB_004a4afc
    SUB ESI,dword ptr [ESP + 0x134]     ; 004a4d01
    MOV EDX,dword ptr [0x02d02564]      ; 004a4d08 | g_ClipBottom
    SUB EDX,EBX                         ; 004a4d0e
    PUSH EDX                            ; 004a4d10
    MOV ECX,dword ptr [0x02d02560]      ; 004a4d11 | g_ClipRight
    MOV EDX,dword ptr [0x02d02564]      ; 004a4d17 | g_ClipBottom
    PUSH ECX                            ; 004a4d1d
    SUB EDX,dword ptr [ESP + 0x13c]     ; 004a4d1e
    SUB EDX,EBX                         ; 004a4d25
    INC EDX                             ; 004a4d27
    PUSH EDX                            ; 004a4d28
    MOV EDX,dword ptr [0x02d02558]      ; 004a4d29 | g_ClipLeft
    JMP 0x004a4af2                      ; 004a4d2f
        ;   XREF to: 004a4af2 (UNCONDITIONAL_JUMP)  ; LAB_004a4af2


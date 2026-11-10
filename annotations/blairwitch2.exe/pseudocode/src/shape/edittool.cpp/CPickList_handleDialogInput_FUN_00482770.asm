; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CPickList_handleDialogInput_FUN_00482770(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b6696
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250 at 004822d6
;
; Referenced Globals:
;   undefined4 DAT_005d28f7
;   undefined4 DAT_01c26408
;   undefined4 DAT_01c2640c
;   undefined4 DAT_01c26410
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;   undefined4 DAT_01c2a384
;
; Called Functions:
;   shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00484900
;   shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_00483950
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0
;   shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004837f0
;   wincore_winrun.cpp_getTime_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482770
        ;   Label: shape_edittool.cpp_CPickList_handleDialogInput_FUN_00482770
    PUSH ESI                            ; 00482771
    PUSH EDI                            ; 00482772
    PUSH EBP                            ; 00482773
    MOV EBP,ESP                         ; 00482774
    SUB ESP,0x4                         ; 00482776
    AND ESP,0xfffffff8                  ; 00482779
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048277c
    PUSH EBX                            ; 0048277f
    CALL shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004837f0 ; 00482780
        ;   XREF to: 004837f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004837f0(CPickList * this_ptr)
    MOV EDX,dword ptr [EBX + 0x188]     ; 00482785
    ADD ESP,0x4                         ; 0048278b
    TEST EDX,EDX                        ; 0048278e
    JZ 0x004827b0                       ; 00482790
        ;   XREF to: 004827b0 (CONDITIONAL_JUMP)  ; LAB_004827b0
    MOV ECX,dword ptr [EBX + 0x194]     ; 00482792
    PUSH ECX                            ; 00482798
    PUSH EBX                            ; 00482799
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0 ; 0048279a
        ;   XREF to: 00483aa0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 0048279f
    TEST EAX,EAX                        ; 004827a2
    JNZ 0x00482950                      ; 004827a4
        ;   XREF to: 00482950 (CONDITIONAL_JUMP)  ; LAB_00482950
    MOV dword ptr [EBX + 0x188],EAX     ; 004827aa
    PUSH EBX                            ; 004827b0
        ;   Label: LAB_004827b0
    MOV EAX,dword ptr [EBX + 0xc]       ; 004827b1
    CALL dword ptr [EAX + 0x18]         ; 004827b4
    ADD ESP,0x4                         ; 004827b7
    TEST EAX,EAX                        ; 004827ba
    JL 0x0048295d                       ; 004827bc
        ;   XREF to: 0048295d (CONDITIONAL_JUMP)  ; LAB_0048295d
    PUSH EBX                            ; 004827c2
    CALL shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004837f0 ; 004827c3
        ;   XREF to: 004837f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004837f0(CPickList * this_ptr)
    MOV ESI,dword ptr [EBX + 0x58]      ; 004827c8
    ADD ESP,0x4                         ; 004827cb
    TEST ESI,ESI                        ; 004827ce
    JNZ 0x00482944                      ; 004827d0
        ;   XREF to: 00482944 (CONDITIONAL_JUMP)  ; LAB_00482944
    MOV EDI,dword ptr [EBX + 0x1f0]     ; 004827d6
    LEA ECX,[EBX + 0x1bc]               ; 004827dc
    CMP EDI,0x1                         ; 004827e2
    JNZ 0x00482969                      ; 004827e5
        ;   XREF to: 00482969 (CONDITIONAL_JUMP)  ; LAB_00482969
    MOV EAX,dword ptr [EBX + 0x198]     ; 004827eb
    MOV dword ptr [EBX + 0x1bc],EAX     ; 004827f1
    MOV EAX,dword ptr [EBX]             ; 004827f7
    MOV dword ptr [EBX + 0x1c0],EAX     ; 004827f9
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 004827ff
    PUSH ECX                            ; 00482805
    MOV dword ptr [EBX + 0x1c4],EAX     ; 00482806
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00484900 ; 0048280c
        ;   XREF to: 00484900 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00484900(CEdScrollBar * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1bc]     ; 00482811
    ADD ESP,0x4                         ; 00482817
        ;   Label: LAB_00482817
    MOV dword ptr [EBX + 0x198],EAX     ; 0048281a
    MOV ECX,dword ptr [EBX + 0x1a8]     ; 00482820
        ;   Label: LAB_00482820
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 00482826
    IMUL EAX,ECX                        ; 0048282c
    MOV ESI,dword ptr [EBX + 0x198]     ; 0048282f
    MOV EDI,dword ptr [EBX + 0x194]     ; 00482835
    ADD EAX,ESI                         ; 0048283b
    CMP EAX,EDI                         ; 0048283d
    JG 0x00482848                       ; 0048283f
        ;   XREF to: 00482848 (CONDITIONAL_JUMP)  ; LAB_00482848
    DEC EAX                             ; 00482841
    MOV dword ptr [EBX + 0x194],EAX     ; 00482842
    MOV EDX,dword ptr [EBX + 0x198]     ; 00482848
        ;   Label: LAB_00482848
    CMP EDX,dword ptr [EBX + 0x194]     ; 0048284e
    JLE 0x0048285c                      ; 00482854
        ;   XREF to: 0048285c (CONDITIONAL_JUMP)  ; LAB_0048285c
    MOV dword ptr [EBX + 0x194],EDX     ; 00482856
    CMP byte ptr [EBX + 0x5c],0x0       ; 0048285c
        ;   Label: LAB_0048285c
    JZ 0x00482899                       ; 00482860
        ;   XREF to: 00482899 (CONDITIONAL_JUMP)  ; LAB_00482899
    LEA EAX,[EBX + 0x1f4]               ; 00482862
    PUSH EAX                            ; 00482868
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240 ; 00482869
        ;   XREF to: 00485240 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0048286e
    TEST EAX,EAX                        ; 00482871
    JZ 0x0048287f                       ; 00482873
        ;   XREF to: 0048287f (CONDITIONAL_JUMP)  ; LAB_0048287f
    MOV dword ptr [EBX + 0x188],0x1     ; 00482875
    MOV ECX,dword ptr [0x01c26410]      ; 0048287f | DAT_01c26410
        ;   Label: LAB_0048287f
    LEA EAX,[EBX + 0x1f4]               ; 00482885
    CMP EAX,ECX                         ; 0048288b
    JNZ 0x00482899                      ; 0048288d
        ;   XREF to: 00482899 (CONDITIONAL_JUMP)  ; LAB_00482899
    MOV dword ptr [EBX + 0x3bc],0x0     ; 0048288f
    CMP byte ptr [EBX + 0xc0],0x0       ; 00482899
        ;   Label: LAB_00482899
    JNZ 0x004829c9                      ; 004828a0
        ;   XREF to: 004829c9 (CONDITIONAL_JUMP)  ; LAB_004829c9
    TEST byte ptr [0x01c2a384],0x1      ; 004828a6 | DAT_01c2a384
        ;   Label: LAB_004828a6
    JZ 0x00482944                       ; 004828ad
        ;   XREF to: 00482944 (CONDITIONAL_JUMP)  ; LAB_00482944
    CMP dword ptr [0x01c26410],0x0      ; 004828b3 | DAT_01c26410
    JNZ 0x00482944                      ; 004828ba
        ;   XREF to: 00482944 (CONDITIONAL_JUMP)  ; LAB_00482944
    MOV EDX,dword ptr [0x01c2a380]      ; 004828c0 | DAT_01c2a380
    PUSH EDX                            ; 004828c6
    MOV ECX,dword ptr [0x01c2a37c]      ; 004828c7 | DAT_01c2a37c
    PUSH ECX                            ; 004828cd
    PUSH EBX                            ; 004828ce
    CALL shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_00483950 ; 004828cf
        ;   XREF to: 00483950 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_00483950(CPickList * this_ptr, int mouse_x, int mouse_y)
    ADD ESP,0xc                         ; 004828d4
    MOV ESI,EAX                         ; 004828d7
    TEST EAX,EAX                        ; 004828d9
    JL 0x0048293e                       ; 004828db
        ;   XREF to: 0048293e (CONDITIONAL_JUMP)  ; LAB_0048293e
    MOV CL,byte ptr [0x01c2a384]        ; 004828dd | DAT_01c2a384
    MOV dword ptr [EBX + 0x3bc],0xffffffff ; 004828e3
    AND CL,0xfe                         ; 004828ed
    MOV dword ptr [EBX + 0x194],EAX     ; 004828f0
    MOV byte ptr [0x01c2a384],CL        ; 004828f6 | DAT_01c2a384
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004828fc
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV EDI,dword ptr [0x01c26408]      ; 00482901 | DAT_01c26408
    MOV EDX,EAX                         ; 00482907
    SUB EAX,EDI                         ; 00482909
    TEST EAX,EAX                        ; 0048290b
    JLE 0x00482938                      ; 0048290d
        ;   XREF to: 00482938 (CONDITIONAL_JUMP)  ; LAB_00482938
    MOV dword ptr [ESP],EAX             ; 0048290f
    FILD dword ptr [ESP]                ; 00482912
    FCOMP double ptr [0x005d28f7]       ; 00482915 | DAT_005d28f7
    FNSTSW AX                           ; 0048291b
    SAHF                                ; 0048291d
    JNC 0x00482938                      ; 0048291e
        ;   XREF to: 00482938 (CONDITIONAL_JUMP)  ; LAB_00482938
    MOV ECX,dword ptr [0x01c2640c]      ; 00482920 | DAT_01c2640c
    CMP ECX,dword ptr [EBX + 0x194]     ; 00482926
    JNZ 0x00482938                      ; 0048292c
        ;   XREF to: 00482938 (CONDITIONAL_JUMP)  ; LAB_00482938
    MOV dword ptr [EBX + 0x188],0x1     ; 0048292e
    MOV dword ptr [0x01c26408],EDX      ; 00482938 | DAT_01c26408
        ;   Label: LAB_00482938
    MOV dword ptr [0x01c2640c],ESI      ; 0048293e | DAT_01c2640c
        ;   Label: LAB_0048293e
    MOV EAX,0xfffffffe                  ; 00482944
        ;   Label: LAB_00482944
    MOV ESP,EBP                         ; 00482949
    POP EBP                             ; 0048294b
    POP EDI                             ; 0048294c
    POP ESI                             ; 0048294d
    POP EBX                             ; 0048294e
    RET                                 ; 0048294f
    MOV EAX,dword ptr [EBX + 0x194]     ; 00482950
        ;   Label: LAB_00482950
    MOV ESP,EBP                         ; 00482956
    POP EBP                             ; 00482958
    POP EDI                             ; 00482959
    POP ESI                             ; 0048295a
    POP EBX                             ; 0048295b
    RET                                 ; 0048295c
    MOV EAX,0xffffffff                  ; 0048295d
        ;   Label: LAB_0048295d
    MOV ESP,EBP                         ; 00482962
    POP EBP                             ; 00482964
    POP EDI                             ; 00482965
    POP ESI                             ; 00482966
    POP EBX                             ; 00482967
    RET                                 ; 00482968
    CMP EDI,0x2                         ; 00482969
        ;   Label: LAB_00482969
    JNZ 0x00482820                      ; 0048296c
        ;   XREF to: 00482820 (CONDITIONAL_JUMP)  ; LAB_00482820
    MOV EDX,dword ptr [EBX + 0x198]     ; 00482972
    MOV ESI,dword ptr [EBX + 0x1a0]     ; 00482978
    MOV EAX,EDX                         ; 0048297e
    SAR EDX,0x1f                        ; 00482980
    IDIV ESI                            ; 00482983
    MOV dword ptr [EBX + 0x1bc],EAX     ; 00482985
    MOV EDI,dword ptr [EBX + 0x1a0]     ; 0048298b
    MOV EAX,dword ptr [EBX]             ; 00482991
    ADD EAX,EDI                         ; 00482993
    LEA EDX,[EAX + -0x1]                ; 00482995
    MOV EAX,EDX                         ; 00482998
    SAR EDX,0x1f                        ; 0048299a
    IDIV EDI                            ; 0048299d
    MOV dword ptr [EBX + 0x1c0],EAX     ; 0048299f
    MOV EAX,dword ptr [EBX + 0x1a8]     ; 004829a5
    PUSH ECX                            ; 004829ab
    MOV dword ptr [EBX + 0x1c4],EAX     ; 004829ac
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00484900 ; 004829b2
        ;   XREF to: 00484900 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00484900(CEdScrollBar * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1bc]     ; 004829b7
    IMUL EAX,dword ptr [EBX + 0x1a0]    ; 004829bd
    JMP 0x00482817                      ; 004829c4
        ;   XREF to: 00482817 (UNCONDITIONAL_JUMP)  ; LAB_00482817
    LEA ESI,[EBX + 0x2d8]               ; 004829c9
        ;   Label: LAB_004829c9
    PUSH ESI                            ; 004829cf
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240 ; 004829d0
        ;   XREF to: 00485240 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 004829d5
    TEST EAX,EAX                        ; 004829d8
    JNZ 0x0048295d                      ; 004829da
        ;   XREF to: 0048295d (CONDITIONAL_JUMP)  ; LAB_0048295d
    CMP ESI,dword ptr [0x01c26410]      ; 004829dc | DAT_01c26410
    JNZ 0x004828a6                      ; 004829e2
        ;   XREF to: 004828a6 (CONDITIONAL_JUMP)  ; LAB_004828a6
    MOV dword ptr [EBX + 0x3bc],0x1     ; 004829e8
    JMP 0x004828a6                      ; 004829f2
        ;   XREF to: 004828a6 (UNCONDITIONAL_JUMP)  ; LAB_004828a6


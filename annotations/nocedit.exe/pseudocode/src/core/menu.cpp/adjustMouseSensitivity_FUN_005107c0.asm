; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_menu.cpp_adjustMouseSensitivity_FUN_005107c0(int * sensitivity_value_ptr, char * window_title)
;
; Parameters:
; int *            Stack[0x4]:4   sensitivity_value_ptr
; char *           Stack[0x8]:4   window_title
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_menu.cpp_configureCustomKeys_FUN_00511890 at 00511da1
;
; Referenced Globals:
;   TerminatedCString s_s_4_2f_00636649
;   double g_MouseSensitivityScale = 0.0000152587890625
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   int g_WindowWidth = 0x140
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CBitFont* g_EditorFont
;   CEditorTools g_CEditorToolsPtr
;   int g_MouseX
;   int g_MouseY
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   void* g_CKeysPtr
;
; Called Functions:
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_2d.c_fillRectWithBorder_FUN_00403200
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_winrun.cpp_setCursorPosition_FUN_005f30d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005107c0
        ;   Label: core_menu.cpp_adjustMouseSensitivity_FUN_005107c0
    PUSH ESI                            ; 005107c1
    PUSH EDI                            ; 005107c2
    PUSH EBP                            ; 005107c3
    MOV EBP,ESP                         ; 005107c4
    SUB ESP,0x10                        ; 005107c6
    AND ESP,0xfffffff8                  ; 005107c9
    PUSH 0x0                            ; 005107cc
    MOV EDX,dword ptr [EBP + 0x18]      ; 005107ce
    PUSH EDX                            ; 005107d1
    MOV EDX,dword ptr [0x00679394]      ; 005107d2 | int g_WindowWidth
    LEA EAX,[EDX*0x4 + 0x0]             ; 005107d8
    SUB EAX,EDX                         ; 005107df
    MOV EDX,EAX                         ; 005107e1
    SAR EDX,0x1f                        ; 005107e3
    SHL EDX,0x2                         ; 005107e6
    SBB EAX,EDX                         ; 005107e9
    SAR EAX,0x2                         ; 005107eb
    PUSH 0x2c                           ; 005107ee
    PUSH EAX                            ; 005107f0
    MOV ECX,dword ptr [0x00678a60]      ; 005107f1 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 005107f7 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890 ; 005107f8 | void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
        ;   XREF to: 004a0890 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005107fd
    MOV EAX,dword ptr [EBP + 0x14]      ; 00510800
    MOV EBX,dword ptr [EAX]             ; 00510803
    CMP EBX,0x4000                      ; 00510805
    JL 0x00510a0b                       ; 0051080b | LAB_00510a0b
        ;   XREF to: 00510a0b (CONDITIONAL_JUMP)
    CMP EBX,0x40000                     ; 00510811
    JLE 0x00510a16                      ; 00510817 | LAB_00510a16
        ;   XREF to: 00510a16 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX],0x40000         ; 0051081d
        ;   Label: LAB_0051081d
    MOV ESI,dword ptr [EBP + 0x14]      ; 00510823
        ;   Label: LAB_00510823
    MOV EBX,0x3c000                     ; 00510826
    MOV ESI,dword ptr [ESI]             ; 0051082b
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0051082d | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x02cf6a90]      ; 00510832 | int g_MouseY
    MOV EAX,[0x00679394]                ; 00510838 | int g_WindowWidth
    PUSH ECX                            ; 0051083d
    LEA EDX,[ESI + 0xffffc000]          ; 0051083e
    DEC EAX                             ; 00510844
    IMUL EDX                            ; 00510845
    IDIV EBX                            ; 00510847
    PUSH EAX                            ; 00510849
    CALL wincore_winrun.cpp_setCursorPosition_FUN_005f30d0 ; 0051084a | void wincore_winrun.cpp_setCursorPosition_FUN_005f30d0(int x, int y)
        ;   XREF to: 005f30d0 (UNCONDITIONAL_CALL)
    XOR EBX,EBX                         ; 0051084f
    ADD ESP,0x8                         ; 00510851
    MOV dword ptr [ESP + 0x8],EBX       ; 00510854
    MOV EDI,dword ptr [0x00678a60]      ; 00510858 | CEditorTools * g_CEditorToolsPtr
        ;   Label: LAB_00510858
    PUSH EDI                            ; 0051085e | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 ; 0051085f | void shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(CEditorTools * this_ptr)
        ;   XREF to: 004a0f80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510864
    MOV EDX,dword ptr [0x02cf6a8c]      ; 00510867 | int g_MouseX
    CMP EDX,dword ptr [ESP + 0x8]       ; 0051086d
    JZ 0x00510894                       ; 00510871 | LAB_00510894
        ;   XREF to: 00510894 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x00679394]      ; 00510873 | int g_WindowWidth
    MOV EAX,EDX                         ; 00510879
    MOV EDX,0x3c000                     ; 0051087b
    DEC EBX                             ; 00510880
    IMUL EDX                            ; 00510881
    IDIV EBX                            ; 00510883
    LEA ESI,[EAX + 0x4000]              ; 00510885
    MOV EAX,[0x02cf6a8c]                ; 0051088b | int g_MouseX
    MOV dword ptr [ESP + 0x8],EAX       ; 00510890
    PUSH 0x4b                           ; 00510894
        ;   Label: LAB_00510894
    MOV EAX,[0x0067cf44]                ; 00510896 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 0051089b | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 0051089c | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 0051089e
    ADD ESP,0x8                         ; 005108a1
    TEST EAX,EAX                        ; 005108a4
    JZ 0x005108ae                       ; 005108a6 | LAB_005108ae
        ;   XREF to: 005108ae (CONDITIONAL_JUMP)
    SUB ESI,0x2bc                       ; 005108a8
    PUSH 0x4d                           ; 005108ae
        ;   Label: LAB_005108ae
    MOV EAX,[0x0067cf44]                ; 005108b0 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 005108b5 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005108b6 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 005108b8
    ADD ESP,0x8                         ; 005108bb
    TEST EAX,EAX                        ; 005108be
    JZ 0x005108c8                       ; 005108c0 | LAB_005108c8
        ;   XREF to: 005108c8 (CONDITIONAL_JUMP)
    ADD ESI,0x2bc                       ; 005108c2
    CMP ESI,0x4000                      ; 005108c8
        ;   Label: LAB_005108c8
    JGE 0x00510a3a                      ; 005108ce | LAB_00510a3a
        ;   XREF to: 00510a3a (CONDITIONAL_JUMP)
    MOV ESI,0x4000                      ; 005108d4
    MOV EAX,[0x02d0255c]                ; 005108d9 | int g_ClipTop
        ;   Label: LAB_005108d9
    INC EAX                             ; 005108de
    PUSH 0xff                           ; 005108df
    MOV dword ptr [ESP + 0x4],EAX       ; 005108e4
    MOV EAX,[0x02d02564]                ; 005108e8 | int g_ClipBottom
    PUSH 0x0                            ; 005108ed
    DEC EAX                             ; 005108ef
    MOV EBX,dword ptr [0x02d02560]      ; 005108f0 | int g_ClipRight
    PUSH EAX                            ; 005108f6
    DEC EBX                             ; 005108f7
    MOV dword ptr [ESP + 0x10],EAX      ; 005108f8
    PUSH EBX                            ; 005108fc
    MOV EAX,dword ptr [ESP + 0x10]      ; 005108fd
    MOV EDI,dword ptr [0x02d02558]      ; 00510901 | int g_ClipLeft
    PUSH EAX                            ; 00510907
    INC EDI                             ; 00510908
    PUSH EDI                            ; 00510909
    CALL engine_2d.c_fillRectWithBorder_FUN_00403200 ; 0051090a | void engine_2d.c_fillRectWithBorder_FUN_00403200(int x1, int y1, int x2, int y2, ...)
        ;   XREF to: 00403200 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0051090f
    LEA EDX,[ESI + 0xffffc000]          ; 00510912
    MOV EAX,EBX                         ; 00510918
    MOV EBX,0x3c000                     ; 0051091a
    SUB EAX,EDI                         ; 0051091f
    IMUL EDX                            ; 00510921
    IDIV EBX                            ; 00510923
    PUSH 0x4                            ; 00510925
    MOV EDX,dword ptr [ESP + 0x8]       ; 00510927
    PUSH EDX                            ; 0051092b
    ADD EAX,EDI                         ; 0051092c
    PUSH EAX                            ; 0051092e
    MOV ECX,dword ptr [ESP + 0xc]       ; 0051092f
    PUSH ECX                            ; 00510933
    PUSH EDI                            ; 00510934
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 00510935 | void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0051093a
    MOV dword ptr [ESP + 0xc],ESI       ; 0051093d
    FILD dword ptr [ESP + 0xc]          ; 00510941
    FMUL double ptr [0x0063664f]        ; 00510945 | double g_MouseSensitivityScale
    SUB ESP,0x8                         ; 0051094b
    FSTP double ptr [ESP]               ; 0051094e
    PUSH 0x636649                       ; 00510951 | = "%4.2f" | s_s_4_2f_00636649 = %4.2f
    PUSH 0x0                            ; 00510956
    PUSH 0xff                           ; 00510958
    MOV EDX,dword ptr [0x02d0255c]      ; 0051095d | int g_ClipTop
    PUSH 0x41                           ; 00510963
    MOV EDI,dword ptr [0x02cf1cd0]      ; 00510965 | CBitFont * g_EditorFont
    MOV EBX,dword ptr [0x02d02564]      ; 0051096b | int g_ClipBottom
    PUSH EDI                            ; 00510971
    ADD EBX,EDX                         ; 00510972
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 00510974 | int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
    MOV EDX,EBX                         ; 00510979
    SUB EDX,EAX                         ; 0051097b
    MOV EAX,EDX                         ; 0051097d
    SAR EDX,0x1f                        ; 0051097f
    SUB EAX,EDX                         ; 00510982
    SAR EAX,0x1                         ; 00510984
    ADD ESP,0x8                         ; 00510986
    PUSH EAX                            ; 00510989
    MOV EAX,[0x02d02560]                ; 0051098a | int g_ClipRight
    PUSH EAX                            ; 0051098f
    MOV EDX,dword ptr [0x02d02558]      ; 00510990 | int g_ClipLeft
    PUSH EDX                            ; 00510996
    MOV ECX,dword ptr [0x02cf1cd0]      ; 00510997 | CBitFont * g_EditorFont
    PUSH ECX                            ; 0051099d
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30 ; 0051099e | int engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30(CBitFont * this_ptr, int left_x, int right_x, int y_pos, ...)
        ;   XREF to: 004cdf30 (UNCONDITIONAL_CALL)
    ADD ESP,0x24                        ; 005109a3
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005109a6 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    PUSH 0x1                            ; 005109ab
    MOV EAX,[0x0067cf44]                ; 005109ad | CKeys * g_CKeysPtr
    PUSH EAX                            ; 005109b2 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005109b3 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 005109b5
    ADD ESP,0x8                         ; 005109b8
    TEST EAX,EAX                        ; 005109bb
    JNZ 0x005109f5                      ; 005109bd | LAB_005109f5
        ;   XREF to: 005109f5 (CONDITIONAL_JUMP)
    PUSH 0x1c                           ; 005109bf
    MOV EDX,dword ptr [0x0067cf44]      ; 005109c1 | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH EDX                            ; 005109c7 | void * g_CKeysPtr
    MOV EAX,dword ptr [EDX]             ; 005109c8 | void * g_CKeysPtr
    CALL dword ptr [EAX + 0x4]          ; 005109ca
    ADD ESP,0x8                         ; 005109cd
    TEST EAX,EAX                        ; 005109d0
    JNZ 0x005109f0                      ; 005109d2 | LAB_005109f0
        ;   XREF to: 005109f0 (CONDITIONAL_JUMP)
    PUSH 0x200                          ; 005109d4
    MOV EDX,dword ptr [0x0067cf44]      ; 005109d9 | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH EDX                            ; 005109df | void * g_CKeysPtr
    MOV EAX,dword ptr [EDX]             ; 005109e0 | void * g_CKeysPtr
    CALL dword ptr [EAX + 0x4]          ; 005109e2
    ADD ESP,0x8                         ; 005109e5
    TEST EAX,EAX                        ; 005109e8
    JZ 0x00510858                       ; 005109ea | LAB_00510858
        ;   XREF to: 00510858 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005109f0
        ;   Label: LAB_005109f0
    MOV dword ptr [EAX],ESI             ; 005109f3
    MOV EBX,dword ptr [0x00678a60]      ; 005109f5 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
        ;   Label: LAB_005109f5
    PUSH EBX                            ; 005109fb | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 005109fc | void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510a01
    MOV ESP,EBP                         ; 00510a04
    POP EBP                             ; 00510a06
    POP EDI                             ; 00510a07
    POP ESI                             ; 00510a08
    POP EBX                             ; 00510a09
    RET                                 ; 00510a0a
    MOV dword ptr [EAX],0x4000          ; 00510a0b
        ;   Label: LAB_00510a0b
    JMP 0x00510823                      ; 00510a11 | LAB_00510823
        ;   XREF to: 00510823 (UNCONDITIONAL_JUMP)
    CMP EBX,0x4000                      ; 00510a16
        ;   Label: LAB_00510a16
    JGE 0x00510a29                      ; 00510a1c | LAB_00510a29
        ;   XREF to: 00510a29 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX],0x4000          ; 00510a1e
    JMP 0x00510823                      ; 00510a24 | LAB_00510823
        ;   XREF to: 00510823 (UNCONDITIONAL_JUMP)
    CMP EBX,0x40000                     ; 00510a29
        ;   Label: LAB_00510a29
    JLE 0x00510823                      ; 00510a2f | LAB_00510823
        ;   XREF to: 00510823 (CONDITIONAL_JUMP)
    JMP 0x0051081d                      ; 00510a35 | LAB_0051081d
        ;   XREF to: 0051081d (UNCONDITIONAL_JUMP)
    CMP ESI,0x40000                     ; 00510a3a
        ;   Label: LAB_00510a3a
    JLE 0x005108d9                      ; 00510a40 | LAB_005108d9
        ;   XREF to: 005108d9 (CONDITIONAL_JUMP)
    MOV ESI,0x40000                     ; 00510a46
    JMP 0x005108d9                      ; 00510a4b | LAB_005108d9
        ;   XREF to: 005108d9 (UNCONDITIONAL_JUMP)


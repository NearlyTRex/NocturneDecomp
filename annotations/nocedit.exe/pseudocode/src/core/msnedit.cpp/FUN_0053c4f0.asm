; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_msnedit_cpp_FUN_0053c4f0(void)
;
;
; XREF[1]:
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053972b
;
; Referenced Globals:
;   TerminatedCString s_Selected_s_0063c874
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   WatcomStaticDestructorNode DAT_0068064c
;   CEdButton* g_ActiveButton
;   int g_MouseX
;   int g_MouseY
;   int g_ActiveRenderColor
;   undefined4 DAT_02f797e4
;   int INT_02f797e8
;   int INT_02f797ec
;   int INT_02f797f0
;   undefined1 DAT_02f79818
;   undefined4 DAT_02f7a024
;   int INT_02f7a028
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e770
;   core_actor.cpp_CActorPropertyList_FUN_0040e850
;   core_actor.cpp_CActorPropertyList_FUN_0040e9c0
;   core_actor.cpp_FUN_0040e150
;   core_msnedit.cpp_FUN_00536e20
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdlib.c__atexit_FUN_005ff060
;   engine_2d.c_drawHLine_FUN_00402ee0
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_drawVLine_FUN_00402ff0
;   engine_matrix.c_popViewport_FUN_0050e480
;   engine_matrix.c_pushViewport_FUN_0050e320
;   shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40
;   shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c4f0
        ;   Label: core_msnedit.cpp_FUN_0053c4f0
    PUSH ESI                            ; 0053c4f1
    PUSH EBP                            ; 0053c4f2
    SUB ESP,0x130                       ; 0053c4f3
    MOV EBX,dword ptr [ESP + 0x140]     ; 0053c4f9
    PUSH 0x2f7a024                      ; 0053c500 | DAT_02f7a024
    CALL core_actor.cpp_FUN_0040e150    ; 0053c505
        ;   XREF to: 0040e150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040e150()
    MOV EDX,0xffffffff                  ; 0053c50a
    ADD ESP,0x4                         ; 0053c50f
    MOV ESI,dword ptr [EBX + 0x28]      ; 0053c512
    XOR ECX,ECX                         ; 0053c515
    MOV dword ptr [0x02f7c528],EDX      ; 0053c517 | DAT_02f7c528
    MOV dword ptr [0x02f7c538],ECX      ; 0053c51d | DAT_02f7c538
    TEST ESI,ESI                        ; 0053c523
    JNZ 0x0053c531                      ; 0053c525
        ;   XREF to: 0053c531 (CONDITIONAL_JUMP)  ; LAB_0053c531
    ADD ESP,0x130                       ; 0053c527
    POP EBP                             ; 0053c52d
    POP ESI                             ; 0053c52e
    POP EBX                             ; 0053c52f
    RET                                 ; 0053c530
    PUSH 0x2f7a024                      ; 0053c531 | DAT_02f7a024
        ;   Label: LAB_0053c531
    MOV EDX,dword ptr [ESI + 0x154]     ; 0053c536
    PUSH ESI                            ; 0053c53c
    CALL dword ptr [EDX + 0xd4]         ; 0053c53d
    MOV AH,byte ptr [0x02f79818]        ; 0053c543 | DAT_02f79818
    ADD ESP,0x8                         ; 0053c549
    TEST AH,0x1                         ; 0053c54c
    JZ 0x0053c6b7                       ; 0053c54f
        ;   XREF to: 0053c6b7 (CONDITIONAL_JUMP)  ; LAB_0053c6b7
    PUSH EDI                            ; 0053c555
        ;   Label: LAB_0053c555
    MOV EDI,dword ptr [EBX + 0x24]      ; 0053c556
    TEST EDI,EDI                        ; 0053c559
    JZ 0x0053c6e1                       ; 0053c55b
        ;   XREF to: 0053c6e1 (CONDITIONAL_JUMP)  ; LAB_0053c6e1
    MOV dword ptr [ESP + 0x130],0x141   ; 0053c561
    MOV EAX,[0x00679394]                ; 0053c56c | g_WindowWidth
    PUSH 0xf0                           ; 0053c571
    SUB EAX,0x14c                       ; 0053c576
    PUSH EAX                            ; 0053c57b
    XOR EDI,EDI                         ; 0053c57c
    PUSH EDI                            ; 0053c57e
    PUSH 0x141                          ; 0053c57f
    MOV EBX,dword ptr [0x00679394]      ; 0053c584 | g_WindowWidth
    CALL engine_matrix.c_pushViewport_FUN_0050e320 ; 0053c58a
        ;   XREF to: 0050e320 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pushViewport_FUN_0050e320(int x, int y, int width, int height)
    ADD ESP,0x10                        ; 0053c58f
    SUB EBX,0xc                         ; 0053c592
    PUSH EBX                            ; 0053c595
    PUSH EDI                            ; 0053c596
    PUSH 0x141                          ; 0053c597
    PUSH 0x2f7a024                      ; 0053c59c | DAT_02f7a024
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e770 ; 0053c5a1
        ;   XREF to: 0040e770 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CActorPropertyList_FUN_0040e770()
    ADD ESP,0x10                        ; 0053c5a6
    LEA EAX,[EBX + 0x1]                 ; 0053c5a9
    PUSH 0xee                           ; 0053c5ac
    LEA ESI,[EBX + 0xb]                 ; 0053c5b1
    PUSH ESI                            ; 0053c5b4
    PUSH 0x1                            ; 0053c5b5
    PUSH EAX                            ; 0053c5b7
    PUSH 0x2f797e4                      ; 0053c5b8 | DAT_02f797e4
    CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60 ; 0053c5bd
        ;   XREF to: 004a5b60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60(CEdScrollBar * this_ptr, int left_pos, int top_pos, int right_pos, ...)
    MOV EDX,0xf0                        ; 0053c5c2
    MOV EAX,[0x02f7c510]                ; 0053c5c7 | INT_02f7c510
    MOV dword ptr [0x02f797ec],EDX      ; 0053c5cc | INT_02f797ec
    MOV EDX,EAX                         ; 0053c5d2
    MOV ECX,dword ptr [0x02f7a028]      ; 0053c5d4 | INT_02f7a028
    SAR EDX,0x1f                        ; 0053c5da
    MOV [0x02f797e8],EAX                ; 0053c5dd | INT_02f797e8
    IDIV ECX                            ; 0053c5e2
    ADD ESP,0x14                        ; 0053c5e4
    PUSH 0x2f797e4                      ; 0053c5e7 | DAT_02f797e4
    MOV [0x02f797f0],EAX                ; 0053c5ec | INT_02f797f0
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 ; 0053c5f1
        ;   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 0053c5f6
    MOV EAX,[0x02f797e4]                ; 0053c5f9 | DAT_02f797e4
    PUSH EBX                            ; 0053c5fe
    NEG EAX                             ; 0053c5ff
    PUSH EAX                            ; 0053c601
    PUSH 0x141                          ; 0053c602
    PUSH 0x2f7a024                      ; 0053c607 | DAT_02f7a024
    MOV EBP,0xef                        ; 0053c60c
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e770 ; 0053c611
        ;   XREF to: 0040e770 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CActorPropertyList_FUN_0040e770()
    MOV EAX,[0x02cf2b00]                ; 0053c616 | g_ActiveButton
    ADD ESP,0x10                        ; 0053c61b
    TEST EAX,EAX                        ; 0053c61e
    JNZ 0x0053c656                      ; 0053c620
        ;   XREF to: 0053c656 (CONDITIONAL_JUMP)  ; LAB_0053c656
    MOV EDX,dword ptr [0x02cf6a8c]      ; 0053c622 | g_MouseX
    CMP EDX,0x141                       ; 0053c628
    JL 0x0053c656                       ; 0053c62e
        ;   XREF to: 0053c656 (CONDITIONAL_JUMP)  ; LAB_0053c656
    CMP EBX,EDX                         ; 0053c630
    JL 0x0053c656                       ; 0053c632
        ;   XREF to: 0053c656 (CONDITIONAL_JUMP)  ; LAB_0053c656
    MOV EBX,dword ptr [0x02cf6a90]      ; 0053c634 | g_MouseY
    TEST EBX,EBX                        ; 0053c63a
    JL 0x0053c656                       ; 0053c63c
        ;   XREF to: 0053c656 (CONDITIONAL_JUMP)  ; LAB_0053c656
    CMP EBX,EBP                         ; 0053c63e
    JG 0x0053c656                       ; 0053c640
        ;   XREF to: 0053c656 (CONDITIONAL_JUMP)  ; LAB_0053c656
    PUSH EBX                            ; 0053c642
    PUSH EDX                            ; 0053c643
    PUSH 0x2f7a024                      ; 0053c644 | DAT_02f7a024
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e9c0 ; 0053c649
        ;   XREF to: 0040e9c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CActorPropertyList_FUN_0040e9c0()
    ADD ESP,0xc                         ; 0053c64e
    MOV [0x02f7c528],EAX                ; 0053c651 | DAT_02f7c528
    MOV EBX,dword ptr [0x02f7c528]      ; 0053c656 | DAT_02f7c528
        ;   Label: LAB_0053c656
    PUSH EBX                            ; 0053c65c
    PUSH 0x2f7a024                      ; 0053c65d | DAT_02f7a024
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e850 ; 0053c662
        ;   XREF to: 0040e850 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CActorPropertyList_FUN_0040e850()
    ADD ESP,0x8                         ; 0053c667
    CALL engine_matrix.c_popViewport_FUN_0050e480 ; 0053c66a
        ;   XREF to: 0050e480 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_0050e480(CDemonRenderer * this_ptr)
    PUSH 0x2f797e4                      ; 0053c66f | DAT_02f797e4
    CALL shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10 ; 0053c674
        ;   XREF to: 004a5c10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 0053c679
    LEA EBX,[EBP + 0x1]                 ; 0053c67c
    PUSH EBX                            ; 0053c67f
    PUSH EDI                            ; 0053c680
    MOV EDI,dword ptr [ESP + 0x138]     ; 0053c681
    DEC EDI                             ; 0053c688
    MOV EAX,0x7                         ; 0053c689
    PUSH EDI                            ; 0053c68e
    MOV [0x02d02570],EAX                ; 0053c68f | g_ActiveRenderColor
    CALL engine_2d.c_drawVLine_FUN_00402ff0 ; 0053c694
        ;   XREF to: 00402ff0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00402ff0(int x, int y1, int y2)
    ADD ESP,0xc                         ; 0053c699
    PUSH ESI                            ; 0053c69c
    PUSH EBX                            ; 0053c69d
    PUSH EDI                            ; 0053c69e
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 0053c69f
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 0053c6a4
    CALL core_msnedit.cpp_FUN_00536e20  ; 0053c6a7
        ;   XREF to: 00536e20 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_00536e20()
    POP EDI                             ; 0053c6ac
    ADD ESP,0x130                       ; 0053c6ad
    POP EBP                             ; 0053c6b3
    POP ESI                             ; 0053c6b4
    POP EBX                             ; 0053c6b5
    RET                                 ; 0053c6b6
    MOV DL,AH                           ; 0053c6b7
        ;   Label: LAB_0053c6b7
    OR DL,0x1                           ; 0053c6b9
    PUSH 0x2f797e4                      ; 0053c6bc | DAT_02f797e4
    MOV byte ptr [0x02f79818],DL        ; 0053c6c1 | DAT_02f79818
    CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0 ; 0053c6c7
        ;   XREF to: 004a5ae0 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 0053c6cc
    PUSH 0x68064c                       ; 0053c6cf | DAT_0068064c
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 0053c6d4
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0053c6d9
    JMP 0x0053c555                      ; 0053c6dc
        ;   XREF to: 0053c555 (UNCONDITIONAL_JUMP)  ; LAB_0053c555
    MOV EBP,dword ptr [EBX + 0x28]      ; 0053c6e1
        ;   Label: LAB_0053c6e1
    PUSH EBP                            ; 0053c6e4
    PUSH 0x63c874                       ; 0053c6e5 | = "Selected: %s"
    LEA EAX,[ESP + 0xc]                 ; 0053c6ea
    PUSH EAX                            ; 0053c6ee
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053c6ef
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679398]                ; 0053c6f4 | g_WindowHeight
    ADD ESP,0xc                         ; 0053c6f9
    SUB EAX,0xb                         ; 0053c6fc
    PUSH EAX                            ; 0053c6ff
    PUSH EDI                            ; 0053c700
    LEA EAX,[ESP + 0xc]                 ; 0053c701
    PUSH EAX                            ; 0053c705
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053c706
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0053c70b
    PUSH 0x2f797e4                      ; 0053c70e | DAT_02f797e4
    CALL shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40 ; 0053c713
        ;   XREF to: 004a5b40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 0053c718
    CALL core_msnedit.cpp_FUN_00536e20  ; 0053c71b
        ;   XREF to: 00536e20 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_00536e20()
    POP EDI                             ; 0053c720
    ADD ESP,0x130                       ; 0053c721
    POP EBP                             ; 0053c727
    POP ESI                             ; 0053c728
    POP EBX                             ; 0053c729
    RET                                 ; 0053c72a


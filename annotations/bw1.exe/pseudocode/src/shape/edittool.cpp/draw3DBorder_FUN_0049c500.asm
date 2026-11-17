; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_draw3DBorder_FUN_0049c500(int left,int top,int right,int bottom,int pressed)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   top
; int              Stack[0xc]:4   right
; int              Stack[0x10]:4   bottom
; int              Stack[0x14]:4   pressed
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_edittool.cpp_CEdButton_paint_FUN_0049d580 at 0049d5b0
;   shape_edittool.cpp_CEdCheck_render_FUN_0049dc70 at 0049dd16
;   shape_edittool.cpp_CEdScrollBar_render_FUN_0049caa0 at 0049cc10
;
; Referenced Globals:
;   int g_INT_01c3f544
;   int g_INT_01c3f5b4
;   int g_INT_01c3f5c0
;   int g_INT_01c3f5c4
;   uchar[768] g_UCHAR_ARRAY_01c4e9f8
;   undefined4 g_UCHAR_ARRAY_01c4e9f8+1
;   undefined4 g_UCHAR_ARRAY_01c4e9f8+2
;   int g_INT_01c4f020
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_2d.c_drawVLine_FUN_00403040
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_mini3d.cpp_drawHLine_FUN_005182e0
;   engine_mini3d.cpp_drawVLine_FUN_00518300
;   engine_mini3d.cpp_fillRect_FUN_00518010
;   engine_mini3d.cpp_setColor_FUN_00517d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c500
        ;   Label: shape_edittool.cpp_draw3DBorder_FUN_0049c500
    PUSH ESI                            ; 0049c501
    PUSH EDI                            ; 0049c502
    PUSH EBP                            ; 0049c503
    SUB ESP,0xc                         ; 0049c504
    MOV EBX,dword ptr [ESP + 0x20]      ; 0049c507
    MOV ESI,dword ptr [ESP + 0x24]      ; 0049c50b
    MOV EDI,dword ptr [ESP + 0x28]      ; 0049c50f
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0049c513
    CMP dword ptr [ESP + 0x30],0x0      ; 0049c517
    JZ 0x0049c695                       ; 0049c51c
        ;   XREF to: 0049c695 (CONDITIONAL_JUMP)  ; LAB_0049c695
    MOV EAX,[0x01c3f5c4]                ; 0049c522 | g_INT_01c3f5c4
    CMP dword ptr [0x01c3f544],0x0      ; 0049c527 | g_INT_01c3f544
        ;   Label: LAB_0049c527
    JZ 0x0049c69f                       ; 0049c52e
        ;   XREF to: 0049c69f (CONDITIONAL_JUMP)  ; LAB_0049c69f
    AND EAX,0xff                        ; 0049c534
    MOV EDX,EAX                         ; 0049c539
    SHL EAX,0x2                         ; 0049c53b
    SUB EAX,EDX                         ; 0049c53e
    XOR ECX,ECX                         ; 0049c540
    XOR EDX,EDX                         ; 0049c542
    MOV CL,byte ptr [EAX + 0x1c4e9f8]   ; 0049c544 | g_UCHAR_ARRAY_01c4e9f8
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 0049c54a | g_UCHAR_ARRAY_01c4e9f8+1
    SHL EDX,0x8                         ; 0049c550
    SHL ECX,0x10                        ; 0049c553
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 0049c556 | g_UCHAR_ARRAY_01c4e9f8+2
    OR EDX,ECX                          ; 0049c55c
    AND EAX,0xff                        ; 0049c55e
    OR EAX,EDX                          ; 0049c563
    PUSH EAX                            ; 0049c565
    CALL engine_mini3d.cpp_setColor_FUN_00517d50 ; 0049c566
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_00517d50(uint rgb)
    ADD ESP,0x4                         ; 0049c56b
    MOV EDX,dword ptr [0x01c3f544]      ; 0049c56e | g_INT_01c3f544
        ;   Label: LAB_0049c56e
    LEA EAX,[EDI + -0x1]                ; 0049c574
    TEST EDX,EDX                        ; 0049c577
    JZ 0x0049c6a9                       ; 0049c579
        ;   XREF to: 0049c6a9 (CONDITIONAL_JUMP)  ; LAB_0049c6a9
    PUSH EAX                            ; 0049c57f
    PUSH ESI                            ; 0049c580
    PUSH EBX                            ; 0049c581
    CALL engine_mini3d.cpp_drawHLine_FUN_005182e0 ; 0049c582
        ;   XREF to: 005182e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawHLine_FUN_005182e0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 0049c587
        ;   Label: LAB_0049c587
    MOV ECX,dword ptr [0x01c3f544]      ; 0049c58a | g_INT_01c3f544
    LEA EAX,[EBP + -0x1]                ; 0049c590
    TEST ECX,ECX                        ; 0049c593
    JZ 0x0049c6b6                       ; 0049c595
        ;   XREF to: 0049c6b6 (CONDITIONAL_JUMP)  ; LAB_0049c6b6
    PUSH EAX                            ; 0049c59b
    PUSH ESI                            ; 0049c59c
    PUSH EBX                            ; 0049c59d
    CALL engine_mini3d.cpp_drawVLine_FUN_00518300 ; 0049c59e
        ;   XREF to: 00518300 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawVLine_FUN_00518300(int x, int y1, int y2)
    ADD ESP,0xc                         ; 0049c5a3
        ;   Label: LAB_0049c5a3
    CMP dword ptr [ESP + 0x30],0x0      ; 0049c5a6
    JZ 0x0049c6c3                       ; 0049c5ab
        ;   XREF to: 0049c6c3 (CONDITIONAL_JUMP)  ; LAB_0049c6c3
    MOV EAX,[0x01c3f5c0]                ; 0049c5b1 | g_INT_01c3f5c0
    CMP dword ptr [0x01c3f544],0x0      ; 0049c5b6 | g_INT_01c3f544
        ;   Label: LAB_0049c5b6
    JZ 0x0049c6cd                       ; 0049c5bd
        ;   XREF to: 0049c6cd (CONDITIONAL_JUMP)  ; LAB_0049c6cd
    AND EAX,0xff                        ; 0049c5c3
    MOV EDX,EAX                         ; 0049c5c8
    SHL EAX,0x2                         ; 0049c5ca
    SUB EAX,EDX                         ; 0049c5cd
    XOR EDX,EDX                         ; 0049c5cf
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 0049c5d1 | g_UCHAR_ARRAY_01c4e9f8+1
    SHL EDX,0x8                         ; 0049c5d7
    MOV dword ptr [ESP],EDX             ; 0049c5da
    XOR EDX,EDX                         ; 0049c5dd
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 0049c5df | g_UCHAR_ARRAY_01c4e9f8
    MOV ECX,dword ptr [ESP]             ; 0049c5e5
    SHL EDX,0x10                        ; 0049c5e8
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 0049c5eb | g_UCHAR_ARRAY_01c4e9f8+2
    OR EDX,ECX                          ; 0049c5f1
    AND EAX,0xff                        ; 0049c5f3
    OR EAX,EDX                          ; 0049c5f8
    PUSH EAX                            ; 0049c5fa
    CALL engine_mini3d.cpp_setColor_FUN_00517d50 ; 0049c5fb
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_00517d50(uint rgb)
    ADD ESP,0x4                         ; 0049c600
    MOV ECX,dword ptr [0x01c3f544]      ; 0049c603 | g_INT_01c3f544
        ;   Label: LAB_0049c603
    LEA EDX,[EDI + -0x1]                ; 0049c609
    LEA EAX,[EBP + -0x1]                ; 0049c60c
    TEST ECX,ECX                        ; 0049c60f
    JZ 0x0049c6d7                       ; 0049c611
        ;   XREF to: 0049c6d7 (CONDITIONAL_JUMP)  ; LAB_0049c6d7
    PUSH EDX                            ; 0049c617
    PUSH EAX                            ; 0049c618
    PUSH EBX                            ; 0049c619
    CALL engine_mini3d.cpp_drawHLine_FUN_005182e0 ; 0049c61a
        ;   XREF to: 005182e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawHLine_FUN_005182e0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 0049c61f
        ;   Label: LAB_0049c61f
    MOV ECX,dword ptr [0x01c3f544]      ; 0049c622 | g_INT_01c3f544
    LEA EAX,[EBP + -0x1]                ; 0049c628
    LEA EDX,[EDI + -0x1]                ; 0049c62b
    TEST ECX,ECX                        ; 0049c62e
    JZ 0x0049c6e4                       ; 0049c630
        ;   XREF to: 0049c6e4 (CONDITIONAL_JUMP)  ; LAB_0049c6e4
    PUSH EAX                            ; 0049c636
    PUSH ESI                            ; 0049c637
    PUSH EDX                            ; 0049c638
    CALL engine_mini3d.cpp_drawVLine_FUN_00518300 ; 0049c639
        ;   XREF to: 00518300 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawVLine_FUN_00518300(int x, int y1, int y2)
    ADD ESP,0xc                         ; 0049c63e
        ;   Label: LAB_0049c63e
    MOV EAX,[0x01c3f5b4]                ; 0049c641 | g_INT_01c3f5b4
    LEA EDX,[EBX + 0x1]                 ; 0049c646
    LEA ECX,[ESI + 0x1]                 ; 0049c649
    LEA EBX,[EDI + -0x2]                ; 0049c64c
    LEA ESI,[EBP + -0x2]                ; 0049c64f
    MOV EDI,EDX                         ; 0049c652
    MOV EBP,ECX                         ; 0049c654
    MOV dword ptr [ESP + 0x4],EBX       ; 0049c656
    MOV dword ptr [ESP + 0x8],ESI       ; 0049c65a
    CMP dword ptr [0x01c3f544],0x0      ; 0049c65e | g_INT_01c3f544
    JZ 0x0049c732                       ; 0049c665
        ;   XREF to: 0049c732 (CONDITIONAL_JUMP)  ; LAB_0049c732
    CMP dword ptr [0x01c3f544],0x0      ; 0049c66b | g_INT_01c3f544
    JNZ 0x0049c6f1                      ; 0049c672
        ;   XREF to: 0049c6f1 (CONDITIONAL_JUMP)  ; LAB_0049c6f1
    MOV [0x01c4f020],EAX                ; 0049c674 | g_INT_01c4f020
    MOV ESI,dword ptr [ESP + 0x8]       ; 0049c679
        ;   Label: LAB_0049c679
    PUSH ESI                            ; 0049c67d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049c67e
    PUSH EAX                            ; 0049c682
    PUSH EBP                            ; 0049c683
    PUSH EDI                            ; 0049c684
    CALL engine_mini3d.cpp_fillRect_FUN_00518010 ; 0049c685
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillRect_FUN_00518010(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0049c68a
    ADD ESP,0xc                         ; 0049c68d
    POP EBP                             ; 0049c690
    POP EDI                             ; 0049c691
    POP ESI                             ; 0049c692
    POP EBX                             ; 0049c693
    RET                                 ; 0049c694
    MOV EAX,[0x01c3f5c0]                ; 0049c695 | g_INT_01c3f5c0
        ;   Label: LAB_0049c695
    JMP 0x0049c527                      ; 0049c69a
        ;   XREF to: 0049c527 (UNCONDITIONAL_JUMP)  ; LAB_0049c527
    MOV [0x01c4f020],EAX                ; 0049c69f | g_INT_01c4f020
        ;   Label: LAB_0049c69f
    JMP 0x0049c56e                      ; 0049c6a4
        ;   XREF to: 0049c56e (UNCONDITIONAL_JUMP)  ; LAB_0049c56e
    PUSH EAX                            ; 0049c6a9
        ;   Label: LAB_0049c6a9
    PUSH ESI                            ; 0049c6aa
    PUSH EBX                            ; 0049c6ab
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0049c6ac
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x0049c587                      ; 0049c6b1
        ;   XREF to: 0049c587 (UNCONDITIONAL_JUMP)  ; LAB_0049c587
    PUSH EAX                            ; 0049c6b6
        ;   Label: LAB_0049c6b6
    PUSH ESI                            ; 0049c6b7
    PUSH EBX                            ; 0049c6b8
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 0049c6b9
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    JMP 0x0049c5a3                      ; 0049c6be
        ;   XREF to: 0049c5a3 (UNCONDITIONAL_JUMP)  ; LAB_0049c5a3
    MOV EAX,[0x01c3f5c4]                ; 0049c6c3 | g_INT_01c3f5c4
        ;   Label: LAB_0049c6c3
    JMP 0x0049c5b6                      ; 0049c6c8
        ;   XREF to: 0049c5b6 (UNCONDITIONAL_JUMP)  ; LAB_0049c5b6
    MOV [0x01c4f020],EAX                ; 0049c6cd | g_INT_01c4f020
        ;   Label: LAB_0049c6cd
    JMP 0x0049c603                      ; 0049c6d2
        ;   XREF to: 0049c603 (UNCONDITIONAL_JUMP)  ; LAB_0049c603
    PUSH EDX                            ; 0049c6d7
        ;   Label: LAB_0049c6d7
    PUSH EAX                            ; 0049c6d8
    PUSH EBX                            ; 0049c6d9
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0049c6da
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x0049c61f                      ; 0049c6df
        ;   XREF to: 0049c61f (UNCONDITIONAL_JUMP)  ; LAB_0049c61f
    PUSH EAX                            ; 0049c6e4
        ;   Label: LAB_0049c6e4
    PUSH ESI                            ; 0049c6e5
    PUSH EDX                            ; 0049c6e6
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 0049c6e7
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    JMP 0x0049c63e                      ; 0049c6ec
        ;   XREF to: 0049c63e (UNCONDITIONAL_JUMP)  ; LAB_0049c63e
    AND EAX,0xff                        ; 0049c6f1
        ;   Label: LAB_0049c6f1
    MOV EBX,EAX                         ; 0049c6f6
    SHL EAX,0x2                         ; 0049c6f8
    SUB EAX,EBX                         ; 0049c6fb
    XOR EDX,EDX                         ; 0049c6fd
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 0049c6ff | g_UCHAR_ARRAY_01c4e9f8+1
    MOV ECX,EDX                         ; 0049c705
    XOR EDX,EDX                         ; 0049c707
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 0049c709 | g_UCHAR_ARRAY_01c4e9f8
    SHL ECX,0x8                         ; 0049c70f
    SHL EDX,0x10                        ; 0049c712
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 0049c715 | g_UCHAR_ARRAY_01c4e9f8+2
    OR EDX,ECX                          ; 0049c71b
    AND EAX,0xff                        ; 0049c71d
    OR EAX,EDX                          ; 0049c722
    PUSH EAX                            ; 0049c724
    CALL engine_mini3d.cpp_setColor_FUN_00517d50 ; 0049c725
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_00517d50(uint rgb)
    ADD ESP,0x4                         ; 0049c72a
    JMP 0x0049c679                      ; 0049c72d
        ;   XREF to: 0049c679 (UNCONDITIONAL_JUMP)  ; LAB_0049c679
    PUSH EAX                            ; 0049c732
        ;   Label: LAB_0049c732
    PUSH ESI                            ; 0049c733
    PUSH EBX                            ; 0049c734
    PUSH ECX                            ; 0049c735
    PUSH EDX                            ; 0049c736
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 0049c737
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0049c73c
    ADD ESP,0xc                         ; 0049c73f
    POP EBP                             ; 0049c742
    POP EDI                             ; 0049c743
    POP ESI                             ; 0049c744
    POP EBX                             ; 0049c745
    RET                                 ; 0049c746


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_ckptutil.c_drawClippedEdges_FUN_004335f0(SEdge * edges, int count, int x_offset, int y_offset)
;
; Parameters:
; SEdge *          Stack[0x4]:4   edges
; int              Stack[0x8]:4   count
; int              Stack[0xc]:4   x_offset
; int              Stack[0x10]:4   y_offset
; Local Variables:
; undefined4       Stack[-0x16]:4  local_16
;
; Referenced Globals:
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004335f0
        ;   Label: cockpit_ckptutil.c_drawClippedEdges_FUN_004335f0
    PUSH ESI                            ; 004335f1
    PUSH EDI                            ; 004335f2
    PUSH EBP                            ; 004335f3
    SUB ESP,0x4                         ; 004335f4
    MOV EDX,0xfb                        ; 004335f7
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004335fc
    XOR EDI,EDI                         ; 00433600
    MOV dword ptr [0x02d02570],EDX      ; 00433602 | int g_ActiveRenderColor
    TEST ECX,ECX                        ; 00433608
    JLE 0x004336cd                      ; 0043360a | LAB_004336cd
        ;   XREF to: 004336cd (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x18]      ; 00433610
    MOV AX,word ptr [EBX]               ; 00433614
        ;   Label: LAB_00433614
    MOV EBP,dword ptr [ESP + 0x20]      ; 00433617
    MOVSX ECX,AX                        ; 0043361b
    MOV EAX,[0x02d02558]                ; 0043361e | int g_ClipLeft
    ADD ECX,EBP                         ; 00433623
    CMP ECX,EAX                         ; 00433625
    JGE 0x0043362b                      ; 00433627 | LAB_0043362b
        ;   XREF to: 0043362b (CONDITIONAL_JUMP)
    MOV ECX,EAX                         ; 00433629
    MOV EDX,dword ptr [0x02d02560]      ; 0043362b | int g_ClipRight
        ;   Label: LAB_0043362b
    CMP ECX,EDX                         ; 00433631
    JL 0x00433637                       ; 00433633 | LAB_00433637
        ;   XREF to: 00433637 (CONDITIONAL_JUMP)
    MOV ECX,EDX                         ; 00433635
    MOV AX,word ptr [EBX + 0x2]         ; 00433637
        ;   Label: LAB_00433637
    MOV ESI,dword ptr [ESP + 0x24]      ; 0043363b
    MOVSX EDX,AX                        ; 0043363f
    MOV EBP,dword ptr [0x02d0255c]      ; 00433642 | int g_ClipTop
    ADD EDX,ESI                         ; 00433648
    CMP EDX,EBP                         ; 0043364a
    JGE 0x00433650                      ; 0043364c | LAB_00433650
        ;   XREF to: 00433650 (CONDITIONAL_JUMP)
    MOV EDX,EBP                         ; 0043364e
    MOV EAX,[0x02d02564]                ; 00433650 | int g_ClipBottom
        ;   Label: LAB_00433650
    CMP EDX,EAX                         ; 00433655
    JL 0x0043365b                       ; 00433657 | LAB_0043365b
        ;   XREF to: 0043365b (CONDITIONAL_JUMP)
    MOV EDX,EAX                         ; 00433659
    MOV AX,word ptr [EBX + 0x4]         ; 0043365b
        ;   Label: LAB_0043365b
    MOV EBP,dword ptr [ESP + 0x20]      ; 0043365f
    MOVSX ESI,AX                        ; 00433663
    MOV EAX,[0x02d02558]                ; 00433666 | int g_ClipLeft
    ADD ESI,EBP                         ; 0043366b
    CMP ESI,EAX                         ; 0043366d
    JGE 0x00433673                      ; 0043366f | LAB_00433673
        ;   XREF to: 00433673 (CONDITIONAL_JUMP)
    MOV ESI,EAX                         ; 00433671
    MOV EBP,dword ptr [0x02d02560]      ; 00433673 | int g_ClipRight
        ;   Label: LAB_00433673
    CMP ESI,EBP                         ; 00433679
    JL 0x0043367f                       ; 0043367b | LAB_0043367f
        ;   XREF to: 0043367f (CONDITIONAL_JUMP)
    MOV ESI,EBP                         ; 0043367d
    MOV AX,word ptr [EBX + 0x6]         ; 0043367f
        ;   Label: LAB_0043367f
    ADD EAX,EAX                         ; 00433683
    SAR AX,0x1                          ; 00433685
    MOV word ptr [ESP],AX               ; 00433688
    MOV EAX,dword ptr [ESP + -0x2]      ; 0043368c
    MOV EBP,dword ptr [ESP + 0x24]      ; 00433690
    SAR EAX,0x10                        ; 00433694
    ADD EAX,EBP                         ; 00433697
    MOV EBP,dword ptr [0x02d0255c]      ; 00433699 | int g_ClipTop
    CMP EAX,EBP                         ; 0043369f
    JGE 0x004336a5                      ; 004336a1 | LAB_004336a5
        ;   XREF to: 004336a5 (CONDITIONAL_JUMP)
    MOV EAX,EBP                         ; 004336a3
    MOV EBP,dword ptr [0x02d02564]      ; 004336a5 | int g_ClipBottom
        ;   Label: LAB_004336a5
    CMP EAX,EBP                         ; 004336ab
    JL 0x004336b1                       ; 004336ad | LAB_004336b1
        ;   XREF to: 004336b1 (CONDITIONAL_JUMP)
    MOV EAX,EBP                         ; 004336af
    PUSH EAX                            ; 004336b1
        ;   Label: LAB_004336b1
    PUSH ESI                            ; 004336b2
    PUSH EDX                            ; 004336b3
    PUSH ECX                            ; 004336b4
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004336b5 | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004336ba
    INC EDI                             ; 004336bd
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004336be
    ADD EBX,0x8                         ; 004336c2
    CMP EDI,ESI                         ; 004336c5
    JL 0x00433614                       ; 004336c7 | LAB_00433614
        ;   XREF to: 00433614 (CONDITIONAL_JUMP)
    ADD ESP,0x4                         ; 004336cd
        ;   Label: LAB_004336cd
    POP EBP                             ; 004336d0
    POP EDI                             ; 004336d1
    POP ESI                             ; 004336d2
    POP EBX                             ; 004336d3
    RET                                 ; 004336d4


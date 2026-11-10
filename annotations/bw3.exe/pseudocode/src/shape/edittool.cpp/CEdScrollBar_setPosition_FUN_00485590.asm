; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_setPosition_FUN_00485590(CEdScrollBar *this_ptr,int left_pos,int top_pos,int right_pos,int bottom_pos)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left_pos
; int              Stack[0xc]:4   top_pos
; int              Stack[0x10]:4   right_pos
; int              Stack[0x14]:4   bottom_pos
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00483c00 at 00484184
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd8ce
;   TerminatedCString s_CEdScrollBar_setPosition_005bd8e4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485590
        ;   Label: shape_edittool.cpp_CEdScrollBar_setPosition_FUN_00485590
    PUSH ESI                            ; 00485591
    PUSH EBP                            ; 00485592
    MOV EAX,dword ptr [ESP + 0x10]      ; 00485593
    MOV EDX,dword ptr [ESP + 0x14]      ; 00485597
    MOV dword ptr [EAX + 0x14],EDX      ; 0048559b
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048559e
    MOV dword ptr [EAX + 0x18],EDX      ; 004855a2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004855a5
    INC EDX                             ; 004855a9
    MOV dword ptr [EAX + 0x1c],EDX      ; 004855aa
    MOV EDX,dword ptr [ESP + 0x20]      ; 004855ad
    INC EDX                             ; 004855b1
    MOV dword ptr [EAX + 0x20],EDX      ; 004855b2
    MOV ECX,dword ptr [EAX + 0x1c]      ; 004855b5
    MOV EDX,dword ptr [EAX + 0x14]      ; 004855b8
    MOV EBX,dword ptr [EAX + 0x18]      ; 004855bb
    SUB ECX,EDX                         ; 004855be
    MOV EDX,dword ptr [EAX + 0x20]      ; 004855c0
    SUB EDX,EBX                         ; 004855c3
    CMP ECX,EDX                         ; 004855c5
    JG 0x004855fd                       ; 004855c7
        ;   XREF to: 004855fd (CONDITIONAL_JUMP)  ; LAB_004855fd
    MOV EBX,dword ptr [EAX + 0x18]      ; 004855c9
    ADD EBX,ECX                         ; 004855cc
    DEC EBX                             ; 004855ce
    MOV dword ptr [EAX + 0x24],EBX      ; 004855cf
    MOV EBX,dword ptr [EAX + 0x20]      ; 004855d2
    SUB EBX,ECX                         ; 004855d5
    MOV dword ptr [EAX + 0x10],0x0      ; 004855d7
    INC EBX                             ; 004855de
        ;   Label: LAB_004855de
    MOV dword ptr [EAX + 0x28],EBX      ; 004855df
    CMP ECX,0x4                         ; 004855e2
    JL 0x00485614                       ; 004855e5
        ;   XREF to: 00485614 (CONDITIONAL_JUMP)  ; LAB_00485614
    CMP EDX,0x4                         ; 004855e7
    JL 0x00485614                       ; 004855ea
        ;   XREF to: 00485614 (CONDITIONAL_JUMP)  ; LAB_00485614
    MOV ESI,dword ptr [EAX + 0x24]      ; 004855ec
    MOV EDX,dword ptr [EAX + 0x28]      ; 004855ef
    SUB EDX,ESI                         ; 004855f2
    CMP EDX,0x4                         ; 004855f4
    JL 0x00485614                       ; 004855f7
        ;   XREF to: 00485614 (CONDITIONAL_JUMP)  ; LAB_00485614
    POP EBP                             ; 004855f9
    POP ESI                             ; 004855fa
    POP EBX                             ; 004855fb
    RET                                 ; 004855fc
    MOV EBX,dword ptr [EAX + 0x14]      ; 004855fd
        ;   Label: LAB_004855fd
    ADD EBX,EDX                         ; 00485600
    DEC EBX                             ; 00485602
    MOV dword ptr [EAX + 0x24],EBX      ; 00485603
    MOV EBX,dword ptr [EAX + 0x1c]      ; 00485606
    SUB EBX,EDX                         ; 00485609
    MOV dword ptr [EAX + 0x10],0x1      ; 0048560b
    JMP 0x004855de                      ; 00485612
        ;   XREF to: 004855de (UNCONDITIONAL_JUMP)  ; LAB_004855de
    PUSH EDI                            ; 00485614
        ;   Label: LAB_00485614
    MOV EDI,0x5bd8ce                    ; 00485615 | = "..\\shape\\edittool.cpp"
    MOV EBP,0x127f                      ; 0048561a
    PUSH 0x5bd8e4                       ; 0048561f | = "CEdScrollBar::setPosition - invalid d..."
    MOV dword ptr [0x01d71de0],EDI      ; 00485624 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0048562a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00485630
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00485635
    POP EDI                             ; 00485638
    POP EBP                             ; 00485639
    POP ESI                             ; 0048563a
    POP EBX                             ; 0048563b
    RET                                 ; 0048563c


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_drawPolyList3_FUN_00582620(SRenderVertex *vertex_buffer,STrianglePackedIndices *polygons,int polygon_count,int render_flags)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_buffer
; STrianglePackedIndices * Stack[0x8]:4   polygons
; int              Stack[0xc]:4   polygon_count
; int              Stack[0x10]:4   render_flags
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01e7dac8
;   undefined4 DAT_02c833c8
;   undefined4 DAT_02c833d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582620
        ;   Label: engine_special.cpp_drawPolyList3_FUN_00582620
    PUSH ESI                            ; 00582621
    PUSH EDI                            ; 00582622
    PUSH EBP                            ; 00582623
    SUB ESP,0xc                         ; 00582624
    MOV EDI,dword ptr [ESP + 0x20]      ; 00582627
    MOV EBX,dword ptr [ESP + 0x24]      ; 0058262b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0058262f
    CMP dword ptr [0x01c50948],0x0      ; 00582633 | DAT_01c50948
    JZ 0x005826bd                       ; 0058263a
        ;   XREF to: 005826bd (CONDITIONAL_JUMP)  ; LAB_005826bd
    MOV EAX,[0x01e7dac8]                ; 00582640 | DAT_01e7dac8
    MOV ECX,dword ptr [0x02c833d4]      ; 00582645 | DAT_02c833d4
    ADD EAX,EBP                         ; 0058264b
    TEST ECX,ECX                        ; 0058264d
    JNZ 0x005826c7                      ; 0058264f
        ;   XREF to: 005826c7 (CONDITIONAL_JUMP)  ; LAB_005826c7
    MOV [0x01e7dac8],EAX                ; 00582655 | DAT_01e7dac8
    XOR ESI,ESI                         ; 0058265a
    TEST EBP,EBP                        ; 0058265c
    JLE 0x005826b0                      ; 0058265e
        ;   XREF to: 005826b0 (CONDITIONAL_JUMP)  ; LAB_005826b0
    XOR EAX,EAX                         ; 00582660
        ;   Label: LAB_00582660
    MOV AX,word ptr [EBX]               ; 00582662
    IMUL EAX,EAX,0x30                   ; 00582665
    LEA EDX,[EDI + EAX*0x1]             ; 00582668
    MOV dword ptr [ESP],EDX             ; 0058266b
    XOR EAX,EAX                         ; 0058266e
    MOV AX,word ptr [EBX + 0x2]         ; 00582670
    IMUL EAX,EAX,0x30                   ; 00582674
    LEA EDX,[EDI + EAX*0x1]             ; 00582677
    MOV dword ptr [ESP + 0x4],EDX       ; 0058267a
    XOR EAX,EAX                         ; 0058267e
    MOV AX,word ptr [EBX + 0x4]         ; 00582680
    IMUL EAX,EAX,0x30                   ; 00582684
    LEA EDX,[EDI + EAX*0x1]             ; 00582687
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058268a
    PUSH EAX                            ; 0058268e
    PUSH 0x3                            ; 0058268f
    LEA EAX,[ESP + 0x8]                 ; 00582691
    ADD EBX,0x6                         ; 00582695
    PUSH EAX                            ; 00582698
    INC ESI                             ; 00582699
    MOV dword ptr [ESP + 0x14],EDX      ; 0058269a
    CALL dword ptr [0x02c833c8]         ; 0058269e | DAT_02c833c8
    ADD ESP,0xc                         ; 005826a4
    CMP ESI,EBP                         ; 005826a7
    JL 0x00582660                       ; 005826a9
        ;   XREF to: 00582660 (CONDITIONAL_JUMP)  ; LAB_00582660
    LEA EAX,[EAX]                       ; 005826ab
    MOV ECX,ECX                         ; 005826ae
    MOV EAX,0x1                         ; 005826b0
        ;   Label: LAB_005826b0
    ADD ESP,0xc                         ; 005826b5
    POP EBP                             ; 005826b8
    POP EDI                             ; 005826b9
    POP ESI                             ; 005826ba
    POP EBX                             ; 005826bb
    RET                                 ; 005826bc
    XOR EAX,EAX                         ; 005826bd
        ;   Label: LAB_005826bd
    ADD ESP,0xc                         ; 005826bf
    POP EBP                             ; 005826c2
    POP EDI                             ; 005826c3
    POP ESI                             ; 005826c4
    POP EBX                             ; 005826c5
    RET                                 ; 005826c6
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005826c7
        ;   Label: LAB_005826c7
    PUSH ESI                            ; 005826cb
    PUSH EBP                            ; 005826cc
    PUSH EBX                            ; 005826cd
    PUSH EDI                            ; 005826ce
    MOV [0x01e7dac8],EAX                ; 005826cf | DAT_01e7dac8
    CALL dword ptr [0x02c833d4]         ; 005826d4 | DAT_02c833d4
    ADD ESP,0x10                        ; 005826da
    ADD ESP,0xc                         ; 005826dd
    POP EBP                             ; 005826e0
    POP EDI                             ; 005826e1
    POP ESI                             ; 005826e2
    POP EBX                             ; 005826e3
    RET                                 ; 005826e4


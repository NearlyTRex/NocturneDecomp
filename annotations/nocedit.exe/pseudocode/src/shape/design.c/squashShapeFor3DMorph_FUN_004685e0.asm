; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_squashShapeFor3DMorph_FUN_004685e0(void)
;
; Local Variables:
; int              Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f6fa
;
; Referenced Globals:
;   TerminatedCString s_Enter_squash_axis_X_Y_or_0061cd9c
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004685e0
        ;   Label: shape_design.c_squashShapeFor3DMorph_FUN_004685e0
    PUSH ESI                            ; 004685e1
    PUSH EDI                            ; 004685e2
    PUSH EBP                            ; 004685e3
    MOV EBP,ESP                         ; 004685e4
    SUB ESP,0xc                         ; 004685e6
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004685ec
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004685f1
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH 0x0                            ; 004685f6
    PUSH 0x0                            ; 004685f8
    MOV EAX,0x61cd9c                    ; 004685fa | = "Enter squash axis - X, Y, or Z : "
    PUSH EAX                            ; 004685ff | = "Enter squash axis - X, Y, or Z : "
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00468600
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00468605
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00468608
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046860d
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 00468612
    PUSH EAX                            ; 00468617
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00468618
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0046861d
    MOV dword ptr [EBP + -0x8],EAX      ; 00468620
    MOV EAX,dword ptr [EBP + -0x8]      ; 00468623
    MOV dword ptr [EBP + -0x4],EAX      ; 00468626
    JMP 0x004686b7                      ; 00468629
        ;   XREF to: 004686b7 (UNCONDITIONAL_JUMP)  ; LAB_004686b7
    MOV dword ptr [EBP + -0xc],0x0      ; 0046862e
        ;   Label: LAB_0046862e
    JMP 0x0046863d                      ; 00468635
        ;   XREF to: 0046863d (UNCONDITIONAL_JUMP)  ; LAB_0046863d
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468637
        ;   Label: LAB_00468637
    INC dword ptr [EBP + -0xc]          ; 0046863a
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046863d
        ;   Label: LAB_0046863d
    CMP EAX,dword ptr [0x01626408]      ; 00468640 | g_VertexCount
    JGE 0x00468658                      ; 00468646
        ;   XREF to: 00468658 (CONDITIONAL_JUMP)  ; LAB_00468658
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 00468648
    MOV dword ptr [EAX + 0x162640c],0x0 ; 0046864c | g_LoadedVertices
    JMP 0x00468637                      ; 00468656
        ;   XREF to: 00468637 (UNCONDITIONAL_JUMP)  ; LAB_00468637
    JMP 0x004686d7                      ; 00468658
        ;   XREF to: 004686d7 (UNCONDITIONAL_JUMP)  ; LAB_004686d7
        ;   Label: LAB_00468658
    MOV dword ptr [EBP + -0xc],0x0      ; 0046865d
        ;   Label: LAB_0046865d
    JMP 0x0046866c                      ; 00468664
        ;   XREF to: 0046866c (UNCONDITIONAL_JUMP)  ; LAB_0046866c
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468666
        ;   Label: LAB_00468666
    INC dword ptr [EBP + -0xc]          ; 00468669
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046866c
        ;   Label: LAB_0046866c
    CMP EAX,dword ptr [0x01626408]      ; 0046866f | g_VertexCount
    JGE 0x00468687                      ; 00468675
        ;   XREF to: 00468687 (CONDITIONAL_JUMP)  ; LAB_00468687
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 00468677
    MOV dword ptr [EAX + 0x1626410],0x0 ; 0046867b | DAT_01626410
    JMP 0x00468666                      ; 00468685
        ;   XREF to: 00468666 (UNCONDITIONAL_JUMP)  ; LAB_00468666
    JMP 0x004686d7                      ; 00468687
        ;   XREF to: 004686d7 (UNCONDITIONAL_JUMP)  ; LAB_004686d7
        ;   Label: LAB_00468687
    MOV dword ptr [EBP + -0xc],0x0      ; 00468689
        ;   Label: LAB_00468689
    JMP 0x00468698                      ; 00468690
        ;   XREF to: 00468698 (UNCONDITIONAL_JUMP)  ; LAB_00468698
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468692
        ;   Label: LAB_00468692
    INC dword ptr [EBP + -0xc]          ; 00468695
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468698
        ;   Label: LAB_00468698
    CMP EAX,dword ptr [0x01626408]      ; 0046869b | g_VertexCount
    JGE 0x004686b3                      ; 004686a1
        ;   XREF to: 004686b3 (CONDITIONAL_JUMP)  ; LAB_004686b3
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 004686a3
    MOV dword ptr [EAX + 0x1626414],0x0 ; 004686a7 | g_LoadedVertices[0].vertex.z
    JMP 0x00468692                      ; 004686b1
        ;   XREF to: 00468692 (UNCONDITIONAL_JUMP)  ; LAB_00468692
    JMP 0x004686d7                      ; 004686b3
        ;   XREF to: 004686d7 (UNCONDITIONAL_JUMP)  ; LAB_004686d7
        ;   Label: LAB_004686b3
    JMP 0x004686d7                      ; 004686b5
        ;   XREF to: 004686d7 (UNCONDITIONAL_JUMP)  ; LAB_004686d7
        ;   Label: LAB_004686b5
    CMP dword ptr [EBP + -0x4],0x59     ; 004686b7
        ;   Label: LAB_004686b7
    JC 0x004686cb                       ; 004686bb
        ;   XREF to: 004686cb (CONDITIONAL_JUMP)  ; LAB_004686cb
    CMP dword ptr [EBP + -0x4],0x59     ; 004686bd
    JBE 0x0046865d                      ; 004686c1
        ;   XREF to: 0046865d (CONDITIONAL_JUMP)  ; LAB_0046865d
    CMP dword ptr [EBP + -0x4],0x5a     ; 004686c3
    JZ 0x00468689                       ; 004686c7
        ;   XREF to: 00468689 (CONDITIONAL_JUMP)  ; LAB_00468689
    JMP 0x004686b5                      ; 004686c9
        ;   XREF to: 004686b5 (UNCONDITIONAL_JUMP)  ; LAB_004686b5
    CMP dword ptr [EBP + -0x4],0x58     ; 004686cb
        ;   Label: LAB_004686cb
    JZ 0x0046862e                       ; 004686cf
        ;   XREF to: 0046862e (CONDITIONAL_JUMP)  ; LAB_0046862e
    JMP 0x004686b5                      ; 004686d5
        ;   XREF to: 004686b5 (UNCONDITIONAL_JUMP)  ; LAB_004686b5
    MOV ESP,EBP                         ; 004686d7
        ;   Label: LAB_004686d7
    POP EBP                             ; 004686d9
    POP EDI                             ; 004686da
    POP ESI                             ; 004686db
    POP EBX                             ; 004686dc
    RET                                 ; 004686dd


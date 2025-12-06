; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_squashShapeFor3DMorph_FUN_004685e0(void)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
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
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004685ec | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004685f1 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    PUSH 0x0                            ; 004685f6
    PUSH 0x0                            ; 004685f8
    MOV EAX,0x61cd9c                    ; 004685fa | = "Enter squash axis - X, Y, or Z : " | s_Enter_squash_axis_X_Y_or_0061cd9c = Enter squash axis - X, Y, or Z :
    PUSH EAX                            ; 004685ff | = "Enter squash axis - X, Y, or Z : " | s_Enter_squash_axis_X_Y_or_0061cd9c = Enter squash axis - X, Y, or Z :
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00468600 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00468605
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00468608 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046860d | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    AND EAX,0xff                        ; 00468612
    PUSH EAX                            ; 00468617
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00468618 | int crt_ctype.c_toupper_FUN_005ff9e0(int c)
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046861d
    MOV dword ptr [EBP + -0x8],EAX      ; 00468620
    MOV EAX,dword ptr [EBP + -0x8]      ; 00468623
    MOV dword ptr [EBP + -0x4],EAX      ; 00468626
    JMP 0x004686b7                      ; 00468629 | LAB_004686b7
        ;   XREF to: 004686b7 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0xc],0x0      ; 0046862e
        ;   Label: LAB_0046862e
    JMP 0x0046863d                      ; 00468635 | LAB_0046863d
        ;   XREF to: 0046863d (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468637
        ;   Label: LAB_00468637
    INC dword ptr [EBP + -0xc]          ; 0046863a
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046863d
        ;   Label: LAB_0046863d
    CMP EAX,dword ptr [0x01626408]      ; 00468640 | int g_VertexCount
    JGE 0x00468658                      ; 00468646 | LAB_00468658
        ;   XREF to: 00468658 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 00468648
    MOV dword ptr [EAX + 0x162640c],0x0 ; 0046864c | SVertexData[20000] g_LoadedVertices
    JMP 0x00468637                      ; 00468656 | LAB_00468637
        ;   XREF to: 00468637 (UNCONDITIONAL_JUMP)
    JMP 0x004686d7                      ; 00468658 | LAB_004686d7
        ;   Label: LAB_00468658
        ;   XREF to: 004686d7 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0xc],0x0      ; 0046865d
        ;   Label: LAB_0046865d
    JMP 0x0046866c                      ; 00468664 | LAB_0046866c
        ;   XREF to: 0046866c (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468666
        ;   Label: LAB_00468666
    INC dword ptr [EBP + -0xc]          ; 00468669
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046866c
        ;   Label: LAB_0046866c
    CMP EAX,dword ptr [0x01626408]      ; 0046866f | int g_VertexCount
    JGE 0x00468687                      ; 00468675 | LAB_00468687
        ;   XREF to: 00468687 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 00468677
    MOV dword ptr [EAX + 0x1626410],0x0 ; 0046867b | DAT_01626410
    JMP 0x00468666                      ; 00468685 | LAB_00468666
        ;   XREF to: 00468666 (UNCONDITIONAL_JUMP)
    JMP 0x004686d7                      ; 00468687 | LAB_004686d7
        ;   Label: LAB_00468687
        ;   XREF to: 004686d7 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0xc],0x0      ; 00468689
        ;   Label: LAB_00468689
    JMP 0x00468698                      ; 00468690 | LAB_00468698
        ;   XREF to: 00468698 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468692
        ;   Label: LAB_00468692
    INC dword ptr [EBP + -0xc]          ; 00468695
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468698
        ;   Label: LAB_00468698
    CMP EAX,dword ptr [0x01626408]      ; 0046869b | int g_VertexCount
    JGE 0x004686b3                      ; 004686a1 | LAB_004686b3
        ;   XREF to: 004686b3 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 004686a3
    MOV dword ptr [EAX + 0x1626414],0x0 ; 004686a7 | g_LoadedVertices[0].vertex.z
    JMP 0x00468692                      ; 004686b1 | LAB_00468692
        ;   XREF to: 00468692 (UNCONDITIONAL_JUMP)
    JMP 0x004686d7                      ; 004686b3 | LAB_004686d7
        ;   Label: LAB_004686b3
        ;   XREF to: 004686d7 (UNCONDITIONAL_JUMP)
    JMP 0x004686d7                      ; 004686b5 | LAB_004686d7
        ;   Label: LAB_004686b5
        ;   XREF to: 004686d7 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x4],0x59     ; 004686b7
        ;   Label: LAB_004686b7
    JC 0x004686cb                       ; 004686bb | LAB_004686cb
        ;   XREF to: 004686cb (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x4],0x59     ; 004686bd
    JBE 0x0046865d                      ; 004686c1 | LAB_0046865d
        ;   XREF to: 0046865d (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x4],0x5a     ; 004686c3
    JZ 0x00468689                       ; 004686c7 | LAB_00468689
        ;   XREF to: 00468689 (CONDITIONAL_JUMP)
    JMP 0x004686b5                      ; 004686c9 | LAB_004686b5
        ;   XREF to: 004686b5 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x4],0x58     ; 004686cb
        ;   Label: LAB_004686cb
    JZ 0x0046862e                       ; 004686cf | LAB_0046862e
        ;   XREF to: 0046862e (CONDITIONAL_JUMP)
    JMP 0x004686b5                      ; 004686d5 | LAB_004686b5
        ;   XREF to: 004686b5 (UNCONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 004686d7
        ;   Label: LAB_004686d7
    POP EBP                             ; 004686d9
    POP EDI                             ; 004686da
    POP ESI                             ; 004686db
    POP EBX                             ; 004686dc
    RET                                 ; 004686dd


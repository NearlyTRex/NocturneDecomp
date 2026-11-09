; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_00580890(int x_coord,int y_coord)
;
; Parameters:
; int              Stack[0x4]:4   x_coord
; int              Stack[0x8]:4   y_coord
;
; Referenced Globals:
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00580890
        ;   Label: wincore_winrun.cpp_plotClippedPixel_FUN_00580890
    MOV EAX,dword ptr [ESP + 0x8]       ; 00580894
    CMP EDX,dword ptr [0x01c6b5a8]      ; 00580898 | DAT_01c6b5a8
    JLE 0x005808b8                      ; 0058089e
        ;   XREF to: 005808b8 (CONDITIONAL_JUMP)  ; LAB_005808b8
    CMP EAX,dword ptr [0x01c6b5ac]      ; 005808a0 | DAT_01c6b5ac
    JLE 0x005808b8                      ; 005808a6
        ;   XREF to: 005808b8 (CONDITIONAL_JUMP)  ; LAB_005808b8
    CMP EDX,dword ptr [0x01c6b5b0]      ; 005808a8 | DAT_01c6b5b0
    JGE 0x005808b8                      ; 005808ae
        ;   XREF to: 005808b8 (CONDITIONAL_JUMP)  ; LAB_005808b8
    CMP EAX,dword ptr [0x01c6b5b4]      ; 005808b0 | DAT_01c6b5b4
    JL 0x005808b9                       ; 005808b6
        ;   XREF to: 005808b9 (CONDITIONAL_JUMP)  ; LAB_005808b9
    RET                                 ; 005808b8
        ;   Label: LAB_005808b8
    PUSH EAX                            ; 005808b9
        ;   Label: LAB_005808b9
    PUSH EDX                            ; 005808ba
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 005808bb
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 005808c0
    RET                                 ; 005808c3


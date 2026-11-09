; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_0058ebd0(int x_coord,int y_coord)
;
; Parameters:
; int              Stack[0x4]:4   x_coord
; int              Stack[0x8]:4   y_coord
;
; Referenced Globals:
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0058ebd0
        ;   Label: wincore_winrun.cpp_plotClippedPixel_FUN_0058ebd0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058ebd4
    CMP EDX,dword ptr [0x01c35e48]      ; 0058ebd8 | DAT_01c35e48
    JLE 0x0058ebf8                      ; 0058ebde
        ;   XREF to: 0058ebf8 (CONDITIONAL_JUMP)  ; LAB_0058ebf8
    CMP EAX,dword ptr [0x01c35e4c]      ; 0058ebe0 | DAT_01c35e4c
    JLE 0x0058ebf8                      ; 0058ebe6
        ;   XREF to: 0058ebf8 (CONDITIONAL_JUMP)  ; LAB_0058ebf8
    CMP EDX,dword ptr [0x01c35e50]      ; 0058ebe8 | DAT_01c35e50
    JGE 0x0058ebf8                      ; 0058ebee
        ;   XREF to: 0058ebf8 (CONDITIONAL_JUMP)  ; LAB_0058ebf8
    CMP EAX,dword ptr [0x01c35e54]      ; 0058ebf0 | DAT_01c35e54
    JL 0x0058ebf9                       ; 0058ebf6
        ;   XREF to: 0058ebf9 (CONDITIONAL_JUMP)  ; LAB_0058ebf9
    RET                                 ; 0058ebf8
        ;   Label: LAB_0058ebf8
    PUSH EAX                            ; 0058ebf9
        ;   Label: LAB_0058ebf9
    PUSH EDX                            ; 0058ebfa
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0058ebfb
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0058ec00
    RET                                 ; 0058ec03


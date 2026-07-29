; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_00558c00(int x_coord,int y_coord)
;
; Parameters:
; int              Stack[0x4]:4   x_coord
; int              Stack[0x8]:4   y_coord
;
; Referenced Globals:
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401530
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00558c00
        ;   Label: wincore_winrun.cpp_plotClippedPixel_FUN_00558c00
    MOV EAX,dword ptr [ESP + 0x8]       ; 00558c04
    CMP EDX,dword ptr [0x01c00c58]      ; 00558c08 | DAT_01c00c58
    JLE 0x00558c28                      ; 00558c0e
        ;   XREF to: 00558c28 (CONDITIONAL_JUMP)  ; LAB_00558c28
    CMP EAX,dword ptr [0x01c00c5c]      ; 00558c10 | DAT_01c00c5c
    JLE 0x00558c28                      ; 00558c16
        ;   XREF to: 00558c28 (CONDITIONAL_JUMP)  ; LAB_00558c28
    CMP EDX,dword ptr [0x01c00c60]      ; 00558c18 | DAT_01c00c60
    JGE 0x00558c28                      ; 00558c1e
        ;   XREF to: 00558c28 (CONDITIONAL_JUMP)  ; LAB_00558c28
    CMP EAX,dword ptr [0x01c00c64]      ; 00558c20 | DAT_01c00c64
    JL 0x00558c29                       ; 00558c26
        ;   XREF to: 00558c29 (CONDITIONAL_JUMP)  ; LAB_00558c29
    RET                                 ; 00558c28
        ;   Label: LAB_00558c28
    PUSH EAX                            ; 00558c29
        ;   Label: LAB_00558c29
    PUSH EDX                            ; 00558c2a
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 00558c2b
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401530(int x, int y)
    ADD ESP,0x8                         ; 00558c30
    RET                                 ; 00558c33


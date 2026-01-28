; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char __cdecl cockpit_drawsurf_cpp_computeCohenSutherlandOutcode_FUN_00487de0 (int point_x,int point_y,int clip_left,int clip_top,int clip_right,int clip_bottom)
;
; Parameters:
; int              Stack[0x4]:4   point_x
; int              Stack[0x8]:4   point_y
; int              Stack[0xc]:4   clip_left
; int              Stack[0x10]:4   clip_top
; int              Stack[0x14]:4   clip_right
; int              Stack[0x18]:4   clip_bottom
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487de0
        ;   Label: cockpit_drawsurf.cpp_computeCohenSutherlandOutcode_FUN_00487de0
    MOV ECX,dword ptr [ESP + 0x8]       ; 00487de1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00487de5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00487de9
    XOR EAX,EAX                         ; 00487ded
    CMP EDX,EBX                         ; 00487def
    JLE 0x00487df8                      ; 00487df1
        ;   XREF to: 00487df8 (CONDITIONAL_JUMP)  ; LAB_00487df8
    MOV EAX,0x1                         ; 00487df3
    CMP EDX,dword ptr [ESP + 0x14]      ; 00487df8
        ;   Label: LAB_00487df8
    JGE 0x00487e00                      ; 00487dfc
        ;   XREF to: 00487e00 (CONDITIONAL_JUMP)  ; LAB_00487e00
    OR AL,0x2                           ; 00487dfe
    CMP ECX,dword ptr [ESP + 0x18]      ; 00487e00
        ;   Label: LAB_00487e00
    JLE 0x00487e08                      ; 00487e04
        ;   XREF to: 00487e08 (CONDITIONAL_JUMP)  ; LAB_00487e08
    OR AL,0x4                           ; 00487e06
    CMP ECX,dword ptr [ESP + 0x10]      ; 00487e08
        ;   Label: LAB_00487e08
    JGE 0x00487e10                      ; 00487e0c
        ;   XREF to: 00487e10 (CONDITIONAL_JUMP)  ; LAB_00487e10
    OR AL,0x8                           ; 00487e0e
    POP EBX                             ; 00487e10
        ;   Label: LAB_00487e10
    RET                                 ; 00487e11


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char __cdecl cockpit_drawsurf_cpp_computeCohenSutherlandOutcode_FUN_00466c60(int point_x,int point_y,int clip_left,int clip_top,int clip_right,int clip_bottom)
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

    PUSH EBX                            ; 00466c60
        ;   Label: cockpit_drawsurf.cpp_computeCohenSutherlandOutcode_FUN_00466c60
    MOV ECX,dword ptr [ESP + 0x8]       ; 00466c61
    MOV EDX,dword ptr [ESP + 0xc]       ; 00466c65
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00466c69
    XOR EAX,EAX                         ; 00466c6d
    CMP EDX,EBX                         ; 00466c6f
    JLE 0x00466c78                      ; 00466c71
        ;   XREF to: 00466c78 (CONDITIONAL_JUMP)  ; LAB_00466c78
    MOV EAX,0x1                         ; 00466c73
    CMP EDX,dword ptr [ESP + 0x14]      ; 00466c78
        ;   Label: LAB_00466c78
    JGE 0x00466c80                      ; 00466c7c
        ;   XREF to: 00466c80 (CONDITIONAL_JUMP)  ; LAB_00466c80
    OR AL,0x2                           ; 00466c7e
    CMP ECX,dword ptr [ESP + 0x18]      ; 00466c80
        ;   Label: LAB_00466c80
    JLE 0x00466c88                      ; 00466c84
        ;   XREF to: 00466c88 (CONDITIONAL_JUMP)  ; LAB_00466c88
    OR AL,0x4                           ; 00466c86
    CMP ECX,dword ptr [ESP + 0x10]      ; 00466c88
        ;   Label: LAB_00466c88
    JGE 0x00466c90                      ; 00466c8c
        ;   XREF to: 00466c90 (CONDITIONAL_JUMP)  ; LAB_00466c90
    OR AL,0x8                           ; 00466c8e
    POP EBX                             ; 00466c90
        ;   Label: LAB_00466c90
    RET                                 ; 00466c91


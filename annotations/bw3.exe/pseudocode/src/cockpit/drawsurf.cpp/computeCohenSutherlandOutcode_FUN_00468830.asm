; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char __cdecl cockpit_drawsurf_cpp_computeCohenSutherlandOutcode_FUN_00468830(int point_x,int point_y,int clip_left,int clip_top,int clip_right,int clip_bottom)
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

    PUSH EBX                            ; 00468830
        ;   Label: cockpit_drawsurf.cpp_computeCohenSutherlandOutcode_FUN_00468830
    MOV ECX,dword ptr [ESP + 0x8]       ; 00468831
    MOV EDX,dword ptr [ESP + 0xc]       ; 00468835
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00468839
    XOR EAX,EAX                         ; 0046883d
    CMP EDX,EBX                         ; 0046883f
    JLE 0x00468848                      ; 00468841
        ;   XREF to: 00468848 (CONDITIONAL_JUMP)  ; LAB_00468848
    MOV EAX,0x1                         ; 00468843
    CMP EDX,dword ptr [ESP + 0x14]      ; 00468848
        ;   Label: LAB_00468848
    JGE 0x00468850                      ; 0046884c
        ;   XREF to: 00468850 (CONDITIONAL_JUMP)  ; LAB_00468850
    OR AL,0x2                           ; 0046884e
    CMP ECX,dword ptr [ESP + 0x18]      ; 00468850
        ;   Label: LAB_00468850
    JLE 0x00468858                      ; 00468854
        ;   XREF to: 00468858 (CONDITIONAL_JUMP)  ; LAB_00468858
    OR AL,0x4                           ; 00468856
    CMP ECX,dword ptr [ESP + 0x10]      ; 00468858
        ;   Label: LAB_00468858
    JGE 0x00468860                      ; 0046885c
        ;   XREF to: 00468860 (CONDITIONAL_JUMP)  ; LAB_00468860
    OR AL,0x8                           ; 0046885e
    POP EBX                             ; 00468860
        ;   Label: LAB_00468860
    RET                                 ; 00468861


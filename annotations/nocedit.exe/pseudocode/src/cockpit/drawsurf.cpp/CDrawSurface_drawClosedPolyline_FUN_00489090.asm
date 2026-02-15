; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawClosedPolyline_FUN_00489090(CDrawSurface *this_ptr,int point_count,CVector2i *points)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   point_count
; CVector2i *      Stack[0xc]:4   points
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489090
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawClosedPolyline_FUN_00489090
    PUSH EDI                            ; 00489091
    PUSH EBP                            ; 00489092
    MOV EDI,dword ptr [ESP + 0x14]      ; 00489093
    MOV EBP,dword ptr [ESP + 0x18]      ; 00489097
    LEA EAX,[EDI + -0x1]                ; 0048909b
    XOR EBX,EBX                         ; 0048909e
    TEST EDI,EDI                        ; 004890a0
    JLE 0x004890d0                      ; 004890a2
        ;   XREF to: 004890d0 (CONDITIONAL_JUMP)  ; LAB_004890d0
    PUSH ESI                            ; 004890a4
    MOV ESI,EBP                         ; 004890a5
    MOV EDX,dword ptr [ESI + 0x4]       ; 004890a7
        ;   Label: LAB_004890a7
    PUSH EDX                            ; 004890aa
    MOV ECX,dword ptr [ESI]             ; 004890ab
    PUSH ECX                            ; 004890ad
    MOV EDX,dword ptr [EBP + EAX*0x8 + 0x4] ; 004890ae
    PUSH EDX                            ; 004890b2
    MOV ECX,dword ptr [EBP + EAX*0x8]   ; 004890b3
    PUSH ECX                            ; 004890b7
    MOV EAX,dword ptr [ESP + 0x24]      ; 004890b8
    PUSH EAX                            ; 004890bc
    ADD ESI,0x8                         ; 004890bd
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990 ; 004890c0
        ;   XREF to: 00487990 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    MOV EAX,EBX                         ; 004890c5
    INC EBX                             ; 004890c7
    ADD ESP,0x14                        ; 004890c8
    CMP EBX,EDI                         ; 004890cb
    JL 0x004890a7                       ; 004890cd
        ;   XREF to: 004890a7 (CONDITIONAL_JUMP)  ; LAB_004890a7
    POP ESI                             ; 004890cf
    POP EBP                             ; 004890d0
        ;   Label: LAB_004890d0
    POP EDI                             ; 004890d1
    POP EBX                             ; 004890d2
    RET                                 ; 004890d3


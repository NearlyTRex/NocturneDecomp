; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_004665c0(CDrawSurface *this_ptr,int center_x,int center_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   center_y
; int              Stack[0x10]:4   radius
;
; XREF[5]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00466710 at 00466728
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00466740 at 00466758
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_004666b0 at 004666c8
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_004666e0 at 004666f8
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 00468c79
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_00466770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004665c0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0
    PUSH ESI                            ; 004665c1
    PUSH EDI                            ; 004665c2
    PUSH EBP                            ; 004665c3
    MOV EBP,dword ptr [ESP + 0x20]      ; 004665c4
    TEST EBP,EBP                        ; 004665c8
    JLE 0x00466624                      ; 004665ca
        ;   XREF to: 00466624 (CONDITIONAL_JUMP)  ; LAB_00466624
    MOV EAX,dword ptr [ESP + 0x14]      ; 004665cc
    MOV EDX,dword ptr [ESP + 0x18]      ; 004665d0
    MOV EAX,dword ptr [EAX + 0x8]       ; 004665d4
    MOV EBX,dword ptr [ESP + 0x14]      ; 004665d7
    ADD EDX,EAX                         ; 004665db
    MOV EAX,dword ptr [ESP + 0x14]      ; 004665dd
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004665e1
    MOV ESI,dword ptr [EBX + 0x10]      ; 004665e5
    MOV EAX,dword ptr [EAX + 0xc]       ; 004665e8
    MOV dword ptr [ESP + 0x18],EDX      ; 004665eb
    ADD ECX,EAX                         ; 004665ef
    LEA EAX,[EDX + EBP*0x1]             ; 004665f1
    MOV dword ptr [ESP + 0x1c],ECX      ; 004665f4
    CMP EAX,ESI                         ; 004665f8
    JGE 0x00466606                      ; 004665fa
        ;   XREF to: 00466606 (CONDITIONAL_JUMP)  ; LAB_00466606
    MOV EDI,dword ptr [EBX + 0x14]      ; 004665fc
    LEA EAX,[ECX + EBP*0x1]             ; 004665ff
    CMP EAX,EDI                         ; 00466602
    JL 0x00466624                       ; 00466604
        ;   XREF to: 00466624 (CONDITIONAL_JUMP)  ; LAB_00466624
    MOV EBX,dword ptr [ESP + 0x14]      ; 00466606
        ;   Label: LAB_00466606
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046660a
    MOV EDX,dword ptr [EBX + 0x18]      ; 0046660e
    SUB EAX,EBP                         ; 00466611
    CMP EAX,EDX                         ; 00466613
    JLE 0x00466629                      ; 00466615
        ;   XREF to: 00466629 (CONDITIONAL_JUMP)  ; LAB_00466629
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00466617
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0046661b
    SUB EAX,EBP                         ; 0046661e
    CMP EAX,ECX                         ; 00466620
    JLE 0x00466629                      ; 00466622
        ;   XREF to: 00466629 (CONDITIONAL_JUMP)  ; LAB_00466629
    POP EBP                             ; 00466624
        ;   Label: LAB_00466624
    POP EDI                             ; 00466625
    POP ESI                             ; 00466626
    POP EBX                             ; 00466627
    RET                                 ; 00466628
    MOV EAX,dword ptr [ESP + 0x14]      ; 00466629
        ;   Label: LAB_00466629
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046662d
    SUB EBX,dword ptr [EAX + 0x8]       ; 00466631
    MOV EAX,dword ptr [ESP + 0x14]      ; 00466634
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00466638
    SUB ESI,dword ptr [EAX + 0xc]       ; 0046663c
    PUSH EBP                            ; 0046663f
    MOV dword ptr [ESP + 0x20],ESI      ; 00466640
    XOR ESI,ESI                         ; 00466644
    PUSH ESI                            ; 00466646
    MOV EAX,dword ptr [ESP + 0x24]      ; 00466647
    MOV dword ptr [ESP + 0x20],EBX      ; 0046664b
    PUSH EAX                            ; 0046664f
    MOV EDX,dword ptr [ESP + 0x24]      ; 00466650
    PUSH EDX                            ; 00466654
    MOV ECX,dword ptr [ESP + 0x24]      ; 00466655
    MOV EDI,0x1                         ; 00466659
    PUSH ECX                            ; 0046665e
    SUB EDI,EBP                         ; 0046665f
    MOV EBX,EBP                         ; 00466661
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_00466770 ; 00466663
        ;   XREF to: 00466770 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_00466770(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 00466668
    TEST EBP,EBP                        ; 0046666b
    JLE 0x00466624                      ; 0046666d
        ;   XREF to: 00466624 (CONDITIONAL_JUMP)  ; LAB_00466624
    MOV EBP,0x1                         ; 0046666f
    INC ESI                             ; 00466674
        ;   Label: LAB_00466674
    ADD EBP,0x2                         ; 00466675
    TEST EDI,EDI                        ; 00466678
    JL 0x004666a5                       ; 0046667a
        ;   XREF to: 004666a5 (CONDITIONAL_JUMP)  ; LAB_004666a5
    MOV EAX,ESI                         ; 0046667c
    DEC EBX                             ; 0046667e
    SUB EAX,EBX                         ; 0046667f
    ADD EAX,EAX                         ; 00466681
    INC EAX                             ; 00466683
    ADD EDI,EAX                         ; 00466684
    PUSH EBX                            ; 00466686
        ;   Label: LAB_00466686
    PUSH ESI                            ; 00466687
    MOV EAX,dword ptr [ESP + 0x24]      ; 00466688
    PUSH EAX                            ; 0046668c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0046668d
    PUSH EDX                            ; 00466691
    MOV ECX,dword ptr [ESP + 0x24]      ; 00466692
    PUSH ECX                            ; 00466696
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_00466770 ; 00466697
        ;   XREF to: 00466770 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_00466770(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0046669c
    CMP ESI,EBX                         ; 0046669f
    JGE 0x00466624                      ; 004666a1
        ;   XREF to: 00466624 (CONDITIONAL_JUMP)  ; LAB_00466624
    JMP 0x00466674                      ; 004666a3
        ;   XREF to: 00466674 (UNCONDITIONAL_JUMP)  ; LAB_00466674
    ADD EDI,EBP                         ; 004666a5
        ;   Label: LAB_004666a5
    JMP 0x00466686                      ; 004666a7
        ;   XREF to: 00466686 (UNCONDITIONAL_JUMP)  ; LAB_00466686


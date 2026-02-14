; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730(CDrawSurface *this_ptr,int center_x,int center_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   center_y
; int              Stack[0x10]:4   radius
;
; XREF[5]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880 at 00487898
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0 at 004878c8
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820 at 00487838
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850 at 00487868
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 00489e29
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487730
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
    PUSH ESI                            ; 00487731
    PUSH EDI                            ; 00487732
    PUSH EBP                            ; 00487733
    MOV EBP,dword ptr [ESP + 0x20]      ; 00487734
    TEST EBP,EBP                        ; 00487738
    JLE 0x00487794                      ; 0048773a
        ;   XREF to: 00487794 (CONDITIONAL_JUMP)  ; LAB_00487794
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048773c
    MOV EDX,dword ptr [ESP + 0x18]      ; 00487740
    MOV EAX,dword ptr [EAX + 0x8]       ; 00487744
    MOV EBX,dword ptr [ESP + 0x14]      ; 00487747
    ADD EDX,EAX                         ; 0048774b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048774d
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00487751
    MOV ESI,dword ptr [EBX + 0x10]      ; 00487755
    MOV EAX,dword ptr [EAX + 0xc]       ; 00487758
    MOV dword ptr [ESP + 0x18],EDX      ; 0048775b
    ADD ECX,EAX                         ; 0048775f
    LEA EAX,[EDX + EBP*0x1]             ; 00487761
    MOV dword ptr [ESP + 0x1c],ECX      ; 00487764
    CMP EAX,ESI                         ; 00487768
    JGE 0x00487776                      ; 0048776a
        ;   XREF to: 00487776 (CONDITIONAL_JUMP)  ; LAB_00487776
    MOV EDI,dword ptr [EBX + 0x14]      ; 0048776c
    LEA EAX,[ECX + EBP*0x1]             ; 0048776f
    CMP EAX,EDI                         ; 00487772
    JL 0x00487794                       ; 00487774
        ;   XREF to: 00487794 (CONDITIONAL_JUMP)  ; LAB_00487794
    MOV EBX,dword ptr [ESP + 0x14]      ; 00487776
        ;   Label: LAB_00487776
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048777a
    MOV EDX,dword ptr [EBX + 0x18]      ; 0048777e
    SUB EAX,EBP                         ; 00487781
    CMP EAX,EDX                         ; 00487783
    JLE 0x00487799                      ; 00487785
        ;   XREF to: 00487799 (CONDITIONAL_JUMP)  ; LAB_00487799
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00487787
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0048778b
    SUB EAX,EBP                         ; 0048778e
    CMP EAX,ECX                         ; 00487790
    JLE 0x00487799                      ; 00487792
        ;   XREF to: 00487799 (CONDITIONAL_JUMP)  ; LAB_00487799
    POP EBP                             ; 00487794
        ;   Label: LAB_00487794
    POP EDI                             ; 00487795
    POP ESI                             ; 00487796
    POP EBX                             ; 00487797
    RET                                 ; 00487798
    MOV EAX,dword ptr [ESP + 0x14]      ; 00487799
        ;   Label: LAB_00487799
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048779d
    SUB EBX,dword ptr [EAX + 0x8]       ; 004877a1
    MOV EAX,dword ptr [ESP + 0x14]      ; 004877a4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004877a8
    SUB ESI,dword ptr [EAX + 0xc]       ; 004877ac
    PUSH EBP                            ; 004877af
    MOV dword ptr [ESP + 0x20],ESI      ; 004877b0
    XOR ESI,ESI                         ; 004877b4
    PUSH ESI                            ; 004877b6
    MOV EAX,dword ptr [ESP + 0x24]      ; 004877b7
    MOV dword ptr [ESP + 0x20],EBX      ; 004877bb
    PUSH EAX                            ; 004877bf
    MOV EDX,dword ptr [ESP + 0x24]      ; 004877c0
    PUSH EDX                            ; 004877c4
    MOV ECX,dword ptr [ESP + 0x24]      ; 004877c5
    MOV EDI,0x1                         ; 004877c9
    PUSH ECX                            ; 004877ce
    SUB EDI,EBP                         ; 004877cf
    MOV EBX,EBP                         ; 004877d1
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0 ; 004877d3
        ;   XREF to: 004878e0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 004877d8
    TEST EBP,EBP                        ; 004877db
    JLE 0x00487794                      ; 004877dd
        ;   XREF to: 00487794 (CONDITIONAL_JUMP)  ; LAB_00487794
    MOV EBP,0x1                         ; 004877df
    INC ESI                             ; 004877e4
        ;   Label: LAB_004877e4
    ADD EBP,0x2                         ; 004877e5
    TEST EDI,EDI                        ; 004877e8
    JL 0x00487815                       ; 004877ea
        ;   XREF to: 00487815 (CONDITIONAL_JUMP)  ; LAB_00487815
    MOV EAX,ESI                         ; 004877ec
    DEC EBX                             ; 004877ee
    SUB EAX,EBX                         ; 004877ef
    ADD EAX,EAX                         ; 004877f1
    INC EAX                             ; 004877f3
    ADD EDI,EAX                         ; 004877f4
    PUSH EBX                            ; 004877f6
        ;   Label: LAB_004877f6
    PUSH ESI                            ; 004877f7
    MOV EAX,dword ptr [ESP + 0x24]      ; 004877f8
    PUSH EAX                            ; 004877fc
    MOV EDX,dword ptr [ESP + 0x24]      ; 004877fd
    PUSH EDX                            ; 00487801
    MOV ECX,dword ptr [ESP + 0x24]      ; 00487802
    PUSH ECX                            ; 00487806
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0 ; 00487807
        ;   XREF to: 004878e0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0048780c
    CMP ESI,EBX                         ; 0048780f
    JGE 0x00487794                      ; 00487811
        ;   XREF to: 00487794 (CONDITIONAL_JUMP)  ; LAB_00487794
    JMP 0x004877e4                      ; 00487813
        ;   XREF to: 004877e4 (UNCONDITIONAL_JUMP)  ; LAB_004877e4
    ADD EDI,EBP                         ; 00487815
        ;   Label: LAB_00487815
    JMP 0x004877f6                      ; 00487817
        ;   XREF to: 004877f6 (UNCONDITIONAL_JUMP)  ; LAB_004877f6


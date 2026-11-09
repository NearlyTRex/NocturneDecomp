; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0047ead0(CDrawSurface *this_ptr,int center_x,int center_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   center_y
; int              Stack[0x10]:4   radius
;
; XREF[5]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0047ec20 at 0047ec38
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0047ec50 at 0047ec68
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_0047ebc0 at 0047ebd8
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_0047ebf0 at 0047ec08
;   cockpit_drawsurf.cpp_FUN_00481090 at 00481189
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0047ec80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ead0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0
    PUSH ESI                            ; 0047ead1
    PUSH EDI                            ; 0047ead2
    PUSH EBP                            ; 0047ead3
    MOV EBP,dword ptr [ESP + 0x20]      ; 0047ead4
    TEST EBP,EBP                        ; 0047ead8
    JLE 0x0047eb34                      ; 0047eada
        ;   XREF to: 0047eb34 (CONDITIONAL_JUMP)  ; LAB_0047eb34
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047eadc
    MOV EDX,dword ptr [ESP + 0x18]      ; 0047eae0
    MOV EAX,dword ptr [EAX + 0x8]       ; 0047eae4
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047eae7
    ADD EDX,EAX                         ; 0047eaeb
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047eaed
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0047eaf1
    MOV ESI,dword ptr [EBX + 0x10]      ; 0047eaf5
    MOV EAX,dword ptr [EAX + 0xc]       ; 0047eaf8
    MOV dword ptr [ESP + 0x18],EDX      ; 0047eafb
    ADD ECX,EAX                         ; 0047eaff
    LEA EAX,[EDX + EBP*0x1]             ; 0047eb01
    MOV dword ptr [ESP + 0x1c],ECX      ; 0047eb04
    CMP EAX,ESI                         ; 0047eb08
    JGE 0x0047eb16                      ; 0047eb0a
        ;   XREF to: 0047eb16 (CONDITIONAL_JUMP)  ; LAB_0047eb16
    MOV EDI,dword ptr [EBX + 0x14]      ; 0047eb0c
    LEA EAX,[ECX + EBP*0x1]             ; 0047eb0f
    CMP EAX,EDI                         ; 0047eb12
    JL 0x0047eb34                       ; 0047eb14
        ;   XREF to: 0047eb34 (CONDITIONAL_JUMP)  ; LAB_0047eb34
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047eb16
        ;   Label: LAB_0047eb16
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047eb1a
    MOV EDX,dword ptr [EBX + 0x18]      ; 0047eb1e
    SUB EAX,EBP                         ; 0047eb21
    CMP EAX,EDX                         ; 0047eb23
    JLE 0x0047eb39                      ; 0047eb25
        ;   XREF to: 0047eb39 (CONDITIONAL_JUMP)  ; LAB_0047eb39
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047eb27
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0047eb2b
    SUB EAX,EBP                         ; 0047eb2e
    CMP EAX,ECX                         ; 0047eb30
    JLE 0x0047eb39                      ; 0047eb32
        ;   XREF to: 0047eb39 (CONDITIONAL_JUMP)  ; LAB_0047eb39
    POP EBP                             ; 0047eb34
        ;   Label: LAB_0047eb34
    POP EDI                             ; 0047eb35
    POP ESI                             ; 0047eb36
    POP EBX                             ; 0047eb37
    RET                                 ; 0047eb38
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047eb39
        ;   Label: LAB_0047eb39
    MOV EBX,dword ptr [ESP + 0x18]      ; 0047eb3d
    SUB EBX,dword ptr [EAX + 0x8]       ; 0047eb41
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047eb44
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0047eb48
    SUB ESI,dword ptr [EAX + 0xc]       ; 0047eb4c
    PUSH EBP                            ; 0047eb4f
    MOV dword ptr [ESP + 0x20],ESI      ; 0047eb50
    XOR ESI,ESI                         ; 0047eb54
    PUSH ESI                            ; 0047eb56
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047eb57
    MOV dword ptr [ESP + 0x20],EBX      ; 0047eb5b
    PUSH EAX                            ; 0047eb5f
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047eb60
    PUSH EDX                            ; 0047eb64
    MOV ECX,dword ptr [ESP + 0x24]      ; 0047eb65
    MOV EDI,0x1                         ; 0047eb69
    PUSH ECX                            ; 0047eb6e
    SUB EDI,EBP                         ; 0047eb6f
    MOV EBX,EBP                         ; 0047eb71
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0047ec80 ; 0047eb73
        ;   XREF to: 0047ec80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0047ec80(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0047eb78
    TEST EBP,EBP                        ; 0047eb7b
    JLE 0x0047eb34                      ; 0047eb7d
        ;   XREF to: 0047eb34 (CONDITIONAL_JUMP)  ; LAB_0047eb34
    MOV EBP,0x1                         ; 0047eb7f
    INC ESI                             ; 0047eb84
        ;   Label: LAB_0047eb84
    ADD EBP,0x2                         ; 0047eb85
    TEST EDI,EDI                        ; 0047eb88
    JL 0x0047ebb5                       ; 0047eb8a
        ;   XREF to: 0047ebb5 (CONDITIONAL_JUMP)  ; LAB_0047ebb5
    MOV EAX,ESI                         ; 0047eb8c
    DEC EBX                             ; 0047eb8e
    SUB EAX,EBX                         ; 0047eb8f
    ADD EAX,EAX                         ; 0047eb91
    INC EAX                             ; 0047eb93
    ADD EDI,EAX                         ; 0047eb94
    PUSH EBX                            ; 0047eb96
        ;   Label: LAB_0047eb96
    PUSH ESI                            ; 0047eb97
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047eb98
    PUSH EAX                            ; 0047eb9c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047eb9d
    PUSH EDX                            ; 0047eba1
    MOV ECX,dword ptr [ESP + 0x24]      ; 0047eba2
    PUSH ECX                            ; 0047eba6
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0047ec80 ; 0047eba7
        ;   XREF to: 0047ec80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0047ec80(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0047ebac
    CMP ESI,EBX                         ; 0047ebaf
    JGE 0x0047eb34                      ; 0047ebb1
        ;   XREF to: 0047eb34 (CONDITIONAL_JUMP)  ; LAB_0047eb34
    JMP 0x0047eb84                      ; 0047ebb3
        ;   XREF to: 0047eb84 (UNCONDITIONAL_JUMP)  ; LAB_0047eb84
    ADD EDI,EBP                         ; 0047ebb5
        ;   Label: LAB_0047ebb5
    JMP 0x0047eb96                      ; 0047ebb7
        ;   XREF to: 0047eb96 (UNCONDITIONAL_JUMP)  ; LAB_0047eb96


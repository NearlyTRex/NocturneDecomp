; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50 at 0045bdf3
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045bf00
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00
    PUSH ESI                            ; 0045bf01
    PUSH EDI                            ; 0045bf02
    PUSH EBP                            ; 0045bf03
    MOV EBX,dword ptr [ESP + 0x14]      ; 0045bf04
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0045bf08
    MOV EDX,dword ptr [ESP + 0x24]      ; 0045bf0c
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045bf10
    ADD EDI,EDX                         ; 0045bf14
    MOV ECX,dword ptr [ESP + 0x20]      ; 0045bf16
    PUSH EDI                            ; 0045bf1a
    ADD ESI,ECX                         ; 0045bf1b
    PUSH ESI                            ; 0045bf1d
    PUSH EBX                            ; 0045bf1e
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045bf1f
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045bf24
    MOV EBP,dword ptr [ESP + 0x18]      ; 0045bf27
    PUSH EDI                            ; 0045bf2b
    SUB EBP,dword ptr [ESP + 0x24]      ; 0045bf2c
    PUSH EBP                            ; 0045bf30
    PUSH EBX                            ; 0045bf31
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045bf32
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045bf37
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0045bf3a
    SUB EDI,dword ptr [ESP + 0x24]      ; 0045bf3e
    PUSH EDI                            ; 0045bf42
    PUSH ESI                            ; 0045bf43
    PUSH EBX                            ; 0045bf44
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045bf45
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045bf4a
    PUSH EDI                            ; 0045bf4d
    PUSH EBP                            ; 0045bf4e
    PUSH EBX                            ; 0045bf4f
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045bf50
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045bf55
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045bf58
    MOV EDX,dword ptr [ESP + 0x20]      ; 0045bf5c
    MOV EDI,dword ptr [ESP + 0x18]      ; 0045bf60
    ADD ESI,EDX                         ; 0045bf64
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045bf66
    PUSH ESI                            ; 0045bf6a
    ADD EDI,ECX                         ; 0045bf6b
    PUSH EDI                            ; 0045bf6d
    PUSH EBX                            ; 0045bf6e
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045bf6f
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045bf74
    MOV EBP,dword ptr [ESP + 0x24]      ; 0045bf77
    PUSH ESI                            ; 0045bf7b
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045bf7c
    SUB ESI,EBP                         ; 0045bf80
    PUSH ESI                            ; 0045bf82
    PUSH EBX                            ; 0045bf83
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045bf84
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045bf89
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0045bf8c
    SUB EBP,dword ptr [ESP + 0x20]      ; 0045bf90
    PUSH EBP                            ; 0045bf94
    PUSH EDI                            ; 0045bf95
    PUSH EBX                            ; 0045bf96
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045bf97
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045bf9c
    PUSH EBP                            ; 0045bf9f
    PUSH ESI                            ; 0045bfa0
    PUSH EBX                            ; 0045bfa1
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045bfa2
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045bfa7
    POP EBP                             ; 0045bfaa
    POP EDI                             ; 0045bfab
    POP ESI                             ; 0045bfac
    POP EBX                             ; 0045bfad
    RET                                 ; 0045bfae


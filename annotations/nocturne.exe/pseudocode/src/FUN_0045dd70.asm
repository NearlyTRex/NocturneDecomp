; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045dd70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_0045dda0 at 0045ddb6
;   FUN_0045ddd0 at 0045de2a
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dd70
        ;   Label: FUN_0045dd70
    PUSH ESI                            ; 0045dd71
    PUSH 0x4                            ; 0045dd72
    PUSH 0x0                            ; 0045dd74
    MOV EDX,dword ptr [ESP + 0x20]      ; 0045dd76
    PUSH EDX                            ; 0045dd7a
    PUSH 0x0                            ; 0045dd7b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045dd7d
    PUSH ECX                            ; 0045dd81
    MOV EBX,dword ptr [ESP + 0x24]      ; 0045dd82
    PUSH EBX                            ; 0045dd86
    MOV ESI,dword ptr [ESP + 0x24]      ; 0045dd87
    PUSH ESI                            ; 0045dd8b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 ; 0045dd8c
        ;   XREF to: 0045d760 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760()
    ADD ESP,0x1c                        ; 0045dd91
    POP ESI                             ; 0045dd94
    POP EBX                             ; 0045dd95
    RET                                 ; 0045dd96


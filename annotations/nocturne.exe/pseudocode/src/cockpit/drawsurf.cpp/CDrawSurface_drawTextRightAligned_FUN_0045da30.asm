; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_004fe9d0 at 004feb13
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045da30
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30
    PUSH ESI                            ; 0045da31
    PUSH 0x0                            ; 0045da32
    PUSH 0x0                            ; 0045da34
    MOV EDX,dword ptr [ESP + 0x20]      ; 0045da36
    PUSH EDX                            ; 0045da3a
    PUSH 0x0                            ; 0045da3b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045da3d
    PUSH ECX                            ; 0045da41
    MOV EBX,dword ptr [ESP + 0x24]      ; 0045da42
    PUSH EBX                            ; 0045da46
    MOV ESI,dword ptr [ESP + 0x24]      ; 0045da47
    PUSH ESI                            ; 0045da4b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 ; 0045da4c
        ;   XREF to: 0045d760 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760()
    ADD ESP,0x1c                        ; 0045da51
    POP ESI                             ; 0045da54
    POP EBX                             ; 0045da55
    RET                                 ; 0045da56


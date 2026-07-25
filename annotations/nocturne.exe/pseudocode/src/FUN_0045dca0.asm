; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045dca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_0045dcd0 at 0045dce6
;   FUN_0045dd00 at 0045dd5a
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dca0
        ;   Label: FUN_0045dca0
    PUSH ESI                            ; 0045dca1
    PUSH 0x3                            ; 0045dca2
    PUSH 0x0                            ; 0045dca4
    MOV EDX,dword ptr [ESP + 0x20]      ; 0045dca6
    PUSH EDX                            ; 0045dcaa
    PUSH 0x0                            ; 0045dcab
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045dcad
    PUSH ECX                            ; 0045dcb1
    MOV EBX,dword ptr [ESP + 0x24]      ; 0045dcb2
    PUSH EBX                            ; 0045dcb6
    MOV ESI,dword ptr [ESP + 0x24]      ; 0045dcb7
    PUSH ESI                            ; 0045dcbb
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 ; 0045dcbc
        ;   XREF to: 0045d760 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760()
    ADD ESP,0x1c                        ; 0045dcc1
    POP ESI                             ; 0045dcc4
    POP EBX                             ; 0045dcc5
    RET                                 ; 0045dcc6


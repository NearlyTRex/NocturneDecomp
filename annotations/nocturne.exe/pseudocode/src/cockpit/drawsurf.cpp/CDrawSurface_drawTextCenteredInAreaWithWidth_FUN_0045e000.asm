; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260 at 0045e277
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070 at 0045e0db
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e000
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000
    PUSH ESI                            ; 0045e001
    PUSH EDI                            ; 0045e002
    PUSH EBP                            ; 0045e003
    PUSH 0x7                            ; 0045e004
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0045e006
    PUSH EDX                            ; 0045e00a
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0045e00b
    PUSH ECX                            ; 0045e00f
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0045e010
    PUSH EBX                            ; 0045e014
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0045e015
    PUSH ESI                            ; 0045e019
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0045e01a
    PUSH EDI                            ; 0045e01e
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0045e01f
    PUSH EBP                            ; 0045e023
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 ; 0045e024
        ;   XREF to: 0045d760 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760()
    ADD ESP,0x1c                        ; 0045e029
    POP EBP                             ; 0045e02c
    POP EDI                             ; 0045e02d
    POP ESI                             ; 0045e02e
    POP EBX                             ; 0045e02f
    RET                                 ; 0045e030


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045db00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_0045db30 at 0045db46
;   FUN_0045db60 at 0045dbba
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045db00
        ;   Label: FUN_0045db00
    PUSH ESI                            ; 0045db01
    PUSH 0x1                            ; 0045db02
    PUSH 0x0                            ; 0045db04
    MOV EDX,dword ptr [ESP + 0x20]      ; 0045db06
    PUSH EDX                            ; 0045db0a
    PUSH 0x0                            ; 0045db0b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045db0d
    PUSH ECX                            ; 0045db11
    MOV EBX,dword ptr [ESP + 0x24]      ; 0045db12
    PUSH EBX                            ; 0045db16
    MOV ESI,dword ptr [ESP + 0x24]      ; 0045db17
    PUSH ESI                            ; 0045db1b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 ; 0045db1c
        ;   XREF to: 0045d760 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760()
    ADD ESP,0x1c                        ; 0045db21
    POP ESI                             ; 0045db24
    POP EBX                             ; 0045db25
    RET                                 ; 0045db26


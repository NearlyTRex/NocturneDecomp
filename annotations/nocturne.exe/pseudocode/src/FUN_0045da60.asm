; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045da60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0045e370 at 0045e4fb
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045da60
        ;   Label: FUN_0045da60
    PUSH ESI                            ; 0045da61
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045da62
    PUSH EDX                            ; 0045da66
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045da67
    PUSH ECX                            ; 0045da6b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0045da6c
    PUSH EBX                            ; 0045da70
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045da71
    PUSH ESI                            ; 0045da75
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30 ; 0045da76
        ;   XREF to: 0045da30 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30()
    ADD ESP,0x10                        ; 0045da7b
    POP ESI                             ; 0045da7e
    POP EBX                             ; 0045da7f
    RET                                 ; 0045da80


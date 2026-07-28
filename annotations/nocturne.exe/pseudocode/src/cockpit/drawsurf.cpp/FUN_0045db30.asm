; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045db30(CDrawSurface *param_1,int param_2,int param_3,char *param_4)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_0045db00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045db30
        ;   Label: cockpit_drawsurf.cpp_FUN_0045db30
    PUSH ESI                            ; 0045db31
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045db32
    PUSH EDX                            ; 0045db36
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045db37
    PUSH ECX                            ; 0045db3b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0045db3c
    PUSH EBX                            ; 0045db40
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045db41
    PUSH ESI                            ; 0045db45
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_0045db00 ; 0045db46
        ;   XREF to: 0045db00 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_0045db00(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0045db4b
    POP ESI                             ; 0045db4e
    POP EBX                             ; 0045db4f
    RET                                 ; 0045db50


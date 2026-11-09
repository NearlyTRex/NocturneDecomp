; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0046a250(CDrawSurface *param_1,int param_2,int param_3,int param_4,char *param_5)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_0046a750 at 0046a938
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0046a220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a250
        ;   Label: cockpit_drawsurf.cpp_FUN_0046a250
    PUSH ESI                            ; 0046a251
    PUSH EDI                            ; 0046a252
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0046a253
    PUSH EDX                            ; 0046a257
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0046a258
    PUSH ECX                            ; 0046a25c
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0046a25d
    PUSH EBX                            ; 0046a261
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0046a262
    PUSH ESI                            ; 0046a266
    MOV EDI,dword ptr [ESP + 0x20]      ; 0046a267
    PUSH EDI                            ; 0046a26b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0046a220 ; 0046a26c
        ;   XREF to: 0046a220 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0046a220(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x14                        ; 0046a271
    POP EDI                             ; 0046a274
    POP ESI                             ; 0046a275
    POP EBX                             ; 0046a276
    RET                                 ; 0046a277


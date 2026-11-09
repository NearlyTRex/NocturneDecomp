; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00468270(CDrawSurface *param_1,int param_2,int param_3,char *param_4)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00468b80 at 00468d0b
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00468240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468270
        ;   Label: cockpit_drawsurf.cpp_FUN_00468270
    PUSH ESI                            ; 00468271
    MOV EDX,dword ptr [ESP + 0x14]      ; 00468272
    PUSH EDX                            ; 00468276
    MOV ECX,dword ptr [ESP + 0x14]      ; 00468277
    PUSH ECX                            ; 0046827b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0046827c
    PUSH EBX                            ; 00468280
    MOV ESI,dword ptr [ESP + 0x18]      ; 00468281
    PUSH ESI                            ; 00468285
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00468240 ; 00468286
        ;   XREF to: 00468240 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00468240(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0046828b
    POP ESI                             ; 0046828e
    POP EBX                             ; 0046828f
    RET                                 ; 00468290


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00468680(CDrawSurface *param_1,int param_2,int param_3,int param_4,char *param_5)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00468b80 at 00468d68
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468680
        ;   Label: cockpit_drawsurf.cpp_FUN_00468680
    PUSH ESI                            ; 00468681
    PUSH EDI                            ; 00468682
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00468683
    PUSH EDX                            ; 00468687
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00468688
    PUSH ECX                            ; 0046868c
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0046868d
    PUSH EBX                            ; 00468691
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00468692
    PUSH ESI                            ; 00468696
    MOV EDI,dword ptr [ESP + 0x20]      ; 00468697
    PUSH EDI                            ; 0046869b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650 ; 0046869c
        ;   XREF to: 00468650 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x14                        ; 004686a1
    POP EDI                             ; 004686a4
    POP ESI                             ; 004686a5
    POP EBX                             ; 004686a6
    RET                                 ; 004686a7


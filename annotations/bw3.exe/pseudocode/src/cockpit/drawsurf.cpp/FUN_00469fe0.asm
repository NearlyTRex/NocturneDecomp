; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00469fe0(CDrawSurface *param_1,int param_2,int param_3,char *param_4)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_0046a750 at 0046a920
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00469fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469fe0
        ;   Label: cockpit_drawsurf.cpp_FUN_00469fe0
    PUSH ESI                            ; 00469fe1
    MOV EDX,dword ptr [ESP + 0x14]      ; 00469fe2
    PUSH EDX                            ; 00469fe6
    MOV ECX,dword ptr [ESP + 0x14]      ; 00469fe7
    PUSH ECX                            ; 00469feb
    MOV EBX,dword ptr [ESP + 0x20]      ; 00469fec
    PUSH EBX                            ; 00469ff0
    MOV ESI,dword ptr [ESP + 0x18]      ; 00469ff1
    PUSH ESI                            ; 00469ff5
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00469fb0 ; 00469ff6
        ;   XREF to: 00469fb0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00469fb0(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 00469ffb
    POP ESI                             ; 00469ffe
    POP EBX                             ; 00469fff
    RET                                 ; 0046a000


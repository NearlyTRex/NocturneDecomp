; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00480fa0(CDrawSurface *this_ptr,char *format)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00481090 at 0048167c
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00480f80
;   crt_stdio.c_vsprintf_FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480fa0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00480fa0
    SUB ESP,0x1004                      ; 00480fa1
    LEA EAX,[ESP + 0x1014]              ; 00480fa7
    MOV dword ptr [ESP + 0x1000],EAX    ; 00480fae
    LEA EAX,[ESP + 0x1000]              ; 00480fb5
    PUSH EAX                            ; 00480fbc
    MOV EDX,dword ptr [ESP + 0x1014]    ; 00480fbd
    PUSH EDX                            ; 00480fc4
    LEA EAX,[ESP + 0x8]                 ; 00480fc5
    PUSH EAX                            ; 00480fc9
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 00480fca
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 00480fcf
    MOV EAX,ESP                         ; 00480fd2
    PUSH EAX                            ; 00480fd4
    MOV EBX,dword ptr [ESP + 0x1010]    ; 00480fd5
    XOR ECX,ECX                         ; 00480fdc
    PUSH EBX                            ; 00480fde
    MOV dword ptr [ESP + 0x1008],ECX    ; 00480fdf
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00480f80 ; 00480fe6
        ;   XREF to: 00480f80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00480f80(CDrawSurface * this_ptr, char * text)
    ADD ESP,0x8                         ; 00480feb
    ADD ESP,0x1004                      ; 00480fee
    POP EBX                             ; 00480ff4
    RET                                 ; 00480ff5


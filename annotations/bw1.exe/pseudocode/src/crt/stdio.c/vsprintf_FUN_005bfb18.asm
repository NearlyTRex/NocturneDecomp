; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c_vsprintf_FUN_005bfb18(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[27]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00480fa0 at 00480fca
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00480d90 at 00480dbd
;   cockpit_drawsurf.cpp_FUN_004807b0 at 004807dc
;   cockpit_drawsurf.cpp_FUN_00480880 at 004808ac
;   cockpit_drawsurf.cpp_FUN_00480950 at 0048097c
;   cockpit_drawsurf.cpp_FUN_00480a20 at 00480a4c
;   cockpit_drawsurf.cpp_FUN_00480af0 at 00480b1c
;   cockpit_drawsurf.cpp_FUN_00480bc0 at 00480bed
;   cockpit_drawsurf.cpp_FUN_00480ca0 at 00480ccd
;   core_event.cpp_formatEventError_FUN_004a1210 at 004a1227
;   ... and 17 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c3320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bfb18
        ;   Label: crt_stdio.c_vsprintf_FUN_005bfb18
    PUSH 0x5bfb00                       ; 005bfb19
    MOV EDX,dword ptr [ESP + 0x14]      ; 005bfb1e
    PUSH EDX                            ; 005bfb22
    MOV EBX,dword ptr [ESP + 0x14]      ; 005bfb23
    PUSH EBX                            ; 005bfb27
    MOV ECX,dword ptr [ESP + 0x14]      ; 005bfb28
    PUSH ECX                            ; 005bfb2c
    CALL crt_unknown.c_FUN_005c3320     ; 005bfb2d
        ;   XREF to: 005c3320 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3320()
    ADD ESP,0x10                        ; 005bfb32
    MOV EDX,dword ptr [ESP + 0x8]       ; 005bfb35
    MOV byte ptr [EDX + EAX*0x1],0x0    ; 005bfb39
    POP EBX                             ; 005bfb3d
    RET                                 ; 005bfb3e


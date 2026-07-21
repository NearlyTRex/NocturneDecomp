; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260
;   crt_stdio.c_vsprintf_FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e280
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280
    SUB ESP,0x1004                      ; 0045e281
    LEA EAX,[ESP + 0x1014]              ; 0045e287
    MOV dword ptr [ESP + 0x1000],EAX    ; 0045e28e
    LEA EAX,[ESP + 0x1000]              ; 0045e295
    PUSH EAX                            ; 0045e29c
    MOV EDX,dword ptr [ESP + 0x1014]    ; 0045e29d
    PUSH EDX                            ; 0045e2a4
    LEA EAX,[ESP + 0x8]                 ; 0045e2a5
    PUSH EAX                            ; 0045e2a9
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0045e2aa
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_00563a08()
    ADD ESP,0xc                         ; 0045e2af
    MOV EAX,ESP                         ; 0045e2b2
    PUSH EAX                            ; 0045e2b4
    MOV EBX,dword ptr [ESP + 0x1010]    ; 0045e2b5
    XOR ECX,ECX                         ; 0045e2bc
    PUSH EBX                            ; 0045e2be
    MOV dword ptr [ESP + 0x1008],ECX    ; 0045e2bf
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260 ; 0045e2c6
        ;   XREF to: 0045e260 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260()
    ADD ESP,0x8                         ; 0045e2cb
    ADD ESP,0x1004                      ; 0045e2ce
    POP EBX                             ; 0045e2d4
    RET                                 ; 0045e2d5


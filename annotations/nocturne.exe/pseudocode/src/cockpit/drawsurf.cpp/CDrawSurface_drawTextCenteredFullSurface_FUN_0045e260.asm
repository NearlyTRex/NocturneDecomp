; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260(int *param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_004fe9d0 at 004febbd
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280 at 0045e2c6
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0045e260
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045e264
    DEC EAX                             ; 0045e267
    PUSH EAX                            ; 0045e268
    MOV EAX,dword ptr [EDX]             ; 0045e269
    PUSH 0x0                            ; 0045e26b
    DEC EAX                             ; 0045e26d
    PUSH EAX                            ; 0045e26e
    PUSH 0x0                            ; 0045e26f
    MOV ECX,dword ptr [ESP + 0x18]      ; 0045e271
    PUSH ECX                            ; 0045e275
    PUSH EDX                            ; 0045e276
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000 ; 0045e277
        ;   XREF to: 0045e000 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000()
    ADD ESP,0x18                        ; 0045e27c
    RET                                 ; 0045e27f


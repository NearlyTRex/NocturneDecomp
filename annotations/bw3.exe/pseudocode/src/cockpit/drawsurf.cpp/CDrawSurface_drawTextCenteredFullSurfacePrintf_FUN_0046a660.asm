; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0046a660(CDrawSurface *this_ptr,char *format)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0046a750 at 0046ad3c
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0046a640
;   crt_stdio.c_vsprintf_FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a660
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0046a660
    SUB ESP,0x1004                      ; 0046a661
    LEA EAX,[ESP + 0x1014]              ; 0046a667
    MOV dword ptr [ESP + 0x1000],EAX    ; 0046a66e
    LEA EAX,[ESP + 0x1000]              ; 0046a675
    PUSH EAX                            ; 0046a67c
    MOV EDX,dword ptr [ESP + 0x1014]    ; 0046a67d
    PUSH EDX                            ; 0046a684
    LEA EAX,[ESP + 0x8]                 ; 0046a685
    PUSH EAX                            ; 0046a689
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 0046a68a
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005a2898()
    ADD ESP,0xc                         ; 0046a68f
    MOV EAX,ESP                         ; 0046a692
    PUSH EAX                            ; 0046a694
    MOV EBX,dword ptr [ESP + 0x1010]    ; 0046a695
    XOR ECX,ECX                         ; 0046a69c
    PUSH EBX                            ; 0046a69e
    MOV dword ptr [ESP + 0x1008],ECX    ; 0046a69f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0046a640 ; 0046a6a6
        ;   XREF to: 0046a640 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0046a640(CDrawSurface * this_ptr, char * text)
    ADD ESP,0x8                         ; 0046a6ab
    ADD ESP,0x1004                      ; 0046a6ae
    POP EBX                             ; 0046a6b4
    RET                                 ; 0046a6b5


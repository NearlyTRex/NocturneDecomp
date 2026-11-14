; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00468900(CDrawSurface *this_ptr,char *param_2,int param_3)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00468940 at 00468991
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthWrapper_FUN_00468920 at 00468930
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468900
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00468900
    MOV EDX,dword ptr [ESP + 0x8]       ; 00468901
    MOV ECX,dword ptr [ESP + 0x10]      ; 00468905
    MOV EAX,dword ptr [EDX]             ; 00468909
    PUSH ECX                            ; 0046890b
    DEC EAX                             ; 0046890c
    PUSH EAX                            ; 0046890d
    PUSH 0x0                            ; 0046890e
    MOV EBX,dword ptr [ESP + 0x18]      ; 00468910
    PUSH EBX                            ; 00468914
    PUSH EDX                            ; 00468915
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650 ; 00468916
        ;   XREF to: 00468650 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x14                        ; 0046891b
    POP EBX                             ; 0046891e
    RET                                 ; 0046891f


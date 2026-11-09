; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00468a70(CDrawSurface *this_ptr,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00468a90 at 00468ad6
;   core_script.cpp_FUN_00521af0 at 00521cdd
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00468810
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00468a70
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00468a70
    MOV EAX,dword ptr [EDX + 0x4]       ; 00468a74
    DEC EAX                             ; 00468a77
    PUSH EAX                            ; 00468a78
    MOV EAX,dword ptr [EDX]             ; 00468a79
    PUSH 0x0                            ; 00468a7b
    DEC EAX                             ; 00468a7d
    PUSH EAX                            ; 00468a7e
    PUSH 0x0                            ; 00468a7f
    MOV ECX,dword ptr [ESP + 0x18]      ; 00468a81
    PUSH ECX                            ; 00468a85
    PUSH EDX                            ; 00468a86
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00468810 ; 00468a87
        ;   XREF to: 00468810 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00468810(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x18                        ; 00468a8c
    RET                                 ; 00468a8f


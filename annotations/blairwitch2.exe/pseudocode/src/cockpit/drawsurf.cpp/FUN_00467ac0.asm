; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_FUN_00467ac0(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   cockpit_drawsurf.cpp_FUN_00468b80 at 00468c37
;   core_script.cpp_FUN_00521af0 at 00521b45
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00467920
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00467ac0
        ;   Label: cockpit_drawsurf.cpp_FUN_00467ac0
    MOV EAX,dword ptr [EDX + 0x4]       ; 00467ac4
    DEC EAX                             ; 00467ac7
    PUSH EAX                            ; 00467ac8
    MOV EAX,dword ptr [EDX]             ; 00467ac9
    DEC EAX                             ; 00467acb
    PUSH EAX                            ; 00467acc
    PUSH 0x0                            ; 00467acd
    PUSH 0x0                            ; 00467acf
    PUSH EDX                            ; 00467ad1
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00467920 ; 00467ad2
        ;   XREF to: 00467920 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00467920(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 00467ad7
    RET                                 ; 00467ada


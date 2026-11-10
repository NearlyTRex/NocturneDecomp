; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_FUN_004677e0(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 004694ce
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_00467610
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004677e0
        ;   Label: cockpit_drawsurf.cpp_FUN_004677e0
    MOV EAX,dword ptr [EDX + 0x4]       ; 004677e4
    DEC EAX                             ; 004677e7
    PUSH EAX                            ; 004677e8
    MOV EAX,dword ptr [EDX]             ; 004677e9
    DEC EAX                             ; 004677eb
    PUSH EAX                            ; 004677ec
    PUSH 0x0                            ; 004677ed
    PUSH 0x0                            ; 004677ef
    PUSH EDX                            ; 004677f1
    CALL cockpit_drawsurf.cpp_FUN_00467610 ; 004677f2
        ;   XREF to: 00467610 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467610(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 004677f7
    RET                                 ; 004677fa


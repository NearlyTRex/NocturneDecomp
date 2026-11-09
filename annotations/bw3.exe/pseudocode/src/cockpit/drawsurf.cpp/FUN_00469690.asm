; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_FUN_00469690(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   cockpit_drawsurf.cpp_FUN_0046a750 at 0046a807
;   core_script.cpp_FUN_00529210 at 00529265
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_004694f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00469690
        ;   Label: cockpit_drawsurf.cpp_FUN_00469690
    MOV EAX,dword ptr [EDX + 0x4]       ; 00469694
    DEC EAX                             ; 00469697
    PUSH EAX                            ; 00469698
    MOV EAX,dword ptr [EDX]             ; 00469699
    DEC EAX                             ; 0046969b
    PUSH EAX                            ; 0046969c
    PUSH 0x0                            ; 0046969d
    PUSH 0x0                            ; 0046969f
    PUSH EDX                            ; 004696a1
    CALL cockpit_drawsurf.cpp_FUN_004694f0 ; 004696a2
        ;   XREF to: 004694f0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_004694f0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 004696a7
    RET                                 ; 004696aa


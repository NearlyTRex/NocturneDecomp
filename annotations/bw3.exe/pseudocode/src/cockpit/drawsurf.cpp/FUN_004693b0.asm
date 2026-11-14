; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_FUN_004693b0(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0046a750 at 0046b09e
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_004691e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004693b0
        ;   Label: cockpit_drawsurf.cpp_FUN_004693b0
    MOV EAX,dword ptr [EDX + 0x4]       ; 004693b4
    DEC EAX                             ; 004693b7
    PUSH EAX                            ; 004693b8
    MOV EAX,dword ptr [EDX]             ; 004693b9
    DEC EAX                             ; 004693bb
    PUSH EAX                            ; 004693bc
    PUSH 0x0                            ; 004693bd
    PUSH 0x0                            ; 004693bf
    PUSH EDX                            ; 004693c1
    CALL cockpit_drawsurf.cpp_FUN_004691e0 ; 004693c2
        ;   XREF to: 004691e0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_004691e0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 004693c7
    RET                                 ; 004693ca


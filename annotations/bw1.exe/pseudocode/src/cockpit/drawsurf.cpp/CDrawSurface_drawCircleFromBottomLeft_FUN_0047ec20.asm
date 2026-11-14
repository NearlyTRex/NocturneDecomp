; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0047ec20(CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bottom_left_x
; int              Stack[0xc]:4   bottom_left_y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090 at 004811d8
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 0047ec20
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0047ec20
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047ec24
    PUSH EDX                            ; 0047ec28
    SUB EAX,EDX                         ; 0047ec29
    PUSH EAX                            ; 0047ec2b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047ec2c
    ADD EAX,EDX                         ; 0047ec30
    PUSH EAX                            ; 0047ec32
    MOV EDX,dword ptr [ESP + 0x10]      ; 0047ec33
    PUSH EDX                            ; 0047ec37
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0 ; 0047ec38
        ;   XREF to: 0047ead0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0047ec3d
    RET                                 ; 0047ec40


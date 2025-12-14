; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangle_FUN_004886c0 at 00488720
;   cockpit_drawsurf.cpp_CDrawSurface_drawFullSurface_FUN_004886a0 at 004886b2
;   cockpit_drawsurf.cpp_CDrawSurface_drawInsetRectangle_FUN_00488740 at 0048878c
;
; Referenced Globals:
;   int g_DashLength = 0x1
;   float g_DashAnimationThreshold = 0.1000000
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488630
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
    PUSH ESI                            ; 00488631
    PUSH EDI                            ; 00488632
    PUSH EBP                            ; 00488633
    SUB ESP,0x8                         ; 00488634
    FILD dword ptr [0x006703dc]         ; 00488637 | g_DashLength
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0048863d
    MOV EDX,0x1                         ; 00488641
    PUSH EBX                            ; 00488646
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00488647
    MOV EDI,dword ptr [ESP + 0x28]      ; 0048864b
    PUSH ESI                            ; 0048864f
    MOV EBP,dword ptr [ESP + 0x28]      ; 00488650
    MOV EAX,[0x006703e0]                ; 00488654 | g_DashAnimationThreshold
    PUSH EDI                            ; 00488659
    FSTP float ptr [ESP + 0xc]          ; 0048865a
    MOV dword ptr [ESP + 0x10],EAX      ; 0048865e
    PUSH EBP                            ; 00488662
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00488663
    XOR ECX,ECX                         ; 00488667
    PUSH EAX                            ; 00488669
    MOV dword ptr [0x006703dc],EDX      ; 0048866a | g_DashLength
    MOV dword ptr [0x006703e0],ECX      ; 00488670 | g_DashAnimationThreshold
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0 ; 00488676
        ;   XREF to: 004887a0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 0048867b
    FLD float ptr [ESP]                 ; 0048867e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00488681
    CALL crt_math.c_round_FUN_005fe6b0  ; 00488685
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [0x006703dc]        ; 0048868a | g_DashLength
    MOV [0x006703e0],EAX                ; 00488690 | g_DashAnimationThreshold
    ADD ESP,0x8                         ; 00488695
    POP EBP                             ; 00488698
    POP EDI                             ; 00488699
    POP ESI                             ; 0048869a
    POP EBX                             ; 0048869b
    RET                                 ; 0048869c


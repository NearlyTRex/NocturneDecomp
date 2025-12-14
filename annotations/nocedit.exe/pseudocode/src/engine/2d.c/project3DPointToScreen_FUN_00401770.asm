; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_project3DPointToScreen_FUN_00401770(int x_3d, int y_3d, int z_depth)
;
; Parameters:
; int              Stack[0x4]:4   x_3d
; int              Stack[0x8]:4   y_3d
; int              Stack[0xc]:4   z_depth
;
; XREF[2]:
;   engine_2d.c_draw320x200SizeDot_FUN_00402a8e at 00402ad9
;   engine_2d.c_project3DPointClipped_FUN_004017c0 at 004017ea
;
; Referenced Globals:
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;   int g_ViewportRightFixed
;   int g_ViewportBottomFixed
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401770
        ;   Label: engine_2d.c_project3DPointToScreen_FUN_00401770
    PUSH ESI                            ; 00401771
    MOV EAX,dword ptr [ESP + 0xc]       ; 00401772
    MOV ECX,dword ptr [ESP + 0x14]      ; 00401776
    MOV EDX,dword ptr [0x02d02548]      ; 0040177a | g_ViewportCenterXFixed
    MOV EBX,ECX                         ; 00401780
    IMUL EDX                            ; 00401782
    IDIV EBX                            ; 00401784
    MOV ESI,dword ptr [0x02d02550]      ; 00401786 | g_ViewportRightFixed
    MOV EDX,dword ptr [0x02d0254c]      ; 0040178c | g_ViewportCenterYFixed
    MOV EBX,ECX                         ; 00401792
    ADD ESI,EAX                         ; 00401794
    MOV EAX,dword ptr [ESP + 0x10]      ; 00401796
    IMUL EDX                            ; 0040179a
    IDIV EBX                            ; 0040179c
    ADD EAX,dword ptr [0x02d02554]      ; 0040179e | g_ViewportBottomFixed
    SAR EAX,0x10                        ; 004017a4
    PUSH EAX                            ; 004017a7
    SAR ESI,0x10                        ; 004017a8
    PUSH ESI                            ; 004017ab
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004017ac
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004017b1
    POP ESI                             ; 004017b4
    POP EBX                             ; 004017b5
    RET                                 ; 004017b6


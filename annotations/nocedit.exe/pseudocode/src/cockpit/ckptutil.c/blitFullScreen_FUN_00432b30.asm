; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_ckptutil_c_blitFullScreen_FUN_00432b30(void *sprite_data,void *span_data)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   span_data
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;
; Called Functions:
;   cockpit_ckptutil.c_blitDualModeSprite_FUN_004326a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432b30
        ;   Label: cockpit_ckptutil.c_blitFullScreen_FUN_00432b30
    PUSH ESI                            ; 00432b31
    MOV EDX,dword ptr [0x00679398]      ; 00432b32 | g_WindowHeight
    PUSH EDX                            ; 00432b38
    MOV ECX,dword ptr [0x00679394]      ; 00432b39 | g_WindowWidth
    PUSH ECX                            ; 00432b3f
    PUSH 0x0                            ; 00432b40
    PUSH 0x0                            ; 00432b42
    MOV EBX,dword ptr [ESP + 0x20]      ; 00432b44
    PUSH EBX                            ; 00432b48
    MOV ESI,dword ptr [ESP + 0x20]      ; 00432b49
    PUSH ESI                            ; 00432b4d
    CALL cockpit_ckptutil.c_blitDualModeSprite_FUN_004326a0 ; 00432b4e
        ;   XREF to: 004326a0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blitDualModeSprite_FUN_004326a0(void * sprite_data, void * span_data, int dest_x, int dest_y, ...)
    ADD ESP,0x18                        ; 00432b53
    POP ESI                             ; 00432b56
    POP EBX                             ; 00432b57
    RET                                 ; 00432b58


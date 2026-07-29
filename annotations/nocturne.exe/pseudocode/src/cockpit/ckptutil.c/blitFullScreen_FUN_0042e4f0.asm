; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitFullScreen_FUN_0042e4f0(void *sprite_data,void *span_data)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   span_data
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;
; Called Functions:
;   cockpit_ckptutil.c_blitDualModeSprite_FUN_0042e060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e4f0
        ;   Label: cockpit_ckptutil.c_blitFullScreen_FUN_0042e4f0
    PUSH ESI                            ; 0042e4f1
    MOV EDX,dword ptr [0x005b7620]      ; 0042e4f2 | DAT_005b7620
    PUSH EDX                            ; 0042e4f8
    MOV ECX,dword ptr [0x005b761c]      ; 0042e4f9 | DAT_005b761c
    PUSH ECX                            ; 0042e4ff
    PUSH 0x0                            ; 0042e500
    PUSH 0x0                            ; 0042e502
    MOV EBX,dword ptr [ESP + 0x20]      ; 0042e504
    PUSH EBX                            ; 0042e508
    MOV ESI,dword ptr [ESP + 0x20]      ; 0042e509
    PUSH ESI                            ; 0042e50d
    CALL cockpit_ckptutil.c_blitDualModeSprite_FUN_0042e060 ; 0042e50e
        ;   XREF to: 0042e060 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blitDualModeSprite_FUN_0042e060(void * sprite_data, void * span_data, int dest_x, int dest_y, ...)
    ADD ESP,0x18                        ; 0042e513
    POP ESI                             ; 0042e516
    POP EBX                             ; 0042e517
    RET                                 ; 0042e518


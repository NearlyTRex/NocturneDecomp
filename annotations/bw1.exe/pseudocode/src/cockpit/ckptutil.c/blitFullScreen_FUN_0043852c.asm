; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_blitFullScreen_FUN_0043852c(void *param_1,void *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;
; Called Functions:
;   cockpit_ckptutil.c_blitDualModeSprite_FUN_004380a0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0043852c
        ;   Label: cockpit_ckptutil.c_blitFullScreen_FUN_0043852c
    PUSH EBX                            ; 00438530
    PUSH ESI                            ; 00438531
    MOV EDX,dword ptr [0x0061b49c]      ; 00438532 | DAT_0061b49c
    PUSH EDX                            ; 00438538
    MOV ECX,dword ptr [0x0061b498]      ; 00438539 | DAT_0061b498
    PUSH ECX                            ; 0043853f
    PUSH 0x0                            ; 00438540
    PUSH 0x0                            ; 00438542
    MOV EBX,dword ptr [ESP + 0x20]      ; 00438544
    PUSH EBX                            ; 00438548
    MOV ESI,dword ptr [ESP + 0x20]      ; 00438549
    PUSH ESI                            ; 0043854d
    CALL cockpit_ckptutil.c_blitDualModeSprite_FUN_004380a0 ; 0043854e
        ;   XREF to: 004380a0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blitDualModeSprite_FUN_004380a0(void * sprite_data, void * span_data, int dest_x, int dest_y, ...)
    ADD ESP,0x18                        ; 00438553
    POP ESI                             ; 00438556
    POP EBX                             ; 00438557
    RET                                 ; 00438558


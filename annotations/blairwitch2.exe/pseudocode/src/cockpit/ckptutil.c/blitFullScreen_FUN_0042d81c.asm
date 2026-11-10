; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_blitFullScreen_FUN_0042d81c(void *param_1,void *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;
; Called Functions:
;   cockpit_ckptutil.c_blitDualModeSprite_FUN_0042d390
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0042d81c
        ;   Label: cockpit_ckptutil.c_blitFullScreen_FUN_0042d81c
    PUSH EBX                            ; 0042d820
    PUSH ESI                            ; 0042d821
    MOV EDX,dword ptr [0x006141bc]      ; 0042d822 | DAT_006141bc
    PUSH EDX                            ; 0042d828
    MOV ECX,dword ptr [0x006141b8]      ; 0042d829 | DAT_006141b8
    PUSH ECX                            ; 0042d82f
    PUSH 0x0                            ; 0042d830
    PUSH 0x0                            ; 0042d832
    MOV EBX,dword ptr [ESP + 0x20]      ; 0042d834
    PUSH EBX                            ; 0042d838
    MOV ESI,dword ptr [ESP + 0x20]      ; 0042d839
    PUSH ESI                            ; 0042d83d
    CALL cockpit_ckptutil.c_blitDualModeSprite_FUN_0042d390 ; 0042d83e
        ;   XREF to: 0042d390 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blitDualModeSprite_FUN_0042d390(void * sprite_data, void * span_data, int dest_x, int dest_y, ...)
    ADD ESP,0x18                        ; 0042d843
    POP ESI                             ; 0042d846
    POP EBX                             ; 0042d847
    RET                                 ; 0042d848


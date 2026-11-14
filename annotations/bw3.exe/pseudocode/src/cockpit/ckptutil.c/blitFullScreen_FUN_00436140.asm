; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_blitFullScreen_FUN_00436140(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;
; Called Functions:
;   cockpit_ckptutil.c_blitDualModeSprite_FUN_00435cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436140
        ;   Label: cockpit_ckptutil.c_blitFullScreen_FUN_00436140
    PUSH ESI                            ; 00436141
    MOV EDX,dword ptr [0x005fba1c]      ; 00436142 | DAT_005fba1c
    PUSH EDX                            ; 00436148
    MOV ECX,dword ptr [0x005fba18]      ; 00436149 | DAT_005fba18
    PUSH ECX                            ; 0043614f
    PUSH 0x0                            ; 00436150
    PUSH 0x0                            ; 00436152
    MOV EBX,dword ptr [ESP + 0x20]      ; 00436154
    PUSH EBX                            ; 00436158
    MOV ESI,dword ptr [ESP + 0x20]      ; 00436159
    PUSH ESI                            ; 0043615d
    CALL cockpit_ckptutil.c_blitDualModeSprite_FUN_00435cb0 ; 0043615e
        ;   XREF to: 00435cb0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blitDualModeSprite_FUN_00435cb0(void * sprite_data, void * span_data, int dest_x, int dest_y, ...)
    ADD ESP,0x18                        ; 00436163
    POP ESI                             ; 00436166
    POP EBX                             ; 00436167
    RET                                 ; 00436168


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_setRenderAlphaFromBlock_FUN_00406bb0(int param_1)
;
;
; Called Functions:
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00406bb0
        ;   Label: engine_3d.c_setRenderAlphaFromBlock_FUN_00406bb0
    MOV EDX,dword ptr [EAX + 0x4]       ; 00406bb4
    PUSH EDX                            ; 00406bb7
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00406bb8
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 00406bbd
    MOV EAX,dword ptr [ESP + 0x4]       ; 00406bc0
    ADD EAX,0x8                         ; 00406bc4
    RET                                 ; 00406bc7


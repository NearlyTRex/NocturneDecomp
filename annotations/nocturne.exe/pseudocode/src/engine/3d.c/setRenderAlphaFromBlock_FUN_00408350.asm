; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_setRenderAlphaFromBlock_FUN_00408350(int param_1)
;
;
; Called Functions:
;   engine_3d.c_setRenderAlpha_FUN_00408370
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00408350
        ;   Label: engine_3d.c_setRenderAlphaFromBlock_FUN_00408350
    MOV EDX,dword ptr [EAX + 0x4]       ; 00408354
    PUSH EDX                            ; 00408357
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 00408358
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    ADD ESP,0x4                         ; 0040835d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00408360
    ADD EAX,0x8                         ; 00408364
    RET                                 ; 00408367


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_setRenderAlphaFromBlock_FUN_00406bd0(SMRGLHeaderExtended *block)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   block
;
; Called Functions:
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00406bd0
        ;   Label: engine_3d.c_setRenderAlphaFromBlock_FUN_00406bd0
    MOV EDX,dword ptr [EAX + 0x4]       ; 00406bd4
    PUSH EDX                            ; 00406bd7
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 00406bd8
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 00406bdd
    MOV EAX,dword ptr [ESP + 0x4]       ; 00406be0
    ADD EAX,0x8                         ; 00406be4
    RET                                 ; 00406be7


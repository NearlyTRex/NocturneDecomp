; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_setRenderAlpha_FUN_00406d60(SMRGLHeaderExtended * block)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   block
;
; Called Functions:
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00406d60
        ;   Label: engine_3d.c_setRenderAlpha_FUN_00406d60
    MOV EDX,dword ptr [EAX + 0x4]       ; 00406d64
    PUSH EDX                            ; 00406d67
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 00406d68
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 00406d6d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00406d70
    ADD EAX,0x8                         ; 00406d74
    RET                                 ; 00406d77


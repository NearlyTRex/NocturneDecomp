; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_getDefaultTextColor_FUN_004a96e0(void)
;
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70 at 00468004
;   engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_0058e110 at 0058e303
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01cb0242
;   undefined4 DAT_01cb0244
;
; *****************************************************************************

section .text

    CMP dword ptr [0x006141c0],0x10     ; 004a96e0 | DAT_006141c0
        ;   Label: engine_font.cpp_getDefaultTextColor_FUN_004a96e0
    JNZ 0x004a96f2                      ; 004a96e7
        ;   XREF to: 004a96f2 (CONDITIONAL_JUMP)  ; LAB_004a96f2
    XOR EAX,EAX                         ; 004a96e9
    MOV AX,[0x01cb0242]                 ; 004a96eb | DAT_01cb0242
    RET                                 ; 004a96f1
    MOV EAX,[0x01cb0244]                ; 004a96f2 | DAT_01cb0244
        ;   Label: LAB_004a96f2
    RET                                 ; 004a96f7


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *text)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left_x
; int              Stack[0xc]:4   right_x
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   color_mode
; int              Stack[0x18]:4   color_value
; char *           Stack[0x1c]:4   text
;
; XREF[6]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40 at 00469cd4
;   core_game.cpp_CGame_displayActStats_FUN_004bfb50 at 004bfe87
;   core_game.cpp_CGame_finishAct_FUN_004bfee0 at 004c0238
;   core_game.cpp_CGame_renderOverlay_FUN_004b47d0 at 004b4d25
;   core_game.cpp_CGame_rollCredits_FUN_004c02a0 at 004c0725
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004b1040 at 004b109a
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_004b0cb0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0fa0
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0
    PUSH ESI                            ; 004b0fa1
    PUSH EDI                            ; 004b0fa2
    MOV EAX,dword ptr [ESP + 0x28]      ; 004b0fa3
    PUSH EAX                            ; 004b0fa7
    MOV EDX,dword ptr [ESP + 0x28]      ; 004b0fa8
    PUSH EDX                            ; 004b0fac
    MOV ECX,dword ptr [ESP + 0x28]      ; 004b0fad
    PUSH ECX                            ; 004b0fb1
    MOV EBX,dword ptr [ESP + 0x28]      ; 004b0fb2
    PUSH EBX                            ; 004b0fb6
    MOV ESI,dword ptr [ESP + 0x28]      ; 004b0fb7
    PUSH EAX                            ; 004b0fbb
    MOV EDI,dword ptr [ESP + 0x24]      ; 004b0fbc
    MOV EBX,dword ptr [ESP + 0x28]      ; 004b0fc0
    PUSH EDI                            ; 004b0fc4
    ADD EBX,ESI                         ; 004b0fc5
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 004b0fc7
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    LEA EDX,[EBX + 0x1]                 ; 004b0fcc
    SUB EDX,EAX                         ; 004b0fcf
    MOV EAX,EDX                         ; 004b0fd1
    SAR EDX,0x1f                        ; 004b0fd3
    SUB EAX,EDX                         ; 004b0fd6
    SAR EAX,0x1                         ; 004b0fd8
    ADD ESP,0x8                         ; 004b0fda
    PUSH EAX                            ; 004b0fdd
    PUSH EDI                            ; 004b0fde
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_004b0cb0 ; 004b0fdf
        ;   XREF to: 004b0cb0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextWrapper_FUN_004b0cb0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004b0fe4
    POP EDI                             ; 004b0fe7
    POP ESI                             ; 004b0fe8
    POP EBX                             ; 004b0fe9
    RET                                 ; 004b0fea


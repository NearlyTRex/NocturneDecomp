; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0 (CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *text )
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
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 at 00489312
;   core_game.cpp_CGame_displayActStats_FUN_004e3800 at 004e3b37
;   core_game.cpp_CGame_finishAct_FUN_004e3b90 at 004e3c2a
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004daa9a
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e4217
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80 at 004cdfda
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_004cdbf0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdee0
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
    PUSH ESI                            ; 004cdee1
    PUSH EDI                            ; 004cdee2
    MOV EAX,dword ptr [ESP + 0x28]      ; 004cdee3
    PUSH EAX                            ; 004cdee7
    MOV EDX,dword ptr [ESP + 0x28]      ; 004cdee8
    PUSH EDX                            ; 004cdeec
    MOV ECX,dword ptr [ESP + 0x28]      ; 004cdeed
    PUSH ECX                            ; 004cdef1
    MOV EBX,dword ptr [ESP + 0x28]      ; 004cdef2
    PUSH EBX                            ; 004cdef6
    MOV ESI,dword ptr [ESP + 0x28]      ; 004cdef7
    PUSH EAX                            ; 004cdefb
    MOV EDI,dword ptr [ESP + 0x24]      ; 004cdefc
    MOV EBX,dword ptr [ESP + 0x28]      ; 004cdf00
    PUSH EDI                            ; 004cdf04
    ADD EBX,ESI                         ; 004cdf05
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 004cdf07
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    LEA EDX,[EBX + 0x1]                 ; 004cdf0c
    SUB EDX,EAX                         ; 004cdf0f
    MOV EAX,EDX                         ; 004cdf11
    SAR EDX,0x1f                        ; 004cdf13
    SUB EAX,EDX                         ; 004cdf16
    SAR EAX,0x1                         ; 004cdf18
    ADD ESP,0x8                         ; 004cdf1a
    PUSH EAX                            ; 004cdf1d
    PUSH EDI                            ; 004cdf1e
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_004cdbf0 ; 004cdf1f
        ;   XREF to: 004cdbf0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextWrapper_FUN_004cdbf0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004cdf24
    POP EDI                             ; 004cdf27
    POP ESI                             ; 004cdf28
    POP EBX                             ; 004cdf29
    RET                                 ; 004cdf2a


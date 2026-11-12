; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *text)
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
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70 at 00468104
;   core_game.cpp_CGame_finishAct_FUN_004bdfb0 at 004be047
;   core_game.cpp_CGame_rollCredits_FUN_004be430 at 004be6c1
;   core_game.cpp_FUN_004b5190 at 004b5bcf
;   core_game.cpp_FUN_004bdc1e at 004bdf57
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004a9440 at 004a949a
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_004a90b0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a93a0
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
    PUSH ESI                            ; 004a93a1
    PUSH EDI                            ; 004a93a2
    MOV EAX,dword ptr [ESP + 0x28]      ; 004a93a3
    PUSH EAX                            ; 004a93a7
    MOV EDX,dword ptr [ESP + 0x28]      ; 004a93a8
    PUSH EDX                            ; 004a93ac
    MOV ECX,dword ptr [ESP + 0x28]      ; 004a93ad
    PUSH ECX                            ; 004a93b1
    MOV EBX,dword ptr [ESP + 0x28]      ; 004a93b2
    PUSH EBX                            ; 004a93b6
    MOV ESI,dword ptr [ESP + 0x28]      ; 004a93b7
    PUSH EAX                            ; 004a93bb
    MOV EDI,dword ptr [ESP + 0x24]      ; 004a93bc
    MOV EBX,dword ptr [ESP + 0x28]      ; 004a93c0
    PUSH EDI                            ; 004a93c4
    ADD EBX,ESI                         ; 004a93c5
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 004a93c7
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    LEA EDX,[EBX + 0x1]                 ; 004a93cc
    SUB EDX,EAX                         ; 004a93cf
    MOV EAX,EDX                         ; 004a93d1
    SAR EDX,0x1f                        ; 004a93d3
    SUB EAX,EDX                         ; 004a93d6
    SAR EAX,0x1                         ; 004a93d8
    ADD ESP,0x8                         ; 004a93da
    PUSH EAX                            ; 004a93dd
    PUSH EDI                            ; 004a93de
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_004a90b0 ; 004a93df
        ;   XREF to: 004a90b0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextWrapper_FUN_004a90b0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004a93e4
    POP EDI                             ; 004a93e7
    POP ESI                             ; 004a93e8
    POP EBX                             ; 004a93e9
    RET                                 ; 004a93ea


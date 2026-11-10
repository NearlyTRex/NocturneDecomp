; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextWrapper_FUN_004b0cb0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   text
;
; XREF[7]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40 at 00469c0b
;   core_game.cpp_CGame_rollCredits_FUN_004c02a0 at 004c0509
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0 at 004b0fdf
;   engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004b10b0 at 004b10f4
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_004b0ea0 at 004b0ed5
;   engine_font.cpp_CBitFont_drawTextFV_FUN_004b0d30 at 004b0d82
;   engine_font.cpp_CBitFont_drawTextRight_FUN_004b0da0 at 004b0dcf
;
; Called Functions:
;   engine_font.cpp_FUN_004b0a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0cb0
        ;   Label: engine_font.cpp_CBitFont_drawTextWrapper_FUN_004b0cb0
    PUSH ESI                            ; 004b0cb1
    PUSH EDI                            ; 004b0cb2
    PUSH EBP                            ; 004b0cb3
    MOV EDX,dword ptr [ESP + 0x24]      ; 004b0cb4
    PUSH EDX                            ; 004b0cb8
    MOV ECX,dword ptr [ESP + 0x24]      ; 004b0cb9
    PUSH ECX                            ; 004b0cbd
    MOV EBX,dword ptr [ESP + 0x24]      ; 004b0cbe
    PUSH EBX                            ; 004b0cc2
    MOV ESI,dword ptr [ESP + 0x24]      ; 004b0cc3
    PUSH ESI                            ; 004b0cc7
    MOV EDI,dword ptr [ESP + 0x38]      ; 004b0cc8
    PUSH EDI                            ; 004b0ccc
    MOV EBP,dword ptr [ESP + 0x28]      ; 004b0ccd
    PUSH EBP                            ; 004b0cd1
    CALL engine_font.cpp_FUN_004b0a20   ; 004b0cd2
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b0cd7
    POP EBP                             ; 004b0cda
    POP EDI                             ; 004b0cdb
    POP ESI                             ; 004b0cdc
    POP EBX                             ; 004b0cdd
    RET                                 ; 004b0cde


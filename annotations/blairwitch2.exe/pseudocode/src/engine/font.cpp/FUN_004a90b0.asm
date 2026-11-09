; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_FUN_004a90b0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   text
;
; XREF[6]:
;   cockpit_drawsurf.cpp_FUN_00467f70 at 0046803b
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0 at 004a93df
;   engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004a94b0 at 004a94f4
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_004a92a0 at 004a92d5
;   engine_font.cpp_CBitFont_drawTextRight_FUN_004a91a0 at 004a91cf
;   engine_font.cpp_FUN_004a9130 at 004a9182
;
; Called Functions:
;   engine_font.cpp_FUN_004a8df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a90b0
        ;   Label: engine_font.cpp_FUN_004a90b0
    PUSH ESI                            ; 004a90b1
    PUSH EDI                            ; 004a90b2
    PUSH EBP                            ; 004a90b3
    MOV EDX,dword ptr [ESP + 0x24]      ; 004a90b4
    PUSH EDX                            ; 004a90b8
    MOV ECX,dword ptr [ESP + 0x24]      ; 004a90b9
    PUSH ECX                            ; 004a90bd
    MOV EBX,dword ptr [ESP + 0x24]      ; 004a90be
    PUSH EBX                            ; 004a90c2
    MOV ESI,dword ptr [ESP + 0x24]      ; 004a90c3
    PUSH ESI                            ; 004a90c7
    MOV EDI,dword ptr [ESP + 0x38]      ; 004a90c8
    PUSH EDI                            ; 004a90cc
    MOV EBP,dword ptr [ESP + 0x28]      ; 004a90cd
    PUSH EBP                            ; 004a90d1
    CALL engine_font.cpp_FUN_004a8df0   ; 004a90d2
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004a90d7
    POP EBP                             ; 004a90da
    POP EDI                             ; 004a90db
    POP ESI                             ; 004a90dc
    POP EBX                             ; 004a90dd
    RET                                 ; 004a90de


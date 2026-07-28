; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_00490ef0(CBitFont *this_ptr,int y,int color_mode,int color_value,char *text)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   color_mode
; int              Stack[0x10]:4   color_value
; char *           Stack[0x14]:4   text
;
; XREF[1]:
;   engine_font.cpp_CBitFont_printCenterFV_FUN_00490f90 at 00490fda
;
; Referenced Globals:
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c60
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490ef0
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_00490ef0
    PUSH ESI                            ; 00490ef1
    PUSH EDI                            ; 00490ef2
    PUSH EBP                            ; 00490ef3
    MOV EDX,dword ptr [ESP + 0x24]      ; 00490ef4
    PUSH EDX                            ; 00490ef8
    MOV ECX,dword ptr [ESP + 0x24]      ; 00490ef9
    PUSH ECX                            ; 00490efd
    MOV EBX,dword ptr [ESP + 0x24]      ; 00490efe
    PUSH EBX                            ; 00490f02
    MOV ESI,dword ptr [ESP + 0x24]      ; 00490f03
    PUSH ESI                            ; 00490f07
    MOV EBP,dword ptr [ESP + 0x24]      ; 00490f08
    PUSH EDX                            ; 00490f0c
    MOV EDI,dword ptr [0x01c00c60]      ; 00490f0d | DAT_01c00c60
    MOV EBX,dword ptr [0x01c00c58]      ; 00490f13 | DAT_01c00c58
    PUSH EBP                            ; 00490f19
    ADD EBX,EDI                         ; 00490f1a
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 00490f1c
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    LEA EDX,[EBX + 0x1]                 ; 00490f21
    SUB EDX,EAX                         ; 00490f24
    MOV EAX,EDX                         ; 00490f26
    SAR EDX,0x1f                        ; 00490f28
    SUB EAX,EDX                         ; 00490f2b
    SAR EAX,0x1                         ; 00490f2d
    ADD ESP,0x8                         ; 00490f2f
    PUSH EAX                            ; 00490f32
    PUSH EBP                            ; 00490f33
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0 ; 00490f34
        ;   XREF to: 00490af0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 00490f39
    POP EBP                             ; 00490f3c
    POP EDI                             ; 00490f3d
    POP ESI                             ; 00490f3e
    POP EBX                             ; 00490f3f
    RET                                 ; 00490f40


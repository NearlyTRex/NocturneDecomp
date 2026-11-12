; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextRight_FUN_004a91a0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   text
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70 at 00468089
;   engine_font.cpp_FUN_004a9230 at 004a9282
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_004a90b0
;   engine_font.cpp_FUN_004aaf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a91a0
        ;   Label: engine_font.cpp_CBitFont_drawTextRight_FUN_004a91a0
    PUSH ESI                            ; 004a91a1
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a91a2
    PUSH EAX                            ; 004a91a6
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a91a7
    PUSH EDX                            ; 004a91ab
    MOV ECX,dword ptr [ESP + 0x20]      ; 004a91ac
    PUSH ECX                            ; 004a91b0
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a91b1
    PUSH EBX                            ; 004a91b5
    PUSH EAX                            ; 004a91b6
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a91b7
    PUSH ESI                            ; 004a91bb
    CALL engine_font.cpp_FUN_004aaf00   ; 004a91bc
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    ADD ESP,0x8                         ; 004a91c1
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a91c4
    SUB EDX,EAX                         ; 004a91c8
    LEA EAX,[EDX + 0x1]                 ; 004a91ca
    PUSH EAX                            ; 004a91cd
    PUSH ESI                            ; 004a91ce
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_004a90b0 ; 004a91cf
        ;   XREF to: 004a90b0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextWrapper_FUN_004a90b0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004a91d4
    POP ESI                             ; 004a91d7
    POP EBX                             ; 004a91d8
    RET                                 ; 004a91d9


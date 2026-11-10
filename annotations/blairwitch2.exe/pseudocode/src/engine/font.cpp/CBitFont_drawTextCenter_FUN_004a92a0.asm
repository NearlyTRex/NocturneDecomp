; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenter_FUN_004a92a0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   text
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70 at 0046809e
;   engine_font.cpp_CBitFont_drawTextCenterFV_FUN_004a9330 at 004a9382
;   shape_edittool.cpp_FUN_0047be90 at 0047bf37
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_004a90b0
;   engine_font.cpp_FUN_004aaf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a92a0
        ;   Label: engine_font.cpp_CBitFont_drawTextCenter_FUN_004a92a0
    PUSH ESI                            ; 004a92a1
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a92a2
    PUSH EAX                            ; 004a92a6
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a92a7
    PUSH EDX                            ; 004a92ab
    MOV ECX,dword ptr [ESP + 0x20]      ; 004a92ac
    PUSH ECX                            ; 004a92b0
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a92b1
    PUSH EBX                            ; 004a92b5
    PUSH EAX                            ; 004a92b6
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a92b7
    PUSH ESI                            ; 004a92bb
    CALL engine_font.cpp_FUN_004aaf00   ; 004a92bc
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    MOV EDX,EAX                         ; 004a92c1
    SAR EDX,0x1f                        ; 004a92c3
    SUB EAX,EDX                         ; 004a92c6
    SAR EAX,0x1                         ; 004a92c8
    ADD ESP,0x8                         ; 004a92ca
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a92cd
    SUB EDX,EAX                         ; 004a92d1
    PUSH EDX                            ; 004a92d3
    PUSH ESI                            ; 004a92d4
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_004a90b0 ; 004a92d5
        ;   XREF to: 004a90b0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextWrapper_FUN_004a90b0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004a92da
    POP ESI                             ; 004a92dd
    POP EBX                             ; 004a92de
    RET                                 ; 004a92df


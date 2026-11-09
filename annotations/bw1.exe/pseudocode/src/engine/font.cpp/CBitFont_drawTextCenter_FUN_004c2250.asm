; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenter_FUN_004c2250(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)
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
;   cockpit_drawsurf.cpp_FUN_00480480 at 004805ae
;   engine_font.cpp_FUN_004c22e0 at 004c2332
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400 at 004944bb
;
; Called Functions:
;   engine_font.cpp_FUN_004c2060
;   engine_font.cpp_FUN_004c3ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2250
        ;   Label: engine_font.cpp_CBitFont_drawTextCenter_FUN_004c2250
    PUSH ESI                            ; 004c2251
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c2252
    PUSH EAX                            ; 004c2256
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c2257
    PUSH EDX                            ; 004c225b
    MOV ECX,dword ptr [ESP + 0x20]      ; 004c225c
    PUSH ECX                            ; 004c2260
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c2261
    PUSH EBX                            ; 004c2265
    PUSH EAX                            ; 004c2266
    MOV ESI,dword ptr [ESP + 0x20]      ; 004c2267
    PUSH ESI                            ; 004c226b
    CALL engine_font.cpp_FUN_004c3ea0   ; 004c226c
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 004c2271
    SAR EDX,0x1f                        ; 004c2273
    SUB EAX,EDX                         ; 004c2276
    SAR EAX,0x1                         ; 004c2278
    ADD ESP,0x8                         ; 004c227a
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c227d
    SUB EDX,EAX                         ; 004c2281
    PUSH EDX                            ; 004c2283
    PUSH ESI                            ; 004c2284
    CALL engine_font.cpp_FUN_004c2060   ; 004c2285
        ;   XREF to: 004c2060 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c2060(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004c228a
    POP ESI                             ; 004c228d
    POP EBX                             ; 004c228e
    RET                                 ; 004c228f


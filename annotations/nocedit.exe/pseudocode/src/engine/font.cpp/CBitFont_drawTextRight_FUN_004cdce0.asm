; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0(CBitFont * this_ptr, int right_edge_x, int y_pos, int color_mode, int color_value, char * text_string)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   right_edge_x
; int              Stack[0xc]:4   y_pos
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   text_string
;
; XREF[4]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 at 00489239
;   core_mission.cpp_CDemonMission_run_FUN_00524420 at 005245db
;   core_script.cpp_FUN_005645d0 at 00564768
;   engine_font.cpp_CBitFont_printfRight_FUN_004cdd70 at 004cddc2
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdce0
        ;   Label: engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0
    PUSH ESI                            ; 004cdce1
    MOV EAX,dword ptr [ESP + 0x20]      ; 004cdce2
    PUSH EAX                            ; 004cdce6
    MOV EDX,dword ptr [ESP + 0x20]      ; 004cdce7
    PUSH EDX                            ; 004cdceb
    MOV ECX,dword ptr [ESP + 0x20]      ; 004cdcec
    PUSH ECX                            ; 004cdcf0
    MOV EBX,dword ptr [ESP + 0x20]      ; 004cdcf1
    PUSH EBX                            ; 004cdcf5
    PUSH EAX                            ; 004cdcf6
    MOV ESI,dword ptr [ESP + 0x20]      ; 004cdcf7
    PUSH ESI                            ; 004cdcfb
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 004cdcfc
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004cdd01
    MOV EDX,dword ptr [ESP + 0x20]      ; 004cdd04
    SUB EDX,EAX                         ; 004cdd08
    LEA EAX,[EDX + 0x1]                 ; 004cdd0a
    PUSH EAX                            ; 004cdd0d
    PUSH ESI                            ; 004cdd0e
    CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0 ; 004cdd0f
        ;   XREF to: 004cdbf0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    ADD ESP,0x18                        ; 004cdd14
    POP ESI                             ; 004cdd17
    POP EBX                             ; 004cdd18
    RET                                 ; 004cdd19


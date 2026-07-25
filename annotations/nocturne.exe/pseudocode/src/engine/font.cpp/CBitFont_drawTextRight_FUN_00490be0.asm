; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_CBitFont_drawTextRight_FUN_00490be0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[3]:
;   FUN_00490c70 at 00490cc2
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 at 0045d879
;   core_mission.cpp_CDemonMission_run_FUN_004d9440 at 004d95fb
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490be0
        ;   Label: engine_font.cpp_CBitFont_drawTextRight_FUN_00490be0
    PUSH ESI                            ; 00490be1
    MOV EAX,dword ptr [ESP + 0x20]      ; 00490be2
    PUSH EAX                            ; 00490be6
    MOV EDX,dword ptr [ESP + 0x20]      ; 00490be7
    PUSH EDX                            ; 00490beb
    MOV ECX,dword ptr [ESP + 0x20]      ; 00490bec
    PUSH ECX                            ; 00490bf0
    MOV EBX,dword ptr [ESP + 0x20]      ; 00490bf1
    PUSH EBX                            ; 00490bf5
    PUSH EAX                            ; 00490bf6
    MOV ESI,dword ptr [ESP + 0x20]      ; 00490bf7
    PUSH ESI                            ; 00490bfb
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 00490bfc
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 00490c01
    MOV EDX,dword ptr [ESP + 0x20]      ; 00490c04
    SUB EDX,EAX                         ; 00490c08
    LEA EAX,[EDX + 0x1]                 ; 00490c0a
    PUSH EAX                            ; 00490c0d
    PUSH ESI                            ; 00490c0e
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0 ; 00490c0f
        ;   XREF to: 00490af0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0()
    ADD ESP,0x18                        ; 00490c14
    POP ESI                             ; 00490c17
    POP EBX                             ; 00490c18
    RET                                 ; 00490c19


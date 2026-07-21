; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040eab0(int param_1)
;
;
; XREF[3]:
;   core_moon.cpp_CMoon_render_FUN_004dec50 at 004deec2
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 at 0040e750
;   engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040e8c0 at 0040e8e3
;
; Referenced Globals:
;   undefined4 DAT_01c00024
;   undefined4 DAT_01c00028
;   undefined4 DAT_01c00029
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040eab0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040eab0
    PUSH EDI                            ; 0040eab1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040eab2
    MOV ECX,0x400                       ; 0040eab6
    MOV EDI,0x1c00024                   ; 0040eabb
    MOV ESI,dword ptr [ESI + 0x8]       ; 0040eac0
    PUSH EDI                            ; 0040eac3
    MOV EAX,ECX                         ; 0040eac4
    SHR ECX,0x2                         ; 0040eac6
    MOVSD.REP ES:EDI,ESI                ; 0040eac9 | DAT_01c00024 | DAT_01c00028
    MOV CL,AL                           ; 0040eacb
    AND CL,0x3                          ; 0040eacd
    MOVSB.REP ES:EDI,ESI                ; 0040ead0 | DAT_01c00028 | DAT_01c00029
    POP EDI                             ; 0040ead2
    POP EDI                             ; 0040ead3
    POP ESI                             ; 0040ead4
    RET                                 ; 0040ead5


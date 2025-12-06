; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_drawTextCenteredAtColor_FUN_004025f0(char * text, int center_x, int y_pos)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   y_pos
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 at 00489363
;   engine_2d.c_drawTextCenteredAtColorFormatted_FUN_00402650 at 004026a1
;   engine_2d.c_drawTextCenteredAtColorWrapper_FUN_00402630 at 00402640
;
; Called Functions:
;   engine_2d.c_drawTextColor_FUN_00402430
;   engine_2d.c_getStringWidth_FUN_004018a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004025f0
        ;   Label: engine_2d.c_drawTextCenteredAtColor_FUN_004025f0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004025f1
    PUSH EDX                            ; 004025f5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004025f6
    PUSH ECX                            ; 004025fa
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 004025fb | int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)
    LEA EDX,[EAX + -0x1]                ; 00402600
    MOV EAX,EDX                         ; 00402603
    SAR EDX,0x1f                        ; 00402605
    SUB EAX,EDX                         ; 00402608
    SAR EAX,0x1                         ; 0040260a
    ADD ESP,0x4                         ; 0040260c
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040260f
    SUB EDX,EAX                         ; 00402613
    PUSH EDX                            ; 00402615
    MOV EBX,dword ptr [ESP + 0x10]      ; 00402616
    PUSH EBX                            ; 0040261a
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0040261b | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00402620
    POP EBX                             ; 00402623
    RET                                 ; 00402624


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_drawTextCenteredAt_FUN_00402280(char * text, int center_x, int y_pos)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   y_pos
;
; XREF[2]:
;   engine_2d.c_drawTextCenteredAtFormatted_FUN_004022e0 at 00402331
;   engine_2d.c_drawTextCenteredAtWrapper_FUN_004022c0 at 004022d0
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getStringWidth_FUN_004018a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402280
        ;   Label: engine_2d.c_drawTextCenteredAt_FUN_00402280
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402281
    PUSH EDX                            ; 00402285
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402286
    PUSH ECX                            ; 0040228a
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 0040228b | int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)
    LEA EDX,[EAX + -0x1]                ; 00402290
    MOV EAX,EDX                         ; 00402293
    SAR EDX,0x1f                        ; 00402295
    SUB EAX,EDX                         ; 00402298
    SAR EAX,0x1                         ; 0040229a
    ADD ESP,0x4                         ; 0040229c
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040229f
    SUB EDX,EAX                         ; 004022a3
    PUSH EDX                            ; 004022a5
    MOV EBX,dword ptr [ESP + 0x10]      ; 004022a6
    PUSH EBX                            ; 004022aa
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004022ab | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004022b0
    POP EBX                             ; 004022b3
    RET                                 ; 004022b4


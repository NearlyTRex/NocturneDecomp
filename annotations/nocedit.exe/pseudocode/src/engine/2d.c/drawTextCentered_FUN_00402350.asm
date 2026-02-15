; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextCentered_FUN_00402350(char *text,int left_x,int right_x,int y)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   left_x
; int              Stack[0xc]:4   right_x
; int              Stack[0x10]:4   y
;
; XREF[2]:
;   engine_2d.c_drawTextCenteredFormatted_FUN_004023c0 at 0040241a
;   engine_2d.c_drawTextCenteredReordered_FUN_00402390 at 004023a6
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getStringWidth_FUN_004018a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402350
        ;   Label: engine_2d.c_drawTextCentered_FUN_00402350
    PUSH ESI                            ; 00402351
    MOV EDX,dword ptr [ESP + 0x18]      ; 00402352
    MOV EBX,dword ptr [ESP + 0x10]      ; 00402356
    PUSH EDX                            ; 0040235a
    MOV ESI,dword ptr [ESP + 0x10]      ; 0040235b
    MOV ECX,dword ptr [ESP + 0x18]      ; 0040235f
    PUSH ESI                            ; 00402363
    ADD EBX,ECX                         ; 00402364
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 00402366
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
    LEA EDX,[EBX + 0x1]                 ; 0040236b
    SUB EDX,EAX                         ; 0040236e
    INC EDX                             ; 00402370
    MOV EAX,EDX                         ; 00402371
    SAR EDX,0x1f                        ; 00402373
    SUB EAX,EDX                         ; 00402376
    SAR EAX,0x1                         ; 00402378
    ADD ESP,0x4                         ; 0040237a
    PUSH EAX                            ; 0040237d
    PUSH ESI                            ; 0040237e
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0040237f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402384
    POP ESI                             ; 00402387
    POP EBX                             ; 00402388
    RET                                 ; 00402389


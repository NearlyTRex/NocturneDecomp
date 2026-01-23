; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_drawTextCenteredReordered_FUN_00402390(int left_x, int right_x, int y_pos, char * text)
;
; Parameters:
; int              Stack[0x4]:4   left_x
; int              Stack[0x8]:4   right_x
; int              Stack[0xc]:4   y_pos
; char *           Stack[0x10]:4   text
;
; Called Functions:
;   engine_2d.c_drawTextCentered_FUN_00402350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402390
        ;   Label: engine_2d.c_drawTextCenteredReordered_FUN_00402390
    PUSH ESI                            ; 00402391
    MOV EDX,dword ptr [ESP + 0x14]      ; 00402392
    PUSH EDX                            ; 00402396
    MOV ECX,dword ptr [ESP + 0x14]      ; 00402397
    PUSH ECX                            ; 0040239b
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040239c
    PUSH EBX                            ; 004023a0
    MOV ESI,dword ptr [ESP + 0x24]      ; 004023a1
    PUSH ESI                            ; 004023a5
    CALL engine_2d.c_drawTextCentered_FUN_00402350 ; 004023a6
        ;   XREF to: 00402350 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCentered_FUN_00402350(char * text, int left_x, int right_x, int y_pos)
    ADD ESP,0x10                        ; 004023ab
    POP ESI                             ; 004023ae
    POP EBX                             ; 004023af
    RET                                 ; 004023b0


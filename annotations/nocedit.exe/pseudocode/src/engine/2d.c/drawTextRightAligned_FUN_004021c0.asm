; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_2d_c_drawTextRightAligned_FUN_004021c0(char *text,int x_pos,int y_pos)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   y_pos
; int              Stack[0xc]:4   x_pos
;
; XREF[2]:
;   engine_2d.c_drawTextRightAlignedFormatted_FUN_00402210 at 00402261
;   engine_2d.c_drawTextRightAlignedWrapper_FUN_004021f0 at 00402200
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getStringWidth_FUN_004018a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004021c0
        ;   Label: engine_2d.c_drawTextRightAligned_FUN_004021c0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004021c1
    PUSH EDX                            ; 004021c5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004021c6
    PUSH ECX                            ; 004021ca
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 004021cb
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
    ADD ESP,0x4                         ; 004021d0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004021d3
    SUB EDX,EAX                         ; 004021d7
    LEA EAX,[EDX + 0x2]                 ; 004021d9
    PUSH EAX                            ; 004021dc
    MOV EBX,dword ptr [ESP + 0x10]      ; 004021dd
    PUSH EBX                            ; 004021e1
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004021e2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004021e7
    POP EBX                             ; 004021ea
    RET                                 ; 004021eb


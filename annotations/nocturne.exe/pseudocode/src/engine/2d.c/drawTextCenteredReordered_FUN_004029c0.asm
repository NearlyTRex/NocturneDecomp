; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextCenteredReordered_FUN_004029c0(int left_x,int right_x,int y,char *text)
;
; Parameters:
; int              Stack[0x4]:4   left_x
; int              Stack[0x8]:4   right_x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   text
;
; Called Functions:
;   engine_2d.c_drawTextCentered_FUN_00402980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004029c0
        ;   Label: engine_2d.c_drawTextCenteredReordered_FUN_004029c0
    PUSH ESI                            ; 004029c1
    MOV EDX,dword ptr [ESP + 0x14]      ; 004029c2
    PUSH EDX                            ; 004029c6
    MOV ECX,dword ptr [ESP + 0x14]      ; 004029c7
    PUSH ECX                            ; 004029cb
    MOV EBX,dword ptr [ESP + 0x14]      ; 004029cc
    PUSH EBX                            ; 004029d0
    MOV ESI,dword ptr [ESP + 0x24]      ; 004029d1
    PUSH ESI                            ; 004029d5
    CALL engine_2d.c_drawTextCentered_FUN_00402980 ; 004029d6
        ;   XREF to: 00402980 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCentered_FUN_00402980(char * text, int left_x, int right_x, int y)
    ADD ESP,0x10                        ; 004029db
    POP ESI                             ; 004029de
    POP EBX                             ; 004029df
    RET                                 ; 004029e0


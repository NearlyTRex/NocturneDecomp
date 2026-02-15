; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextCenteredAtWrapper_FUN_004022c0(int x,int y,char *text)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; char *           Stack[0xc]:4   text
;
; Called Functions:
;   engine_2d.c_drawTextCenteredAt_FUN_00402280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004022c0
        ;   Label: engine_2d.c_drawTextCenteredAtWrapper_FUN_004022c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004022c1
    PUSH EDX                            ; 004022c5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004022c6
    PUSH ECX                            ; 004022ca
    MOV EBX,dword ptr [ESP + 0x18]      ; 004022cb
    PUSH EBX                            ; 004022cf
    CALL engine_2d.c_drawTextCenteredAt_FUN_00402280 ; 004022d0
        ;   XREF to: 00402280 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCenteredAt_FUN_00402280(char * text, int x, int y)
    ADD ESP,0xc                         ; 004022d5
    POP EBX                             ; 004022d8
    RET                                 ; 004022d9


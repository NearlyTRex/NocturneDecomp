; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_FUN_004028b0(char *text,int x,int y)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
;
; XREF[2]:
;   engine_2d.c_FUN_004028f0 at 00402900
;   engine_2d.c_FUN_00402910 at 00402961
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00402600
;   engine_2d.c_getStringWidth_FUN_00401ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004028b0
        ;   Label: engine_2d.c_FUN_004028b0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004028b1
    PUSH EDX                            ; 004028b5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004028b6
    PUSH ECX                            ; 004028ba
    CALL engine_2d.c_getStringWidth_FUN_00401ed0 ; 004028bb
        ;   XREF to: 00401ed0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_00401ed0(char * text)
    LEA EDX,[EAX + -0x1]                ; 004028c0
    MOV EAX,EDX                         ; 004028c3
    SAR EDX,0x1f                        ; 004028c5
    SUB EAX,EDX                         ; 004028c8
    SAR EAX,0x1                         ; 004028ca
    ADD ESP,0x4                         ; 004028cc
    MOV EDX,dword ptr [ESP + 0x10]      ; 004028cf
    SUB EDX,EAX                         ; 004028d3
    PUSH EDX                            ; 004028d5
    MOV EBX,dword ptr [ESP + 0x10]      ; 004028d6
    PUSH EBX                            ; 004028da
    CALL engine_2d.c_drawText_FUN_00402600 ; 004028db
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004028e0
    POP EBX                             ; 004028e3
    RET                                 ; 004028e4

